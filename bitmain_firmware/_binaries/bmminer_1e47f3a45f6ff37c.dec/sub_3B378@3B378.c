void __fastcall sub_3B378(const char **a1, int a2, const char *a3, const char *a4, int a5)
{
  int v9; // r3
  const char *v10; // r3
  int v11; // r2
  const char *v12; // r1
  int v13; // r3
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( *a1 != *(const char **)a2 )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() to a %s list - from %s %s() line %d in %s %s():%d",
      *a1,
      "_k_list_transfer_to_tail",
      *(const char **)a2,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_list_transfer_to_tail",
      368);
    sub_3B6AC(3, s, 1, v9);
    nullsub_1();
  }
  if ( !*((_BYTE *)a1 + 44) )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() - do_tail is false - from %s %s() line %d in %s %s():%d",
      *a1,
      "_k_list_transfer_to_tail",
      a3,
      a4,
      a5,
      "klist.c",
      "_k_list_transfer_to_tail",
      373);
    sub_3B6AC(3, s, 1, v13);
    nullsub_1();
  }
  v10 = a1[3];
  if ( v10 )
  {
    v11 = *(_DWORD *)(a2 + 16);
    if ( v11 )
      *(_DWORD *)(v11 + 8) = v10;
    else
      *(_DWORD *)(a2 + 12) = v10;
    if ( v11 )
      v11 = *(_DWORD *)(a2 + 16);
    *((_DWORD *)a1[3] + 1) = v11;
    *(_DWORD *)(a2 + 16) = a1[4];
    a1[4] = 0;
    v12 = a1[7];
    a1[3] = 0;
    *(_DWORD *)(a2 + 28) += v12;
    a1[7] = 0;
    *(_DWORD *)(a2 + 32) += a1[8];
    a1[8] = 0;
  }
}
