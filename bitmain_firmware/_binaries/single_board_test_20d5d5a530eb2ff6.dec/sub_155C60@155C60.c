int __fastcall sub_155C60(unsigned int *a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r1
  unsigned int v8; // r2
  unsigned int v9; // r3
  unsigned int v10; // r1
  unsigned int v11; // r2
  unsigned int v12; // r3
  unsigned int v13; // r1
  unsigned int v14; // r2
  unsigned int v15; // r3
  unsigned int v17[21]; // [sp+0h] [bp-50h] BYREF

  v17[20] = a4;
  v4 = a1[1];
  v5 = a1[2];
  v6 = a1[3];
  v17[0] = *a1;
  v17[1] = v4;
  v17[2] = v5;
  v17[3] = v6;
  v7 = a1[5];
  v8 = a1[6];
  v9 = a1[7];
  v17[4] = a1[4];
  v17[5] = v7;
  v17[6] = v8;
  v17[7] = v9;
  v10 = a1[9];
  v11 = a1[10];
  v12 = a1[11];
  v17[8] = a1[8];
  v17[9] = v10;
  v17[10] = v11;
  v17[11] = v12;
  v13 = a1[13];
  v14 = a1[14];
  v15 = a1[15];
  v17[12] = a1[12];
  v17[13] = v13;
  v17[14] = v14;
  v17[15] = v15;
  sub_155530(v17);
  return (int)(v17[0] << 31) >> 31;
}
