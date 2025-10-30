size_t __fastcall sub_11DF58(FILE *s, void *ptr, size_t a3)
{
  size_t result; // r0

  result = fwrite(ptr, 1u, a3, s);
  if ( a3 != result )
    sub_946E0("couldn't data write to file");
  return result;
}
