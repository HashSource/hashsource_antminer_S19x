void __fastcall sub_8BBB0(void *a1)
{
  if ( a1 )
  {
    sub_89984(0, "src/level.c", 34, "zlog_level_del[%p]", a1);
    free(a1);
  }
  else
  {
    sub_89984(2, "src/level.c", 33, "a_level is null or 0");
  }
}
