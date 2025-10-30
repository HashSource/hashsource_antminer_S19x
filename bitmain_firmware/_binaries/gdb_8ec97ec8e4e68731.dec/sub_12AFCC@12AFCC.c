bool __fastcall sub_12AFCC(int a1, const char **a2)
{
  int v2; // r4
  int v6; // r0
  int v7; // r4
  int v8; // r1
  int v9; // r3
  char v10; // r2
  int v11; // r8
  int v12; // r3
  int v13; // r0
  bool v14; // zf
  int v15; // r3

  v2 = *(_DWORD *)(a1 + 12) & 0x80;
  if ( v2 )
    return 0;
  v6 = sub_1B6B24(a1, dword_4872F0);
  dword_4872D8 = v6;
  if ( !v6 )
  {
    v8 = *(_DWORD *)(a1 + 64);
    v9 = *(_DWORD *)(a1 + 60);
    v10 = v8 - v9;
    if ( (unsigned int)(v8 - v9) < 0x1C8 )
    {
      obstack_newchunk((struct obstack *)(a1 + 48), 456);
      v9 = *(_DWORD *)(a1 + 60);
      v8 = *(_DWORD *)(a1 + 64);
    }
    v11 = *(_DWORD *)(a1 + 56);
    v12 = v9 + 456;
    v13 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 60) = v12;
    v14 = v12 == v11;
    if ( v12 == v11 )
      v10 = *(_BYTE *)(a1 + 88);
    v15 = (v12 + v13) & ~v13;
    *(_DWORD *)(a1 + 60) = v15;
    if ( v14 )
      *(_BYTE *)(a1 + 88) = v10 | 2;
    if ( v15 - *(_DWORD *)(a1 + 52) > (unsigned int)(v8 - *(_DWORD *)(a1 + 52)) )
    {
      v15 = v8;
      *(_DWORD *)(a1 + 60) = v8;
    }
    *(_DWORD *)(a1 + 56) = v15;
    if ( v11 )
      sub_12ACFC(v11, a1, a2);
    dword_4872D8 = v11;
    sub_1B6B1C(a1, dword_4872F0, v11);
    v6 = dword_4872D8;
  }
  if ( !*(_BYTE *)(v6 + 17) && *(_DWORD *)v6 && !*(_BYTE *)(v6 + 37) )
  {
    v7 = *(_DWORD *)(v6 + 20);
    return v7 != 0;
  }
  return v2;
}
