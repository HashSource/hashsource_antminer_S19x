int __fastcall sub_12051C(int a1, int a2)
{
  int v2; // r3

  if ( (*(_DWORD *)(a2 + 128) & 0x400) != 0 )
  {
    v2 = *(_DWORD *)(a1 + 128) & 2;
    if ( v2 )
    {
      if ( (*(_DWORD *)(a1 + 132) & 0x80) != 0 )
        return 0;
      else
        return 39;
    }
    return v2;
  }
  v2 = *(_DWORD *)(a1 + 128) & 2;
  if ( !v2 )
    return v2;
  if ( (*(_DWORD *)(a1 + 132) & 4) != 0 )
    return 0;
  else
    return 32;
}
