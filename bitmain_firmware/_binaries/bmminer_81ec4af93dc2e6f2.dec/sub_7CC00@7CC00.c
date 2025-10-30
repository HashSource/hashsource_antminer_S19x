int __fastcall sub_7CC00(const void *a1)
{
  if ( !a1 )
    return sub_89984(2, "src/category_table.c", 34, "categories is null or 0");
  sub_88C50(a1);
  return sub_89984(0, "src/category_table.c", 36, "zlog_category_table_del[%p]", a1);
}
