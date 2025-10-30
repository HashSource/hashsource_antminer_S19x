void __fastcall sub_828D0(_DWORD *a1)
{
  if ( a1 )
  {
    if ( a1[2049] )
      sub_8B980(a1[2049]);
    sub_8CD10(0, "src/format.c", 49, "zlog_format_del[%p]", a1);
    free(a1);
  }
  else
  {
    sub_8CD10(2, "src/format.c", 45, "a_format is null or 0");
  }
}
