const char **__fastcall sub_473E8(const char **result, int a2, int a3, const char *a4, const char *a5, int a6)
{
  const char *v7; // r1
  int v8; // r3
  __int64 v9; // r2
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  v7 = *(const char **)a2;
  if ( v7 != *result )
  {
    snprintf(
      s,
      0x800u,
      "List %s can't %s() a %s item - from %s %s() line %d in %s %s():%d",
      *result,
      "_k_insert_after",
      v7,
      a4,
      a5,
      a6,
      "klist.c",
      "_k_insert_after",
      286);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  if ( !a3 )
  {
    snprintf(
      s,
      0x800u,
      "%s() (%s) can't after a null item - from %s %s() line %d in %s %s():%d",
      "_k_insert_after",
      *result,
      a4,
      a5,
      a6,
      "klist.c",
      "_k_insert_after",
      291);
    sub_47AB4(3, s, 1);
    sub_62EC0(1);
  }
  *(_DWORD *)(a2 + 4) = a3;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a3 + 8);
  v8 = *(_DWORD *)(a3 + 8);
  if ( v8 )
  {
    *(_DWORD *)(v8 + 4) = a2;
  }
  else if ( *((_BYTE *)result + 44) )
  {
    result[4] = (const char *)a2;
  }
  *(_DWORD *)(a3 + 8) = a2;
  v9 = *(_QWORD *)(result + 7);
  LODWORD(v9) = v9 + 1;
  ++HIDWORD(v9);
  *(_QWORD *)(result + 7) = v9;
  return result;
}
