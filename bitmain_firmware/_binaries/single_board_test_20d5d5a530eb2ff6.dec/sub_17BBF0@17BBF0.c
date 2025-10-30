int *__fastcall sub_17BBF0(int *result, unsigned int *a2, unsigned int a3)
{
  int v3; // r5
  unsigned __int64 v4; // kr08_8
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r10
  int v8; // r12
  int v9; // lr
  unsigned __int64 v10; // r6
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r6
  unsigned __int64 v16; // r4
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r4
  unsigned __int64 v20; // r6
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r10
  __int64 v23; // r8
  int v24; // [sp+18h] [bp-Ch]

  v3 = *a2 * a3;
  v4 = a2[8] * (unsigned __int64)a3;
  v5 = (*a2 * (unsigned __int64)a3) >> 28;
  *result = v3 & 0xFFFFFFF;
  v24 = v3 & 0xFFFFFFF;
  result[8] = v4 & 0xFFFFFFF;
  v6 = a2[1] * (unsigned __int64)a3 + v5;
  v7 = a2[9] * (unsigned __int64)a3 + (v4 >> 28);
  v8 = v6 & 0xFFFFFFF;
  result[1] = v6 & 0xFFFFFFF;
  v9 = v7 & 0xFFFFFFF;
  result[9] = v7 & 0xFFFFFFF;
  v10 = a2[2] * (unsigned __int64)a3 + (v6 >> 28);
  v11 = a2[10] * (unsigned __int64)a3 + (v7 >> 28);
  result[2] = v10 & 0xFFFFFFF;
  result[10] = v11 & 0xFFFFFFF;
  v12 = v11 >> 28;
  v13 = a2[3] * (unsigned __int64)a3 + (v10 >> 28);
  v14 = a2[11] * (unsigned __int64)a3 + v12;
  result[3] = v13 & 0xFFFFFFF;
  result[11] = v14 & 0xFFFFFFF;
  v15 = a2[4] * (unsigned __int64)a3 + (v13 >> 28);
  v16 = a2[12] * (unsigned __int64)a3 + (v14 >> 28);
  result[4] = v15 & 0xFFFFFFF;
  result[12] = v16 & 0xFFFFFFF;
  v17 = a2[5] * (unsigned __int64)a3 + (v15 >> 28);
  v18 = a2[13] * (unsigned __int64)a3 + (v16 >> 28);
  result[5] = v17 & 0xFFFFFFF;
  result[13] = v18 & 0xFFFFFFF;
  v19 = a2[6] * (unsigned __int64)a3 + (v17 >> 28);
  v20 = a2[14] * (unsigned __int64)a3 + (v18 >> 28);
  result[6] = v19 & 0xFFFFFFF;
  result[14] = v20 & 0xFFFFFFF;
  v21 = a3 * (unsigned __int64)a2[7] + (v19 >> 28);
  v22 = a3 * (unsigned __int64)a2[15] + (v20 >> 28);
  result[7] = v21 & 0xFFFFFFF;
  result[15] = v22 & 0xFFFFFFF;
  v23 = (v22 >> 28) + (v21 >> 28) + (v4 & 0xFFFFFFF);
  result[8] = v23 & 0xFFFFFFF;
  result[9] = (v23 >> 28) + v9;
  *result = ((v22 >> 28) + v24) & 0xFFFFFFF;
  result[1] = ((__int64)((v22 >> 28) + (unsigned int)v24) >> 28) + v8;
  return result;
}
