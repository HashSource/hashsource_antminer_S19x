_DWORD *__fastcall sub_1BF66C(int a1, _DWORD *a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  _DWORD *result; // r0
  int v7; // r2
  int v8; // r2

  sub_1780B4();
  v5 = v4;
  a2[2] = v4[1];
  result = sub_163938(a1, 0x48u);
  v7 = v5[3];
  *a2 = result;
  *result = v7;
  result[1] = v5[4];
  result[2] = v5[2];
  result[3] = v5[1];
  result[4] = v5[10];
  result[5] = v5[11];
  result[6] = *v5;
  result[7] = v5[17];
  result[8] = v5[5];
  result[9] = v5[6];
  result[10] = v5[7];
  result[11] = v5[8];
  result[12] = v5[9];
  result[13] = v5[18];
  result[14] = v5[12];
  result[15] = v5[13];
  result[16] = v5[14];
  v8 = v5[16];
  a2[3] = "boolean";
  a2[4] = v8;
  return result;
}
