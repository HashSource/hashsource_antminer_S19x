int __fastcall sub_47A20(const char **ptr, const char *a2, const char *a3, int a4)
{
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( !*((_BYTE *)ptr + 4) )
  {
    snprintf(
      s,
      0x800u,
      "Store %s can't %s() the list - from %s %s() line %d in %s %s():%d",
      *ptr,
      "_k_free_store",
      a2,
      a3,
      a4,
      "klist.c",
      "_k_free_store",
      424);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  free(ptr);
  return 0;
}
