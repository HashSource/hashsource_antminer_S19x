bool __fastcall sub_1A2818(unsigned int a1)
{
  bool v1; // cc

  v1 = a1 > 0x20;
  if ( a1 != 32 )
    v1 = a1 - 9 > 3;
  return !v1;
}
