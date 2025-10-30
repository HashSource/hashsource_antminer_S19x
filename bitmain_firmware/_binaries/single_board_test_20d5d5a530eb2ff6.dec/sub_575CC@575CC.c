int __fastcall sub_575CC(int a1, int *a2)
{
  int *v3; // r4
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r1
  _DWORD v18[15]; // [sp+0h] [bp-3Ch] BYREF

  if ( a2 )
  {
    v3 = a2;
    v4 = *a2;
    v5 = a2[1];
    v6 = v3[2];
    v7 = v3[3];
    v3 += 4;
    v18[0] = v4;
    v18[1] = v5;
    v18[2] = v6;
    v18[3] = v7;
    v8 = *v3;
    v9 = v3[1];
    v10 = v3[2];
    v11 = v3[3];
    v3 += 4;
    v18[4] = v8;
    v18[5] = v9;
    v18[6] = v10;
    v18[7] = v11;
    v12 = *v3;
    v13 = v3[1];
    v14 = v3[2];
    v15 = v3[3];
    v3 += 4;
    v18[8] = v12;
    v18[9] = v13;
    v18[10] = v14;
    v18[11] = v15;
    v16 = v3[1];
    v18[12] = *v3;
    v18[13] = v16;
  }
  else
  {
    memset(v18, 0, 0x38u);
  }
  v18[9] = 1;
  return sub_56FE0(a1, (int)v18, 0) + 19;
}
