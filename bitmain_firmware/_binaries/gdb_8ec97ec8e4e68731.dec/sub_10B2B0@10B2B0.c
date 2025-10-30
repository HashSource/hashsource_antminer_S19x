_DWORD *__fastcall sub_10B2B0(int a1, int a2, _DWORD *a3)
{
  int v4; // r3
  int v7; // r1
  char v8; // r2
  _DWORD *v9; // r5
  _DWORD *v10; // r3
  int v11; // r0
  bool v12; // zf
  int v13; // r3
  char v14; // r2
  _DWORD *v15; // r3
  int v16; // r2
  int v17; // r1
  int v18; // r1
  unsigned int v19; // r8
  int v20; // r3
  int v21; // r6
  int v22; // lr
  int v23; // r3
  int v24; // r0
  bool v25; // zf
  int v26; // r3
  int v27; // r2
  _DWORD *v28; // r1
  int v29; // r3
  int v30; // t1

  v4 = *(_DWORD *)(a1 + 12);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = v7 - v4;
  if ( (unsigned int)(v7 - v4) <= 0x13 )
  {
    obstack_newchunk((struct obstack *)a1, 20);
    v4 = *(_DWORD *)(a1 + 12);
    v7 = *(_DWORD *)(a1 + 16);
  }
  v9 = *(_DWORD **)(a1 + 8);
  v10 = (_DWORD *)(v4 + 20);
  v11 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 12) = v10;
  v12 = v10 == v9;
  if ( v10 == v9 )
    v8 = *(_BYTE *)(a1 + 40);
  v13 = ((unsigned int)v10 + v11) & ~v11;
  *(_DWORD *)(a1 + 12) = v13;
  if ( v12 )
    *(_BYTE *)(a1 + 40) = v8 | 2;
  if ( v13 - *(_DWORD *)(a1 + 4) > (unsigned int)(v7 - *(_DWORD *)(a1 + 4)) )
  {
    v13 = v7;
    *(_DWORD *)(a1 + 12) = v7;
  }
  *(_DWORD *)(a1 + 8) = v13;
  v9[1] = &unk_39B8D4;
  *v9 = sub_194438(a2);
  if ( a3 )
  {
    v15 = a3;
    v16 = 0;
    do
    {
      v17 = v15[1];
      v15 = (_DWORD *)*v15;
      v16 += v17;
    }
    while ( v15 );
    v18 = *(_DWORD *)(a1 + 16);
    v19 = 4 * v16;
    v20 = *(_DWORD *)(a1 + 12);
    v21 = v16 - 1;
    v9[2] = v16;
    v14 = v18 - v20;
    if ( v19 > v18 - v20 )
    {
      obstack_newchunk((struct obstack *)a1, v19);
      v20 = *(_DWORD *)(a1 + 12);
      v18 = *(_DWORD *)(a1 + 16);
    }
  }
  else
  {
    v9[2] = 0;
    v21 = -1;
    v20 = *(_DWORD *)(a1 + 12);
    v19 = 0;
    v18 = *(_DWORD *)(a1 + 16);
  }
  v22 = *(_DWORD *)(a1 + 8);
  v23 = v20 + v19;
  v24 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 12) = v23;
  v25 = v23 == v22;
  if ( v23 == v22 )
    v14 = *(_BYTE *)(a1 + 40);
  v26 = (v23 + v24) & ~v24;
  *(_DWORD *)(a1 + 12) = v26;
  if ( v25 )
    *(_BYTE *)(a1 + 40) = v14 | 2;
  if ( v26 - *(_DWORD *)(a1 + 4) > (unsigned int)(v18 - *(_DWORD *)(a1 + 4)) )
  {
    v26 = v18;
    *(_DWORD *)(a1 + 12) = v18;
  }
  *(_DWORD *)(a1 + 8) = v26;
  for ( v9[3] = v22; a3; a3 = (_DWORD *)*a3 )
  {
    v27 = a3[1];
    if ( v27 > 0 )
    {
      v28 = (_DWORD *)(v22 + 4 * v21);
      v29 = (int)&a3[v27 + 2];
      do
      {
        v30 = *(_DWORD *)(v29 - 4);
        v29 -= 4;
        *v28-- = v30;
      }
      while ( a3 + 2 != (_DWORD *)v29 );
      v21 -= v27;
    }
  }
  return v9;
}
