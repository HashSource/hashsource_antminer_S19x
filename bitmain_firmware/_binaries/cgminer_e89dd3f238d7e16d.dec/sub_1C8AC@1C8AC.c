int __fastcall sub_1C8AC(int result, int a2, const char *a3, const char *a4, int a5)
{
  char v5[4]; // [sp+30h] [bp-804h] BYREF

  if ( *(_DWORD *)a2 != *(_DWORD *)result )
  {
    snprintf(
      v5,
      0x800u,
      "List %s can't %s() a %s item - from %s %s() line %d in %s %s():%d",
      *(const char **)result,
      "_k_add_head",
      *(const char **)a2,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_add_head",
      205);
    sub_1DB6C(3, v5, 1);
    sub_4B2A0(1);
  }
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(result + 12);
  if ( *(_DWORD *)(result + 12) )
    *(_DWORD *)(*(_DWORD *)(result + 12) + 4) = a2;
  *(_DWORD *)(result + 12) = a2;
  if ( *(_BYTE *)(result + 44) && !*(_DWORD *)(result + 16) )
    *(_DWORD *)(result + 16) = a2;
  ++*(_DWORD *)(result + 28);
  ++*(_DWORD *)(result + 32);
  return result;
}
