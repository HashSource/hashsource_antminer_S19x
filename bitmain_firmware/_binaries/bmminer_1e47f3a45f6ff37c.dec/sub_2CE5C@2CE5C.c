void *__fastcall sub_2CE5C(char *src, int a2, _BYTE *a3)
{
  unsigned int v5[59]; // [sp+0h] [bp-ECh] BYREF

  v5[3] = -1150833019;
  v5[4] = 1013904242;
  v5[5] = -1521486534;
  v5[6] = 1359893119;
  v5[7] = -1694144372;
  v5[8] = 528734635;
  v5[9] = 1541459225;
  v5[2] = 1779033703;
  v5[0] = 0;
  v5[1] = 0;
  sub_2CBDC(v5, src, a2);
  sub_2CCA8((int)v5, a3);
  return memset(v5, 0, 0xE8u);
}
