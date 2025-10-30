int sub_2B78C()
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
  FILE *v9; // r8
  char *v10; // r0
  char *v11; // r0
  char *v12; // r10
  int v13; // r10
  char *v14; // r0
  unsigned int v15; // r12
  int v16; // r1
  int v17; // r0
  const char *v18; // r10
  const char *v19; // r1
  char *v20; // r0
  _DWORD *v21; // r0
  int v22; // r4
  int v23; // r0
  int v24; // r4
  const char *v25; // r0
  int error; // r0
  const char *v28; // r0
  int v29; // [sp+1Ch] [bp-528h] BYREF
  unsigned int v30; // [sp+20h] [bp-524h] BYREF
  unsigned int v31; // [sp+24h] [bp-520h]
  char *s1; // [sp+28h] [bp-51Ch] BYREF
  void *ptr; // [sp+2Ch] [bp-518h] BYREF
  void *v34; // [sp+30h] [bp-514h]
  _BYTE v35[8]; // [sp+34h] [bp-510h] BYREF
  char v36[4]; // [sp+3Ch] [bp-508h] BYREF
  char name[256]; // [sp+13Ch] [bp-408h] BYREF
  char v38[256]; // [sp+23Ch] [bp-308h] BYREF
  char s[2]; // [sp+33Ch] [bp-208h] BYREF
  __int16 v40; // [sp+33Eh] [bp-206h] BYREF
  _BYTE v41[256]; // [sp+43Ch] [bp-108h] BYREF

  if ( (crypto_flags & 1) != 0 )
    return sub_65D40(5, "crypto_setup: spurious crypto command");
  v0 = sub_6D6EC();
  if ( !RAND_status(v0) )
  {
    v1 = (const char *)dword_BA8F0;
    if ( dword_BA8F0 )
    {
      if ( *(_BYTE *)dword_BA8F0 != 47 )
      {
        v1 = v36;
        sub_6D00C(v36, 256, "%s/%s", keysdir, (const char *)dword_BA8F0);
      }
    }
    else
    {
      v1 = v36;
      RAND_file_name();
    }
    if ( !RAND_load_file(v1, -1) )
    {
      sub_65D40(3, "crypto_setup: random seed file %s missing", v1);
      exit(-1);
    }
    sub_6055C(v35);
    RAND_seed(v35, 8);
    RAND_write_file(v1);
  }
  gethostname(name, 0x100u);
  if ( dword_BA8F4 )
    sub_6E4B4(name);
  if ( !dword_BA8F8 )
    dword_BA8F8 = sub_64C8C(name);
  hostval = 0;
  dword_10928C = 0;
  dword_109290 = 0;
  dword_109294 = 0;
  dword_109298 = 0;
  dword_10929C = 0;
  pubkey = 0;
  dword_1092A4 = 0;
  dword_1092A8 = 0;
  dword_1092AC = 0;
  dword_1092B0 = 0;
  dword_1092B4 = 0;
  tai_leap = 0;
  dword_1092BC = 0;
  dword_1092C0 = 0;
  dword_1092C4 = 0;
  dword_1092C8 = 0;
  dword_1092CC = 0;
  sub_6D00C(v36, 256, "ntpkey_host_%s", name);
  v2 = sub_271E8(v36, dword_BA8F8, 0);
  v3 = v2;
  if ( !v2 )
  {
    sub_65D40(3, "crypto_setup: host key file %s not found or corrupt", v36);
    exit(-1);
  }
  if ( EVP_PKEY_base_id(v2[1]) != 6 )
  {
    sub_65D40(3, "crypto_setup: host key is not RSA key type");
    exit(-1);
  }
  v4 = bswap32(v3[3]);
  dword_BA8EC = v3[1];
  dword_10928C = v4;
  dword_BA8E0 = dword_BA8EC;
  v5 = i2d_PublicKey(dword_BA8EC, 0);
  v6 = bswap32(v5);
  v29 = sub_64B04(0, v5, 0, 0);
  dword_1092AC = v29;
  i2d_PublicKey(dword_BA8EC, &v29);
  dword_1092A8 = v6;
  dword_1092A4 = dword_10928C;
  sub_6D00C(v36, 256, "ntpkey_sign_%s", name);
  v7 = sub_271E8(v36, dword_BA8F8, 0);
  if ( v7 )
    dword_BA8E0 = v7[1];
  sub_6D00C(v36, 256, "ntpkey_cert_%s", name);
  if ( v36[0] == 47 )
    sub_6E4B4(v38);
  else
    sub_6D00C(v38, 256, "%s/%s", keysdir, v36);
  v8 = (FILE *)fopen64(v38, "r");
  v9 = v8;
  if ( !v8 )
  {
LABEL_44:
    cinfo = 0;
    sub_65D40(3, "crypto_setup: certificate file %s not found or corrupt", v36);
    exit(-1);
  }
  v10 = fgets(s, 256, v8);
  if ( !v10 )
  {
    sub_65D40(3, "crypto_cert: empty file %s", v38);
    fclose(v9);
    goto LABEL_44;
  }
  v11 = strrchr(v10, 46);
  if ( !v11 )
  {
    sub_65D40(3, "crypto_cert: no filestamp %s", v38);
    fclose(v9);
    goto LABEL_44;
  }
  if ( sscanf(v11 + 1, "%u", &v30) != 1 )
  {
    sub_65D40(3, "crypto_cert: invalid filestamp %s", v38);
    fclose(v9);
    goto LABEL_44;
  }
  if ( !PEM_read(v9, &s1, &ptr) )
  {
    error = ERR_get_error(0);
    v28 = (const char *)ERR_error_string(error, 0);
    sub_65D40(3, "crypto_cert: %s", v28);
    fclose(v9);
    goto LABEL_44;
  }
  fclose(v9);
  free(ptr);
  v12 = s1;
  if ( strcmp(s1, "CERTIFICATE") )
  {
    sub_65D40(5, "crypto_cert: wrong PEM type %s", v12);
    free(s1);
    free(v34);
    goto LABEL_44;
  }
  free(v12);
  v13 = sub_2801C(v34, v31, v30);
  free(v34);
  if ( !v13 )
    goto LABEL_44;
  v14 = strrchr(s, 10);
  v15 = v31;
  if ( v14 )
    *v14 = 0;
  sub_6D00C(v41, 256, "%s 0x%x len %lu", &v40, *(_DWORD *)(v13 + 4), v15);
  sub_432D0(0, v41);
  v16 = *(_DWORD *)(v13 + 20);
  cinfo = v13;
  dword_BA8E8 = v16;
  cert_host = v13;
  v17 = EVP_PKEY_size(dword_BA8E0);
  v18 = *(const char **)(cinfo + 48);
  v19 = *(const char **)(cinfo + 52);
  if ( (*(_DWORD *)(cinfo + 4) & 8) != 0 )
    crypto_flags |= 0x10u;
  dword_BA8E4 = v17;
  if ( strcmp(v18, v19) )
  {
    sub_65D40(3, "crypto_setup: certificate %s is not self-signed", v36);
    exit(-1);
  }
  dword_109294 = sub_64C8C(v18);
  dword_109290 = bswap32(strlen(*(const char **)(cinfo + 48)));
  sys_hostname = dword_109294;
  v20 = strchr((const char *)dword_109294, 64);
  if ( v20 )
  {
    v29 = (int)(v20 + 1);
    sys_groupname = sub_64C8C(v20 + 1);
  }
  else
  {
    v29 = 0;
  }
  if ( dword_BA8FC )
    sub_6E4B4(name);
  sub_6D00C(v36, 256, "ntpkey_iffkey_%s", name);
  iffkey_info = (int)sub_271E8(v36, dword_BA8F8, 0);
  if ( iffkey_info )
    crypto_flags |= 0x20u;
  sub_6D00C(v36, 256, "ntpkey_gqkey_%s", name);
  gqkey_info = (int)sub_271E8(v36, dword_BA8F8, 0);
  if ( gqkey_info )
    crypto_flags |= 0x40u;
  sub_6D00C(v36, 256, "ntpkey_mvkey_%s", name);
  v21 = sub_271E8(v36, dword_BA8F8, 0);
  v22 = crypto_flags;
  mvkey_info = (int)v21;
  if ( v21 )
    v22 = crypto_flags | 0x80;
  v23 = *(_DWORD *)(cinfo + 16);
  v24 = v22 | (v23 << 16) | 1;
  crypto_flags = v24;
  v25 = (const char *)OBJ_nid2ln(v23);
  sub_6D00C(v41, 256, "setup 0x%x host %s %s", v24, name, v25);
  return sub_432D0(0, v41);
}
