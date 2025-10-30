int __fastcall sub_E4ECC(_BYTE *a1, int a2)
{
  char v2; // r5
  int v3; // r2
  unsigned int v4; // lr
  int v5; // r3
  unsigned int v6; // r4
  _QWORD *v7; // r5
  unsigned int v8; // r2
  unsigned int v9; // r3
  _BYTE *v10; // r12
  __int64 v11; // r10
  __int64 v12; // r6
  __int64 v13; // r6
  unsigned __int64 v14; // r0
  unsigned __int64 v15; // r2
  char v16; // t1
  unsigned __int64 v17; // r8
  unsigned int v18; // r11
  __int64 *v19; // r4
  int v20; // lr
  __int64 v21; // r0
  __int64 v22; // r2
  unsigned __int64 v23; // r4
  __int64 v24; // r4
  unsigned __int64 v25; // r4
  char v26; // r8
  int v27; // r6
  unsigned __int64 v30; // [sp+0h] [bp-5Ch]
  unsigned __int64 v31; // [sp+10h] [bp-4Ch]
  int v32; // [sp+24h] [bp-38h]

  v2 = a1[15];
  v3 = 16 * (v2 & 0xF);
  v4 = *(_DWORD *)(a2 + v3);
  v5 = a2 + v3;
  v6 = *(_DWORD *)(a2 + v3 + 8);
  v7 = (_QWORD *)((v2 & 0xF0) + a2);
  v8 = *(_DWORD *)(a2 + v3 + 12);
  v9 = *(_DWORD *)(v5 + 4);
  v10 = a1 + 15;
  LODWORD(v11) = (v6 >> 4) | (v8 << 28);
  LODWORD(v12) = (v4 >> 4) | (v9 << 28);
  HIDWORD(v12) = v9 >> 4;
  HIDWORD(v11) = (v8 >> 4) | (v4 << 28);
  v13 = v12 ^ *v7;
  v14 = v11 ^ v7[1];
  LODWORD(v15) = v13;
  HIDWORD(v15) = dword_1B6568[v6 & 0xF] ^ HIDWORD(v13);
  do
  {
    v16 = *--v10;
    v17 = v15 >> 4;
    v18 = dword_1B6568[v14 & 0xF];
    v19 = (__int64 *)(a2 + 16 * (v16 & 0xF));
    v30 = v14 >> 4;
    v20 = (v16 & 0xF0) + a2;
    LODWORD(v21) = 0;
    HIDWORD(v21) = (_DWORD)v15 << 28;
    v22 = *v19;
    v23 = v19[1] ^ (v30 | v21);
    v32 = dword_1B6568[v23 & 0xF];
    v31 = v23 >> 4;
    v24 = *(_QWORD *)(v20 + 8);
    LODWORD(v14) = v31 ^ v24;
    HIDWORD(v14) = ((((unsigned int)v22 ^ (unsigned int)v17) << 28) | HIDWORD(v31)) ^ HIDWORD(v24);
    LODWORD(v25) = (__PAIR64__(HIDWORD(v22) ^ HIDWORD(v17) ^ v18, (unsigned int)v22 ^ (unsigned int)v17) >> 4)
                 ^ *(_DWORD *)v20;
    HIDWORD(v25) = v32
                 ^ (__PAIR64__(HIDWORD(v22) ^ HIDWORD(v17) ^ v18, (unsigned int)v22 ^ (unsigned int)v17) >> 4 >> 32)
                 ^ *(_DWORD *)(v20 + 4);
    v15 = v25;
  }
  while ( a1 != v10 );
  LODWORD(v25) = HIWORD(HIDWORD(v25));
  v26 = BYTE5(v15);
  v27 = HIBYTE(HIDWORD(v14));
  a1[3] = BYTE4(v15);
  a1[7] = v15;
  HIDWORD(v15) = WORD1(v14);
  a1[11] = BYTE4(v14);
  a1[15] = v14;
  *a1 = HIBYTE(v25);
  HIDWORD(v25) = HIWORD(HIDWORD(v14));
  a1[1] = v25;
  LODWORD(v25) = HIDWORD(v14) >> 8;
  HIDWORD(v14) = BYTE3(v14);
  LODWORD(v14) = (unsigned int)v14 >> 8;
  a1[2] = v26;
  a1[4] = BYTE3(v15);
  a1[5] = BYTE2(v15);
  a1[6] = BYTE1(v15);
  a1[8] = v27;
  a1[9] = BYTE4(v25);
  a1[10] = v25;
  a1[12] = BYTE4(v14);
  a1[13] = BYTE4(v15);
  a1[14] = v14;
  return v14;
}
