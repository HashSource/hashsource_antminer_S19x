bool __fastcall sub_337A8(int a1)
{
  if ( *(_BYTE *)(a1 + 97) )
    return 1;
  if ( *(_DWORD *)(a1 + 100) == 1 )
    return *(_BYTE *)(a1 + 656) && (*(_BYTE *)(a1 + 657) != 1 || *(_BYTE *)(a1 + 659) != 1);
  return 1;
}
