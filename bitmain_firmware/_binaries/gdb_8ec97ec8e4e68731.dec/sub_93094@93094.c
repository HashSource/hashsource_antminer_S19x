void *__fastcall sub_93094(size_t a1, size_t size)
{
  size_t v2; // r4
  size_t v3; // r5
  bool v4; // zf
  void *result; // r0
  size_t v6; // r0

  v4 = size == 0;
  if ( size )
    v4 = a1 == 0;
  if ( v4 )
    v2 = 1;
  else
    v3 = a1;
  if ( v4 )
    v3 = v2;
  else
    v2 = size;
  result = calloc(v3, v2);
  if ( !result )
  {
    v6 = sub_258C1C(v2 * v3);
    return (void *)sub_930CC(v6);
  }
  return result;
}
