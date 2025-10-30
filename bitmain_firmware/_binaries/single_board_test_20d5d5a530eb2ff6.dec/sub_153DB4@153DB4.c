void *__fastcall sub_153DB4(int a1, const void *a2)
{
  _DWORD v4[64]; // [sp+0h] [bp-190h] BYREF
  _DWORD v5[16]; // [sp+100h] [bp-90h] BYREF
  _BYTE v6[80]; // [sp+140h] [bp-50h] BYREF

  memcpy(v4, a2, sizeof(v4));
  sub_17BE0C(v6);
  sub_1561BC(v5, v6);
  sub_17BE0C(v6);
  sub_17B628(v5, v6, v4);
  v4[48] = v5[0];
  v4[49] = v5[1];
  v4[50] = v5[2];
  v4[51] = v5[3];
  v4[52] = v5[4];
  v4[53] = v5[5];
  v4[54] = v5[6];
  v4[55] = v5[7];
  v4[56] = v5[8];
  v4[57] = v5[9];
  v4[58] = v5[10];
  v4[59] = v5[11];
  v4[60] = v5[12];
  v4[61] = v5[13];
  v4[62] = v5[14];
  v4[63] = v5[15];
  sub_17B628(&v4[32], &v4[48], &v4[16]);
  sub_17BE0C(&v4[16]);
  sub_155BC4(a1, &v4[16], 1);
  return sub_153C44(v4);
}
