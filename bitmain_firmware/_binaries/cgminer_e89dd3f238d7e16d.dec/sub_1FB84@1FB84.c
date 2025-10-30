const char *__fastcall sub_1FB84(char *a1)
{
  int i; // [sp+Ch] [bp-8h]

  for ( i = 0; (&off_85A0C)[2 * i]; ++i )
  {
    if ( a1 == (&off_85A0C)[2 * i + 1] )
      return (&off_85A0C)[2 * i];
  }
  return "invalid";
}
