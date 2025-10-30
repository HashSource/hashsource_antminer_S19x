int *__fastcall sub_1E58C(int a1, _BYTE *a2)
{
  unsigned int v4; // r2
  int v5; // r1
  unsigned int v6; // r3
  unsigned int v7; // r0
  unsigned int v8; // r3
  signed int v9; // r2
  int *result; // r0
  unsigned int v11; // [sp+0h] [bp-Ch] BYREF
  char v12; // [sp+4h] [bp-8h]
  char v13; // [sp+5h] [bp-7h]
  char v14; // [sp+6h] [bp-6h]
  char v15; // [sp+7h] [bp-5h]

  v4 = *(_DWORD *)a1 & 0x3F;
  v5 = *(_QWORD *)a1 >> 29;
  v6 = 8 * *(_DWORD *)a1;
  v15 = 8 * *(_BYTE *)a1;
  v12 = HIBYTE(v6);
  HIBYTE(v11) = v5;
  BYTE1(v11) = BYTE2(v5);
  v7 = HIWORD(v6);
  v8 = v6 >> 8;
  BYTE2(v11) = BYTE1(v5);
  v13 = v7;
  if ( v4 > 0x37 )
    v9 = 120 - v4;
  else
    v9 = 56 - v4;
  v14 = v8;
  LOBYTE(v11) = HIBYTE(v5);
  sub_1E4B4((int *)a1, dword_7901C, v9);
  result = sub_1E4B4((int *)a1, &v11, 8);
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
