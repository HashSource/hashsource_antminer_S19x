void __fastcall sub_3AC40(const char **a1, int a2, const char *a3, const char *a4, int a5)
{
  const char *v7; // r0
  const char *v9; // r1
  int v11; // r3
  const char *v12; // r3
  int v13; // r2
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
      "_k_list_transfer_to_tail",
      v9,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_list_transfer_to_tail",
      368);
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
      "_k_list_transfer_to_tail",
      a3,
      a4,
      a5,
      "klist.c",
      "_k_list_transfer_to_tail",
      373);
    sub_3AF5C(3, s, 1, v15);
    nullsub_1();
  }
  v12 = a1[3];
  if ( v12 )
  {
    v13 = *(_DWORD *)(a2 + 16);
    if ( v13 )
      *(_DWORD *)(v13 + 8) = v12;
    else
      *(_DWORD *)(a2 + 12) = v12;
    if ( v13 )
      v13 = *(_DWORD *)(a2 + 16);
    *((_DWORD *)a1[3] + 1) = v13;
    *(_DWORD *)(a2 + 16) = a1[4];
    a1[4] = 0;
    v14 = a1[7];
    a1[3] = 0;
    *(_DWORD *)(a2 + 28) += v14;
    a1[7] = 0;
    *(_DWORD *)(a2 + 32) += a1[8];
    a1[8] = 0;
  }
}
