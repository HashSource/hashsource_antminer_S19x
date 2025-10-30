_BYTE *__fastcall sub_E778C(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r5
  unsigned int v4; // r1
  _BYTE *result; // r0
  int v7; // lr
  int v8; // r8
  int v9; // r10
  _BYTE *v10; // r3
  int v11; // r4
  int v12; // r1
  int v13; // r1
  char v14; // r9
  int v15; // r1
  int v16; // r1
  char v17; // r9
  int v18; // r1
  int v19; // r1
  char v20; // r9
  int v21; // r1
  int v22; // r1
  char v23; // r9
  int v24; // r1
  int v25; // r1
  int v26; // r9
  int v27; // r1
  int v28; // r8
  int v29; // r1
  int v30; // r2
  void *v31; // r0
  unsigned int v32; // r1

  v2 = a1[5];
  if ( v2 >= a2 )
    return (_BYTE *)(a1[16] + 16 * a2);
  v4 = a1[6];
  if ( a2 < v4 )
  {
    result = (_BYTE *)a1[16];
    goto LABEL_5;
  }
  v31 = (void *)a1[16];
  v32 = v4 + ((4 - v4 + a2) & 0xFFFFFFFC);
  a1[6] = v32;
  result = CRYPTO_realloc(v31, (void *)(16 * v32), (int)"crypto/modes/ocb128.c", 113);
  if ( result )
  {
    a1[16] = result;
LABEL_5:
    v7 = 16 * v2;
    do
    {
      v8 = (unsigned __int8)result[v7 + 15];
      v9 = (unsigned __int8)result[v7 + 14];
      v10 = &result[v7 + 16];
      ++v2;
      v11 = ((char)result[v7] >> 7) & 0x87 ^ (2 * v8);
      v10[14] = (v8 >> 7) | (2 * v9);
      v12 = (unsigned __int8)result[v7 + 13];
      LOBYTE(v8) = v12 >> 7;
      v10[13] = (v9 >> 7) | (2 * v12);
      v13 = (unsigned __int8)result[v7 + 12];
      v14 = v13 >> 7;
      v10[12] = v8 | (2 * v13);
      v15 = (unsigned __int8)result[v7 + 11];
      LOBYTE(v8) = v15 >> 7;
      v10[11] = v14 | (2 * v15);
      v16 = (unsigned __int8)result[v7 + 10];
      v17 = v16 >> 7;
      v10[10] = v8 | (2 * v16);
      v18 = (unsigned __int8)result[v7 + 9];
      LOBYTE(v8) = v18 >> 7;
      v10[9] = v17 | (2 * v18);
      v19 = (unsigned __int8)result[v7 + 8];
      v20 = v19 >> 7;
      v10[8] = v8 | (2 * v19);
      v21 = (unsigned __int8)result[v7 + 7];
      LOBYTE(v8) = v21 >> 7;
      v10[7] = v20 | (2 * v21);
      v22 = (unsigned __int8)result[v7 + 6];
      v23 = v22 >> 7;
      v10[6] = v8 | (2 * v22);
      v24 = (unsigned __int8)result[v7 + 5];
      LOBYTE(v8) = v24 >> 7;
      v10[5] = v23 | (2 * v24);
      v25 = (unsigned __int8)result[v7 + 4];
      v26 = v25 >> 7;
      v10[4] = v8 | (2 * v25);
      v27 = (unsigned __int8)result[v7 + 3];
      v28 = v27 >> 7;
      v10[3] = v26 | (2 * v27);
      v29 = (unsigned __int8)result[v7 + 2];
      v10[2] = v28 | (2 * v29);
      v30 = (unsigned __int8)result[v7 + 1];
      v10[1] = (v29 >> 7) | (2 * v30);
      LOBYTE(v29) = result[v7];
      v7 += 16;
      result[v7] = (v30 >> 7) | (2 * v29);
      v10[15] = v11;
      result = (_BYTE *)a1[16];
    }
    while ( a2 != v2 );
    a1[5] = a2;
    result += 16 * a2;
  }
  return result;
}
