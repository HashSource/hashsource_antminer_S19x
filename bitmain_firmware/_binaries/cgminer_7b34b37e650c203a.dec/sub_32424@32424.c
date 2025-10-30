int __fastcall sub_32424(int a1)
{
  int v3; // r4

  if ( *(_DWORD *)(a1 + 100) != 1 )
    return 0;
  if ( (unsigned int)(dword_68FD0 - 3) <= 1 || *(_BYTE *)(a1 + 640) && *(_BYTE *)(a1 + 97) )
    return 1;
  if ( a1 == sub_31FF4() )
    return 1;
  if ( *(_DWORD *)(a1 + 732) )
    return 1;
  if ( !dword_68FD0 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    if ( v3 < sub_3218C() )
      return 1;
  }
  return (unsigned __int8)byte_69064;
}
