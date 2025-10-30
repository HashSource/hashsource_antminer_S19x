char *__fastcall sub_64404(const char *a1, int *a2)
{
  int *v4; // r5
  int v5; // r0
  char *v6; // r3
  char *result; // r0
  char *endptr; // [sp+4h] [bp-4h] BYREF

  v4 = _errno_location();
  *v4 = 0;
  v5 = strtol(a1, &endptr, 0);
  v6 = endptr;
  *a2 = v5;
  if ( *v6 || !*a1 )
    return sub_64250("'%s' is not a number", a1);
  result = (char *)*v4;
  if ( *v4 )
    return sub_64250("'%s' is out of range", a1);
  return result;
}
