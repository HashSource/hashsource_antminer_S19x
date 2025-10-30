int *__fastcall sub_177780(int *result, _DWORD *a2)
{
  int v2; // r9
  unsigned int v3; // r5
  int v4; // r12
  unsigned int v5; // r6
  int v6; // r8
  unsigned int v7; // r5
  int v8; // r12
  unsigned int v9; // r6
  int v10; // r8
  unsigned int v11; // r7
  int v12; // r12
  unsigned int v13; // r6
  int v14; // r8
  unsigned int v15; // r5
  int v16; // r12
  unsigned int v17; // r11
  int v18; // r10
  unsigned int v19; // r6
  int v20; // r12
  unsigned int v21; // r7
  int v22; // r9
  unsigned int v23; // r5
  int v24; // r12
  unsigned int v25; // r7
  int v26; // r8
  unsigned int v27; // r5
  int v28; // r12
  unsigned int v29; // r11
  int v30; // r6
  unsigned int v31; // r5
  unsigned int v32; // r1

  v2 = result[1];
  v3 = __ROR4__(v2 + *a2, 32 - a2[1]);
  v4 = (CAST_S_table3[BYTE2(v3)]
      - CAST_S_table2[HIBYTE(v3)]
      + (CAST_S_table0[BYTE1(v3)] ^ CAST_S_table1[(unsigned __int8)v3]))
     ^ *result;
  v5 = __ROR4__(v4 ^ a2[2], 32 - a2[3]);
  v6 = (CAST_S_table0[BYTE1(v5)] - CAST_S_table1[(unsigned __int8)v5] + CAST_S_table2[HIBYTE(v5)])
     ^ v2
     ^ CAST_S_table3[BYTE2(v5)];
  v7 = __ROR4__(a2[4] - v6, 32 - a2[5]);
  v8 = (((CAST_S_table1[(unsigned __int8)v7] + CAST_S_table0[BYTE1(v7)]) ^ CAST_S_table2[HIBYTE(v7)])
      - CAST_S_table3[BYTE2(v7)])
     ^ v4;
  v9 = __ROR4__(v8 + a2[6], 32 - a2[7]);
  v10 = ((CAST_S_table0[BYTE1(v9)] ^ CAST_S_table1[(unsigned __int8)v9])
       + CAST_S_table3[BYTE2(v9)]
       - CAST_S_table2[HIBYTE(v9)])
      ^ v6;
  v11 = __ROR4__(v10 ^ a2[8], 32 - a2[9]);
  v12 = (CAST_S_table0[BYTE1(v11)] - CAST_S_table1[(unsigned __int8)v11] + CAST_S_table2[HIBYTE(v11)])
      ^ v8
      ^ CAST_S_table3[BYTE2(v11)];
  v13 = __ROR4__(a2[10] - v12, 32 - a2[11]);
  v14 = (((CAST_S_table1[(unsigned __int8)v13] + CAST_S_table0[BYTE1(v13)]) ^ CAST_S_table2[HIBYTE(v13)])
       - CAST_S_table3[BYTE2(v13)])
      ^ v10;
  v15 = __ROR4__(a2[12] + v14, 32 - a2[13]);
  v16 = ((CAST_S_table0[BYTE1(v15)] ^ CAST_S_table1[(unsigned __int8)v15])
       + CAST_S_table3[BYTE2(v15)]
       - CAST_S_table2[HIBYTE(v15)])
      ^ v12;
  v17 = __ROR4__(v16 ^ a2[14], 32 - a2[15]);
  v18 = (CAST_S_table0[BYTE1(v17)] - CAST_S_table1[(unsigned __int8)v17] + CAST_S_table2[HIBYTE(v17)])
      ^ v14
      ^ CAST_S_table3[BYTE2(v17)];
  v19 = __ROR4__(a2[16] - v18, 32 - a2[17]);
  v20 = (((CAST_S_table1[(unsigned __int8)v19] + CAST_S_table0[BYTE1(v19)]) ^ CAST_S_table2[HIBYTE(v19)])
       - CAST_S_table3[BYTE2(v19)])
      ^ v16;
  v21 = __ROR4__(v20 + a2[18], 32 - a2[19]);
  v22 = (CAST_S_table3[BYTE2(v21)]
       - CAST_S_table2[HIBYTE(v21)]
       + (CAST_S_table0[BYTE1(v21)] ^ CAST_S_table1[(unsigned __int8)v21]))
      ^ v18;
  v23 = __ROR4__(v22 ^ a2[20], 32 - a2[21]);
  v24 = (CAST_S_table0[BYTE1(v23)] - CAST_S_table1[(unsigned __int8)v23] + CAST_S_table2[HIBYTE(v23)])
      ^ v20
      ^ CAST_S_table3[BYTE2(v23)];
  v25 = __ROR4__(a2[22] - v24, 32 - a2[23]);
  v26 = (((CAST_S_table0[BYTE1(v25)] + CAST_S_table1[(unsigned __int8)v25]) ^ CAST_S_table2[HIBYTE(v25)])
       - CAST_S_table3[BYTE2(v25)])
      ^ v22;
  if ( !a2[32] )
  {
    v27 = __ROR4__(a2[24] + v26, 32 - a2[25]);
    v28 = ((CAST_S_table0[BYTE1(v27)] ^ CAST_S_table1[(unsigned __int8)v27])
         + CAST_S_table3[BYTE2(v27)]
         - CAST_S_table2[HIBYTE(v27)])
        ^ v24;
    v29 = __ROR4__(v28 ^ a2[26], 32 - a2[27]);
    v30 = (CAST_S_table0[BYTE1(v29)] - CAST_S_table1[(unsigned __int8)v29] + CAST_S_table2[HIBYTE(v29)])
        ^ v26
        ^ CAST_S_table3[BYTE2(v29)];
    v31 = __ROR4__(a2[28] - v30, 32 - a2[29]);
    v24 = (((CAST_S_table0[BYTE1(v31)] + CAST_S_table1[(unsigned __int8)v31]) ^ CAST_S_table2[HIBYTE(v31)])
         - CAST_S_table3[BYTE2(v31)])
        ^ v28;
    v32 = __ROR4__(v24 + a2[30], 32 - a2[31]);
    v26 = ((CAST_S_table0[BYTE1(v32)] ^ CAST_S_table1[(unsigned __int8)v32])
         + CAST_S_table3[BYTE2(v32)]
         - CAST_S_table2[HIBYTE(v32)])
        ^ v30;
  }
  *result = v26;
  result[1] = v24;
  return result;
}
