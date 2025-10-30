unsigned int __fastcall sub_E50B4(_BYTE *a1, int a2, int a3, int a4)
{
  _BYTE *v5; // r2
  _BYTE *v6; // lr
  char *v7; // t2
  char v8; // r3
  int v9; // r2
  __int64 *v10; // r3
  __int64 v11; // r6
  unsigned int v12; // r4
  int v13; // r1
  unsigned int v14; // r2
  _BYTE *v15; // r12
  unsigned int v16; // r0
  unsigned int v17; // r1
  unsigned __int64 v18; // r4
  int v19; // r2
  __int64 v20; // r4
  __int64 v21; // r2
  unsigned __int64 v22; // r0
  char v23; // t1
  unsigned __int64 v24; // r8
  char v25; // lr
  char v26; // lr
  int v27; // r11
  int v28; // lr
  int v29; // r5
  __int64 v30; // r2
  unsigned int v31; // r7
  unsigned int v32; // r5
  __int64 v33; // r2
  int v34; // r5
  unsigned int v35; // r6
  unsigned int result; // r0
  int v37; // [sp+4h] [bp-78h]
  unsigned int v38; // [sp+10h] [bp-6Ch]
  int v39; // [sp+24h] [bp-58h]
  char *v40; // [sp+30h] [bp-4Ch]
  int v42; // [sp+44h] [bp-38h]
  int v43; // [sp+48h] [bp-34h]
  int v44; // [sp+50h] [bp-2Ch]
  int v45; // [sp+5Ch] [bp-20h]
  int v46; // [sp+64h] [bp-18h]
  char *v47; // [sp+68h] [bp-14h]
  _BYTE *v49; // [sp+74h] [bp-8h]

  v47 = (char *)(a3 + 47);
  v49 = a1 + 15;
  do
  {
    v5 = a1;
    v6 = v49;
    v7 = v47;
    __pld(v47);
    v42 = a2;
    v40 = v7 - 32;
    v8 = *(v7 - 32) ^ v5[15];
    v9 = 16 * (v8 & 0xF);
    v10 = (__int64 *)((v8 & 0xF0) + a2);
    v11 = v10[1];
    v12 = *(_DWORD *)(a2 + v9);
    v13 = a2 + v9;
    v14 = *(_DWORD *)(a2 + v9 + 8);
    v15 = v6;
    v16 = *(_DWORD *)(v13 + 12);
    v17 = *(_DWORD *)(v13 + 4);
    v18 = (unsigned __int64)v12 << 28;
    v46 = v18;
    v45 = dword_1B6568[v14 & 0xF];
    v44 = (v14 >> 4) | (v16 << 28);
    v19 = HIDWORD(v18) | (v17 << 28);
    v20 = *v10;
    v43 = v19;
    LODWORD(v21) = v44 ^ v11;
    HIDWORD(v21) = ((v16 >> 4) | v46) ^ HIDWORD(v11);
    LODWORD(v22) = v43 ^ v20;
    HIDWORD(v22) = v45 ^ (v17 >> 4) ^ HIDWORD(v20);
    do
    {
      v23 = *--v15;
      v24 = v22 >> 4;
      v25 = *--v40;
      v26 = v23 ^ v25;
      v27 = dword_1B6568[v21 & 0xF];
      HIDWORD(v22) = v42 + 16 * (v26 & 0xF);
      v28 = (v26 & 0xF0) + v42;
      v29 = v21 >> 4;
      v37 = HIDWORD(v21) >> 4;
      v30 = *(_QWORD *)(HIDWORD(v22) + 8);
      v31 = *(_DWORD *)(HIDWORD(v22) + 4) ^ HIDWORD(v24) ^ v27;
      LODWORD(v30) = v30 ^ v29;
      v32 = HIDWORD(v30) ^ (((_DWORD)v22 << 28) | v37);
      v39 = dword_1B6568[v30 & 0xF];
      v38 = ((unsigned int)v30 >> 4) | (v32 << 28);
      v33 = *(_QWORD *)(v28 + 8);
      LODWORD(v21) = v33 ^ v38;
      HIDWORD(v21) = HIDWORD(v33) ^ (((*(_DWORD *)HIDWORD(v22) ^ (unsigned int)v24) << 28) | (v32 >> 4));
      v34 = v39 ^ (v31 >> 4) ^ *(_DWORD *)(v28 + 4);
      LODWORD(v22) = (((*(_DWORD *)HIDWORD(v22) ^ (unsigned int)v24) >> 4) | (v31 << 28)) ^ *(_DWORD *)v28;
      HIDWORD(v22) = v34;
    }
    while ( a1 != v15 );
    a1[3] = v34;
    a1[7] = v22;
    a1[11] = BYTE4(v21);
    a1[15] = v21;
    *a1 = HIBYTE(v34);
    a1[1] = BYTE2(v34);
    a1[2] = BYTE1(v34);
    v47 += 16;
    v35 = BYTE3(v22);
    a1[10] = BYTE5(v21);
    a1[5] = BYTE2(v22);
    a1[6] = BYTE1(v22);
    result = WORD1(v21);
    a2 = v42;
    a1[4] = v35;
    a1[8] = HIBYTE(v21);
    a1[9] = BYTE6(v21);
    a1[12] = BYTE3(v21);
    a1[13] = BYTE2(v21);
    a1[14] = BYTE1(v21);
    a4 -= 16;
  }
  while ( a4 );
  return result;
}
