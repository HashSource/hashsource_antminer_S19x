unsigned int __fastcall sub_BA9B4(_DWORD *a1, int *a2, int a3, int a4)
{
  int v5; // r7
  int *v9; // r9
  int v10; // r0
  int v11; // r9
  int v12; // r11
  void *v13; // r10
  _DWORD *v14; // r9
  int v15; // r8
  int v16; // r6
  unsigned int result; // r0
  _DWORD *v18; // r2
  unsigned int v19; // r3
  int v20; // t1
  int *v21; // [sp+0h] [bp-30h]
  int v22; // [sp+4h] [bp-2Ch]

  if ( a3 == 4 )
    return sub_130534();
  if ( a3 == 8 )
    return sub_130208();
  if ( a3 <= 15 )
    return sub_BA824(a1, a2, a3, a4);
  v5 = a3 >> 1;
  v22 = a3 >> 1;
  v21 = &a2[v22];
  v9 = &a2[v22];
  v10 = sub_B8414((int)a2, (int)&a2[v22], a3 >> 1);
  if ( v10 <= 0 )
  {
    if ( !v10 )
    {
      v11 = a3;
      v12 = a4 + 8 * a3;
      v13 = (void *)(a4 + 4 * a3);
      memset(v13, 0, 4 * a3);
      goto LABEL_7;
    }
    bn_sub_words(a4, v21, a2, v5);
  }
  else
  {
    bn_sub_words(a4, a2, v9, v5);
  }
  v11 = a3;
  v12 = a4 + 8 * a3;
  v13 = (void *)(a4 + 4 * a3);
  sub_BA9B4(v13, a4, v5, v12);
LABEL_7:
  v14 = &a1[v11];
  sub_BA9B4(a1, a2, v5, v12);
  sub_BA9B4(v14, v21, v5, v12);
  v15 = bn_add_words(a4, a1, v14, a3);
  v16 = v15 - bn_sub_words(v13, a4, v13, a3);
  result = bn_add_words(&a1[v22], &a1[v22], v13, a3) + v16;
  if ( result )
  {
    v18 = &a1[a3 + v5];
    v19 = *v18 + result;
    *v18 = v19;
    if ( result > v19 )
    {
      do
      {
        v20 = v18[1];
        *++v18 = v20 + 1;
      }
      while ( v20 == -1 );
    }
  }
  return result;
}
