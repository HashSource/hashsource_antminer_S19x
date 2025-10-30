size_t __fastcall sub_16BB08(const char *a1, int a2, int a3, int *a4)
{
  int v5; // r5
  int v6; // r9
  int v7; // r0
  int v8; // r4
  int v9; // r0
  void *v10; // r5
  int v11; // r2
  int v13; // r0

  v5 = *a4;
  v6 = a4[1];
  v7 = sub_16C988();
  if ( !v7 )
  {
    sub_D0048(44, 118, 65, (int)"crypto/store/loader_file.c", 54);
    return 0;
  }
  v8 = v7;
  if ( v5 )
    sub_16D880();
  sub_16D61C(v8, v6);
  v9 = sub_16D528(v8, "pass phrase");
  v10 = (void *)v9;
  if ( !v9 )
  {
    sub_D0048(44, 118, 65, (int)"crypto/store/loader_file.c", 64);
    goto LABEL_8;
  }
  if ( !sub_16C9DC(v8, v9) )
  {
    v11 = 68;
LABEL_7:
    sub_D0048(44, 118, 40, (int)"crypto/store/loader_file.c", v11);
LABEL_8:
    CRYPTO_free(v10);
    sub_16C990(v8);
    return 0;
  }
  v13 = sub_16D6B0(v8);
  if ( v13 == -2 )
  {
    sub_D0048(44, 118, 109, (int)"crypto/store/loader_file.c", 74);
    goto LABEL_8;
  }
  if ( v13 == -1 )
  {
    v11 = 78;
    goto LABEL_7;
  }
  CRYPTO_free(v10);
  sub_16C990(v8);
  if ( !a1 )
    return 0;
  return j_strlen(a1);
}
