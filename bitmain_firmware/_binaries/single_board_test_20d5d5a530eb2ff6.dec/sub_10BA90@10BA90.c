int __fastcall sub_10BA90(int *a1, int a2, unsigned int a3)
{
  int v3; // r3
  _DWORD *v4; // r6
  int v5; // r4
  int v9; // r7
  int v10; // r1
  _DWORD *v12; // r0
  int v13; // r0
  int v14; // r4
  _DWORD *v15; // r0

  if ( !a1 )
    return 0;
  v3 = *a1;
  if ( *a1 == 0x3FFFFFFF || 0x3FFFFFFF - v3 <= 0 )
    return 0;
  v4 = (_DWORD *)a1[1];
  v5 = v3 + 1;
  if ( v3 + 1 < 4 )
    v5 = 4;
  if ( v4 )
  {
    v9 = a1[3];
    if ( v5 > v9 )
    {
      while ( 1 )
      {
        if ( v9 > 1073741822 )
          return 0;
        if ( v9 > 715827881 )
          break;
        v9 += v9 / 2;
        if ( v5 <= v9 )
        {
          if ( !v9 )
            return 0;
          v10 = 4 * v9;
          goto LABEL_22;
        }
      }
      if ( v5 >= 0x40000000 )
        return 0;
      v10 = -4;
      v9 = 0x3FFFFFFF;
LABEL_22:
      v15 = CRYPTO_realloc((void *)a1[1], (void *)v10, (int)"crypto/stack/stack.c", 198);
      if ( !v15 )
        return 0;
      a1[1] = (int)v15;
      v4 = v15;
      a1[3] = v9;
      v3 = *a1;
      goto LABEL_15;
    }
    goto LABEL_15;
  }
  v12 = sub_E0740((void *)(4 * v5));
  a1[1] = (int)v12;
  if ( !v12 )
  {
    sub_D0048(15, 129, 65, (int)"crypto/stack/stack.c", 181);
    return 0;
  }
  v3 = *a1;
  v4 = v12;
  a1[3] = v5;
LABEL_15:
  if ( ((int)a3 >= v3) | (a3 >> 31) )
  {
    v4[v3] = a2;
  }
  else
  {
    v13 = a3 + 1;
    v14 = v13 * 4 - 4;
    memmove(&v4[v13], &v4[v13 - 1], 4 * (v3 - a3));
    v3 = *a1;
    *(_DWORD *)(a1[1] + v14) = a2;
  }
  *a1 = v3 + 1;
  a1[2] = 0;
  return v3 + 1;
}
