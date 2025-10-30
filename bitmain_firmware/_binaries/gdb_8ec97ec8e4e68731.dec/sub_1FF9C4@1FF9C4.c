bool __fastcall sub_1FF9C4(int a1, int a2)
{
  if ( !*(_DWORD *)(a1 + 12) || !*(_DWORD *)(a2 + 4) )
    return 0;
  if ( *(_BYTE *)(a1 + 4) )
    return sub_1FF92C(a1, a2);
  return sub_1FF89C(a1, a2);
}
