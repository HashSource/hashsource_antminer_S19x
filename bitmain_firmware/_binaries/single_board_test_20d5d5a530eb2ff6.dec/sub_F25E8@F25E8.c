void *__fastcall sub_F25E8(_DWORD *a1, _BYTE *a2)
{
  int v2; // r2
  unsigned int v5; // r2
  unsigned int v6; // r12
  unsigned int v7; // kr00_4
  unsigned __int64 v8; // r4
  unsigned int v9; // kr0C_4
  unsigned __int64 v10; // r0
  int v11; // lr
  unsigned int v12; // r2
  __int64 v13; // kr38_8
  unsigned int v14; // r6
  int v15; // r7
  unsigned int v16; // r6
  unsigned int v17; // r5
  unsigned int v18; // r6
  unsigned int v19; // r3
  unsigned int v20; // r12
  unsigned int v21; // r7
  unsigned __int64 v22; // r2
  unsigned __int64 v23; // r0
  unsigned __int64 v24; // kr30_8
  int v25; // r7
  int v26; // lr
  unsigned __int64 v27; // r0
  unsigned __int64 v28; // r10
  int v29; // kr04_4
  __int64 v31; // [sp+0h] [bp-64h]
  unsigned __int64 v32; // [sp+0h] [bp-64h]
  unsigned __int64 v33; // [sp+8h] [bp-5Ch]
  unsigned __int64 v34; // [sp+8h] [bp-5Ch]
  unsigned int v35; // [sp+10h] [bp-54h]
  unsigned int v36; // [sp+10h] [bp-54h]
  unsigned int v37; // [sp+1Ch] [bp-48h]
  __int64 v38; // [sp+20h] [bp-44h]
  int v39; // [sp+28h] [bp-3Ch]
  int v40; // [sp+2Ch] [bp-38h]
  int v41; // [sp+2Ch] [bp-38h]
  unsigned __int64 v42; // [sp+40h] [bp-24h]
  int v43; // [sp+48h] [bp-1Ch]

  v2 = a1[56];
  if ( v2 )
  {
    *((_BYTE *)a1 + v2 + 208) = 1;
    if ( (unsigned int)(v2 + 1) <= 0xF )
      memset((char *)a1 + v2 + 209, 0, 15 - v2);
    v5 = a1[53];
    v40 = a1[52];
    v6 = a1[5];
    v7 = a1[1];
    v31 = __CFADD__(v40, *a1);
    v39 = a1[8] + (a1[8] >> 2);
    v8 = (unsigned int)a1[54] + (unsigned __int64)(unsigned int)a1[2];
    v9 = (v31 + v5 + (unsigned __int64)v7) >> 32;
    v38 = (unsigned int)v31 + v5 + v7;
    v33 = (v8 + v9) >> 32;
    v10 = (unsigned int)a1[55] + (unsigned __int64)(unsigned int)a1[3];
    v11 = a1[7] + (a1[7] >> 2);
    v35 = v8 + v9;
    v37 = a1[6];
    LODWORD(v8) = v37 + (v37 >> 2);
    v12 = *a1 + v40;
    v41 = a1[4] + ((v33 + v10) >> 32);
    v42 = (unsigned int)v8 * (unsigned __int64)(unsigned int)(v33 + v10)
        + v35 * (unsigned __int64)(unsigned int)v11
        + v6 * (unsigned __int64)v12
        + v38 * (unsigned int)v39;
    v13 = (unsigned int)(v33 + v10);
    v43 = HIDWORD(v42) + v13 * v11 + v39 * v35 + v37 * v12 + v6 * v38 + v41 * v8;
    v34 = ((HIDWORD(v42)
          + v13 * (unsigned int)v11
          + (unsigned int)v39 * (unsigned __int64)v35
          + v37 * (unsigned __int64)v12
          + v6 * v38
          + (unsigned int)(v41 * v8)) >> 32)
        + (unsigned int)a1[7] * (unsigned __int64)v12
        + (unsigned int)v38 * (unsigned __int64)v37
        + v35 * (unsigned __int64)v6
        + v13 * (unsigned int)v39
        + (unsigned int)(v41 * v11);
    v32 = v35 * (unsigned __int64)v37
        + (unsigned int)a1[8] * (unsigned __int64)v12
        + (unsigned int)a1[7] * (unsigned __int64)(unsigned int)v38
        + v13 * v6
        + (unsigned int)(v41 * v39)
        + HIDWORD(v34);
    v14 = HIDWORD(v32) + v41 * v6;
    v15 = v14 & 3;
    v16 = (v14 & 0xFFFFFFFC) + (v14 >> 2);
    *a1 = v16 + v42;
    v17 = v16 + v42;
    LODWORD(v8) = ((v16 + (_DWORD)v42) ^ (v16 ^ (v16 + (_DWORD)v42) | v16 ^ (unsigned int)v42)) >> 31;
    a1[1] = v8 + v43;
    v36 = v8 + v43;
    HIDWORD(v10) = (v36 ^ (v43 ^ (unsigned int)v8 | (unsigned int)v8 ^ v36)) >> 31;
    a1[2] = HIDWORD(v10) + v34;
    v18 = HIDWORD(v10) + v34;
    v19 = ((HIDWORD(v10) + (_DWORD)v34)
         ^ (HIDWORD(v10) ^ (HIDWORD(v10) + (_DWORD)v34) | (unsigned int)v34 ^ HIDWORD(v10))) >> 31;
    v20 = v19 + v32;
    a1[3] = v19 + v32;
    v21 = v15 + (((v19 ^ (v19 + (_DWORD)v32) | (unsigned int)v32 ^ v19) ^ (v19 + (_DWORD)v32)) >> 31);
    a1[4] = v21;
  }
  else
  {
    v17 = *a1;
    v18 = a1[2];
    v36 = a1[1];
    v20 = a1[3];
    v21 = a1[4];
  }
  v22 = (((unsigned __int64)v17 + 5) >> 32) + v36;
  v23 = HIDWORD(v22) + (unsigned __int64)v18;
  HIDWORD(v22) = v18 ^ v23;
  v24 = HIDWORD(v23) + __PAIR64__(v21, v20);
  v25 = -(HIDWORD(v24) >> 2);
  v26 = (v17 ^ (v17 + 5)) & v25 ^ v17;
  v27 = (unsigned int)a1[49] + (unsigned __int64)(((unsigned int)v22 ^ v36) & v25 ^ v36) + __CFADD__(a1[48], v26);
  v28 = (unsigned int)a1[50] + (unsigned __int64)(v18 ^ HIDWORD(v22) & v25) + HIDWORD(v27);
  v29 = a1[51] + ((v20 ^ v24) & v25 ^ v20);
  HIDWORD(v22) = a1[48] + v26;
  a2[13] = (unsigned __int16)(v29 + WORD2(v28)) >> 8;
  a2[8] = v28;
  a2[4] = v27;
  *a2 = BYTE4(v22);
  a2[12] = v29 + BYTE4(v28);
  a2[14] = (unsigned int)(v29 + HIDWORD(v28)) >> 16;
  a2[15] = (unsigned int)(v29 + HIDWORD(v28)) >> 24;
  a2[9] = BYTE1(v28);
  a2[10] = BYTE2(v28);
  a2[11] = BYTE3(v28);
  a2[5] = BYTE1(v27);
  a2[6] = BYTE2(v27);
  a2[7] = BYTE3(v27);
  a2[1] = BYTE5(v22);
  a2[3] = HIBYTE(v22);
  a2[2] = BYTE6(v22);
  return sub_E07F8(a1, 0xF0u);
}
