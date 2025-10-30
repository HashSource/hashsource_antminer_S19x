void __fastcall sub_87238(void *a1)
{
  if ( a1 )
  {
    sub_89984(0, "src/spec.c", 461, "zlog_spec_del[%p]", a1);
    free(a1);
  }
  else
  {
    sub_89984(2, "src/spec.c", 460, "a_spec is null or 0");
  }
}
