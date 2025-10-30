_BYTE *__fastcall sub_E9FB4(const char *a1, _DWORD *a2)
{
  const char *v3; // r4
  size_t v4; // r0
  _BYTE *v5; // r0
  _BYTE *v6; // r7
  _BYTE *v7; // r9
  const char *v8; // r3
  const char *v9; // r4
  int v10; // r5
  int v11; // t1
  int v12; // r6
  int v13; // r6
  int v14; // r0

  v3 = a1;
  v4 = strlen(a1);
  v5 = CRYPTO_malloc((void *)(v4 >> 1));
  v6 = v5;
  if ( v5 )
  {
    v7 = v5;
    while ( 2 )
    {
      v8 = v3;
      do
      {
        v9 = v8;
        v11 = *(unsigned __int8 *)v8++;
        v10 = v11;
        if ( !v11 )
        {
          if ( a2 )
            *a2 = v7 - v6;
          return v6;
        }
      }
      while ( v10 == 58 );
      v12 = *((unsigned __int8 *)v9 + 1);
      v3 = v9 + 2;
      if ( v12 )
      {
        v13 = sub_E9F98(v12);
        v14 = sub_E9F98(v10);
        if ( (v13 | v14) >= 0 )
        {
          *v7++ = v13 | (16 * v14);
          continue;
        }
        CRYPTO_free(v6);
        sub_D0048(15, 118, 102, (int)"crypto/o_str.c", 175);
        return 0;
      }
      else
      {
        sub_D0048(15, 118, 103, (int)"crypto/o_str.c", 167);
        CRYPTO_free(v6);
        return 0;
      }
    }
  }
  else
  {
    sub_D0048(15, 118, 65, (int)"crypto/o_str.c", 157);
    return 0;
  }
}
