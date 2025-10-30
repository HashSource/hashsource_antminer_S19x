int __fastcall sub_1D7E8(const char **a1, const char *a2, const char *a3, int a4)
{
  char v5[4]; // [sp+30h] [bp-804h] BYREF

  if ( *((_BYTE *)a1 + 4) != 1 )
  {
    snprintf(
      v5,
      0x800u,
      "Store %s can't %s() the list - from %s %s() line %d in %s %s():%d",
      *a1,
      "_k_free_store",
      a2,
      a3,
      a4,
      "klist.c",
      "_k_free_store",
      424);
    sub_1DB6C(3, v5, 1);
    sub_4B2A0(1);
  }
  free(a1);
  return 0;
}
