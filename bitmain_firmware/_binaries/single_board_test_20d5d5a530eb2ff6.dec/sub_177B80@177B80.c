int *__fastcall sub_177B80(int *result, _DWORD *a2)
{
  int v2; // r12
  int v3; // lr
  unsigned int v4; // r6
  int v5; // r12
  unsigned int v6; // r6
  int v7; // lr
  unsigned int v8; // r7
  unsigned int v9; // r6
  unsigned int v10; // r6
  int v11; // r12
  unsigned int v12; // r8
  int v13; // lr
  unsigned int v14; // r6
  int v15; // r12
  unsigned int v16; // r10
  int v17; // lr
  unsigned int v18; // r6
  int v19; // r12
  unsigned int v20; // r6
  int v21; // lr
  unsigned int v22; // r6
  int v23; // r12
  unsigned int v24; // r8
  int v25; // lr
  unsigned int v26; // r6
  int v27; // r12
  unsigned int v28; // r11
  int v29; // lr
  unsigned int v30; // r6
  int v31; // r7
  unsigned int v32; // r1

  v2 = *result;
  v3 = result[1];
  if ( !a2[32] )
  {
    v4 = __ROR4__(a2[30] + v3, 32 - a2[31]);
    v5 = (CAST_S_table3[BYTE2(v4)]
        - CAST_S_table2[HIBYTE(v4)]
        + (CAST_S_table0[BYTE1(v4)] ^ CAST_S_table1[(unsigned __int8)v4]))
       ^ v2;
    v6 = __ROR4__(a2[28] - v5, 32 - a2[29]);
    v7 = (((CAST_S_table1[(unsigned __int8)v6] + CAST_S_table0[BYTE1(v6)]) ^ CAST_S_table2[HIBYTE(v6)])
        - CAST_S_table3[BYTE2(v6)])
       ^ v3;
    v8 = __ROR4__(v7 ^ a2[26], 32 - a2[27]);
    v2 = (CAST_S_table2[HIBYTE(v8)] + CAST_S_table0[BYTE1(v8)] - CAST_S_table1[(unsigned __int8)v8])
       ^ v5
       ^ CAST_S_table3[BYTE2(v8)];
    v9 = __ROR4__(v2 + a2[24], 32 - a2[25]);
    v3 = (CAST_S_table3[BYTE2(v9)]
        - CAST_S_table2[HIBYTE(v9)]
        + (CAST_S_table0[BYTE1(v9)] ^ CAST_S_table1[(unsigned __int8)v9]))
       ^ v7;
  }
  v10 = __ROR4__(a2[22] - v3, 32 - a2[23]);
  v11 = (((CAST_S_table1[(unsigned __int8)v10] + CAST_S_table0[BYTE1(v10)]) ^ CAST_S_table2[HIBYTE(v10)])
       - CAST_S_table3[BYTE2(v10)])
      ^ v2;
  v12 = __ROR4__(v11 ^ a2[20], 32 - a2[21]);
  v13 = (CAST_S_table2[HIBYTE(v12)] + CAST_S_table0[BYTE1(v12)] - CAST_S_table1[(unsigned __int8)v12])
      ^ v3
      ^ CAST_S_table3[BYTE2(v12)];
  v14 = __ROR4__(v13 + a2[18], 32 - a2[19]);
  v15 = ((CAST_S_table0[BYTE1(v14)] ^ CAST_S_table1[(unsigned __int8)v14])
       + CAST_S_table3[BYTE2(v14)]
       - CAST_S_table2[HIBYTE(v14)])
      ^ v11;
  v16 = __ROR4__(a2[16] - v15, 32 - a2[17]);
  v17 = (((CAST_S_table1[(unsigned __int8)v16] + CAST_S_table0[BYTE1(v16)]) ^ CAST_S_table2[HIBYTE(v16)])
       - CAST_S_table3[BYTE2(v16)])
      ^ v13;
  v18 = __ROR4__(v17 ^ a2[14], 32 - a2[15]);
  v19 = (CAST_S_table2[HIBYTE(v18)] + CAST_S_table0[BYTE1(v18)] - CAST_S_table1[(unsigned __int8)v18])
      ^ v15
      ^ CAST_S_table3[BYTE2(v18)];
  v20 = __ROR4__(v19 + a2[12], 32 - a2[13]);
  v21 = (CAST_S_table3[BYTE2(v20)]
       - CAST_S_table2[HIBYTE(v20)]
       + (CAST_S_table0[BYTE1(v20)] ^ CAST_S_table1[(unsigned __int8)v20]))
      ^ v17;
  v22 = __ROR4__(a2[10] - v21, 32 - a2[11]);
  v23 = (((CAST_S_table1[(unsigned __int8)v22] + CAST_S_table0[BYTE1(v22)]) ^ CAST_S_table2[HIBYTE(v22)])
       - CAST_S_table3[BYTE2(v22)])
      ^ v19;
  v24 = __ROR4__(v23 ^ a2[8], 32 - a2[9]);
  v25 = (CAST_S_table0[BYTE1(v24)] - CAST_S_table1[(unsigned __int8)v24] + CAST_S_table2[HIBYTE(v24)])
      ^ v21
      ^ CAST_S_table3[BYTE2(v24)];
  v26 = __ROR4__(v25 + a2[6], 32 - a2[7]);
  v27 = ((CAST_S_table0[BYTE1(v26)] ^ CAST_S_table1[(unsigned __int8)v26])
       + CAST_S_table3[BYTE2(v26)]
       - CAST_S_table2[HIBYTE(v26)])
      ^ v23;
  v28 = __ROR4__(a2[4] - v27, 32 - a2[5]);
  v29 = (((CAST_S_table0[BYTE1(v28)] + CAST_S_table1[(unsigned __int8)v28]) ^ CAST_S_table2[HIBYTE(v28)])
       - CAST_S_table3[BYTE2(v28)])
      ^ v25;
  v30 = __ROR4__(v29 ^ a2[2], 32 - a2[3]);
  v31 = (CAST_S_table0[BYTE1(v30)] - CAST_S_table1[(unsigned __int8)v30] + CAST_S_table2[HIBYTE(v30)])
      ^ v27
      ^ CAST_S_table3[BYTE2(v30)];
  v32 = __ROR4__(v31 + *a2, 32 - a2[1]);
  result[1] = v31;
  *result = ((CAST_S_table0[BYTE1(v32)] ^ CAST_S_table1[(unsigned __int8)v32])
           + CAST_S_table3[BYTE2(v32)]
           - CAST_S_table2[HIBYTE(v32)])
          ^ v29;
  return result;
}
