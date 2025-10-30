int __fastcall sub_5B9DC(void **a1)
{
  if ( !a1 )
    return -1;
  sub_581A4(*a1);
  free(a1[2]);
  free(a1);
  return 0;
}
