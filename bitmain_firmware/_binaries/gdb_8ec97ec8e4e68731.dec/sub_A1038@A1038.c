bool __fastcall sub_A1038(int a1)
{
  if ( !a1 || **(_BYTE **)(a1 + 24) != 3 )
    return 0;
  if ( sub_172888(a1, "P_BOUNDS", 1) || sub_172888(a1, "P_ARRAY", 1) )
    return !sub_A0C94(a1);
  return 0;
}
