int __fastcall sub_1197C(void *buf, size_t n, int *a3)
{
  if ( write(*a3, buf, n) == n )
    return 0;
  else
    return -1;
}
