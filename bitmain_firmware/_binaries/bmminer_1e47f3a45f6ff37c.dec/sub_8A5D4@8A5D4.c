void __fastcall sub_8A5D4(void *a1)
{
  if ( a1 )
  {
    sub_8CD10(0, "src/spec.c", 461, "zlog_spec_del[%p]", a1);
    free(a1);
  }
  else
  {
    sub_8CD10(2, "src/spec.c", 460, "a_spec is null or 0");
  }
}
