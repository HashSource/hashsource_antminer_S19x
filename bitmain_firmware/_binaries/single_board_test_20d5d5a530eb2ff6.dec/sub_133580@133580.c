_DWORD *__fastcall sub_133580(_DWORD *result)
{
  int v1; // r3
  int v2; // r2

  v1 = result[1];
  v2 = result[2];
  if ( v1 < v2 )
    return j_memset((void *)(*result + 4 * v1), 0, 4 * (v2 - v1));
  return result;
}
