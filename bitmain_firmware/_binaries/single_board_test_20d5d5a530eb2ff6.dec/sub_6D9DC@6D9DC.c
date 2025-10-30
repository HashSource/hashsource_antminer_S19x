unsigned int *__fastcall sub_6D9DC(char *src, int a2, _BYTE *a3)
{
  unsigned int v5[58]; // [sp+0h] [bp-E8h] BYREF

  v5[2] = 1779033703;
  v5[3] = -1150833019;
  v5[4] = 1013904242;
  v5[7] = -1694144372;
  v5[0] = 0;
  v5[1] = 0;
  v5[5] = -1521486534;
  v5[6] = 1359893119;
  v5[8] = 528734635;
  v5[9] = 1541459225;
  sub_6D854(v5, src, a2);
  return sub_6D8D8((int)v5, a3);
}
