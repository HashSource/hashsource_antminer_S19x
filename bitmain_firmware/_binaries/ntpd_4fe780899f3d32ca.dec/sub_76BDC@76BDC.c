size_t __fastcall sub_76BDC(time_t *a1, char *a2, size_t a3)
{
  struct tm *v5; // r0
  size_t result; // r0
  time_t v7; // [sp+0h] [bp-8h] BYREF

  if ( !a3 )
    sub_6ECC0((int)"./../lib/isc/unix/time.c", 415, 0, "len > 0");
  v7 = *a1;
  v5 = gmtime(&v7);
  result = strftime(a2, a3, "%Y-%m-%dT%H:%M:%SZ", v5);
  if ( a3 <= result )
    sub_6ECC0((int)"./../lib/isc/unix/time.c", 419, 2, "flen < len");
  return result;
}
