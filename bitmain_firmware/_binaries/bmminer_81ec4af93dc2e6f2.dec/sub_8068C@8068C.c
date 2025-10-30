void __fastcall sub_8068C(void *a1)
{
  if ( a1 )
  {
    sub_89984(0, "src/record.c", 22, "zlog_record_del[%p]", a1);
    free(a1);
  }
  else
  {
    sub_89984(2, "src/record.c", 21, "a_record is null or 0");
  }
}
