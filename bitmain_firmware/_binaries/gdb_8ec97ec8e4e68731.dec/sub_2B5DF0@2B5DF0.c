int __fastcall sub_2B5DF0(int a1)
{
  if ( a1 == 32 )
    return 3;
  if ( a1 == 64 )
    return 5;
  if ( (unsigned int)(a1 - 4) <= 1 )
    return 2;
  if ( a1 <= 31 )
    return 1;
  if ( (a1 & 1) != 0 )
    return 2;
  return 1;
}
