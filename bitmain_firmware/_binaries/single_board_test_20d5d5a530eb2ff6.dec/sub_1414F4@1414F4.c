_DWORD *__fastcall sub_1414F4(_DWORD *result, unsigned int *a2)
{
  int v2; // r6
  unsigned int v3; // r6
  unsigned __int64 v4; // r4
  __int64 v5; // r8
  __int64 v6; // r6
  __int64 v7; // [sp+0h] [bp-C4h]
  unsigned __int64 v8; // [sp+8h] [bp-BCh]
  __int64 v9; // [sp+10h] [bp-B4h]
  unsigned __int64 v10; // [sp+18h] [bp-ACh]
  __int64 v11; // [sp+20h] [bp-A4h]
  __int64 v12; // [sp+28h] [bp-9Ch]
  __int64 v13; // [sp+30h] [bp-94h]
  unsigned int v14; // [sp+88h] [bp-3Ch]
  unsigned int v15; // [sp+90h] [bp-34h]
  __int64 v16; // [sp+90h] [bp-34h]
  __int64 v17; // [sp+98h] [bp-2Ch]
  __int64 v18; // [sp+A0h] [bp-24h]
  __int64 v19; // [sp+A0h] [bp-24h]
  unsigned int v20; // [sp+A8h] [bp-1Ch]

  LOWORD(v2) = -1;
  BYTE2(v2) = 127;
  v11 = 4LL
      * (v2
       & ((*((unsigned __int8 *)a2 + 31) << 16)
        | (*((unsigned __int8 *)a2 + 30) << 8)
        | (unsigned int)*((unsigned __int8 *)a2 + 29)));
  v3 = *((unsigned __int8 *)a2 + 23) | (*((unsigned __int8 *)a2 + 24) << 8) | (*((unsigned __int8 *)a2 + 25) << 16);
  v8 = (unsigned __int64)(*((unsigned __int8 *)a2 + 4)
                        | (*((unsigned __int8 *)a2 + 5) << 8)
                        | (*((unsigned __int8 *)a2 + 6) << 16)) << 6;
  v7 = (v11 + 0x1000000) >> 25;
  v9 = 8LL
     * ((*((unsigned __int8 *)a2 + 12) << 16)
      | (*((unsigned __int8 *)a2 + 11) << 8)
      | (unsigned int)*((unsigned __int8 *)a2 + 10));
  v10 = __PAIR64__((32 * ((unsigned __int64)*((unsigned __int8 *)a2 + 25) >> 16)) | (v3 >> 27), 32 * v3);
  LODWORD(v18) = 8 * v7;
  HIDWORD(v18) = (v11 + 0x1000000) >> 54;
  v4 = (unsigned __int64)*((unsigned __int8 *)a2 + 22) << 16;
  v14 = (*((unsigned __int8 *)a2 + 14) << 8) | (*((unsigned __int8 *)a2 + 15) << 16) | *((unsigned __int8 *)a2 + 13);
  v15 = *((unsigned __int8 *)a2 + 20) | (*((unsigned __int8 *)a2 + 21) << 8) | v4;
  v20 = a2[4];
  HIDWORD(v13) = (4
                * (((unsigned __int64)*((unsigned __int8 *)a2 + 14) >> 24)
                 | ((unsigned __int64)*((unsigned __int8 *)a2 + 15) >> 16)))
               | (v14 >> 30);
  HIDWORD(v5) = ((((unsigned __int64)*((unsigned __int8 *)a2 + 21) >> 24) | HIDWORD(v4)) << 7) | (v15 >> 25);
  v12 = 32LL
      * ((*((unsigned __int8 *)a2 + 8) << 8)
       | (*((unsigned __int8 *)a2 + 9) << 16)
       | (unsigned int)*((unsigned __int8 *)a2 + 7));
  LODWORD(v13) = 4 * v14;
  LODWORD(v5) = v15 << 7;
  v16 = 2 * (v18 + v7) + v7 + *a2;
  v17 = ((v20 + 0x1000000LL) >> 25) + v5;
  v6 = v12 + ((__int64)(v8 + 0x1000000) >> 25) + 0x2000000;
  v19 = ((__int64)(v10 + 0x1000000) >> 25)
      + 16LL
      * (*((unsigned __int8 *)a2 + 26) | (*((unsigned __int8 *)a2 + 28) << 16) | (*((unsigned __int8 *)a2 + 27) << 8));
  *result = v16 - ((v16 + 0x2000000) & 0xFC000000);
  result[1] = ((v16 + 0x2000000) >> 26) + v8 - ((v8 + 0x1000000) & 0xFE000000);
  result[5] = ((((v9 + 0x1000000) >> 25) + v13 + 0x2000000) >> 26) + v20 - ((v20 + 0x1000000) & 0xFE000000);
  result[6] = v17 - ((v17 + 0x2000000) & 0xFC000000);
  result[2] = v12 + ((__int64)(v8 + 0x1000000) >> 25) - (v6 & 0xFC000000);
  result[7] = v10 - ((v10 + 0x1000000) & 0xFE000000) + ((v17 + 0x2000000) >> 26);
  result[9] = ((v19 + 0x2000000) >> 26) + v11 - ((v11 + 0x1000000) & 0xFE000000);
  result[3] = (v6 >> 26) + v9 - ((v9 + 0x1000000) & 0xFE000000);
  result[4] = ((v9 + 0x1000000) >> 25) + 4 * v14 - ((((v9 + 0x1000000) >> 25) + 4 * v14 + 0x2000000) & 0xFC000000);
  result[8] = v19 - ((v19 + 0x2000000) & 0xFC000000);
  return result;
}
