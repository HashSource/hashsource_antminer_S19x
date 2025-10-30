int __fastcall sub_82F70(const void *a1)
{
  if ( !a1 )
    return sub_8CD10(2, "src/level_list.c", 37, "levels is null or 0");
  sub_8B980(a1);
  return sub_8CD10(0, "src/level_list.c", 39, "zc_level_list_del[%p]", a1);
}
