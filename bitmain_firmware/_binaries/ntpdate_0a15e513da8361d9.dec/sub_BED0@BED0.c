_DWORD *__fastcall sub_BED0(_DWORD *result, int a2)
{
  int v2; // r3
  int v3; // r12
  unsigned int v4; // r2

  v2 = a2 + 10;
  v3 = a2 + 10 > 11;
  if ( a2 + 10 > 11 )
    v2 = a2 - 2;
  if ( (unsigned int)v2 > 0xB )
  {
    v4 = (v2 >> 31) ^ (((v2 >> 31) ^ (unsigned int)v2) / 0xC);
    v3 += v4;
    v2 -= 12 * v4;
  }
  *result = v3;
  result[1] = *(unsigned __int16 *)&a164640Feb52025[2 * v2 + 116] - 306;
  return result;
}
