int __fastcall sub_80900(const void *a1)
{
  if ( !a1 )
    return sub_89984(2, "src/record_table.c", 34, "records is null or 0");
  sub_88C50(a1);
  return sub_89984(0, "src/record_table.c", 36, "zlog_record_table_del[%p]", a1);
}
