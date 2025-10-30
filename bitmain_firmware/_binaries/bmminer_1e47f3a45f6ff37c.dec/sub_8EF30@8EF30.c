void __fastcall sub_8EF30(void *a1)
{
  if ( a1 )
  {
    sub_8CD10(0, "src/level.c", 34, "zlog_level_del[%p]", a1);
    free(a1);
  }
  else
  {
    sub_8CD10(2, "src/level.c", 33, "a_level is null or 0");
  }
}
