int __fastcall sub_A2CB4(_DWORD *a1, int a2)
{
  int v3; // r1

  if ( (*(_DWORD *)(a1[257] + 16) & 0x30000) == 0 )
    return sub_A2838(a1, 0) != 0;
  if ( a2 == 50380843 )
  {
    v3 = 23;
  }
  else
  {
    if ( a2 != 50380844 )
      return 0;
    v3 = 24;
  }
  return sub_A2A78(a1, v3, 1);
}
