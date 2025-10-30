int __fastcall sub_26EEB8(int a1)
{
  bool v2; // zf
  int v3; // r3
  int v4; // r4
  _DWORD *v5; // r0
  int v7; // r2

  if ( (*(_BYTE *)(a1 + 4) & 2) != 0 )
    ((void (*)(void))loc_26E00C)();
  v2 = (*(_BYTE *)(a1 + 4) & 0x10) == 0;
  *(_BYTE *)(a1 + 4) &= ~1u;
  if ( v2 )
    sub_26C3B8(a1);
  else
    ++*(_DWORD *)(a1 + 56);
  v3 = dword_48AA04;
  v4 = dword_48AA04 % 60;
  if ( dword_48AA04 == 60 * (dword_48AA04 / 60) )
  {
    v5 = sub_93094(1u, 0xF4u);
    v7 = dword_48AA08;
    v3 = dword_48AA04;
    dword_48AA08 = (int)v5;
    *v5 = v7;
  }
  else
  {
    v5 = (_DWORD *)dword_48AA08;
  }
  dword_48AA04 = v3 + 1;
  v5[v4 + 1] = a1;
  return v3 + 1;
}
