_DWORD *__fastcall sub_8CD8C(int a1, int a2, int a3)
{
  int v4; // r4
  int v5; // r3
  int v6; // r1
  char v7; // r2
  _DWORD *v8; // r5
  _DWORD *v9; // r3
  int v10; // r0
  bool v11; // zf
  int v12; // r3

  v4 = dword_4751A4;
  v5 = *(_DWORD *)(dword_4751A4 + 12);
  v6 = *(_DWORD *)(dword_4751A4 + 16);
  v7 = v6 - v5;
  if ( (unsigned int)(v6 - v5) <= 0x3F )
  {
    obstack_newchunk((struct obstack *)dword_4751A4, 64);
    v5 = *(_DWORD *)(v4 + 12);
    v6 = *(_DWORD *)(v4 + 16);
  }
  v8 = *(_DWORD **)(v4 + 8);
  v9 = (_DWORD *)(v5 + 64);
  v10 = *(_DWORD *)(v4 + 24);
  *(_DWORD *)(v4 + 12) = v9;
  v11 = v9 == v8;
  if ( v9 == v8 )
    v7 = *(_BYTE *)(v4 + 40);
  v12 = ((unsigned int)v9 + v10) & ~v10;
  *(_DWORD *)(v4 + 12) = v12;
  if ( v11 )
    *(_BYTE *)(v4 + 40) = v7 | 2;
  if ( v12 - *(_DWORD *)(v4 + 4) > (unsigned int)(v6 - *(_DWORD *)(v4 + 4)) )
  {
    v12 = v6;
    *(_DWORD *)(v4 + 12) = v6;
  }
  *(_DWORD *)(v4 + 8) = v12;
  memset(v8 + 1, 0, 0x3Cu);
  *v8 = 40;
  v8[4] = a1;
  v8[5] = a2;
  v8[10] = a3;
  return v8;
}
