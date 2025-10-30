int __fastcall sub_2A7AA0(int result)
{
  int v1; // r3

  if ( result )
  {
    if ( (*(_BYTE *)(result + 40) & 7) != 1 )
      return 0;
    v1 = *(_DWORD *)(*(_DWORD *)(result + 4) + 4);
    if ( v1 == 3 )
    {
      return *(_DWORD *)(*(_DWORD *)(result + 160) + 24);
    }
    else
    {
      if ( v1 != 5 )
        return 0;
      return *(_DWORD *)(*(_DWORD *)(result + 160) + 524);
    }
  }
  return result;
}
