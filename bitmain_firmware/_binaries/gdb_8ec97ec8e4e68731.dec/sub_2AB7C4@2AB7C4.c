int __fastcall sub_2AB7C4(int result, int a2, _BYTE *a3)
{
  a3[4] = a2;
  *a3 = result;
  a3[7] = HIBYTE(a2);
  a3[6] = BYTE2(a2);
  a3[5] = BYTE1(a2);
  a3[3] = HIBYTE(result);
  a3[2] = BYTE2(result);
  a3[1] = BYTE1(result);
  return result;
}
