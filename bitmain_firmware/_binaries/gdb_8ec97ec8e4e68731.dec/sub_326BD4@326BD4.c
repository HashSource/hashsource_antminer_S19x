_DWORD *__fastcall sub_326BD4(int a1, int a2, int a3, int (__fastcall *a4)(int, int), int a5, int a6)
{
  _DWORD *result; // r0

  result = (_DWORD *)a4(28, a6);
  result[1] = a1;
  result[2] = a2;
  result[3] = a3;
  result[4] = a4;
  result[5] = a5;
  result[6] = a6;
  *result = 0;
  return result;
}
