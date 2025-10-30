int __fastcall sub_A45B8(_DWORD *a1, int a2, unsigned int a3, int a4)
{
  unsigned int v5; // r9
  int v10; // r6
  int v11; // r0
  _WORD *v12; // lr
  char **v13; // r1

  if ( (a3 & 1) != 0 )
    return 0;
  v5 = a3 >> 1;
  v10 = CRYPTO_malloc(2 * (a3 >> 1), "ssl/t1_lib.c", 2067);
  if ( v10 )
  {
    if ( a3 )
    {
      v11 = a2 + 8;
      v12 = (_WORD *)v10;
      while ( 2 )
      {
        v13 = &off_202A94;
        while ( *(char **)(v11 - 8) != v13[2] || *(char **)(v11 - 4) != v13[4] )
        {
          v13 += 8;
          if ( v13 == &off_202DD4 )
          {
            CRYPTO_free(v10, "ssl/t1_lib.c", 2102);
            return 0;
          }
        }
        v11 += 8;
        *v12++ = *((_WORD *)v13 + 2);
        if ( a3 > (unsigned int)v12 - v10 )
          continue;
        break;
      }
    }
    if ( a4 )
    {
      CRYPTO_free(a1[54], "ssl/t1_lib.c", 2090);
      a1[54] = v10;
      a1[55] = v5;
    }
    else
    {
      CRYPTO_free(a1[52], "ssl/t1_lib.c", 2094);
      a1[52] = v10;
      a1[53] = v5;
    }
    return 1;
  }
  else
  {
    sub_D0048(20, 632, 65, "ssl/t1_lib.c", 2068);
    return 0;
  }
}
