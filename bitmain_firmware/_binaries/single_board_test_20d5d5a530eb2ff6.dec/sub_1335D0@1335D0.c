_DWORD *__fastcall sub_1335D0(_DWORD *result, int a2, int a3)
{
  int v3; // r4

  v3 = result[4];
  result[3] = 0;
  *result = a2;
  result[1] = a3;
  result[4] = v3 | 2;
  result[2] = a3;
  return sub_B8ACC(result);
}
