unsigned int *__fastcall sub_2CCA8(int a1, _BYTE *a2)
{
  unsigned int v4; // r2
  __int64 v5; // kr00_8
  bool v6; // cc
  unsigned int *result; // r0
  char v8[12]; // [sp+0h] [bp-Ch] BYREF

  v4 = *(_DWORD *)a1 & 0x3F;
  v5 = 8LL * *(_QWORD *)a1;
  v6 = v4 > 0x37;
  v8[3] = BYTE4(v5);
  if ( v4 <= 0x37 )
    v4 = 56 - v4;
  v8[0] = HIBYTE(v5);
  v8[2] = BYTE5(v5);
  v8[5] = BYTE2(v5);
  if ( v6 )
    v4 = 120 - v4;
  v8[4] = BYTE3(v5);
  v8[7] = v5;
  v8[1] = BYTE6(v5);
  v8[6] = BYTE1(v5);
  sub_2CBDC((unsigned int *)a1, byte_93824, v4);
  result = sub_2CBDC((unsigned int *)a1, v8, 8);
  *a2 = *(_BYTE *)(a1 + 11);
  a2[1] = *(_WORD *)(a1 + 10);
  a2[2] = BYTE1(*(_DWORD *)(a1 + 8));
  a2[3] = *(_DWORD *)(a1 + 8);
  a2[4] = *(_BYTE *)(a1 + 15);
  a2[5] = *(_WORD *)(a1 + 14);
  a2[6] = BYTE1(*(_DWORD *)(a1 + 12));
  a2[7] = *(_DWORD *)(a1 + 12);
  a2[8] = *(_BYTE *)(a1 + 19);
  a2[9] = *(_WORD *)(a1 + 18);
  a2[10] = BYTE1(*(_DWORD *)(a1 + 16));
  a2[11] = *(_DWORD *)(a1 + 16);
  a2[12] = *(_BYTE *)(a1 + 23);
  a2[13] = *(_WORD *)(a1 + 22);
  a2[14] = BYTE1(*(_DWORD *)(a1 + 20));
  a2[15] = *(_DWORD *)(a1 + 20);
  a2[16] = *(_BYTE *)(a1 + 27);
  a2[17] = *(_WORD *)(a1 + 26);
  a2[18] = BYTE1(*(_DWORD *)(a1 + 24));
  a2[19] = *(_DWORD *)(a1 + 24);
  a2[20] = *(_BYTE *)(a1 + 31);
  a2[21] = *(_WORD *)(a1 + 30);
  a2[22] = BYTE1(*(_DWORD *)(a1 + 28));
  a2[23] = *(_DWORD *)(a1 + 28);
  a2[24] = *(_BYTE *)(a1 + 35);
  a2[25] = *(_WORD *)(a1 + 34);
  a2[26] = BYTE1(*(_DWORD *)(a1 + 32));
  a2[27] = *(_DWORD *)(a1 + 32);
  a2[28] = *(_BYTE *)(a1 + 39);
  a2[29] = *(_WORD *)(a1 + 38);
  a2[30] = BYTE1(*(_DWORD *)(a1 + 36));
  a2[31] = *(_DWORD *)(a1 + 36);
  return result;
}
