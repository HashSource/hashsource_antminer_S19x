int __fastcall sub_2A6B50(int a1, int a2)
{
  int v3; // r12

  if ( (*(_BYTE *)(a1 + 40) & 7) == 1 )
  {
    if ( (*(_BYTE *)(a1 + 40) & 8) != 0
      || (v3 = *(_DWORD *)(a1 + 4),
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 40) & 0xFE00001F | (32 * (a2 & 0xFFFFF)),
          (a2 & ~*(_DWORD *)(v3 + 16)) != 0) )
    {
      dword_48BBD0 = 5;
      return 0;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    dword_48BBD0 = 3;
    return 0;
  }
}
