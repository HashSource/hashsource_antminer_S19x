void __fastcall sub_3A748(const char **a1, int a2, int a3, const char *a4, const char *a5, int a6)
{
  const char *v8; // r1
  int v11; // r3
  int v12; // r3
  __int64 v13; // r2
  int v14; // r3
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  v8 = *(const char **)a2;
  if ( v8 != *a1 )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() a %s item - from %s %s() line %d in %s %s():%d",
      *a1,
      "_k_insert_before",
      v8,
      a4,
      a5,
      a6,
      "klist.c",
      "_k_insert_before",
      262);
    sub_3AF5C(3, s, 1, v11);
    nullsub_1();
  }
  if ( !a3 )
  {
    snprintf(
      s,
      0x800u,
      "%s() (%s) can't before a null item - from %s %s() line %d in %s %s():%d",
      "_k_insert_before",
      *a1,
      a4,
      a5,
      a6,
      "klist.c",
      "_k_insert_before",
      267);
    sub_3AF5C(3, s, 1, v14);
    nullsub_1();
  }
  *(_DWORD *)(a2 + 8) = a3;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a3 + 4);
  v12 = *(_DWORD *)(a3 + 4);
  if ( v12 )
    *(_DWORD *)(v12 + 8) = a2;
  else
    a1[3] = (const char *)a2;
  *(_DWORD *)(a3 + 4) = a2;
  v13 = *(_QWORD *)(a1 + 7);
  LODWORD(v13) = v13 + 1;
  ++HIDWORD(v13);
  *(_QWORD *)(a1 + 7) = v13;
}
