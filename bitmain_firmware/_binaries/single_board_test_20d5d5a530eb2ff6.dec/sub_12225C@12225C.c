int __fastcall sub_12225C(char *a1, void *a2, int a3, void ***a4)
{
  void **v7; // r9
  char *v8; // r5
  bool v9; // zf
  _DWORD *v10; // r7
  unsigned __int8 *v12; // r6
  _DWORD *v13; // r0
  void **v14; // r0

  v7 = *a4;
  if ( a1 )
  {
    v8 = sub_E9E3C(a1);
    if ( !v8 )
    {
      v12 = 0;
      goto LABEL_10;
    }
  }
  else
  {
    v8 = 0;
  }
  v9 = a2 == 0;
  if ( a2 )
    v9 = a3 == 0;
  if ( v9 )
  {
    v12 = 0;
  }
  else
  {
    if ( memchr(a2, 0, a3 - 1) )
    {
      v12 = 0;
LABEL_10:
      v10 = 0;
      sub_D0048(34, 174, 65, (int)"crypto/x509v3/v3_utl.c", 69);
      if ( v7 )
      {
LABEL_11:
        CRYPTO_free(v10);
        CRYPTO_free(v8);
        CRYPTO_free(v12);
        return 0;
      }
      v10 = 0;
LABEL_20:
      sub_10BDB4(*a4);
      *a4 = 0;
      goto LABEL_11;
    }
    v12 = sub_E9EF4((unsigned __int8 *)a2, a3);
    if ( !v12 )
      goto LABEL_10;
  }
  v13 = CRYPTO_malloc((void *)0xC);
  v10 = v13;
  if ( !v13 )
    goto LABEL_10;
  if ( v7 )
  {
    v13[1] = v8;
    v13[2] = v12;
    *v13 = 0;
    if ( !sub_10BD3C((int *)*a4, (int)v13) )
    {
      sub_D0048(34, 174, 65, (int)"crypto/x509v3/v3_utl.c", 69);
      goto LABEL_11;
    }
  }
  else
  {
    v14 = sub_10BFCC();
    *a4 = v14;
    if ( !v14 || (*v10 = 0, v10[1] = v8, v10[2] = v12, !sub_10BD3C((int *)*a4, (int)v10)) )
    {
      sub_D0048(34, 174, 65, (int)"crypto/x509v3/v3_utl.c", 69);
      goto LABEL_20;
    }
  }
  return 1;
}
