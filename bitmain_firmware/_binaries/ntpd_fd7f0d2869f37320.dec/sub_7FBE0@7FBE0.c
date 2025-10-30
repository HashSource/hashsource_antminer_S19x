void *__fastcall sub_7FBE0(size_t a1)
{
  void *result; // r0

  result = malloc(a1);
  if ( !result )
  {
    fprintf(stderr, off_B9468, a1);
    sub_7E2B8(1);
  }
  return result;
}
