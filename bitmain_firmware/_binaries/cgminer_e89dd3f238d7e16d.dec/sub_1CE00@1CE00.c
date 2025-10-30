const char **__fastcall sub_1CE00(const char **result, const char *a2, int a3, const char *a4, const char *a5, int a6)
{
  char v6[4]; // [sp+30h] [bp-804h] BYREF

  if ( *(const char **)a2 != *result )
  {
    snprintf(
      v6,
      0x800u,
      "List %s can't %s() a %s item - from %s %s() line %d in %s %s():%d",
      *result,
      "_k_insert_after",
      *(const char **)a2,
      a4,
      a5,
      a6,
      "klist.c",
      "_k_insert_after",
      286);
    sub_1DB6C(3, v6, 1);
    sub_4B2A0(1);
  }
  if ( !a3 )
  {
    snprintf(
      v6,
      0x800u,
      "%s() (%s) can't after a null item - from %s %s() line %d in %s %s():%d",
      "_k_insert_after",
      *result,
      a4,
      a5,
      a6,
      "klist.c",
      "_k_insert_after",
      291);
    sub_1DB6C(3, v6, 1);
    sub_4B2A0(1);
  }
  *((_DWORD *)a2 + 1) = a3;
  *((_DWORD *)a2 + 2) = *(_DWORD *)(a3 + 8);
  if ( *(_DWORD *)(a3 + 8) )
  {
    *(_DWORD *)(*(_DWORD *)(a3 + 8) + 4) = a2;
  }
  else if ( *((_BYTE *)result + 44) )
  {
    result[4] = a2;
  }
  *(_DWORD *)(a3 + 8) = a2;
  ++result[7];
  ++result[8];
  return result;
}
