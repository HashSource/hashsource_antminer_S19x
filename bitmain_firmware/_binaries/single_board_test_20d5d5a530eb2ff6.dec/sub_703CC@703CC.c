_DWORD *__fastcall sub_703CC(int a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = calloc(0x28u, 1u);
  if ( result )
  {
    result[9] = a1;
    result[7] = a2;
    result[8] = a3;
    *result = result + 1;
    result[1] = result + 1;
    result[2] = result + 1;
    result[3] = 0;
    result[4] = 0;
  }
  return result;
}
