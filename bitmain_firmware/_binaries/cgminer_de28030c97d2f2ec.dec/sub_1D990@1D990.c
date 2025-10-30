int __fastcall sub_1D990(int result, int a2, const char *a3, const char *a4, int a5)
{
  char v5[4]; // [sp+30h] [bp-804h] BYREF

  if ( *(_DWORD *)a2 != *(_DWORD *)result )
  {
    snprintf(
      v5,
      0x800u,
      "List %s can't %s() a %s item - from %s %s() line %d in %s %s():%d",
      *(const char **)result,
      "_k_unlink_item",
      *(const char **)a2,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_unlink_item",
      312);
    sub_1E4EC(3, v5, 1);
    sub_4BFB0(1);
  }
  if ( *(_DWORD *)(a2 + 4) )
    *(_DWORD *)(*(_DWORD *)(a2 + 4) + 8) = *(_DWORD *)(a2 + 8);
  if ( *(_DWORD *)(a2 + 8) )
    *(_DWORD *)(*(_DWORD *)(a2 + 8) + 4) = *(_DWORD *)(a2 + 4);
  if ( *(_DWORD *)(result + 12) == a2 )
    *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 8);
  if ( *(_BYTE *)(result + 44) && *(_DWORD *)(result + 16) == a2 )
    *(_DWORD *)(result + 16) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a2 + 8);
  --*(_DWORD *)(result + 28);
  return result;
}
