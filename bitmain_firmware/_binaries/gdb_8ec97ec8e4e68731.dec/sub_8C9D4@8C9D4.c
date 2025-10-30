_DWORD *__fastcall sub_8C9D4(int a1, int a2)
{
  int v2; // r4
  int v3; // r3
  int v4; // r1
  char v5; // r2
  _DWORD *v6; // r5
  _DWORD *v7; // r3
  int v8; // r0
  bool v9; // zf
  int v10; // r3

  v2 = dword_4751A4;
  v3 = *(_DWORD *)(dword_4751A4 + 12);
  v4 = *(_DWORD *)(dword_4751A4 + 16);
  v5 = v4 - v3;
  if ( (unsigned int)(v4 - v3) <= 0x3F )
  {
    obstack_newchunk((struct obstack *)dword_4751A4, 64);
    v3 = *(_DWORD *)(v2 + 12);
    v4 = *(_DWORD *)(v2 + 16);
  }
  v6 = *(_DWORD **)(v2 + 8);
  v7 = (_DWORD *)(v3 + 64);
  v8 = *(_DWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 12) = v7;
  v9 = v7 == v6;
  if ( v7 == v6 )
    v5 = *(_BYTE *)(v2 + 40);
  v10 = ((unsigned int)v7 + v8) & ~v8;
  *(_DWORD *)(v2 + 12) = v10;
  if ( v9 )
    *(_BYTE *)(v2 + 40) = v5 | 2;
  if ( v10 - *(_DWORD *)(v2 + 4) > (unsigned int)(v4 - *(_DWORD *)(v2 + 4)) )
  {
    v10 = v4;
    *(_DWORD *)(v2 + 12) = v4;
  }
  *(_DWORD *)(v2 + 8) = v10;
  memset(v6 + 1, 0, 0x3Cu);
  *v6 = 50;
  v6[4] = a1;
  v6[5] = a2;
  return v6;
}
