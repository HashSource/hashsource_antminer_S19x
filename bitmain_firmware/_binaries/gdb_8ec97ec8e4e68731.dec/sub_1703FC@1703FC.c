char *__fastcall sub_1703FC(int a1, char a2)
{
  if ( (a2 & 4) != 0 )
    return "code";
  if ( (a2 & 8) != 0 )
    return "data";
  if ( (a2 & 0x30) == 0 )
    return 0;
  if ( ((int (*)(void))loc_16ACAC)() )
    JUMPOUT(0x16ACF8);
  return 0;
}
