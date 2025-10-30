void __fastcall sub_83A44(void *a1)
{
  if ( a1 )
  {
    sub_8CD10(0, "src/record.c", 22, "zlog_record_del[%p]", a1);
    free(a1);
  }
  else
  {
    sub_8CD10(2, "src/record.c", 21, "a_record is null or 0");
  }
}
