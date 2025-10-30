bool __fastcall sub_326A0(int a1)
{
  if ( *(_BYTE *)(a1 + 97) )
    return 1;
  if ( *(_DWORD *)(a1 + 100) == 1 )
    return *(_BYTE *)(a1 + 640) && (*(_BYTE *)(a1 + 641) != 1 || *(_BYTE *)(a1 + 643) != 1);
  return 1;
}
