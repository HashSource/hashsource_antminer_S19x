int __fastcall sub_758B0(const void *a1, size_t a2, size_t a3, FILE *stream, size_t *a5)
{
  size_t v9; // r5
  int result; // r0
  int *v11; // r0

  clearerr(stream);
  v9 = fwrite(a1, a2, a3, stream);
  if ( a3 == v9 )
  {
    result = 0;
  }
  else
  {
    v11 = _errno_location();
    result = sub_7A990(*v11, "./../lib/isc/unix/stdio.c", 91);
  }
  if ( a5 )
    *a5 = v9;
  return result;
}
