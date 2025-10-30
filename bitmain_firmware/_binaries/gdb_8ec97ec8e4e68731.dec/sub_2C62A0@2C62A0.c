unsigned int __fastcall sub_2C62A0(unsigned int result, int a2)
{
  int v2; // r3
  unsigned int v3; // r1
  unsigned int v4; // r2

  v2 = *(_DWORD *)(a2 + 28);
  v3 = result;
  if ( *(_DWORD *)(v2 + 44) == 4 )
  {
    v4 = *(_DWORD *)(v2 + 392);
    result = *(_DWORD *)(*(_DWORD *)(result + 160) + 672);
    if ( result <= 9 )
    {
      if ( v4 )
        return result;
    }
    else if ( v4 > 1 )
    {
      return sub_2A6A5C("%B: warning: selected VFP11 erratum workaround is not necessary for target architecture", v3);
    }
    *(_DWORD *)(v2 + 392) = 1;
  }
  return result;
}
