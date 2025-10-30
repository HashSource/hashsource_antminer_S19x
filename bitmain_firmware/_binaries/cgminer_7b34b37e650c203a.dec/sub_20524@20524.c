const char *__fastcall sub_20524(int a1, int a2, const char *a3, const char *a4, int a5)
{
  const char *result; // r0
  int v7; // r3
  int v8; // r3
  __int64 v9; // r2
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  result = *(const char **)a2;
  if ( *(_DWORD *)a2 != *(_DWORD *)a1 )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() a %s item - from %s %s() line %d in %s %s():%d",
      *(const char **)a1,
      "_k_add_head",
      result,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_add_head",
      205);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 12);
  v7 = *(_DWORD *)(a1 + 12);
  if ( v7 )
    *(_DWORD *)(v7 + 4) = a2;
  v8 = *(unsigned __int8 *)(a1 + 44);
  *(_DWORD *)(a1 + 12) = a2;
  if ( v8 && !*(_DWORD *)(a1 + 16) )
    *(_DWORD *)(a1 + 16) = a2;
  v9 = *(_QWORD *)(a1 + 28);
  LODWORD(v9) = v9 + 1;
  ++HIDWORD(v9);
  *(_QWORD *)(a1 + 28) = v9;
  return result;
}
