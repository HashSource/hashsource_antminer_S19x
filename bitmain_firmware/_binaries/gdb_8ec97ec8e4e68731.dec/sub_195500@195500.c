int __fastcall sub_195500(_DWORD *a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v11; // r11
  int result; // r0

  memset(a1, 0, 0x84u);
  a1[2] = 6;
  memset(a1 + 17, 0, 0x2Cu);
  a1[22] = 3;
  memset(a1 + 7, 0, 0x28u);
  a1[8] = a4;
  v11 = dword_487D2C;
  a1[11] = a2 & 1;
  a1[6] = a3;
  a1[9] = a5;
  a1[10] = a6;
  a1[13] = a7;
  a1[12] = (a2 >> 1) & 1;
  a1[7] = v11;
  result = sub_323AE0(10, sub_1955DC, sub_1952B8, sub_1953F0, sub_93094, sub_1953F0);
  a1[16] = 0;
  a1[15] = result;
  return result;
}
