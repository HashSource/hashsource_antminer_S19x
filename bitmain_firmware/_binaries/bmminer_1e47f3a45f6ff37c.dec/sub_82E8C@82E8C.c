int __fastcall sub_82E8C(_DWORD *a1, int a2)
{
  int result; // r0
  int v5; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  if ( !a1 )
    return sub_8CD10(2, "src/level_list.c", 25, "levels is null or 0");
  result = sub_8CD10(a2, "src/level_list.c", 26, "--level_list[%p]--", a1);
  for ( i = 0; a1[1] > i; ++i )
  {
    v5 = *(_DWORD *)(*a1 + 4 * i);
    if ( v5 )
      result = sub_8EE7C(v5, a2);
  }
  return result;
}
