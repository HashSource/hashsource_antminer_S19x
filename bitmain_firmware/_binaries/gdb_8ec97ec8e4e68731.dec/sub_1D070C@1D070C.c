_DWORD *__fastcall sub_1D070C(int a1, const char *a2, int a3, int *a4, __int64 *a5)
{
  _DWORD *result; // r0
  int v8; // r1
  int v9; // lr
  __int64 v10; // r2

  result = sub_1D0584(a2, a1);
  v8 = a4[1];
  v9 = *a4;
  v10 = *a5;
  result[4] = a3;
  result[5] = a3;
  result[9] = (v8 - v9) >> 2;
  result[11] = (HIDWORD(v10) - (int)v10) >> 2;
  return result;
}
