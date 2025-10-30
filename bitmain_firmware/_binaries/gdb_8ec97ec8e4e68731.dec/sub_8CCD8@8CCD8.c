_DWORD *__fastcall sub_8CCD8(int a1, int a2, int a3)
{
  int v6; // r4
  int v7; // r1
  int v8; // r3
  char v9; // r2
  _DWORD *v10; // r8
  _DWORD *v11; // r3
  int v12; // r0
  bool v13; // zf
  int v14; // r3

  v6 = dword_4751A4;
  v7 = *(_DWORD *)(dword_4751A4 + 16);
  v8 = *(_DWORD *)(dword_4751A4 + 12);
  v9 = v7 - v8;
  if ( (unsigned int)(v7 - v8) <= 0x3F )
  {
    obstack_newchunk((struct obstack *)dword_4751A4, 64);
    v8 = *(_DWORD *)(v6 + 12);
    v7 = *(_DWORD *)(v6 + 16);
  }
  v10 = *(_DWORD **)(v6 + 8);
  v11 = (_DWORD *)(v8 + 64);
  v12 = *(_DWORD *)(v6 + 24);
  *(_DWORD *)(v6 + 12) = v11;
  v13 = v11 == v10;
  if ( v11 == v10 )
    v9 = *(_BYTE *)(v6 + 40);
  v14 = ((unsigned int)v11 + v12) & ~v12;
  *(_DWORD *)(v6 + 12) = v14;
  if ( v13 )
    *(_BYTE *)(v6 + 40) = v9 | 2;
  if ( v14 - *(_DWORD *)(v6 + 4) > (unsigned int)(v7 - *(_DWORD *)(v6 + 4)) )
  {
    v14 = v7;
    *(_DWORD *)(v6 + 12) = v7;
  }
  *(_DWORD *)(v6 + 8) = v14;
  memset(v10 + 1, 0, 0x3Cu);
  *v10 = a1;
  v10[4] = a2;
  v10[10] = a3;
  return v10;
}
