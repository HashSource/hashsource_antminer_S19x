unsigned int *__fastcall sub_155C98(unsigned int *result, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // r5
  unsigned int v4; // r4
  unsigned int v5; // r6
  unsigned int v6; // r5
  int v7; // r3
  unsigned int v8; // r6
  int v9; // r3
  unsigned int v10; // r5
  int v11; // r3
  unsigned int v12; // r6
  unsigned int v13; // r4
  int v14; // r3
  unsigned int v15; // r6
  int v16; // lr
  int v17; // r5
  unsigned int v18; // r12
  int v19; // r6
  int v20; // r5
  unsigned int v21; // r9
  int v22; // r12
  int v23; // r5
  unsigned int v24; // r8
  int v25; // r5
  unsigned int v26; // r10
  unsigned int v27; // r5
  int v28; // r2
  int v29; // r1
  unsigned int v30; // r1
  unsigned int v31; // r3
  int v32; // [sp+8h] [bp-24h]
  int v33; // [sp+Ch] [bp-20h]
  int v34; // [sp+10h] [bp-1Ch]
  int v35; // [sp+14h] [bp-18h]
  int v36; // [sp+18h] [bp-14h]
  int v37; // [sp+1Ch] [bp-10h]
  int v38; // [sp+20h] [bp-Ch]
  int v39; // [sp+24h] [bp-8h]

  v3 = *a2 - *a3;
  *result = v3;
  v3 += 536870910;
  v39 = v3 & 0xFFFFFFF;
  v4 = a2[1] - a3[1];
  result[1] = v4;
  v4 += 536870910;
  v5 = a2[2] - a3[2];
  v38 = (v4 & 0xFFFFFFF) + (v3 >> 28);
  result[2] = v5;
  v5 += 536870910;
  v6 = a2[3] - a3[3];
  v37 = (v5 & 0xFFFFFFF) + (v4 >> 28);
  result[3] = v6;
  v6 += 536870910;
  v7 = a2[4] - a3[4];
  v36 = (v6 & 0xFFFFFFF) + (v5 >> 28);
  result[4] = v7;
  v8 = v7 + 536870910;
  v9 = a2[5] - a3[5];
  v35 = (v8 & 0xFFFFFFF) + (v6 >> 28);
  result[5] = v9;
  v10 = v9 + 536870910;
  v11 = a2[6] - a3[6];
  v34 = (v10 & 0xFFFFFFF) + (v8 >> 28);
  result[6] = v11;
  v12 = v11 + 536870910;
  v13 = a2[7] - a3[7];
  v33 = ((v11 + 536870910) & 0xFFFFFFF) + (v10 >> 28);
  result[7] = v13;
  v13 += 536870910;
  v14 = a2[8] - a3[8];
  v32 = (v13 & 0xFFFFFFF) + (v12 >> 28);
  result[8] = v14;
  v15 = a2[9] - a3[9];
  result[9] = v15;
  v15 += 536870910;
  v16 = v15 & 0xFFFFFFF;
  v17 = a2[10] - a3[10];
  result[10] = v17;
  v18 = v17 + 536870910;
  v19 = ((v17 + 536870910) & 0xFFFFFFF) + (v15 >> 28);
  v20 = a2[11] - a3[11];
  result[11] = v20;
  v21 = v20 + 536870910;
  v22 = ((v20 + 536870910) & 0xFFFFFFF) + (v18 >> 28);
  v23 = a2[12] - a3[12];
  result[12] = v23;
  v24 = v23 + 536870910;
  v25 = a2[13] - a3[13];
  result[13] = v25;
  v26 = v25 + 536870910;
  v27 = a2[14] - a3[14];
  result[14] = v27;
  v28 = a3[15];
  v27 += 536870910;
  v29 = a2[15];
  result[13] = (v26 & 0xFFFFFFF) + (v24 >> 28);
  result[10] = v19;
  result[14] = (v27 & 0xFFFFFFF) + (v26 >> 28);
  result[12] = (v24 & 0xFFFFFFF) + (v21 >> 28);
  v30 = v29 - v28 + 536870910;
  result[7] = v32;
  result[11] = v22;
  v31 = v14 + 536870908 + (v30 >> 28);
  result[15] = (v30 & 0xFFFFFFF) + (v27 >> 28);
  result[6] = v33;
  result[9] = v16 + (v31 >> 28);
  result[8] = (v31 & 0xFFFFFFF) + (v13 >> 28);
  result[5] = v34;
  result[4] = v35;
  result[3] = v36;
  result[2] = v37;
  result[1] = v38;
  *result = (v30 >> 28) + v39;
  return result;
}
