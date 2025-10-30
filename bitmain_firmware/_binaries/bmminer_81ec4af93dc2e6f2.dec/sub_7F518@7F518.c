void __fastcall sub_7F518(_DWORD *a1)
{
  if ( a1 )
  {
    if ( a1[2049] )
      sub_885E4(a1[2049]);
    sub_89984(0, "src/format.c", 49, "zlog_format_del[%p]", a1);
    free(a1);
  }
  else
  {
    sub_89984(2, "src/format.c", 45, "a_format is null or 0");
  }
}
