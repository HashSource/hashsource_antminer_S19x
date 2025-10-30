_DWORD *__fastcall sub_1A368C(int a1, int a2, int a3)
{
  int v6; // r1
  int v7; // r3
  char v8; // r2
  _DWORD *v9; // r4
  _DWORD *v10; // r3
  int v11; // r0
  bool v12; // zf
  int v13; // r3

  if ( a1 )
  {
    v6 = *(_DWORD *)(a1 + 16);
    v7 = *(_DWORD *)(a1 + 12);
    v8 = v6 - v7;
    if ( (unsigned int)(v6 - v7) <= 0x17 )
    {
      obstack_newchunk((struct obstack *)a1, 24);
      v7 = *(_DWORD *)(a1 + 12);
      v6 = *(_DWORD *)(a1 + 16);
    }
    v9 = *(_DWORD **)(a1 + 8);
    v10 = (_DWORD *)(v7 + 24);
    v11 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 12) = v10;
    v12 = v10 == v9;
    if ( v10 == v9 )
      v8 = *(_BYTE *)(a1 + 40);
    v13 = ((unsigned int)v10 + v11) & ~v11;
    *(_DWORD *)(a1 + 12) = v13;
    if ( v12 )
      *(_BYTE *)(a1 + 40) = v8 | 2;
    if ( v13 - *(_DWORD *)(a1 + 4) > (unsigned int)(v6 - *(_DWORD *)(a1 + 4)) )
    {
      v13 = v6;
      *(_DWORD *)(a1 + 12) = v6;
    }
    *(_DWORD *)(a1 + 8) = v13;
  }
  else
  {
    v9 = sub_93028(0x18u);
  }
  v9[5] = 0;
  v9[2] = 0;
  v9[4] = 0;
  *v9 = a1;
  v9[1] = a2;
  v9[3] = a3;
  v9[5] = sub_326BD4(sub_1A31B0, sub_1A30B8, sub_1A3008, sub_1A2CCC, sub_1A2FF8, v9);
  return v9;
}
