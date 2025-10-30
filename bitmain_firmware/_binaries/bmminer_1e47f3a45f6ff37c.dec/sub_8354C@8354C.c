void __fastcall sub_8354C(_DWORD *a1)
{
  if ( a1 )
  {
    if ( *a1 )
      sub_8BFE0(*a1);
    sub_8CD10(0, "src/mdc.c", 37, "zlog_mdc_del[%p]", a1);
    free(a1);
  }
  else
  {
    sub_8CD10(2, "src/mdc.c", 35, "a_mdc is null or 0");
  }
}
