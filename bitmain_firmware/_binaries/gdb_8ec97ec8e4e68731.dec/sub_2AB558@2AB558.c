bool __fastcall sub_2AB558(int a1, int a2)
{
  _BYTE v3[8]; // [sp+4h] [bp-8h] BYREF

  v3[3] = a2;
  v3[0] = HIBYTE(a2);
  v3[1] = BYTE2(a2);
  v3[2] = BYTE1(a2);
  return sub_2A8884((int)v3, 4, a1) == 4;
}
