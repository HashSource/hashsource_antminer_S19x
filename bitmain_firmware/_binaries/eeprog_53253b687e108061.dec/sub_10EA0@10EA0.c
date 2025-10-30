unsigned int __fastcall sub_10EA0(const char *a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int result; // r0
  char *v6; // r3
  char *endptr; // [sp+4h] [bp-8h] BYREF

  result = strtoul(a1, &endptr, 0);
  v6 = endptr;
  *a2 = result;
  if ( *v6 == 58 )
  {
    endptr = v6 + 1;
    result = strtoul(v6 + 1, 0, 0);
    *a3 = result;
  }
  return result;
}
