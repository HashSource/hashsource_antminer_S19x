int __fastcall sub_1D0EC(int a1, const char *a2, const char *a3, int a4)
{
  char v6[8]; // [sp+34h] [bp-808h] BYREF
  int v7; // [sp+834h] [bp-8h]

  if ( *(_BYTE *)(a1 + 44) != 1 )
  {
    snprintf(
      v6,
      0x800u,
      "List %s can't %s() - do_tail is false - from %s %s() line %d in %s %s():%d",
      *(const char **)a1,
      "_k_unlink_tail",
      a2,
      a3,
      a4,
      "klist.c",
      "_k_unlink_tail",
      181);
    sub_1E4EC(3, v6, 1);
    sub_4BFB0(1);
  }
  if ( !*(_DWORD *)(a1 + 16) )
    return 0;
  v7 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(v7 + 4);
  if ( *(_DWORD *)(a1 + 16) )
    *(_DWORD *)(*(_DWORD *)(a1 + 16) + 8) = 0;
  else
    *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 + 4) = *(_DWORD *)(v7 + 8);
  --*(_DWORD *)(a1 + 28);
  return v7;
}
