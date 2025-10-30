bool __fastcall sub_3F494(int a1)
{
  int v2; // r4

  if ( *(_DWORD *)(a1 + 100) != 1 )
    return 0;
  if ( dword_87E6C == 4 )
    return 1;
  if ( dword_87E6C == 3 )
    return 1;
  if ( *(_BYTE *)(a1 + 656) && *(_BYTE *)(a1 + 97) )
    return 1;
  if ( sub_2F984() == a1 )
    return 1;
  if ( *(_DWORD *)(a1 + 748) )
    return 1;
  if ( dword_87E6C )
    return byte_87FC1 != 0;
  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 >= sub_3F424() )
    return byte_87FC1 != 0;
  return 1;
}
