const char **__fastcall sub_205F8(const char **result, int a2, const char *a3, const char *a4, int a5)
{
  const char *v6; // r1
  const char *v7; // r3
  const char *v8; // r3
  const char *v9; // r3
  bool v10; // zf
  __int64 v11; // r2
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  v6 = *(const char **)a2;
  if ( v6 != *result )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() a %s item - from %s %s() line %d in %s %s():%d",
      *result,
      "_k_add_tail",
      v6,
      a3,
      a4,
      a5,
      "klist.c",
      "_k_add_tail",
      236);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  if ( !*((_BYTE *)result + 44) )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() - do_tail is false - from %s %s() line %d in %s %s():%d",
      *result,
      "_k_add_tail",
      a3,
      a4,
      a5,
      "klist.c",
      "_k_add_tail",
      241);
    sub_20F58(3, s, 1);
    sub_3EBA0(1);
  }
  v7 = result[4];
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 4) = v7;
  v8 = result[4];
  if ( v8 )
    *((_DWORD *)v8 + 2) = a2;
  v9 = result[3];
  result[4] = (const char *)a2;
  v10 = v9 == 0;
  v11 = *(_QWORD *)(result + 7);
  if ( v10 )
    result[3] = (const char *)a2;
  LODWORD(v11) = v11 + 1;
  ++HIDWORD(v11);
  *(_QWORD *)(result + 7) = v11;
  return result;
}
