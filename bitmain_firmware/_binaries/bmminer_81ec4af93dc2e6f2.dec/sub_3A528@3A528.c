void __fastcall sub_3A528(int a1, int a2, const char *a3, const char *a4, int a5)
{
  int v7; // r3
  int v8; // r3
  int v9; // r3
  __int64 v10; // r2
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  if ( *(_DWORD *)a2 != *(_DWORD *)a1 )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() a %s item - from %s %s() line %d in %s %s():%d",
      *(const char **)a1,
      "_k_add_head",
      *(const char **)a2,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_add_head",
      205);
    sub_3AF5C(3, s, 1, v7);
    nullsub_1();
  }
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 12);
  v8 = *(_DWORD *)(a1 + 12);
  if ( v8 )
    *(_DWORD *)(v8 + 4) = a2;
  v9 = *(unsigned __int8 *)(a1 + 44);
  *(_DWORD *)(a1 + 12) = a2;
  if ( v9 && !*(_DWORD *)(a1 + 16) )
    *(_DWORD *)(a1 + 16) = a2;
  v10 = *(_QWORD *)(a1 + 28);
  LODWORD(v10) = v10 + 1;
  ++HIDWORD(v10);
  *(_QWORD *)(a1 + 28) = v10;
}
