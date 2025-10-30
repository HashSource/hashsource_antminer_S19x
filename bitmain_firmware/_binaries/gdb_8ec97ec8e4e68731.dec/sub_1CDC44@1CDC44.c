_DWORD *__fastcall sub_1CDC44(_DWORD *result, int a2, char a3)
{
  *result = a2;
  result[2] = 0;
  result[1] = (2 * ~(-1 << (a3 - 1))) | 1;
  return result;
}
