_DWORD *__fastcall sub_D114C(int a1, int a2)
{
  _DWORD *result; // r0
  int v5; // r4
  _DWORD *v6; // r7
  int v7; // r9
  int v8; // r6
  int v9; // r8
  size_t v10; // r0
  int v11; // r3
  int v12; // r0
  const char *v13; // r5
  const char *v14; // t1
  const char *v15; // r0
  _DWORD *v16; // r4

  result = (_DWORD *)CRYPTO_malloc(81, "crypto/err/err.c", 884);
  if ( result )
  {
    v5 = 0;
    v6 = result;
    *(_BYTE *)result = 0;
    if ( a1 > 0 )
    {
      v7 = a2 - 4;
      v8 = 0;
      v9 = 80;
      do
      {
        v14 = *(const char **)(v7 + 4);
        v7 += 4;
        v13 = v14;
        v15 = v14;
        if ( v14 )
        {
          v10 = strlen(v15);
        }
        else
        {
          v10 = 6;
          v13 = "<NULL>";
        }
        v5 += v10;
        ++v8;
        v11 = 898;
        if ( v5 > v9 )
        {
          v12 = CRYPTO_realloc(v6, v5 + 21, "crypto/err/err.c", 898);
          v9 = v5 + 20;
          if ( !v12 )
            return (_DWORD *)CRYPTO_free(v6, "crypto/err/err.c", 900);
          v6 = (_DWORD *)v12;
        }
        sub_E9F6C(v6, v13, v9 + 1, v11);
      }
      while ( a1 != v8 );
    }
    result = sub_CFCDC();
    if ( result )
    {
      v16 = &result[result[96]];
      if ( (v16[48] & 1) != 0 )
        result = (_DWORD *)CRYPTO_free(v16[32], "crypto/err/err.c", 854);
      v16[32] = v6;
      v16[48] = 3;
    }
    else
    {
      return (_DWORD *)CRYPTO_free(v6, "crypto/err/err.c", 908);
    }
  }
  return result;
}
