int __fastcall sub_8AFE4(int a1, unsigned int a2)
{
  bool v2; // cc

  if ( a2 == 1 )
  {
    *(_DWORD *)(a1 + 3940) = 0;
  }
  else
  {
    v2 = a2 > 0x4000;
    if ( a2 > 0x4000 )
      a2 = 0;
    else
      *(_DWORD *)(a1 + 3940) = a2;
    if ( !v2 )
      return 1;
  }
  return a2;
}
