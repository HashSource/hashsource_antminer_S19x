void __fastcall sub_8A33C(void **a1)
{
  if ( *a1 )
    free(*a1);
  sub_89984(0, "src/buf.c", 82, "zlog_buf_del[%p]", a1);
  free(a1);
}
