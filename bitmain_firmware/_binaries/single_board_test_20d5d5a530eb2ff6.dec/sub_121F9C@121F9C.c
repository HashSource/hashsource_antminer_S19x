int __fastcall sub_121F9C(char *a1, char *s, void ***a3)
{
  void **v6; // r9
  size_t v7; // r5
  char *v8; // r7
  bool v9; // zf
  _DWORD *v10; // r6
  unsigned __int8 *v12; // r5
  _DWORD *v13; // r0
  void **v14; // r0

  if ( s )
  {
    v6 = *a3;
    v7 = strlen(s);
    if ( !a1 )
    {
      v8 = 0;
      goto LABEL_4;
    }
  }
  else
  {
    v6 = *a3;
    v8 = a1;
    v12 = (unsigned __int8 *)a1;
    if ( !a1 )
      goto LABEL_14;
    v7 = 0;
  }
  v8 = sub_E9E3C(a1);
  if ( !v8 )
  {
    v12 = 0;
    goto LABEL_11;
  }
LABEL_4:
  v9 = s == 0;
  if ( s )
    v9 = v7 == 0;
  if ( v9 )
  {
    v12 = 0;
  }
  else
  {
    if ( memchr(s, 0, v7 - 1) )
    {
      v12 = 0;
LABEL_11:
      v10 = 0;
      sub_D0048(34, 174, 65, (int)"crypto/x509v3/v3_utl.c", 69);
      if ( v6 )
      {
LABEL_12:
        CRYPTO_free(v10);
        CRYPTO_free(v8);
        CRYPTO_free(v12);
        return 0;
      }
      v10 = 0;
LABEL_27:
      sub_10BDB4(*a3);
      *a3 = 0;
      goto LABEL_12;
    }
    v12 = sub_E9EF4((unsigned __int8 *)s, v7);
    if ( !v12 )
      goto LABEL_11;
  }
LABEL_14:
  v13 = CRYPTO_malloc((void *)0xC);
  v10 = v13;
  if ( !v13 )
    goto LABEL_11;
  if ( v6 )
  {
    v13[1] = v8;
    v13[2] = v12;
    *v13 = 0;
    if ( !sub_10BD3C((int *)*a3, (int)v13) )
    {
      sub_D0048(34, 174, 65, (int)"crypto/x509v3/v3_utl.c", 69);
      goto LABEL_12;
    }
  }
  else
  {
    v14 = sub_10BFCC();
    *a3 = v14;
    if ( !v14 || (*v10 = 0, v10[1] = v8, v10[2] = v12, !sub_10BD3C((int *)*a3, (int)v10)) )
    {
      sub_D0048(34, 174, 65, (int)"crypto/x509v3/v3_utl.c", 69);
      goto LABEL_27;
    }
  }
  return 1;
}
