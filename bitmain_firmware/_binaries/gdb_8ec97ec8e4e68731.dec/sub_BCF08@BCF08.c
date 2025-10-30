int __fastcall sub_BCF08(int result, int a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3

  v2 = *(_DWORD *)(result + 20);
  v3 = *(_DWORD *)(a2 + 20);
  if ( v2 <= v3 )
  {
    if ( v2 == v3 && (*(_BYTE *)(*(_DWORD *)(result + 24) + 1) & 1) != 0 )
    {
      if ( (*(_BYTE *)(*(_DWORD *)(a2 + 24) + 1) & 1) != 0 )
        return a2;
    }
    else
    {
      return a2;
    }
  }
  return result;
}
