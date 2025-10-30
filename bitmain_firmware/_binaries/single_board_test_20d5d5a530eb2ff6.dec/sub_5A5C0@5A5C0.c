int __fastcall sub_5A5C0(int *a1, int a2)
{
  int *v4; // r5
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r2
  _DWORD v12[13]; // [sp+0h] [bp-34h] BYREF

  v4 = v12;
  memset(v12, 0, 0x30u);
  v12[4] = a2;
  v12[2] = a2 + 606290984;
  v12[3] = a2 - 2048144777;
  v12[5] = a2 + 1640531535;
  do
  {
    a1 += 4;
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    v8 = v4[3];
    v4 += 4;
    *(a1 - 4) = v5;
    *(a1 - 3) = v6;
    *(a1 - 2) = v7;
    *(a1 - 1) = v8;
  }
  while ( v4 != &v12[8] );
  v9 = v4[1];
  v10 = v4[2];
  *a1 = *v4;
  a1[1] = v9;
  a1[2] = v10;
  return 0;
}
