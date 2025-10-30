size_t __fastcall sub_1A1AC(time_t *a1, char *a2, size_t a3)
{
  struct tm *v5; // r0
  size_t result; // r0
  time_t v7; // [sp+0h] [bp-8h] BYREF

  if ( !a3 )
    sub_10C38();
  v7 = *a1;
  v5 = gmtime(&v7);
  result = strftime(a2, a3, "%Y-%m-%dT%H:%M:%SZ", v5);
  if ( a3 <= result )
    sub_10C38();
  return result;
}
