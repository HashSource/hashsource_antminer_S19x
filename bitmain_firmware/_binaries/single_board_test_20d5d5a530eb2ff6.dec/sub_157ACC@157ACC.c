_DWORD *__fastcall sub_157ACC(_DWORD *result, int *a2)
{
  int v2; // r2
  int v3; // r3
  unsigned int v4; // r5
  int v5; // r4
  unsigned int v6; // r8
  unsigned __int64 v7; // r6
  unsigned __int64 v8; // r6
  unsigned __int64 v9; // r2
  int v10; // lr
  unsigned __int64 v11; // r6
  unsigned __int64 v12; // r6
  __int64 v13; // r6
  unsigned __int64 v14; // r2
  unsigned __int64 v15; // r4
  unsigned __int64 v16; // r2
  signed __int64 v17; // r10
  int v18; // [sp+0h] [bp-7Ch]
  __int64 v19; // [sp+8h] [bp-74h]
  unsigned int v20; // [sp+10h] [bp-6Ch]
  unsigned int v21; // [sp+18h] [bp-64h]
  unsigned int v22; // [sp+30h] [bp-4Ch]
  unsigned __int64 v23; // [sp+38h] [bp-44h]
  unsigned __int64 v24; // [sp+40h] [bp-3Ch]
  unsigned int v25; // [sp+48h] [bp-34h]
  unsigned __int64 v26; // [sp+50h] [bp-2Ch]
  unsigned int v27; // [sp+58h] [bp-24h]
  unsigned int v28; // [sp+60h] [bp-1Ch]

  v2 = *a2;
  v3 = *a2 << 31 >> 31;
  v4 = *a2 + (v3 & 0xAB5844F3);
  *result = v4;
  v5 = (v3 & 0x2378C292) + a2[1] + __CFADD__(v3 & 0xAB5844F3, v2);
  v6 = ((v3 & 0x2378C292) + (unsigned __int64)(unsigned int)a2[1] + __CFADD__(v3 & 0xAB5844F3, v2)) >> 32;
  result[1] = v5;
  v22 = v5;
  v7 = (v3 & 0x8DC58F55) + (unsigned __int64)(unsigned int)a2[2] + v6;
  result[2] = v7;
  v27 = v7;
  v18 = v3;
  v8 = HIDWORD(v7) + (v3 & 0x216CC272) + (unsigned __int64)(unsigned int)a2[3];
  result[3] = v8;
  v28 = v8;
  v23 = (v3 & 0xAED63690) + (unsigned __int64)(unsigned int)a2[4] + HIDWORD(v8);
  result[4] = v23;
  v19 = HIDWORD(v23);
  v24 = HIDWORD(v23) + (v3 & 0xC44EDB49) + (unsigned __int64)(unsigned int)a2[5];
  result[5] = v24;
  v9 = (v3 & 0x7CCA23E9) + (unsigned __int64)(unsigned int)a2[6] + HIDWORD(v24);
  result[6] = v9;
  v25 = v9;
  v10 = (v5 << 31) | (v4 >> 1);
  v11 = HIDWORD(v9) + (unsigned int)v18 + (unsigned __int64)(unsigned int)a2[7];
  result[7] = v11;
  v20 = v11;
  v12 = HIDWORD(v11) + (unsigned int)v18 + (unsigned __int64)(unsigned int)a2[8];
  result[8] = v12;
  LODWORD(v19) = HIDWORD(v12);
  v21 = v12;
  v13 = v19 + (unsigned int)v18 + (unsigned __int64)(unsigned int)a2[9];
  result[9] = v13;
  LODWORD(v19) = v13;
  v14 = (unsigned int)v18 + (unsigned __int64)(unsigned int)a2[10];
  result[10] = HIDWORD(v13) + v14;
  v26 = HIDWORD(v13) + v14;
  v15 = (unsigned int)v18 + (unsigned __int64)(unsigned int)a2[11] + HIDWORD(v26);
  result[11] = v15;
  v16 = HIDWORD(v15) + (unsigned int)v18 + (unsigned __int64)(unsigned int)a2[12];
  result[12] = v16;
  LODWORD(v13) = a2[13];
  *result = v10;
  result[2] = (v28 << 31) | (v27 >> 1);
  result[5] = (v25 << 31) | ((unsigned int)v24 >> 1);
  result[6] = (v20 << 31) | (v25 >> 1);
  result[7] = (v21 << 31) | (v20 >> 1);
  result[8] = ((_DWORD)v19 << 31) | (v21 >> 1);
  result[9] = ((_DWORD)v26 << 31) | ((unsigned int)v19 >> 1);
  result[10] = ((_DWORD)v15 << 31) | ((unsigned int)v26 >> 1);
  result[1] = (v27 << 31) | (v22 >> 1);
  result[11] = ((_DWORD)v16 << 31) | ((unsigned int)v15 >> 1);
  v17 = HIDWORD(v16) + (v18 & 0x3FFFFFFF) + (unsigned __int64)(unsigned int)v13;
  result[4] = ((_DWORD)v24 << 31) | ((unsigned int)v23 >> 1);
  result[3] = ((_DWORD)v23 << 31) | (v28 >> 1);
  result[12] = ((unsigned int)v16 >> 1) | ((_DWORD)v17 << 31);
  result[13] = v17 >> 1;
  return result;
}
