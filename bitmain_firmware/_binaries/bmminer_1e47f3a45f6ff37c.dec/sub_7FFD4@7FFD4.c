int __fastcall sub_7FFD4(const void *a1)
{
  if ( !a1 )
    return sub_8CD10(2, "src/category_table.c", 34, "categories is null or 0");
  sub_8BFE0(a1);
  return sub_8CD10(0, "src/category_table.c", 36, "zlog_category_table_del[%p]", a1);
}
