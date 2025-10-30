int __fastcall sub_2B5768(_BYTE *a1, int a2, int a3)
{
  if ( (*a1 & 1) != 0 )
    return a2;
  if ( a3 )
  {
    if ( *(_BYTE *)(a3 + 12) != 2 && a2 >= 90 && (a2 <= 93 || a2 == 129) )
      return 107;
    return a2;
  }
  if ( a2 < 90 || a2 > 93 && a2 != 129 )
    return a2;
  return 108;
}
