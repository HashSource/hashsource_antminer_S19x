_DWORD *__fastcall sub_26B40(const char *a1, int a2, int a3)
{
  FILE *v6; // r0
  FILE *v7; // r7
  char *v8; // r0
  char *v9; // r0
  int PrivateKey; // r10
  int v11; // r0
  _DWORD *v12; // r4
  int v13; // r0
  int v14; // r3
  char *v15; // r0
  int v16; // r0
  const char *v18; // r1
  int error; // r0
  const char *v20; // r0
  int v21; // [sp+8h] [bp-30Ch] BYREF
  char v22[256]; // [sp+Ch] [bp-308h] BYREF
  char s[2]; // [sp+10Ch] [bp-208h] BYREF
  char v24[254]; // [sp+10Eh] [bp-206h] BYREF
  _BYTE v25[256]; // [sp+20Ch] [bp-108h] BYREF

  if ( *a1 == 47 )
    sub_6D4DC(v22);
  else
    sub_6C054(v22, 256, "%s/%s", keysdir[0], a1);
  v6 = (FILE *)fopen64(v22, "r");
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = fgets(s, 256, v6);
  if ( !v8 )
  {
    v18 = "crypto_key: empty file %s";
    goto LABEL_14;
  }
  v9 = strrchr(v8, 46);
  if ( !v9 )
  {
    v18 = "crypto_key: no filestamp %s";
    goto LABEL_14;
  }
  if ( sscanf(v9 + 1, "%u", &v21) != 1 )
  {
    v18 = "crypto_key: invalid filestamp %s";
LABEL_14:
    v12 = 0;
    sub_64E00(3, v18, v22);
    fclose(v7);
    return v12;
  }
  PrivateKey = PEM_read_PrivateKey(v7, 0, 0, a2);
  v11 = fclose(v7);
  if ( !PrivateKey )
  {
    error = ERR_get_error(v11);
    v20 = (const char *)ERR_error_string(error, 0);
    sub_64E00(3, "crypto_key: %s", v20);
    exit(-1);
  }
  v12 = (_DWORD *)sub_63BA4(0, 16, 0, 0);
  v12[1] = PrivateKey;
  *v12 = pkinfo;
  pkinfo = (int)v12;
  v13 = sub_63D08(a1);
  v14 = v21;
  v12[2] = v13;
  v12[3] = v14;
  v15 = strrchr(s, 10);
  if ( v15 )
    *v15 = 0;
  v16 = EVP_PKEY_size(PrivateKey);
  sub_6C054(v25, 256, "%s mod %d", v24, 8 * v16);
  sub_42514(a3, v25);
  return v12;
}
