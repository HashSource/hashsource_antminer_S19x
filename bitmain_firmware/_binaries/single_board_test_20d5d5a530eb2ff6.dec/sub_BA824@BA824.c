int __fastcall sub_BA824(_DWORD *a1, int *a2, int a3, int a4)
{
  int *v4; // r9
  int v7; // r7
  _DWORD *v8; // r5
  int v9; // r6
  int v10; // r10
  _DWORD *v11; // r8
  _DWORD *v12; // r4
  int v13; // r3
  int v14; // r3
  int v15; // r0
  int v16; // r2
  int v17; // r0
  _DWORD *v18; // r1
  int v19; // r3
  int v20; // r8
  _DWORD *v21; // r4
  int v22; // t1
  _DWORD *v23; // r0
  int v26; // [sp+4h] [bp-10h]

  v7 = a3 - 1;
  v26 = 2 * a3;
  a1[2 * a3 - 1] = 0;
  if ( a3 - 1 <= 0 )
    v4 = a2;
  *a1 = 0;
  v8 = a1 + 1;
  if ( a3 - 1 > 0 )
  {
    v4 = a2 + 1;
    v8[v7] = sub_12F8E8(v8, a2 + 1, v7, *a2);
    v8 = a1 + 3;
  }
  v9 = a3 - 2;
  if ( a3 - 2 > 0 )
  {
    v10 = a3 - 3;
    if ( a3 > 10 )
    {
      v11 = &v8[a3];
      v12 = v4 + 8;
      do
      {
        v13 = *(v12 - 8);
        __pld(v12);
        v7 = v9 - 7;
        *(v11 - 2) = sub_12F7C0(v8, v12 - 7, v9, v13);
        v14 = *(v12 - 7);
        __pld(v11 + 6);
        *(v11 - 1) = sub_12F7C0(v8 + 2, v12 - 6, v10, v14);
        v10 -= 8;
        *v11 = sub_12F7C0(v8 + 4, v12 - 5, v9 - 2, *(v12 - 6));
        v4 = v12;
        v11[1] = sub_12F7C0(v8 + 6, v12 - 4, v9 - 3, *(v12 - 5));
        v11 += 8;
        *(v11 - 6) = sub_12F7C0(v8 + 8, v12 - 3, v9 - 4, *(v12 - 4));
        v15 = sub_12F7C0(v8 + 10, v12 - 2, v9 - 5, *(v12 - 3));
        v16 = v9 - 6;
        *(v11 - 5) = v15;
        v9 -= 8;
        v17 = sub_12F7C0(v8 + 12, v12 - 1, v16, *(v12 - 2));
        v18 = v12;
        *(v11 - 4) = v17;
        v19 = *(v12 - 1);
        v12 += 8;
        *(v11 - 3) = sub_12F7C0(v8 + 14, v18, v7, v19);
        v8 += 16;
      }
      while ( v10 > 7 );
    }
    v20 = v7;
    v21 = &v8[v7 - 2];
    do
    {
      v22 = *v4++;
      --v7;
      v23 = v8;
      v8 += 2;
      v21[1] = sub_12F7C0(v23, v4, v7, v22);
      ++v21;
    }
    while ( v7 + v9 - v20 > 0 );
  }
  bn_add_words(a1, a1, a1, v26);
  sub_12F968(a4, a2, a3);
  return bn_add_words(a1, a1, a4, v26);
}
