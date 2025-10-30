void __fastcall sub_8D6D0(void **a1)
{
  if ( *a1 )
    free(*a1);
  sub_8CD10(0, "src/buf.c", 82, "zlog_buf_del[%p]", a1);
  free(a1);
}
