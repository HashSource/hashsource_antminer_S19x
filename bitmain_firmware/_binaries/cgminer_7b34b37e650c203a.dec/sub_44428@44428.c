int __fastcall sub_44428(void *buf, size_t n, int *a3)
{
  int result; // r0

  result = n - write(*a3, buf, n);
  if ( result )
    return -1;
  return result;
}
