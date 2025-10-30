unsigned int *__fastcall sub_173D20(unsigned int *result, _DWORD *a2)
{
  _DWORD *v2; // r3
  unsigned int v3; // r5
  unsigned int v4; // r4
  unsigned int v5; // r5
  unsigned int v6; // r4
  unsigned int v7; // r2
  unsigned int v8; // r5
  unsigned int v9; // r4
  unsigned int v10; // r5
  unsigned int v11; // r4
  unsigned int v12; // r2
  unsigned int v13; // r5
  unsigned int v14; // r4
  unsigned int v15; // r5
  unsigned int v16; // r4
  int v17; // r9
  int v18; // r6
  int v19; // r5
  int v20; // r4
  int v21; // r1
  unsigned int v22; // r2
  int v23; // lr
  int v24; // r5
  int v25; // r4
  int v26; // r3

  v2 = a2 + 18;
  v3 = *a2 ^ *result;
  v4 = a2[1]
     ^ result[1]
     ^ (a2[(unsigned __int8)v3 + 786] + (a2[BYTE1(v3) + 530] ^ (a2[HIBYTE(v3) + 18] + a2[BYTE2(v3) + 274])));
  v5 = v3
     ^ a2[2]
     ^ (a2[(unsigned __int8)v4 + 786] + ((a2[BYTE2(v4) + 274] + a2[HIBYTE(v4) + 18]) ^ a2[BYTE1(v4) + 530]));
  v6 = v4
     ^ a2[3]
     ^ (a2[(unsigned __int8)v5 + 786] + (a2[BYTE1(v5) + 530] ^ (a2[BYTE2(v5) + 274] + a2[HIBYTE(v5) + 18])));
  v7 = a2[4]
     ^ v5
     ^ (a2[(unsigned __int8)v6 + 786] + (a2[BYTE1(v6) + 530] ^ (a2[BYTE2(v6) + 274] + a2[HIBYTE(v6) + 18])));
  v8 = a2[5]
     ^ v6
     ^ (a2[(unsigned __int8)v7 + 786] + (a2[BYTE1(v7) + 530] ^ (a2[HIBYTE(v7) + 18] + a2[BYTE2(v7) + 274])));
  v9 = a2[6]
     ^ v7
     ^ (a2[(unsigned __int8)v8 + 786] + (a2[BYTE1(v8) + 530] ^ (a2[HIBYTE(v8) + 18] + a2[BYTE2(v8) + 274])));
  v10 = v8
      ^ a2[7]
      ^ (a2[(unsigned __int8)v9 + 786] + ((a2[BYTE2(v9) + 274] + a2[HIBYTE(v9) + 18]) ^ a2[BYTE1(v9) + 530]));
  v11 = v9
      ^ a2[8]
      ^ (a2[(unsigned __int8)v10 + 786] + (a2[BYTE1(v10) + 530] ^ (a2[BYTE2(v10) + 274] + a2[HIBYTE(v10) + 18])));
  v12 = a2[9]
      ^ v10
      ^ (a2[(unsigned __int8)v11 + 786] + (a2[BYTE1(v11) + 530] ^ (a2[BYTE2(v11) + 274] + a2[HIBYTE(v11) + 18])));
  v13 = a2[10]
      ^ v11
      ^ (a2[(unsigned __int8)v12 + 786] + (a2[BYTE1(v12) + 530] ^ (a2[BYTE2(v12) + 274] + a2[HIBYTE(v12) + 18])));
  v14 = a2[11]
      ^ v12
      ^ (a2[(unsigned __int8)v13 + 786] + (a2[BYTE1(v13) + 530] ^ (a2[HIBYTE(v13) + 18] + a2[BYTE2(v13) + 274])));
  v15 = (a2[(unsigned __int8)v14 + 786] + (a2[BYTE1(v14) + 530] ^ (a2[HIBYTE(v14) + 18] + a2[BYTE2(v14) + 274])))
      ^ a2[12]
      ^ v13;
  v16 = (a2[(unsigned __int8)v15 + 786] + (a2[BYTE1(v15) + 530] ^ (a2[HIBYTE(v15) + 18] + a2[BYTE2(v15) + 274])))
      ^ a2[13]
      ^ v14;
  v17 = a2[14] ^ v15;
  v18 = a2[17];
  v19 = a2[(unsigned __int8)v16 + 786] + ((a2[BYTE2(v16) + 274] + a2[HIBYTE(v16) + 18]) ^ a2[BYTE1(v16) + 530]);
  v20 = v16 ^ a2[15];
  v21 = v17 ^ v19 ^ a2[16];
  v22 = (v2[(unsigned __int8)(v17 ^ v19) + 768]
       + (v2[(unsigned __int8)((unsigned __int16)(v17 ^ v19) >> 8) + 512]
        ^ (v2[(v17 ^ (unsigned int)v19) >> 24] + v2[(unsigned __int8)((v17 ^ (unsigned int)v19) >> 16) + 256])))
      ^ v20;
  v23 = v2[BYTE2(v22) + 256];
  v24 = v2[HIBYTE(v22)];
  v25 = v2[BYTE1(v22) + 512];
  v26 = v2[(unsigned __int8)v22 + 768];
  *result = v18 ^ v22;
  result[1] = (v26 + ((v23 + v24) ^ v25)) ^ v21;
  return result;
}
