_DWORD *__fastcall sub_15CCA0(_DWORD *result, int a2, int a3, int a4)
{
  *result = a2;
  result[3] = 0;
  result[1] = a3;
  result[2] = a4;
  *((_BYTE *)result + 12) = 25;
  result[4] = 0;
  return result;
}
