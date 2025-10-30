_DWORD *__fastcall sub_C4978(int a1)
{
  _DWORD *result; // r0
  int v2; // r2

  result = (_DWORD *)sub_C4914(a1);
  v2 = result[1];
  result[4] = 0;
  *result = 0;
  result[2] = v2;
  return result;
}
