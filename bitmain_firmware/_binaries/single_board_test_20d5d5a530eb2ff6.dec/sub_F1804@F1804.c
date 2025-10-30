_DWORD *__fastcall sub_F1804(_DWORD *result, _DWORD *a2)
{
  int v2; // r4
  int v3; // r1

  result[48] = a2[4];
  result[49] = a2[5];
  result[50] = a2[6];
  v2 = a2[7];
  *result = 0;
  result[1] = 0;
  result[51] = v2;
  result[2] = 0;
  result[3] = 0;
  result[4] = 0;
  result[5] = *a2 & 0xFFFFFFF;
  result[6] = a2[1] & 0xFFFFFFC;
  result[7] = a2[2] & 0xFFFFFFC;
  v3 = a2[3];
  result[56] = 0;
  result[8] = v3 & 0xFFFFFFC;
  return result;
}
