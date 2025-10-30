const char *__fastcall sub_20460(char *a1)
{
  int i; // [sp+Ch] [bp-8h]

  for ( i = 0; (&off_86BA4)[2 * i]; ++i )
  {
    if ( (&off_86BA4)[2 * i + 1] == a1 )
      return (&off_86BA4)[2 * i];
  }
  return "invalid";
}
