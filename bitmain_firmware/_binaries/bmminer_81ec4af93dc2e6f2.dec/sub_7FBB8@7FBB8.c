int __fastcall sub_7FBB8(const void *a1)
{
  if ( !a1 )
    return sub_89984(2, "src/level_list.c", 37, "levels is null or 0");
  sub_885E4(a1);
  return sub_89984(0, "src/level_list.c", 39, "zc_level_list_del[%p]", a1);
}
