int __fastcall sub_10D4B4(int a1, int *a2, int a3, int a4, int a5)
{
  _DWORD *v7; // r5
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v13; // r3

  v7 = sub_93094(1u, 0x2Cu);
  v8 = *a2;
  v9 = a2[1];
  v10 = a2[2];
  v11 = a2[3];
  v7[9] = a1;
  v7[1] = v8;
  v7[2] = v9;
  v7[3] = v10;
  v7[4] = v11;
  v13 = dword_4872C0;
  v7[5] = a2[4];
  dword_4872C0 = (int)v7;
  v7[6] = a3;
  v7[7] = a4;
  v7[8] = a5;
  *v7 = v13;
  return a3;
}
