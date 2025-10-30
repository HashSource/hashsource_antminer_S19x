int __fastcall sub_2C62F0(int result, int a2)
{
  int v2; // r3
  int v3; // r1
  int v4; // r2

  v2 = *(_DWORD *)(a2 + 28);
  v3 = result;
  if ( *(_DWORD *)(v2 + 44) == 4 )
  {
    v4 = *(_DWORD *)(result + 160);
    result = *(_DWORD *)(v4 + 672);
    if ( result != 13 || *(_DWORD *)(v4 + 684) != 77 )
    {
      if ( *(_DWORD *)(v2 + 400) )
        return sub_2A6A5C(
                 "%B: warning: selected STM32L4XX erratum workaround is not necessary for target architecture",
                 v3);
    }
  }
  return result;
}
