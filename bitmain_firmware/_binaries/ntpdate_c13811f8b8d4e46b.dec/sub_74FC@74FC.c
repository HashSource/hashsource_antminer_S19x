_DWORD *__fastcall sub_74FC(int a1, _DWORD *a2, int a3)
{
  _DWORD *result; // r0
  int v7; // r12
  int v8; // r1
  int v9; // r9
  int v10; // lr
  int v11; // r1

  result = (_DWORD *)sub_967C(0, 36, 0, 0);
  v7 = a2[1];
  v8 = a2[2];
  v9 = a2[3];
  result[1] = *a2;
  result[2] = v7;
  result[3] = v8;
  result[4] = v9;
  v10 = a2[4];
  v11 = a2[6];
  result[6] = a2[5];
  result[5] = v10;
  result[7] = v11;
  result[8] = a3;
  *result = a1;
  return result;
}
