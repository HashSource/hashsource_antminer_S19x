int __fastcall sub_11C998(int a1)
{
  int v1; // r1
  int v2; // r3
  char v4; // r2
  int result; // r0
  int v6; // r3
  int v7; // r12
  bool v8; // zf
  int v9; // r3

  v1 = *(_DWORD *)(a1 + 104);
  v2 = *(_DWORD *)(a1 + 100);
  v4 = v1 - v2;
  if ( (unsigned int)(v1 - v2) <= 7 )
  {
    obstack_newchunk((struct obstack *)(a1 + 88), 8);
    v2 = *(_DWORD *)(a1 + 100);
    v1 = *(_DWORD *)(a1 + 104);
  }
  result = *(_DWORD *)(a1 + 96);
  v6 = v2 + 8;
  v7 = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 100) = v6;
  v8 = v6 == result;
  if ( v6 == result )
    v4 = *(_BYTE *)(a1 + 128);
  v9 = (v6 + v7) & ~v7;
  *(_DWORD *)(a1 + 100) = v9;
  if ( v8 )
    *(_BYTE *)(a1 + 128) = v4 | 2;
  if ( v9 - *(_DWORD *)(a1 + 92) > (unsigned int)(v1 - *(_DWORD *)(a1 + 92)) )
  {
    v9 = v1;
    *(_DWORD *)(a1 + 100) = v1;
  }
  *(_DWORD *)(a1 + 96) = v9;
  return result;
}
