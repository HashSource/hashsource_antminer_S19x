void __fastcall sub_3A5FC(const char **a1, int a2, const char *a3, const char *a4, int a5)
{
  const char *v7; // r1
  int v10; // r3
  const char *v11; // r3
  const char *v12; // r3
  const char *v13; // r3
  bool v14; // zf
  __int64 v15; // r2
  int v16; // r3
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  v7 = *(const char **)a2;
  if ( v7 != *a1 )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() a %s item - from %s %s() line %d in %s %s():%d",
      *a1,
      "_k_add_tail",
      v7,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_add_tail",
      236);
    sub_3AF5C(3, s, 1, v10);
    nullsub_1();
  }
  if ( !*((_BYTE *)a1 + 44) )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() - do_tail is false - from %s %s() line %d in %s %s():%d",
      *a1,
      "_k_add_tail",
      a3,
      a4,
      a5,
      "klist.c",
      "_k_add_tail",
      241);
    sub_3AF5C(3, s, 1, v16);
    nullsub_1();
  }
  v11 = a1[4];
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 4) = v11;
  v12 = a1[4];
  if ( v12 )
    *((_DWORD *)v12 + 2) = a2;
  v13 = a1[3];
  a1[4] = (const char *)a2;
  v14 = v13 == 0;
  v15 = *(_QWORD *)(a1 + 7);
  if ( v14 )
    a1[3] = (const char *)a2;
  LODWORD(v15) = v15 + 1;
  ++HIDWORD(v15);
  *(_QWORD *)(a1 + 7) = v15;
}
