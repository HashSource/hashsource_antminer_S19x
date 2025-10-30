const char **__fastcall sub_1DB30(const char **result, int a2, const char *a3, const char *a4, int a5)
{
  char v5[4]; // [sp+30h] [bp-804h] BYREF

  if ( *result != *(const char **)a2 )
  {
    snprintf(
      v5,
      0x800u,
      "List %s can't %s() to a %s list - from %s %s() line %d in %s %s():%d",
      *result,
      "_k_list_transfer_to_head",
      *(const char **)a2,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_list_transfer_to_head",
      338);
    sub_1E4EC(3, v5, 1);
    sub_4BFB0(1);
  }
  if ( *((_BYTE *)result + 44) != 1 )
  {
    snprintf(
      v5,
      0x800u,
      "List %s can't %s() - do_tail is false - from %s %s() line %d in %s %s():%d",
      *result,
      "_k_list_transfer_to_head",
      a3,
      a4,
      a5,
      "klist.c",
      "_k_list_transfer_to_head",
      343);
    sub_1E4EC(3, v5, 1);
    sub_4BFB0(1);
  }
  if ( result[3] )
  {
    if ( *(_DWORD *)(a2 + 12) )
      *(_DWORD *)(*(_DWORD *)(a2 + 12) + 4) = result[4];
    else
      *(_DWORD *)(a2 + 16) = result[4];
    *((_DWORD *)result[4] + 2) = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a2 + 12) = result[3];
    result[4] = 0;
    result[3] = result[4];
    *(_DWORD *)(a2 + 28) += result[7];
    result[7] = 0;
    *(_DWORD *)(a2 + 32) += result[8];
    result[8] = 0;
  }
  return result;
}
