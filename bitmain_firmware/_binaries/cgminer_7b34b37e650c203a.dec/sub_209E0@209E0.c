const char *__fastcall sub_209E0(int a1, int a2, const char *a3, const char *a4, int a5)
{
  const char *result; // r0
  __int64 v7; // r2
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  result = *(const char **)a2;
  if ( *(_DWORD *)a2 != *(_DWORD *)a1 )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() a %s item - from %s %s() line %d in %s %s():%d",
      *(const char **)a1,
      "_k_unlink_item",
      result,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_unlink_item",
      312);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  v7 = *(_QWORD *)(a2 + 4);
  if ( (_DWORD)v7 )
  {
    *(_DWORD *)(v7 + 8) = HIDWORD(v7);
    HIDWORD(v7) = *(_DWORD *)(a2 + 8);
  }
  if ( HIDWORD(v7) )
    *(_DWORD *)(HIDWORD(v7) + 4) = *(_DWORD *)(a2 + 4);
  if ( *(_DWORD *)(a1 + 12) == a2 )
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 8);
  if ( *(_BYTE *)(a1 + 44) && *(_DWORD *)(a1 + 16) == a2 )
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 4) = 0;
  --*(_DWORD *)(a1 + 28);
  return result;
}
