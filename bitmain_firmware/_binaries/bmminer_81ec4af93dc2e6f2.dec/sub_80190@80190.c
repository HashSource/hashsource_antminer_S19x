void __fastcall sub_80190(_DWORD *a1)
{
  if ( a1 )
  {
    if ( *a1 )
      sub_88C50(*a1);
    sub_89984(0, "src/mdc.c", 37, "zlog_mdc_del[%p]", a1);
    free(a1);
  }
  else
  {
    sub_89984(2, "src/mdc.c", 35, "a_mdc is null or 0");
  }
}
