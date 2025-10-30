int __fastcall sub_2AB784(int result, int a2, _BYTE *a3)
{
  a3[3] = a2;
  a3[7] = result;
  *a3 = HIBYTE(a2);
  a3[1] = BYTE2(a2);
  a3[2] = BYTE1(a2);
  a3[4] = HIBYTE(result);
  a3[5] = BYTE2(result);
  a3[6] = BYTE1(result);
  return result;
}
