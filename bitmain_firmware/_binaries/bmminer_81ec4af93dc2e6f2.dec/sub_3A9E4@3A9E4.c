void __fastcall sub_3A9E4(int a1, int a2, const char *a3, const char *a4, int a5)
{
  int v7; // r3
  __int64 v8; // r2
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  if ( *(_DWORD *)a2 != *(_DWORD *)a1 )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() a %s item - from %s %s() line %d in %s %s():%d",
      *(const char **)a1,
      "_k_unlink_item",
      *(const char **)a2,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_unlink_item",
      312);
    sub_3AF5C(3, s, 1, v7);
    nullsub_1();
  }
  v8 = *(_QWORD *)(a2 + 4);
  if ( (_DWORD)v8 )
  {
    *(_DWORD *)(v8 + 8) = HIDWORD(v8);
    HIDWORD(v8) = *(_DWORD *)(a2 + 8);
  }
  if ( HIDWORD(v8) )
    *(_DWORD *)(HIDWORD(v8) + 4) = *(_DWORD *)(a2 + 4);
  if ( *(_DWORD *)(a1 + 12) == a2 )
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 8);
  if ( *(_BYTE *)(a1 + 44) && *(_DWORD *)(a1 + 16) == a2 )
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 4) = 0;
  --*(_DWORD *)(a1 + 28);
}
