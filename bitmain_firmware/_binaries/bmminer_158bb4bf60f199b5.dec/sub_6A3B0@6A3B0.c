_DWORD *__fastcall sub_6A3B0(int a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = malloc(0x28u);
  if ( result )
  {
    result[5] = 0;
    result[6] = 0;
    result[3] = 0;
    result[4] = 0;
    result[9] = a1;
    result[7] = a2;
    result[8] = a3;
    *result = result + 1;
    result[1] = result + 1;
    result[2] = result + 1;
  }
  return result;
}
