_DWORD *__fastcall sub_B7220(int a1)
{
  int v1; // r1
  int v2; // r3
  char v4; // r2
  _DWORD *v5; // r5
  _DWORD *v6; // r3
  int v7; // r0
  bool v8; // zf
  int v9; // r3

  v1 = *(_DWORD *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 12);
  v4 = v1 - v2;
  if ( (unsigned int)(v1 - v2) <= 0xF )
  {
    obstack_newchunk((struct obstack *)a1, 16);
    v2 = *(_DWORD *)(a1 + 12);
    v1 = *(_DWORD *)(a1 + 16);
  }
  v5 = *(_DWORD **)(a1 + 8);
  v6 = (_DWORD *)(v2 + 16);
  v7 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 12) = v6;
  v8 = v6 == v5;
  if ( v6 == v5 )
    v4 = *(_BYTE *)(a1 + 40);
  v9 = ((unsigned int)v6 + v7) & ~v7;
  *(_DWORD *)(a1 + 12) = v9;
  if ( v8 )
    *(_BYTE *)(a1 + 40) = v4 | 2;
  if ( v9 - *(_DWORD *)(a1 + 4) > (unsigned int)(v1 - *(_DWORD *)(a1 + 4)) )
  {
    *(_DWORD *)(a1 + 12) = v1;
    v9 = v1;
  }
  *(_DWORD *)(a1 + 8) = v9;
  v5[1] = a1;
  *v5 = &off_378094;
  v5[3] = 0;
  v5[2] = sub_326BD4(sub_B6C90, 0, 0, sub_B6CB4, sub_B6C80, v5);
  return v5;
}
