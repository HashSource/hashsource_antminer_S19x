bool __fastcall sub_3E610(int a1)
{
  int v2; // r4

  if ( *(_DWORD *)(a1 + 100) != 1 )
    return 0;
  if ( dword_86CD4 == 4 )
    return 1;
  if ( dword_86CD4 == 3 )
    return 1;
  if ( *(_BYTE *)(a1 + 640) && *(_BYTE *)(a1 + 97) )
    return 1;
  if ( sub_2E98C() == a1 )
    return 1;
  if ( *(_DWORD *)(a1 + 732) )
    return 1;
  if ( dword_86CD4 )
    return byte_86E29 != 0;
  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 >= sub_3E5A0() )
    return byte_86E29 != 0;
  return 1;
}
