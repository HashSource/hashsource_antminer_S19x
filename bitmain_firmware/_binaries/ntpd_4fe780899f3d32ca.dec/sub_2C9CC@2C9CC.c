unsigned __int8 *__fastcall sub_2C9CC(unsigned __int8 *a1)
{
  const unsigned __int16 *v2; // r1
  unsigned __int8 *v3; // r2
  unsigned __int8 *result; // r0

  v2 = *_ctype_b_loc();
  v3 = a1;
  do
    result = v3++;
  while ( (v2[*result] & 0x2000) != 0 );
  return result;
}
