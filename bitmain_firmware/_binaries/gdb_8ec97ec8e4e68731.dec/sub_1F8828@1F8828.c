int __fastcall sub_1F8828(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v6; // r8
  int v8; // r7
  int v10; // r0
  int v11; // r3
  int v12; // r6
  int v13; // r11
  char v14; // r1
  unsigned int v15; // r4
  int v16; // r2
  int v17; // r0
  int v18; // r3
  char v19; // r1
  _QWORD *v20; // r5
  _QWORD *v21; // r3
  int v22; // r12
  bool v23; // zf
  int v24; // r3
  int v25; // r2
  char v26; // r3
  int v27; // r0
  _QWORD *v28; // r5
  char v29; // r1
  int v30; // r2
  int v32; // r8
  int v33; // r1
  int v34; // [sp+4h] [bp-8h]

  v6 = a3;
  if ( a3 )
    v6 = 1;
  v8 = a3;
  sub_16FF58(a1);
  v11 = *(_DWORD *)(v10 + 24);
  v12 = v10;
  if ( a5 )
    v13 = v6 + 1;
  else
    v13 = v6;
  v14 = *(_BYTE *)(v11 + 2);
  *(_DWORD *)(v11 + 8) = a2;
  v15 = 24 * v13;
  *(_DWORD *)(v11 + 12) = a2;
  *(_WORD *)(v11 + 4) = v13;
  *(_BYTE *)v11 = 3;
  if ( (v14 & 0x10) != 0 )
  {
    v16 = *(_DWORD *)(v11 + 16);
    v17 = *(_DWORD *)(v16 + 64);
    v18 = *(_DWORD *)(v16 + 60);
    v19 = v17 - v18;
    if ( v17 - v18 < v15 )
    {
      v34 = v16;
      obstack_newchunk((struct obstack *)(v16 + 48), v15);
      v16 = v34;
      v18 = *(_DWORD *)(v34 + 60);
      v17 = *(_DWORD *)(v34 + 64);
    }
    v20 = *(_QWORD **)(v16 + 56);
    v21 = (_QWORD *)(v18 + v15);
    v22 = *(_DWORD *)(v16 + 72);
    *(_DWORD *)(v16 + 60) = v21;
    v23 = v21 == v20;
    if ( v21 == v20 )
      v19 = *(_BYTE *)(v16 + 88);
    v24 = ((unsigned int)v21 + v22) & ~v22;
    *(_DWORD *)(v16 + 60) = v24;
    if ( v23 )
      *(_BYTE *)(v16 + 88) = v19 | 2;
    if ( v24 - *(_DWORD *)(v16 + 52) > (unsigned int)(v17 - *(_DWORD *)(v16 + 52)) )
    {
      v24 = v17;
      *(_DWORD *)(v16 + 60) = v17;
    }
    *(_DWORD *)(v16 + 56) = v24;
    memset(v20, 0, v15);
  }
  else
  {
    v20 = sub_930CC(24 * v13);
  }
  *(_DWORD *)(*(_DWORD *)(v12 + 24) + 24) = v20;
  if ( v8 )
  {
    v25 = *(_DWORD *)(a4 + 20);
    v26 = *((_BYTE *)v20 + 8);
    *((_DWORD *)v20 + 4) = v8;
    *v20 = 0;
    v8 = 8 * v25;
    *((_BYTE *)v20 + 8) = v26 & 0xF1;
    *((_DWORD *)v20 + 3) = a4;
  }
  if ( a5 )
  {
    v27 = sub_1F8738(a6);
    v28 = &v20[3 * v6];
    if ( v27 )
    {
      v32 = 8 * v27;
      sub_347924(v8, 8 * v27);
      if ( v33 )
        v8 += v32 - v33;
    }
    v29 = *((_BYTE *)v28 + 8);
    *((_DWORD *)v28 + 4) = a5;
    *v28 = v8;
    *((_DWORD *)v28 + 3) = a6;
    *((_BYTE *)v28 + 8) = v29 & 0xF1;
  }
  if ( v13 )
  {
    v30 = *(_DWORD *)(*(_DWORD *)(v12 + 24) + 24) + v15 - 24;
    *(_DWORD *)(v12 + 20) = *(_DWORD *)(*(_DWORD *)(v30 + 12) + 20) + *(_QWORD *)v30 / 8LL;
  }
  return v12;
}
