bool __fastcall sub_4E818(int a1, int a2, int a3)
{
  char *v5; // r0
  _BOOL4 v6; // r3

  v5 = sub_4D77C();
  v6 = a3 <= 0;
  if ( !v5 )
    v6 = 1;
  return !v6
      && v5[2]
      && (-(unsigned __int8)v5[1] & a2) + (unsigned int)(unsigned __int8)v5[1] >= a3 + a2
      && ((a3 - 1) & a3) == 0;
}
