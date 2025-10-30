size_t __fastcall sub_6ACD4(const void *a1, size_t a2, FILE *s)
{
  size_t result; // r0

  result = fwrite(a1, a2, 1u, s) - 1;
  if ( result )
    return -1;
  return result;
}
