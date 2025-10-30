_DWORD *__fastcall sub_1A32EC(int *a1, char *a2, int a3, int a4)
{
  _DWORD *v8; // r4
  char *v9; // r0

  v8 = sub_1A2CCC(0x18u, a1);
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  *v8 = a1;
  v9 = sub_1A324C((int)a1, a2);
  v8[3] = a4;
  v8[1] = v9;
  v8[2] = a3;
  v8[4] = 0;
  return v8;
}
