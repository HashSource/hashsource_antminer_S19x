int __fastcall sub_BA324(int a1, int *a2)
{
  int v4; // r4
  int v5; // r6
  int v6; // r8
  int v7; // r1
  int *v8; // r7
  unsigned int v9; // r2
  int v10; // r3
  int v11; // lr
  unsigned int v12; // r6
  _DWORD *v13; // r2
  int *v14; // r3
  unsigned int v15; // r0
  int v16; // r4
  int *v17; // r7
  unsigned int v18; // t1

  if ( !sub_B85B0((int)a2) )
  {
    v4 = *a2;
    v5 = a2[1];
    if ( a2 != (int *)a1 )
    {
      v6 = 0;
      if ( !sub_B89D8(a1, a2[1]) )
        return v6;
      *(_DWORD *)(a1 + 12) = a2[3];
    }
    v7 = v5 - 1;
    v8 = *(int **)a1;
    v9 = *(_DWORD *)(v4 + 4 * (v5 - 1));
    v10 = v5 - 1;
    if ( v9 == 1 )
      v11 = v5 - 1;
    else
      v11 = v5;
    v8[v7] = v9 >> 1;
    *(_DWORD *)(a1 + 4) = v11;
    if ( v7 > 0 )
    {
      if ( v5 > 9 )
      {
        v12 = v5 - 9 - ((v5 - 10) & 0xFFFFFFF8);
        v13 = (_DWORD *)(v10 * 4 - 96 + v4);
        v14 = &v8[v10 + 1];
        do
        {
          v15 = v13[23];
          v7 -= 8;
          __pld(v13);
          v13 -= 8;
          v14 -= 8;
          v14[6] = v15 >> 1;
          v14[5] = v13[30] >> 1;
          v14[4] = v13[29] >> 1;
          v14[3] = v13[28] >> 1;
          v14[2] = v13[27] >> 1;
          v14[1] = v13[26] >> 1;
          *v14 = v13[25] >> 1;
          *(v14 - 1) = v13[24] >> 1;
        }
        while ( v7 != v12 );
        v10 = v7;
      }
      v16 = v4 + v10 * 4;
      v17 = &v8[v10];
      do
      {
        v18 = *(_DWORD *)(v16 - 4);
        v16 -= 4;
        --v7;
        *--v17 = v18 >> 1;
      }
      while ( v7 );
    }
    v6 = 1;
    if ( !v11 )
      *(_DWORD *)(a1 + 12) = 0;
    return v6;
  }
  sub_B8930((int **)a1, 0);
  return 1;
}
