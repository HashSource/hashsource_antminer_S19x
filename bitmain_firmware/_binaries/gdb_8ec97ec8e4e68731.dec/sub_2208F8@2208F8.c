int __fastcall sub_2208F8(int a1)
{
  int v1; // r1
  int v2; // r3
  char v4; // r2
  int v5; // r5
  int v6; // r3
  int v7; // r0
  bool v8; // zf
  int v9; // r3

  v1 = *(_DWORD *)(a1 + 64);
  v2 = *(_DWORD *)(a1 + 60);
  v4 = v1 - v2;
  if ( (unsigned int)(v1 - v2) <= 0x37 )
  {
    obstack_newchunk((struct obstack *)(a1 + 48), 56);
    v2 = *(_DWORD *)(a1 + 60);
    v1 = *(_DWORD *)(a1 + 64);
  }
  v5 = *(_DWORD *)(a1 + 56);
  v6 = v2 + 56;
  v7 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 60) = v6;
  v8 = v6 == v5;
  if ( v6 == v5 )
    v4 = *(_BYTE *)(a1 + 88);
  v9 = (v6 + v7) & ~v7;
  *(_DWORD *)(a1 + 60) = v9;
  if ( v8 )
    *(_BYTE *)(a1 + 88) = v4 | 2;
  if ( v9 - *(_DWORD *)(a1 + 52) > (unsigned int)(v1 - *(_DWORD *)(a1 + 52)) )
  {
    v9 = v1;
    *(_DWORD *)(a1 + 60) = v1;
  }
  *(_DWORD *)(a1 + 56) = v9;
  memset((void *)v5, 0, 0x38u);
  *(_BYTE *)(v5 + 33) = 1;
  *(_WORD *)(v5 + 22) = -1;
  return v5;
}
