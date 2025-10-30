int __fastcall sub_A3F08(int *a1, int *a2, unsigned int *a3)
{
  unsigned int v3; // r5
  unsigned int v5; // r9
  int v9; // r5
  unsigned int v10; // r0
  int v11; // r1
  int v12; // lr
  int v13; // r3
  __int16 v14; // r12
  __int16 v15; // r4
  unsigned int v16; // r2

  v3 = a1[1];
  if ( !v3 )
    return 0;
  if ( (v3 & 1) != 0 )
    return 0;
  v5 = v3 >> 1;
  v9 = CRYPTO_malloc(2 * (v3 >> 1), "ssl/t1_lib.c", 1811);
  if ( v9 )
  {
    if ( v5 )
    {
      v10 = a1[1];
      if ( v10 <= 1 )
      {
LABEL_10:
        CRYPTO_free(v9, "ssl/t1_lib.c", 1819);
        return 0;
      }
      v11 = 0;
      v12 = v9 - 2;
      v13 = *a1 + 2;
      while ( 1 )
      {
        v14 = *(unsigned __int8 *)(v13 - 2);
        ++v11;
        v15 = *(unsigned __int8 *)(v13 - 1);
        v16 = v10 - 2;
        *a1 = v13;
        a1[1] = v10 - 2;
        v10 -= 2;
        v13 += 2;
        *(_WORD *)(v12 + 2) = v15 | (v14 << 8);
        v12 += 2;
        if ( v5 == v11 )
          break;
        if ( v16 <= 1 )
          goto LABEL_10;
      }
    }
    CRYPTO_free(*a2, "ssl/t1_lib.c", 1823);
    *a2 = v9;
    *a3 = v5;
    return 1;
  }
  else
  {
    sub_D0048(20, 628, 65, "ssl/t1_lib.c", 1812);
    return 0;
  }
}
