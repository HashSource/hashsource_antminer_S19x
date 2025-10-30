_DWORD *__fastcall sub_200554(int a1, char a2)
{
  int v2; // r12
  int v3; // r3
  _DWORD *v5; // r2
  _DWORD *v6; // r3
  int v7; // r0
  bool v8; // zf
  int v9; // r3
  int v10; // r1
  unsigned int v11; // r0
  unsigned int v12; // r1

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 12);
  if ( (unsigned int)(v2 - v3) <= 3 )
  {
    obstack_newchunk((struct obstack *)a1, 4);
    v3 = *(_DWORD *)(a1 + 12);
    v2 = *(_DWORD *)(a1 + 16);
  }
  v5 = *(_DWORD **)(a1 + 8);
  v6 = (_DWORD *)(v3 + 4);
  v7 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 12) = v6;
  v8 = v6 == v5;
  if ( v6 == v5 )
    a2 = *(_BYTE *)(a1 + 40);
  v9 = ((unsigned int)v6 + v7) & ~v7;
  *(_DWORD *)(a1 + 12) = v9;
  if ( v8 )
    *(_BYTE *)(a1 + 40) = a2 | 2;
  v10 = *(_DWORD *)(a1 + 4);
  v11 = v2 - v10;
  v12 = v9 - v10;
  if ( v12 > v11 )
    v9 = v2;
  *(_DWORD *)(a1 + 8) = v9;
  if ( v12 > v11 )
    *(_DWORD *)(a1 + 12) = v2;
  *v5 = 0;
  *v5 = dword_4893A8;
  return v5;
}
