unsigned int *__fastcall sub_B394(unsigned int *result, unsigned int *a2)
{
  unsigned int v2; // r3
  bool v3; // nf
  unsigned int v4; // r1

  v2 = *a2;
  v3 = (*a2 & 0x80000000) != 0;
  *result = *a2;
  if ( v3 )
    v4 = __clz(v2);
  else
    v4 = 0;
  if ( v3 )
    v4 = (v4 >> 5) - 1;
  result[1] = v4;
  return result;
}
