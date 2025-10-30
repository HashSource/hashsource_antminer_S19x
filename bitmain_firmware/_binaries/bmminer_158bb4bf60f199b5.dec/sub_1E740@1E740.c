int *__fastcall sub_1E740(unsigned int *a1, signed int a2, _BYTE *a3)
{
  int v5[59]; // [sp+0h] [bp-ECh] BYREF

  v5[2] = 1779033703;
  v5[4] = 1013904242;
  v5[5] = -1521486534;
  v5[6] = 1359893119;
  v5[7] = -1694144372;
  v5[3] = -1150833019;
  v5[8] = 528734635;
  v5[9] = 1541459225;
  v5[0] = 0;
  v5[1] = 0;
  if ( a2 > 0 )
    sub_1E4B4(v5, a1, a2);
  return sub_1E58C((int)v5, a3);
}
