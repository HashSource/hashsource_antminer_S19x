_DWORD *__fastcall sub_26F70(const char *a1, int a2, int a3)
{
  FILE *v6; // r0
  FILE *v7; // r4
  char *v8; // r0
  char *v9; // r0
  int PrivateKey; // r9
  int v11; // r0
  _DWORD *v12; // r4
  int v13; // r0
  char *v14; // r0
  int v15; // r0
  int error; // r0
  const char *v18; // r0
  int v19; // [sp+10h] [bp-30Ch] BYREF
  char v20[256]; // [sp+14h] [bp-308h] BYREF
  char s[2]; // [sp+114h] [bp-208h] BYREF
  char v22[254]; // [sp+116h] [bp-206h] BYREF
  _BYTE v23[256]; // [sp+214h] [bp-108h] BYREF

  if ( *a1 == 47 )
    sub_6E4B4(v20);
  else
    sub_6D00C(v20, 256, "%s/%s", keysdir, a1);
  v6 = (FILE *)fopen64(v20, "r");
  v7 = v6;
  if ( !v6 )
    return 0;
  v8 = fgets(s, 256, v6);
  if ( !v8 )
  {
    sub_65D40(3, "crypto_key: empty file %s", v20);
    goto LABEL_16;
  }
  v9 = strrchr(v8, 46);
  if ( !v9 )
  {
    sub_65D40(3, "crypto_key: no filestamp %s", v20);
LABEL_16:
    fclose(v7);
    return 0;
  }
  if ( sscanf(v9 + 1, "%u", &v19) == 1 )
  {
    PrivateKey = PEM_read_PrivateKey(v7, 0, 0, a2);
    v11 = fclose(v7);
    if ( !PrivateKey )
    {
      error = ERR_get_error(v11);
      v18 = (const char *)ERR_error_string(error, 0);
      sub_65D40(3, "crypto_key: %s", v18);
      exit(-1);
    }
    v12 = (_DWORD *)sub_64B04(0, 16, 0, 0);
    *v12 = pkinfo;
    v12[1] = PrivateKey;
    pkinfo = (int)v12;
    v13 = sub_64C8C(a1);
    v12[3] = v19;
    v12[2] = v13;
    v14 = strrchr(s, 10);
    if ( v14 )
      *v14 = 0;
    v15 = EVP_PKEY_size(PrivateKey);
    sub_6D00C(v23, 256, "%s mod %d", v22, 8 * v15);
    sub_432D0(a3, v23);
    return v12;
  }
  else
  {
    sub_65D40(3, "crypto_key: invalid filestamp %s", v20);
    fclose(v7);
    return 0;
  }
}
