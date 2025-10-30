int __fastcall sub_1794B0(char ***a1, char **a2, const void *a3, void *a4)
{
  char **v8; // r0
  int v9; // r5

  a1[3] = a2;
  if ( a3 )
  {
    v8 = (char **)CRYPTO_malloc(a4);
    v9 = (int)v8;
    a1[4] = v8;
    if ( !v8 )
    {
      sub_D0048(46, 179, 65, (int)"crypto/cms/cms_enc.c", 172);
      return v9;
    }
    memcpy(v8, a3, (size_t)a4);
  }
  a1[5] = (char **)a4;
  v9 = 1;
  if ( a2 )
  {
    v9 = 1;
    *a1 = sub_EAA20(0x15u);
  }
  return v9;
}
