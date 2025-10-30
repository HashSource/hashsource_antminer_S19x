_DWORD *__fastcall sub_1A3298(int *a1, char *a2)
{
  _DWORD *v4; // r4
  char *v5; // r0

  v4 = sub_1A2CCC(0x18u, a1);
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  *v4 = a1;
  v5 = sub_1A324C((int)a1, a2);
  v4[4] = 0;
  v4[1] = v5;
  return v4;
}
