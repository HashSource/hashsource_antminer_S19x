int __fastcall sub_83CB8(const void *a1)
{
  if ( !a1 )
    return sub_8CD10(2, "src/record_table.c", 34, "records is null or 0");
  sub_8BFE0(a1);
  return sub_8CD10(0, "src/record_table.c", 36, "zlog_record_table_del[%p]", a1);
}
