_DWORD *__fastcall sub_10B0A4(int a1, int a2, _DWORD *a3)
{
  int v4; // r3
  int v7; // r1
  char v8; // r2
  _DWORD *v9; // r6
  _DWORD *v10; // r3
  int v11; // r0
  bool v12; // zf
  int v13; // r3
  _DWORD *v14; // r3
  int v15; // r2
  int v16; // r1
  int v17; // r1
  unsigned int v18; // r5
  int v19; // r0
  int v20; // r3
  char v21; // r2
  void *v22; // r8
  void *v23; // r3
  int v24; // r1
  bool v25; // zf
  int v26; // r3
  int v27; // r5
  int v28; // r4
  int v29; // r5
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
  v9[1] = &unk_39B894;
  *v9 = sub_194438(a2);
  if ( a3 )
  {
    v14 = a3;
    v15 = 0;
    do
    {
      v16 = v14[1];
      v14 = (_DWORD *)*v14;
      v15 += v16;
    }
    while ( v14 );
    v17 = v15 / 5 + 1;
    v18 = 4 * v17;
  }
  else
  {
    v18 = 4;
    v17 = 1;
  }
  v19 = *(_DWORD *)(a1 + 16);
  v20 = *(_DWORD *)(a1 + 12);
  v9[2] = v17;
  v21 = v19 - v20;
  if ( v19 - v20 < v18 )
  {
    obstack_newchunk((struct obstack *)a1, v18);
    v20 = *(_DWORD *)(a1 + 12);
    v19 = *(_DWORD *)(a1 + 16);
  }
  v22 = *(void **)(a1 + 8);
  v23 = (void *)(v20 + v18);
  v24 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 12) = v23;
  v25 = v23 == v22;
  if ( v23 == v22 )
    v21 = *(_BYTE *)(a1 + 40);
  v26 = ((unsigned int)v23 + v24) & ~v24;
  *(_DWORD *)(a1 + 12) = v26;
  if ( v25 )
    *(_BYTE *)(a1 + 40) = v21 | 2;
  if ( v26 - *(_DWORD *)(a1 + 4) > (unsigned int)(v19 - *(_DWORD *)(a1 + 4)) )
  {
    v26 = v19;
    *(_DWORD *)(a1 + 12) = v19;
  }
  *(_DWORD *)(a1 + 8) = v26;
  memset(v22, 0, v18);
  for ( v9[3] = v22; a3; a3 = (_DWORD *)*a3 )
  {
    v27 = a3[1];
    v28 = v27 - 1;
    if ( v27 - 1 >= 0 )
    {
      v29 = (int)&a3[v27 + 2];
      do
      {
        --v28;
        v30 = *(_DWORD *)(v29 - 4);
        v29 -= 4;
        sub_10AD98(v9, v30);
      }
      while ( v28 != -1 );
    }
  }
  return v9;
}
