void **__fastcall sub_7EF98(void **result, const void *a2, size_t a3)
{
  void **v3; // r4

  v3 = result;
  if ( a2 )
    result = (void **)memcpy(*result, a2, a3);
  v3[4] = (void *)a3;
  v3[3] = 0;
  return result;
}
