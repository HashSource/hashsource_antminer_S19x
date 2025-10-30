void *__fastcall sub_3445A8(void *dest, const void *src, size_t n)
{
  if ( n == 1 )
  {
    *(_BYTE *)dest = *(_BYTE *)src;
  }
  else if ( n )
  {
    return j_memmove(dest, src, n);
  }
  return dest;
}
