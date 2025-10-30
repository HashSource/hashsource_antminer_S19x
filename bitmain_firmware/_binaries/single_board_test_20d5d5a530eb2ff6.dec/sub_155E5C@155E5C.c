unsigned int *__fastcall sub_155E5C(unsigned int *result, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // r6
  unsigned int v4; // r5
  unsigned int v5; // r6
  unsigned int v6; // r5
  unsigned int v7; // r6
  unsigned int v8; // r5
  unsigned int v9; // r6
  unsigned int v10; // r4
  int v11; // r3
  unsigned int v12; // r6
  int v13; // lr
  unsigned int v14; // r5
  int v15; // r6
  unsigned int v16; // r7
  int v17; // r12
  unsigned int v18; // r5
  int v19; // r8
  unsigned int v20; // r10
  int v21; // r7
  unsigned int v22; // r5
  int v23; // r2
  int v24; // r1
  unsigned int v25; // r1
  unsigned int v26; // r3
  int v27; // [sp+8h] [bp-24h]
  int v28; // [sp+Ch] [bp-20h]
  int v29; // [sp+10h] [bp-1Ch]
  int v30; // [sp+14h] [bp-18h]
  int v31; // [sp+18h] [bp-14h]
  int v32; // [sp+1Ch] [bp-10h]
  int v33; // [sp+20h] [bp-Ch]
  int v34; // [sp+24h] [bp-8h]

  v3 = *a3 + *a2;
  *result = v3;
  v34 = v3 & 0xFFFFFFF;
  v4 = a3[1] + a2[1];
  result[1] = v4;
  v33 = (v4 & 0xFFFFFFF) + (v3 >> 28);
  v5 = a2[2] + a3[2];
  result[2] = v5;
  v32 = (v5 & 0xFFFFFFF) + (v4 >> 28);
  v6 = a2[3] + a3[3];
  result[3] = v6;
  v31 = (v6 & 0xFFFFFFF) + (v5 >> 28);
  v7 = a2[4] + a3[4];
  result[4] = v7;
  v30 = (v7 & 0xFFFFFFF) + (v6 >> 28);
  v8 = a2[5] + a3[5];
  result[5] = v8;
  v29 = (v8 & 0xFFFFFFF) + (v7 >> 28);
  v9 = a2[6] + a3[6];
  result[6] = v9;
  v28 = (v9 & 0xFFFFFFF) + (v8 >> 28);
  v10 = a3[7] + a2[7];
  result[7] = v10;
  v27 = (v10 & 0xFFFFFFF) + (v9 >> 28);
  v11 = a3[8] + a2[8];
  result[8] = v11;
  v12 = a3[9] + a2[9];
  result[9] = v12;
  v13 = v12 & 0xFFFFFFF;
  v14 = a3[10] + a2[10];
  result[10] = v14;
  v15 = (v14 & 0xFFFFFFF) + (v12 >> 28);
  v16 = a2[11] + a3[11];
  result[11] = v16;
  v17 = (v16 & 0xFFFFFFF) + (v14 >> 28);
  v18 = a2[12] + a3[12];
  result[12] = v18;
  v19 = (v18 & 0xFFFFFFF) + (v16 >> 28);
  v20 = a2[13] + a3[13];
  result[13] = v20;
  v21 = (v20 & 0xFFFFFFF) + (v18 >> 28);
  v22 = a2[14] + a3[14];
  result[14] = v22;
  v23 = a3[15];
  v24 = a2[15];
  result[10] = v15;
  result[13] = v21;
  v25 = v24 + v23;
  result[14] = (v22 & 0xFFFFFFF) + (v20 >> 28);
  v26 = v11 + (v25 >> 28);
  result[12] = v19;
  result[11] = v17;
  result[15] = (v25 & 0xFFFFFFF) + (v22 >> 28);
  result[9] = v13 + (v26 >> 28);
  result[8] = (v26 & 0xFFFFFFF) + (v10 >> 28);
  result[7] = v27;
  result[6] = v28;
  result[5] = v29;
  result[4] = v30;
  result[3] = v31;
  result[2] = v32;
  result[1] = v33;
  *result = (v25 >> 28) + v34;
  return result;
}
