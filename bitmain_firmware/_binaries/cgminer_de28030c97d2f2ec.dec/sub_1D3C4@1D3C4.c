const char **__fastcall sub_1D3C4(const char **result, const char *a2, const char *a3, const char *a4, int a5)
{
  char v5[4]; // [sp+30h] [bp-804h] BYREF

  if ( *(const char **)a2 != *result )
  {
    snprintf(
      v5,
      0x800u,
      "List %s can't %s() a %s item - from %s %s() line %d in %s %s():%d",
      *result,
      "_k_add_tail",
      *(const char **)a2,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_add_tail",
      236);
    sub_1E4EC(3, v5, 1);
    sub_4BFB0(1);
  }
  if ( *((_BYTE *)result + 44) != 1 )
  {
    snprintf(
      v5,
      0x800u,
      "List %s can't %s() - do_tail is false - from %s %s() line %d in %s %s():%d",
      *result,
      "_k_add_tail",
      a3,
      a4,
      a5,
      "klist.c",
      "_k_add_tail",
      241);
    sub_1E4EC(3, v5, 1);
    sub_4BFB0(1);
  }
  *((_DWORD *)a2 + 1) = result[4];
  *((_DWORD *)a2 + 2) = 0;
  if ( result[4] )
    *((_DWORD *)result[4] + 2) = a2;
  result[4] = a2;
  if ( !result[3] )
    result[3] = a2;
  ++result[7];
  ++result[8];
  return result;
}
