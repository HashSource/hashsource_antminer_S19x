_BYTE *__fastcall sub_1E74C8(_BYTE *result, int a2)
{
  result[7] = a2;
  result[4] = HIBYTE(a2);
  result[5] = BYTE2(a2);
  result[6] = BYTE1(a2);
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  return result;
}
