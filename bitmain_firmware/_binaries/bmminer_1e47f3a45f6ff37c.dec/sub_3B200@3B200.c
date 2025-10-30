void __fastcall sub_3B200(const char **a1, int a2, const char *a3, const char *a4, int a5)
{
  int v9; // r3
  int v10; // r2
  const char *v11; // r3
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
      "_k_list_transfer_to_head",
      *(const char **)a2,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_list_transfer_to_head",
      338);
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
      "_k_list_transfer_to_head",
      a3,
      a4,
      a5,
      "klist.c",
      "_k_list_transfer_to_head",
      343);
    sub_3B6AC(3, s, 1, v13);
    nullsub_1();
  }
  if ( a1[3] )
  {
    v10 = *(_DWORD *)(a2 + 12);
    v11 = a1[4];
    if ( v10 )
      *(_DWORD *)(v10 + 4) = v11;
    else
      *(_DWORD *)(a2 + 16) = v11;
    if ( v10 )
      v10 = *(_DWORD *)(a2 + 12);
    *((_DWORD *)a1[4] + 2) = v10;
    *(_DWORD *)(a2 + 12) = a1[3];
    a1[4] = 0;
    v12 = a1[7];
    a1[3] = 0;
    *(_DWORD *)(a2 + 28) += v12;
    a1[7] = 0;
    *(_DWORD *)(a2 + 32) += a1[8];
    a1[8] = 0;
  }
}
