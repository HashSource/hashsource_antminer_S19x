_DWORD *__fastcall sub_36C64(_DWORD *a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int *v5; // lr
  int *v6; // r12
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r2

  v2 = *(_DWORD *)(dword_1AEA70 + 4);
  v3 = *(_DWORD *)(dword_1AEA70 + 8);
  v4 = *(_DWORD *)(dword_1AEA70 + 12);
  v5 = (int *)(dword_1AEA70 + 16);
  *a1 = *(_DWORD *)dword_1AEA70;
  a1[1] = v2;
  a1[2] = v3;
  a1[3] = v4;
  v6 = a1 + 4;
  v7 = *v5;
  v8 = v5[1];
  v9 = v5[2];
  v10 = v5[3];
  v5 += 4;
  *v6 = v7;
  v6[1] = v8;
  v6[2] = v9;
  v6[3] = v10;
  v6 += 4;
  v11 = *v5;
  v12 = v5[1];
  v13 = v5[2];
  v14 = v5[3];
  v5 += 4;
  *v6 = v11;
  v6[1] = v12;
  v6[2] = v13;
  v6[3] = v14;
  v6 += 4;
  v15 = v5[1];
  v16 = v5[2];
  *v6 = *v5;
  v6[1] = v15;
  v6[2] = v16;
  return a1;
}
