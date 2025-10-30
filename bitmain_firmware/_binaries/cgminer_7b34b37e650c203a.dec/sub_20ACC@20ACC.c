const char *__fastcall sub_20ACC(const char **a1, int a2, const char *a3, const char *a4, int a5)
{
  const char *result; // r0
  const char *v8; // r1
  int v9; // r2
  const char *v10; // r3
  const char *v11; // r1
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  result = *a1;
  v8 = *(const char **)a2;
  if ( result != v8 )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() to a %s list - from %s %s() line %d in %s %s():%d",
      result,
      "_k_list_transfer_to_head",
      v8,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_list_transfer_to_head",
      338);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
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
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  if ( a1[3] )
  {
    v9 = *(_DWORD *)(a2 + 12);
    v10 = a1[4];
    if ( v9 )
      *(_DWORD *)(v9 + 4) = v10;
    else
      *(_DWORD *)(a2 + 16) = v10;
    if ( v9 )
      v9 = *(_DWORD *)(a2 + 12);
    *((_DWORD *)a1[4] + 2) = v9;
    *(_DWORD *)(a2 + 12) = a1[3];
    a1[4] = 0;
    v11 = a1[7];
    a1[3] = 0;
    *(_DWORD *)(a2 + 28) += v11;
    a1[7] = 0;
    *(_DWORD *)(a2 + 32) += a1[8];
    a1[8] = 0;
  }
  return result;
}
