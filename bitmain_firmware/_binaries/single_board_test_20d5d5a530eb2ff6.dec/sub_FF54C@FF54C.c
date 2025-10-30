int __fastcall sub_FF54C(_BYTE *a1, int a2)
{
  int v3; // r3
  char *v4; // r6
  int v6; // r0
  size_t v7; // r2
  int v8; // r0
  int v9; // r3
  int v10; // r3
  int v12; // r3
  int v13; // r3
  int v14; // r3
  int v15; // r3

  v3 = *(_DWORD *)(a2 + 92);
  v4 = (char *)(a2 + 28);
  v6 = v3 + 1;
  *(_BYTE *)(a2 + 28 + v3) = 0x80;
  if ( (unsigned int)(v3 + 1) > 0x38 )
  {
    memset(&v4[v6], 0, 63 - v3);
    sub_FE23C((int *)a2, (int)v4, 1);
    v7 = 56;
    v6 = 0;
  }
  else
  {
    v7 = 55 - v3;
  }
  memset(&v4[v6], 0, v7);
  v8 = *(_DWORD *)(a2 + 24);
  v9 = *(_DWORD *)(a2 + 20);
  *(_BYTE *)(a2 + 87) = v8;
  *(_BYTE *)(a2 + 91) = v9;
  *(_BYTE *)(a2 + 84) = HIBYTE(v8);
  *(_BYTE *)(a2 + 85) = BYTE2(v8);
  *(_BYTE *)(a2 + 86) = BYTE1(v8);
  *(_BYTE *)(a2 + 88) = HIBYTE(v9);
  *(_BYTE *)(a2 + 90) = BYTE1(v9);
  *(_BYTE *)(a2 + 89) = BYTE2(v9);
  sub_FE23C((int *)a2, (int)v4, 1);
  *(_DWORD *)(a2 + 92) = 0;
  sub_E07F8(v4, 0x40u);
  v10 = *(_DWORD *)a2;
  a1[3] = *(_DWORD *)a2;
  *a1 = HIBYTE(v10);
  a1[1] = BYTE2(v10);
  a1[2] = BYTE1(v10);
  v12 = *(_DWORD *)(a2 + 4);
  a1[7] = v12;
  a1[4] = HIBYTE(v12);
  a1[5] = BYTE2(v12);
  a1[6] = BYTE1(v12);
  v13 = *(_DWORD *)(a2 + 8);
  a1[11] = v13;
  a1[8] = HIBYTE(v13);
  a1[9] = BYTE2(v13);
  a1[10] = BYTE1(v13);
  v14 = *(_DWORD *)(a2 + 12);
  a1[15] = v14;
  a1[12] = HIBYTE(v14);
  a1[13] = BYTE2(v14);
  a1[14] = BYTE1(v14);
  v15 = *(_DWORD *)(a2 + 16);
  a1[19] = v15;
  a1[16] = HIBYTE(v15);
  a1[17] = BYTE2(v15);
  a1[18] = BYTE1(v15);
  return 1;
}
