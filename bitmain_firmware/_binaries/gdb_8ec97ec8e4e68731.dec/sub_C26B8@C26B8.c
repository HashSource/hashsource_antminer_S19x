_DWORD *__fastcall sub_C26B8(int a1, char a2)
{
  int v2; // r12
  int v3; // r3
  _DWORD *v5; // r2
  _DWORD *v6; // r3
  int v7; // r0
  bool v8; // zf
  int v9; // r3

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 12);
  if ( (unsigned int)(v2 - v3) <= 0x17 )
  {
    obstack_newchunk((struct obstack *)a1, 24);
    v3 = *(_DWORD *)(a1 + 12);
    v2 = *(_DWORD *)(a1 + 16);
  }
  v5 = *(_DWORD **)(a1 + 8);
  v6 = (_DWORD *)(v3 + 24);
  v7 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 12) = v6;
  v8 = v6 == v5;
  if ( v6 == v5 )
    a2 = *(_BYTE *)(a1 + 40);
  v9 = ((unsigned int)v6 + v7) & ~v7;
  *(_DWORD *)(a1 + 12) = v9;
  if ( v8 )
    *(_BYTE *)(a1 + 40) = a2 | 2;
  if ( v9 - *(_DWORD *)(a1 + 4) > (unsigned int)(v2 - *(_DWORD *)(a1 + 4)) )
  {
    v9 = v2;
    *(_DWORD *)(a1 + 12) = v2;
  }
  *(_DWORD *)(a1 + 8) = v9;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  return v5;
}
