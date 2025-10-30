int __fastcall sub_123A94(unsigned __int8 *a1, int a2, int *a3)
{
  int result; // r0
  int v5; // r3
  int v6; // r6
  int *v7; // r3
  int *v8; // r2
  int v9; // r1
  int v10; // r4
  int v11; // r5
  int v12; // r4
  int v13; // r4
  int v14; // r4
  int *v15; // r11
  unsigned int v16; // r6
  unsigned int v17; // r4
  unsigned int v18; // r1
  unsigned int v19; // r0
  int v20; // r9
  int v21; // r4
  int v22; // r6
  int v23; // r7
  int v24; // r1
  int v25; // r6
  int v26; // r5
  int v27; // [sp+0h] [bp-14h]

  result = sub_123194(a1, a2, a3);
  if ( result >= 0 )
  {
    v5 = a3[60];
    v6 = 4 * v5;
    if ( 4 * v5 > 0 )
    {
      v7 = &a3[4 * v5];
      v8 = a3;
      v9 = 0;
      do
      {
        v10 = *v8;
        v9 += 4;
        v11 = *v7;
        v8 += 4;
        v7 -= 4;
        *(v8 - 4) = v11;
        v7[4] = v10;
        v12 = *(v8 - 3);
        *(v8 - 3) = v7[5];
        v7[5] = v12;
        v13 = *(v8 - 2);
        *(v8 - 2) = v7[6];
        v7[6] = v13;
        v14 = *(v8 - 1);
        *(v8 - 1) = v7[7];
        v7[7] = v14;
      }
      while ( v9 < v6 - v9 );
      v5 = a3[60];
    }
    if ( v5 > 1 )
    {
      v15 = a3;
      v27 = 1;
      do
      {
        v16 = v15[4];
        v15 += 4;
        v17 = v15[1];
        ++v27;
        v18 = v15[2];
        v19 = v15[3];
        v20 = dword_1C858C[byte_1C7494[4 * HIBYTE(v17) + 1024] - 52]
            ^ dword_1C858C[byte_1C7494[4 * (unsigned __int8)v17 + 1024] + 204]
            ^ dword_1C858C[byte_1C7494[4 * BYTE2(v17) + 1024] + 460];
        v21 = dword_1C858C[byte_1C7494[4 * BYTE1(v17) + 1024] + 716];
        v22 = dword_1C858C[byte_1C7494[4 * HIBYTE(v16) + 1024] - 52]
            ^ dword_1C858C[byte_1C7494[4 * (unsigned __int8)v16 + 1024] + 204]
            ^ dword_1C858C[byte_1C7494[4 * BYTE2(v16) + 1024] + 460]
            ^ dword_1C858C[byte_1C7494[4 * BYTE1(v16) + 1024] + 716];
        v15[2] = dword_1C858C[byte_1C7494[4 * HIBYTE(v18) + 1024] - 52]
               ^ dword_1C858C[byte_1C7494[4 * (unsigned __int8)v18 + 1024] + 204]
               ^ dword_1C858C[byte_1C7494[4 * BYTE2(v18) + 1024] + 460]
               ^ dword_1C858C[byte_1C7494[4 * BYTE1(v18) + 1024] + 716];
        v23 = byte_1C7494[4 * (unsigned __int8)v19 + 1024];
        v24 = byte_1C7494[4 * HIBYTE(v19) + 1024];
        *v15 = v22;
        v25 = byte_1C7494[4 * BYTE2(v19) + 1024];
        v26 = byte_1C7494[4 * BYTE1(v19) + 1024];
        v15[1] = v20 ^ v21;
        v15[3] = dword_1C858C[v26 + 716] ^ dword_1C858C[v25 + 460] ^ dword_1C858C[v24 - 52] ^ dword_1C858C[v23 + 204];
      }
      while ( a3[60] > v27 );
    }
    return 0;
  }
  return result;
}
