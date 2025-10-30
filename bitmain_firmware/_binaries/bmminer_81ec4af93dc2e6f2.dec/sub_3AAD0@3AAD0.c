void __fastcall sub_3AAD0(const char **a1, int a2, const char *a3, const char *a4, int a5)
{
  const char *v7; // r0
  const char *v9; // r1
  int v11; // r3
  int v12; // r2
  const char *v13; // r3
  const char *v14; // r1
  int v15; // r3
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  v7 = *a1;
  v9 = *(const char **)a2;
  if ( v7 != v9 )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() to a %s list - from %s %s() line %d in %s %s():%d",
      v7,
      "_k_list_transfer_to_head",
      v9,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_list_transfer_to_head",
      338);
    sub_3AF5C(3, s, 1, v11);
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
    sub_3AF5C(3, s, 1, v15);
    nullsub_1();
  }
  if ( a1[3] )
  {
    v12 = *(_DWORD *)(a2 + 12);
    v13 = a1[4];
    if ( v12 )
      *(_DWORD *)(v12 + 4) = v13;
    else
      *(_DWORD *)(a2 + 16) = v13;
    if ( v12 )
      v12 = *(_DWORD *)(a2 + 12);
    *((_DWORD *)a1[4] + 2) = v12;
    *(_DWORD *)(a2 + 12) = a1[3];
    a1[4] = 0;
    v14 = a1[7];
    a1[3] = 0;
    *(_DWORD *)(a2 + 28) += v14;
    a1[7] = 0;
    *(_DWORD *)(a2 + 32) += a1[8];
    a1[8] = 0;
  }
}
