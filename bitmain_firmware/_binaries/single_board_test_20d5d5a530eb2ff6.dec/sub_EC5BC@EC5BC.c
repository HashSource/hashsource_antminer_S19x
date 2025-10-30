int __fastcall sub_EC5BC(char *a1, void **a2, void **a3, void **a4, _DWORD *a5)
{
  char *v8; // r0
  char *v9; // r9
  char *v10; // r0
  char *v11; // r5
  char *v12; // r4
  const char *v14; // r10
  char *v15; // r0
  char *v16; // r11
  char *v17; // r0
  char *v18; // r5
  char *v19; // r0
  char *v20; // r0
  char *v21; // r0
  char *v22; // r0

  *a2 = 0;
  *a3 = 0;
  *a4 = 0;
  v8 = sub_E9E3C(a1);
  v9 = v8;
  if ( !v8 )
    goto LABEL_21;
  v10 = strchr(v8, 58);
  v11 = v10;
  if ( !v10 )
    goto LABEL_6;
  *v10 = 0;
  if ( !strcmp(v9, "http") )
  {
    *a5 = 0;
    v12 = "80";
    if ( v11[1] != 47 )
      goto LABEL_6;
  }
  else
  {
    if ( strcmp(v9, "https") )
      goto LABEL_6;
    *a5 = 1;
    v12 = "443";
    if ( v11[1] != 47 )
      goto LABEL_6;
  }
  if ( v11[2] != 47 )
    goto LABEL_6;
  v14 = v11 + 3;
  v15 = strchr(v11 + 3, 47);
  v16 = v15;
  if ( v15 )
  {
    *a4 = sub_E9E3C(v15);
    *v16 = 0;
    v17 = (char *)*a4;
  }
  else
  {
    v17 = sub_E9E3C("/");
    *a4 = v17;
  }
  if ( !v17 )
  {
LABEL_21:
    sub_D0048(39, 114, 65, (int)"crypto/ocsp/ocsp_lib.c", 204);
    goto LABEL_7;
  }
  if ( v11[3] != 91 )
  {
    v18 = v11 + 3;
    goto LABEL_16;
  }
  v18 = v11 + 4;
  v22 = strchr(v18, 93);
  if ( !v22 )
  {
LABEL_6:
    sub_D0048(39, 114, 121, (int)"crypto/ocsp/ocsp_lib.c", 208);
LABEL_7:
    CRYPTO_free(v9);
    CRYPTO_free(*a4);
    *a4 = 0;
    CRYPTO_free(*a3);
    *a3 = 0;
    CRYPTO_free(*a2);
    *a2 = 0;
    return 0;
  }
  *v22 = 0;
  v14 = v22 + 1;
LABEL_16:
  v19 = strchr(v14, 58);
  if ( v19 )
  {
    *v19 = 0;
    v12 = v19 + 1;
  }
  v20 = sub_E9E3C(v12);
  *a3 = v20;
  if ( !v20 )
    goto LABEL_21;
  v21 = sub_E9E3C(v18);
  *a2 = v21;
  if ( !v21 )
    goto LABEL_21;
  CRYPTO_free(v9);
  return 1;
}
