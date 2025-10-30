int __fastcall sub_7FAD4(_DWORD *a1, int a2)
{
  int result; // r0
  int v5; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  if ( !a1 )
    return sub_89984(2, "src/level_list.c", 25, "levels is null or 0");
  result = sub_89984(a2, "src/level_list.c", 26, "--level_list[%p]--", a1);
  for ( i = 0; i < a1[1]; ++i )
  {
    v5 = *(_DWORD *)(*a1 + 4 * i);
    if ( v5 )
      result = sub_8BAFC(v5, a2);
  }
  return result;
}
