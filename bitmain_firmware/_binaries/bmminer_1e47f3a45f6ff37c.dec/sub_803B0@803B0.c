int __fastcall sub_803B0(int a1, int a2)
{
  int result; // r0
  int i; // [sp+1Ch] [bp-8h]
  int j; // [sp+1Ch] [bp-8h]

  if ( !a1 )
    return sub_8CD10(2, "src/conf.c", 44, "a_conf is null or 0");
  sub_8CD10(a2, "src/conf.c", 45, "-conf[%p]-", (const void *)a1);
  sub_8CD10(a2, "src/conf.c", 46, "--global--");
  sub_8CD10(a2, "src/conf.c", 47, "---file[%s],mtime[%s]---", (const char *)a1, (const char *)(a1 + 1025));
  sub_8CD10(a2, "src/conf.c", 48, "---strict init[%d]---", *(_DWORD *)(a1 + 1048));
  sub_8CD10(a2, "src/conf.c", 49, "---buffer min[%ld]---", *(_DWORD *)(a1 + 1052));
  sub_8CD10(a2, "src/conf.c", 50, "---buffer max[%ld]---", *(_DWORD *)(a1 + 1056));
  if ( *(_DWORD *)(a1 + 9264) )
  {
    sub_8CD10(a2, "src/conf.c", 52, "---default_format---");
    sub_82838(*(_DWORD *)(a1 + 9264), a2);
  }
  sub_8CD10(a2, "src/conf.c", 55, "---file perms[0%o]---", *(_DWORD *)(a1 + 9268));
  sub_8CD10(a2, "src/conf.c", 56, "---reload conf period[%ld]---", *(_DWORD *)(a1 + 9276));
  sub_8CD10(a2, "src/conf.c", 57, "---fsync period[%ld]---", *(_DWORD *)(a1 + 9272));
  result = sub_8CD10(a2, "src/conf.c", 59, "---rotate lock file[%s]---", (const char *)(a1 + 1060));
  if ( *(_DWORD *)(a1 + 5160) )
    result = sub_83DB0(*(_DWORD *)(a1 + 5160), a2);
  if ( *(_DWORD *)(a1 + 9280) )
    result = sub_82E8C(*(_DWORD *)(a1 + 9280), a2);
  if ( *(_DWORD *)(a1 + 9284) )
  {
    result = sub_8CD10(a2, "src/conf.c", 65, "--format list[%p]--", *(const void **)(a1 + 9284));
    for ( i = 0; *(_DWORD *)(*(_DWORD *)(a1 + 9284) + 4) > i; ++i )
      result = sub_82838(*(_DWORD *)(**(_DWORD **)(a1 + 9284) + 4 * i), a2);
  }
  if ( *(_DWORD *)(a1 + 9288) )
  {
    result = sub_8CD10(a2, "src/conf.c", 72, "--rule_list[%p]--", *(const void **)(a1 + 9288));
    for ( j = 0; *(_DWORD *)(*(_DWORD *)(a1 + 9288) + 4) > j; ++j )
      result = sub_85720(*(_DWORD *)(**(_DWORD **)(a1 + 9288) + 4 * j), a2);
  }
  return result;
}
