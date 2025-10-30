int __fastcall sub_1A31BC(int a1, int a2, int a3)
{
  int v6; // r3

  if ( dword_487A20 )
  {
    free((void *)dword_487A20);
    dword_487A20 = 0;
  }
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
    return a3;
  v6 = *(_DWORD *)(a3 + 4) & 0x7FFFFFFE;
  if ( v6 == 2 )
  {
    dword_487A20 = ((int (__fastcall *)(int))loc_1A286C)(a1);
    *(_DWORD *)(a3 + 12) = dword_487A20;
    return a3;
  }
  if ( v6 != 4 )
    return a3;
  dword_487A20 = (int)sub_93140("%d", a2);
  *(_DWORD *)(a3 + 12) = dword_487A20;
  return a3;
}
