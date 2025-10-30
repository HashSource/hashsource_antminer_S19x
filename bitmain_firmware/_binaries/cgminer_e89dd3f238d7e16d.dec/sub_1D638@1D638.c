int __fastcall sub_1D638(const char **a1, const char *a2, const char *a3, int a4)
{
  char v6[8]; // [sp+34h] [bp-808h] BYREF
  int i; // [sp+834h] [bp-8h]

  if ( *((_BYTE *)a1 + 4) )
  {
    snprintf(
      v6,
      0x800u,
      "List %s can't %s() a store - from %s %s() line %d in %s %s():%d",
      *a1,
      "_k_free_list",
      a2,
      a3,
      a4,
      "klist.c",
      "_k_free_list",
      400);
    sub_1DB6C(3, v6, 1);
    sub_4B2A0(1);
  }
  for ( i = 0; i < (int)a1[12]; ++i )
    free(*(void **)&a1[13][4 * i]);
  free((void *)a1[13]);
  for ( i = 0; i < (int)a1[14]; ++i )
    free(*(void **)&a1[15][4 * i]);
  free((void *)a1[15]);
  sub_1BBC8((int)a1[2]);
  free((void *)a1[2]);
  free(a1);
  return 0;
}
