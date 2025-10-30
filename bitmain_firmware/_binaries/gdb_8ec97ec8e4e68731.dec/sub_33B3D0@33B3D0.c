void *__fastcall sub_33B3D0(void *dest, const void *src, size_t n)
{
  if ( n == 1 )
  {
    *(_BYTE *)dest = *(_BYTE *)src;
  }
  else if ( n )
  {
    return j_memcpy(dest, src, n);
  }
  return dest;
}
