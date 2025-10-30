int __fastcall sub_584B4(int a1)
{
  int v3; // r4

  if ( *(_DWORD *)(a1 + 100) != 1 )
    return 0;
  if ( (unsigned int)(dword_1AEEB8 - 3) <= 1 || *(_BYTE *)(a1 + 640) && *(_BYTE *)(a1 + 97) )
    return 1;
  if ( a1 == sub_58084() )
    return 1;
  if ( *(_DWORD *)(a1 + 732) )
    return 1;
  if ( !dword_1AEEB8 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    if ( v3 < sub_5821C() )
      return 1;
  }
  return (unsigned __int8)byte_1AF130;
}
