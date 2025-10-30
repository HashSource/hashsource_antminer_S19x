char *__fastcall sub_54718(const char *a1, int *a2)
{
  char *endptr; // [sp+Ch] [bp-8h] BYREF

  *_errno_location() = 0;
  *a2 = strtol(a1, &endptr, 0);
  if ( *endptr || !*a1 )
    return sub_54310("'%s' is not a number", a1);
  if ( *_errno_location() )
    return sub_54310("'%s' is out of range", a1);
  return 0;
}
