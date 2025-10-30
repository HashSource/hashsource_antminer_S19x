void __fastcall sub_3AFA0(const char **a1, const char *a2, int a3, const char *a4, const char *a5, int a6)
{
  int v10; // r3
  int v11; // r3
  const char *v12; // r3
  int v13; // r3
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( *(const char **)a2 != *a1 )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() a %s item - from %s %s() line %d in %s %s():%d",
      *a1,
      "_k_insert_after",
      *(const char **)a2,
      a4,
      a5,
      a6,
      "klist.c",
      "_k_insert_after",
      286);
    sub_3B6AC(3, s, 1, v10);
    nullsub_1();
  }
  if ( !a3 )
  {
    snprintf(
      s,
      0x800u,
      "%s() (%s) can't after a null item - from %s %s() line %d in %s %s():%d",
      "_k_insert_after",
      *a1,
      a4,
      a5,
      a6,
      "klist.c",
      "_k_insert_after",
      291);
    sub_3B6AC(3, s, 1, v13);
    nullsub_1();
  }
  *((_DWORD *)a2 + 1) = a3;
  *((_DWORD *)a2 + 2) = *(_DWORD *)(a3 + 8);
  v11 = *(_DWORD *)(a3 + 8);
  if ( v11 )
  {
    *(_DWORD *)(v11 + 4) = a2;
  }
  else if ( *((_BYTE *)a1 + 44) )
  {
    a1[4] = a2;
  }
  *(_DWORD *)(a3 + 8) = a2;
  v12 = a1[8];
  ++a1[7];
  a1[8] = v12 + 1;
}
