void __fastcall sub_823F4(void **a1)
{
  if ( a1 )
  {
    if ( a1[93] )
      free(a1[93]);
    sub_8CD10(0, "src/event.c", 50, "zlog_event_del[%p]", a1);
    free(a1);
  }
  else
  {
    sub_8CD10(2, "src/event.c", 48, "a_event is null or 0");
  }
}
