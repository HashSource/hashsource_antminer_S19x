int sub_2B408()
{
  int v0; // r0
  const char *v1; // r6
  _DWORD *v2; // r0
  _DWORD *v3; // r10
  unsigned int v4; // r2
  unsigned int v5; // r0
  unsigned int v6; // r10
  _DWORD *v7; // r0
  FILE *v8; // r0
  FILE *v9; // r9
  char *v10; // r0
  char *v11; // r0
  char *v12; // r9
  int v13; // r9
  char *v14; // r0
  unsigned int v15; // r12
  int v16; // r1
  const char *v17; // r8
  char *v18; // r0
  _DWORD *v19; // r0
  int v20; // r4
  int v21; // r0
  int v22; // r4
  const char *v23; // r0
  int error; // r0
  const char *v26; // r0
  int v27; // [sp+1Ch] [bp-528h] BYREF
  unsigned int v28; // [sp+20h] [bp-524h] BYREF
  unsigned int v29; // [sp+24h] [bp-520h]
  char *s1; // [sp+28h] [bp-51Ch] BYREF
  void *ptr; // [sp+2Ch] [bp-518h] BYREF
  void *v32; // [sp+30h] [bp-514h]
  _BYTE v33[8]; // [sp+34h] [bp-510h] BYREF
  char v34[4]; // [sp+3Ch] [bp-508h] BYREF
  char name[256]; // [sp+13Ch] [bp-408h] BYREF
  char v36[256]; // [sp+23Ch] [bp-308h] BYREF
  char s[2]; // [sp+33Ch] [bp-208h] BYREF
  char v38[242]; // [sp+33Eh] [bp-206h] BYREF
  _BYTE v39[256]; // [sp+43Ch] [bp-108h] BYREF

  if ( (crypto_flags & 1) != 0 )
    return sub_64E00(5, "crypto_setup: spurious crypto command");
  v0 = sub_6C714();
  if ( !RAND_status(v0) )
  {
    v1 = (const char *)dword_B98F0;
    if ( dword_B98F0 )
    {
      if ( *(_BYTE *)dword_B98F0 != 47 )
      {
        v1 = v34;
        sub_6C054(v34, 256, "%s/%s", keysdir[0], (const char *)dword_B98F0);
      }
    }
    else
    {
      v1 = v34;
      RAND_file_name();
    }
    if ( !RAND_load_file(v1, -1) )
    {
      sub_64E00(3, "crypto_setup: random seed file %s missing", v1);
      exit(-1);
    }
    sub_5F724(v33);
    RAND_seed(v33, 8);
    RAND_write_file(v1);
  }
  gethostname(name, 0x100u);
  if ( dword_B98F4 )
    sub_6D4DC(name);
  if ( !dword_B98F8 )
    dword_B98F8 = sub_63D08(name);
  hostval = 0;
  dword_10826C = 0;
  dword_108270 = 0;
  dword_108274 = 0;
  dword_108278 = 0;
  dword_10827C = 0;
  pubkey = 0;
  dword_108284 = 0;
  dword_108288 = 0;
  dword_10828C = 0;
  dword_108290 = 0;
  dword_108294 = 0;
  tai_leap = 0;
  dword_10829C = 0;
  dword_1082A0 = 0;
  dword_1082A4 = 0;
  dword_1082A8 = 0;
  dword_1082AC = 0;
  sub_6C054(v34, 256, "ntpkey_host_%s", name);
  v2 = sub_26D98(v34, dword_B98F8, 0);
  v3 = v2;
  if ( !v2 )
  {
    sub_64E00(3, "crypto_setup: host key file %s not found or corrupt", v34);
    exit(-1);
  }
  if ( EVP_PKEY_base_id(v2[1]) != 6 )
  {
    sub_64E00(3, "crypto_setup: host key is not RSA key type");
    exit(-1);
  }
  v4 = bswap32(v3[3]);
  dword_B98EC = v3[1];
  dword_10826C = v4;
  dword_B98E0 = dword_B98EC;
  v5 = i2d_PublicKey(dword_B98EC, 0);
  v6 = bswap32(v5);
  v27 = sub_63BA4(0, v5, 0, 0);
  dword_10828C = v27;
  i2d_PublicKey(dword_B98EC, &v27);
  dword_108288 = v6;
  dword_108284 = dword_10826C;
  sub_6C054(v34, 256, "ntpkey_sign_%s", name);
  v7 = sub_26D98(v34, dword_B98F8, 0);
  if ( v7 )
    dword_B98E0 = v7[1];
  sub_6C054(v34, 256, "ntpkey_cert_%s", name);
  if ( v34[0] == 47 )
    sub_6D4DC(v36);
  else
    sub_6C054(v36, 256, "%s/%s", keysdir[0], v34);
  v8 = (FILE *)fopen64(v36, "r");
  v9 = v8;
  if ( !v8 )
    goto LABEL_45;
  v10 = fgets(s, 256, v8);
  if ( !v10 )
  {
    sub_64E00(3, "crypto_cert: empty file %s", v36);
    goto LABEL_51;
  }
  v11 = strrchr(v10, 46);
  if ( !v11 )
  {
    sub_64E00(3, "crypto_cert: no filestamp %s", v36);
LABEL_51:
    fclose(v9);
    cinfo = 0;
LABEL_46:
    sub_64E00(3, "crypto_setup: certificate file %s not found or corrupt", v34);
    exit(-1);
  }
  if ( sscanf(v11 + 1, "%u", &v28) != 1 )
  {
    sub_64E00(3, "crypto_cert: invalid filestamp %s", v36);
    fclose(v9);
    goto LABEL_45;
  }
  if ( !PEM_read(v9, &s1, &ptr) )
  {
    error = ERR_get_error(0);
    v26 = (const char *)ERR_error_string(error, 0);
    sub_64E00(3, "crypto_cert: %s", v26);
    fclose(v9);
    cinfo = 0;
    goto LABEL_46;
  }
  fclose(v9);
  free(ptr);
  v12 = s1;
  if ( strcmp(s1, "CERTIFICATE") )
  {
    sub_64E00(5, "crypto_cert: wrong PEM type %s", v12);
    free(s1);
    free(v32);
    cinfo = 0;
    goto LABEL_46;
  }
  free(v12);
  v13 = sub_27C64(v32, v29, v28);
  free(v32);
  if ( !v13 )
  {
LABEL_45:
    cinfo = 0;
    goto LABEL_46;
  }
  v14 = strrchr(s, 10);
  v15 = v29;
  if ( v14 )
    *v14 = 0;
  sub_6C054(v39, 256, "%s 0x%x len %lu", v38, *(_DWORD *)(v13 + 4), v15);
  sub_42514(0, v39);
  v16 = *(_DWORD *)(v13 + 20);
  cinfo = v13;
  dword_B98E8 = v16;
  cert_host = v13;
  dword_B98E4 = EVP_PKEY_size(dword_B98E0);
  if ( (*(_DWORD *)(cinfo + 4) & 8) != 0 )
    crypto_flags |= 0x10u;
  v17 = *(const char **)(cinfo + 48);
  if ( strcmp(v17, *(const char **)(cinfo + 52)) )
  {
    sub_64E00(3, "crypto_setup: certificate %s is not self-signed", v34);
    exit(-1);
  }
  dword_108274 = sub_63D08(v17);
  dword_108270 = bswap32(strlen(*(const char **)(cinfo + 48)));
  sys_hostname = dword_108274;
  v18 = strchr((const char *)dword_108274, 64);
  if ( v18 )
  {
    v27 = (int)(v18 + 1);
    sys_groupname = sub_63D08(v18 + 1);
  }
  else
  {
    v27 = 0;
  }
  if ( dword_B98FC )
    sub_6D4DC(name);
  sub_6C054(v34, 256, "ntpkey_iffkey_%s", name);
  iffkey_info = (int)sub_26D98(v34, dword_B98F8, 0);
  if ( iffkey_info )
    crypto_flags |= 0x20u;
  sub_6C054(v34, 256, "ntpkey_gqkey_%s", name);
  gqkey_info = (int)sub_26D98(v34, dword_B98F8, 0);
  if ( gqkey_info )
    crypto_flags |= 0x40u;
  sub_6C054(v34, 256, "ntpkey_mvkey_%s", name);
  v19 = sub_26D98(v34, dword_B98F8, 0);
  v20 = crypto_flags;
  mvkey_info = (int)v19;
  if ( v19 )
    v20 = crypto_flags | 0x80;
  v21 = *(_DWORD *)(cinfo + 16);
  v22 = v20 | (v21 << 16) | 1;
  crypto_flags = v22;
  v23 = (const char *)OBJ_nid2ln(v21);
  sub_6C054(v39, 256, "setup 0x%x host %s %s", v22, name, v23);
  return sub_42514(0, v39);
}
