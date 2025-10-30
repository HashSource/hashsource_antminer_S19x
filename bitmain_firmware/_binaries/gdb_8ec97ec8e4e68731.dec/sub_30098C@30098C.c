bool __fastcall sub_30098C(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v5; // r4
  int v6; // r0

  if ( (*(_BYTE *)(a2 + 40) & 0x18) == 0x10 || (v5 = *(_DWORD *)(a3 + 40)) == 0 )
  {
    v5 = *(_DWORD *)(a3 + 36);
    v6 = sub_300850(a1);
    if ( v5 >= a4 )
      return v6 + a4 <= v5;
  }
  else
  {
    v6 = sub_300850(a1);
    if ( v5 >= a4 )
      return v6 + a4 <= v5;
  }
  return 0;
}
