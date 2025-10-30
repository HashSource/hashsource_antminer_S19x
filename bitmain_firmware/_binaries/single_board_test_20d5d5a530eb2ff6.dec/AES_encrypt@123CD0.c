unsigned int __fastcall AES_encrypt(unsigned __int8 *a1, _BYTE *a2, _DWORD *a3)
{
  _DWORD *v3; // r11
  int v4; // r6
  int v5; // r4
  unsigned int v6; // r10
  unsigned int v7; // r2
  unsigned int v8; // r12
  unsigned int i; // r0
  int v10; // r4
  int v11; // lr
  int v12; // r7
  unsigned __int8 *v13; // r5
  int v14; // r4
  int v15; // r8
  int v16; // r12
  int v17; // r9
  int v18; // r0
  int v19; // r1
  int v20; // r5
  unsigned int v21; // lr
  int v22; // r2
  unsigned int v23; // r12
  unsigned int v24; // r0
  unsigned int v25; // r1
  unsigned int v26; // r9
  int v27; // r6
  unsigned int v28; // r2
  _DWORD *v29; // r10
  unsigned int v30; // r1
  int v31; // lr
  int v32; // r7
  unsigned int v33; // r1
  int v34; // r5
  int v35; // lr
  unsigned int v36; // r1
  int v37; // r5
  int v38; // r6
  int v39; // r2
  unsigned int v40; // r3
  int v42; // [sp+0h] [bp-1Ch]
  int v44; // [sp+10h] [bp-Ch]

  v3 = a3 + 20;
  v44 = (int)a3[60] >> 1;
  v4 = a3[3] ^ (a1[15] ^ ((a1[13] << 16) | (a1[12] << 24)) | (a1[14] << 8));
  v5 = a3[2];
  v6 = (((a1[1] << 16) | (*a1 << 24)) ^ a1[3] | (a1[2] << 8)) ^ *a3;
  v42 = v44;
  v7 = a3[1] ^ (a1[7] ^ ((a1[5] << 16) | (a1[4] << 24)) | (a1[6] << 8));
  v8 = (((a1[9] << 16) | (a1[8] << 24)) ^ a1[11] | (a1[10] << 8)) ^ v5;
  for ( i = v4; ; i = *(_DWORD *)&byte_1C7494[4 * BYTE1(v24) + 2048] ^ v10 )
  {
    v11 = *(_DWORD *)&byte_1C7494[4 * HIBYTE(i)] ^ *(_DWORD *)&byte_1C7494[4 * (unsigned __int8)v8 + 3072];
    v12 = *(_DWORD *)&byte_1C7494[4 * (unsigned __int8)v7 + 3072] ^ *(_DWORD *)&byte_1C7494[4 * HIBYTE(v8)];
    v13 = &byte_1C7494[4 * BYTE2(i)];
    v14 = *(_DWORD *)&byte_1C7494[4 * BYTE2(v8) + 1024];
    v15 = *(_DWORD *)&byte_1C7494[4 * HIBYTE(v6)]
        ^ *(_DWORD *)&byte_1C7494[4 * (unsigned __int8)i + 3072]
        ^ *(v3 - 16)
        ^ *(_DWORD *)&byte_1C7494[4 * BYTE2(v7) + 1024];
    v16 = *(_DWORD *)&byte_1C7494[4 * BYTE1(v8) + 2048];
    v17 = *(_DWORD *)&byte_1C7494[4 * HIBYTE(v7)]
        ^ *(_DWORD *)&byte_1C7494[4 * (unsigned __int8)v6 + 3072]
        ^ *(v3 - 15)
        ^ v14;
    v18 = *(_DWORD *)&byte_1C7494[4 * BYTE1(i) + 2048];
    v19 = *(_DWORD *)&byte_1C7494[4 * BYTE1(v6) + 2048];
    v20 = *((_DWORD *)v13 + 256) ^ v12 ^ *(v3 - 14);
    v21 = v11
        ^ *(v3 - 13)
        ^ *(_DWORD *)&byte_1C7494[4 * BYTE2(v6) + 1024]
        ^ *(_DWORD *)&byte_1C7494[4 * BYTE1(v7) + 2048];
    v22 = v42;
    __pld(v3);
    v23 = v15 ^ v16;
    __pld(v3 + 1);
    v24 = v17 ^ v18;
    v25 = v19 ^ v20;
    v3 += 8;
    v42 = v22 - 1;
    if ( v22 == 1 )
      break;
    v6 = *(_DWORD *)&byte_1C7494[4 * HIBYTE(v23)]
       ^ *(_DWORD *)&byte_1C7494[4 * (unsigned __int8)v21 + 3072]
       ^ *(v3 - 20)
       ^ *(_DWORD *)&byte_1C7494[4 * BYTE2(v24) + 1024]
       ^ *(_DWORD *)&byte_1C7494[4 * BYTE1(v25) + 2048];
    v10 = *(_DWORD *)&byte_1C7494[4 * BYTE2(v23) + 1024]
        ^ *(v3 - 17)
        ^ *(_DWORD *)&byte_1C7494[4 * (unsigned __int8)v25 + 3072]
        ^ *(_DWORD *)&byte_1C7494[4 * HIBYTE(v21)];
    v7 = *(_DWORD *)&byte_1C7494[4 * BYTE2(v25) + 1024]
       ^ *(v3 - 19)
       ^ *(_DWORD *)&byte_1C7494[4 * HIBYTE(v24)]
       ^ *(_DWORD *)&byte_1C7494[4 * (unsigned __int8)v23 + 3072]
       ^ *(_DWORD *)&byte_1C7494[4 * BYTE1(v21) + 2048];
    v8 = *(_DWORD *)&byte_1C7494[4 * HIBYTE(v25)]
       ^ *(_DWORD *)&byte_1C7494[4 * (unsigned __int8)v24 + 3072]
       ^ *(v3 - 18)
       ^ *(_DWORD *)&byte_1C7494[4 * BYTE2(v21) + 1024]
       ^ *(_DWORD *)&byte_1C7494[4 * BYTE1(v23) + 2048];
  }
  v26 = v25;
  v27 = *(_DWORD *)&byte_1C7494[4 * HIBYTE(v24) + 2048];
  v28 = v21;
  v29 = &a3[8 * v44];
  v30 = *(_DWORD *)&byte_1C7494[4 * BYTE1(v25)]
      & 0xFF00
      ^ *(_DWORD *)&byte_1C7494[4 * BYTE2(v24) + 3072]
      & 0xFF0000
      ^ *(_DWORD *)&byte_1C7494[4 * HIBYTE(v23) + 2048]
      & 0xFF000000
      ^ byte_1C7494[4 * (unsigned __int8)v21 + 1024]
      ^ *v29;
  a2[3] = v30;
  v31 = byte_1C7494[4 * (unsigned __int8)v23 + 1024];
  *a2 = HIBYTE(v30);
  a2[1] = BYTE2(v30);
  a2[2] = BYTE1(v30);
  v32 = *(_DWORD *)&byte_1C7494[4 * HIBYTE(v26) + 2048];
  v33 = *(_DWORD *)&byte_1C7494[4 * BYTE1(v28)]
      & 0xFF00
      ^ v27
      & 0xFF000000
      ^ v31
      ^ v29[1]
      ^ *(_DWORD *)&byte_1C7494[4 * BYTE2(v26) + 3072]
      & 0xFF0000;
  v34 = byte_1C7494[4 * (unsigned __int8)v24 + 1024];
  a2[7] = v31 ^ *((_BYTE *)v29 + 4);
  a2[4] = HIBYTE(v33);
  v35 = *(_DWORD *)&byte_1C7494[4 * BYTE2(v28) + 3072];
  a2[5] = BYTE2(v33);
  a2[6] = BYTE1(v33);
  v36 = v32 & 0xFF000000 ^ v34 ^ v29[2] ^ v35 & 0xFF0000 ^ *(_DWORD *)&byte_1C7494[4 * BYTE1(v23)] & 0xFF00;
  v37 = *(_DWORD *)&byte_1C7494[4 * HIBYTE(v28) + 2048];
  v38 = byte_1C7494[4 * (unsigned __int8)v26 + 1024];
  a2[11] = v36;
  v39 = *(_DWORD *)&byte_1C7494[4 * BYTE2(v23) + 3072];
  a2[8] = HIBYTE(v36);
  a2[9] = BYTE2(v36);
  a2[10] = BYTE1(v36);
  v40 = *(_DWORD *)&byte_1C7494[4 * BYTE1(v24)] & 0xFF00 ^ v39 & 0xFF0000 ^ v29[3] ^ v38 ^ v37 & 0xFF000000;
  a2[15] = v40;
  a2[12] = HIBYTE(v40);
  a2[13] = BYTE2(v40);
  a2[14] = BYTE1(v40);
  return HIBYTE(v40);
}
