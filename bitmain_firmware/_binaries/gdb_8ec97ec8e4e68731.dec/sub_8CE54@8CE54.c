_DWORD *__fastcall sub_8CE54(int a1)
{
  int v2; // r4
  int v3; // r1
  int v4; // r3
  char v5; // r2
  _DWORD *v6; // r5
  _DWORD *v7; // r3
  int v8; // r0
  bool v9; // zf
  int v10; // r3

  v2 = dword_4751A4;
  v3 = *(_DWORD *)(dword_4751A4 + 16);
  v4 = *(_DWORD *)(dword_4751A4 + 12);
  v5 = v3 - v4;
  if ( (unsigned int)(v3 - v4) <= 0x3F )
  {
    obstack_newchunk((struct obstack *)dword_4751A4, 64);
    v4 = *(_DWORD *)(v2 + 12);
    v3 = *(_DWORD *)(v2 + 16);
  }
  v6 = *(_DWORD **)(v2 + 8);
  v7 = (_DWORD *)(v4 + 64);
  v8 = *(_DWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 12) = v7;
  v9 = v7 == v6;
  if ( v7 == v6 )
    v5 = *(_BYTE *)(v2 + 40);
  v10 = ((unsigned int)v7 + v8) & ~v8;
  *(_DWORD *)(v2 + 12) = v10;
  if ( v9 )
    *(_BYTE *)(v2 + 40) = v5 | 2;
  if ( v10 - *(_DWORD *)(v2 + 4) > (unsigned int)(v3 - *(_DWORD *)(v2 + 4)) )
  {
    v10 = v3;
    *(_DWORD *)(v2 + 12) = v3;
  }
  *(_DWORD *)(v2 + 8) = v10;
  memset(v6 + 2, 0, 0x38u);
  *v6 = 88;
  v6[1] = a1;
  return v6;
}
