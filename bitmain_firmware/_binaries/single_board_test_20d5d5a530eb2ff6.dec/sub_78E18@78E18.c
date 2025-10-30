int __fastcall sub_78E18(void *buf, size_t n, int *a3)
{
  if ( write(*a3, buf, n) == n )
    return 0;
  else
    return -1;
}
