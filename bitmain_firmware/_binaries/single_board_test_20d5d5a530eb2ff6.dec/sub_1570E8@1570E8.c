_DWORD *__fastcall sub_1570E8(_DWORD *result, unsigned int *a2, unsigned int *a3)
{
  unsigned __int64 v3; // kr10_8
  unsigned int v4; // r10
  unsigned __int64 v5; // kr30_8
  unsigned __int64 v6; // kr38_8
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // kr40_8
  unsigned __int64 v10; // kr48_8
  unsigned __int64 v11; // kr50_8
  unsigned __int64 v12; // r4
  unsigned int v13; // r12
  unsigned int v14; // r12
  unsigned int v15; // kr60_4
  unsigned int v16; // r3
  unsigned __int64 v17; // r6
  unsigned __int64 v18; // kr68_8
  unsigned __int64 v19; // kr70_8
  unsigned __int64 v20; // kr78_8
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // r6
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r6
  unsigned __int64 v26; // r4
  unsigned __int64 v27; // r4
  unsigned __int64 v28; // r4
  unsigned __int64 v29; // r4
  unsigned __int64 v30; // r4
  unsigned __int64 v31; // r4
  unsigned __int64 v32; // r4
  unsigned __int64 v33; // [sp+0h] [bp-84h]
  int v34; // [sp+8h] [bp-7Ch]
  unsigned __int64 v35; // [sp+8h] [bp-7Ch]
  unsigned __int64 v36; // [sp+18h] [bp-6Ch]
  unsigned int v37; // [sp+20h] [bp-64h]
  unsigned __int64 v38; // [sp+28h] [bp-5Ch]
  unsigned int v39; // [sp+30h] [bp-54h]
  unsigned int v40; // [sp+48h] [bp-3Ch]
  unsigned __int64 v41; // [sp+48h] [bp-3Ch]
  int v42; // [sp+50h] [bp-34h]
  unsigned int v43; // [sp+68h] [bp-1Ch]
  unsigned __int64 v44; // [sp+78h] [bp-Ch]

  v3 = *a2 + (unsigned __int64)*a3;
  *result = v3;
  v34 = HIDWORD(v3) + a3[1] + a2[1];
  v4 = (HIDWORD(v3) + a3[1] + (unsigned __int64)a2[1]) >> 32;
  result[1] = v34;
  v5 = v4 + a3[2] + (unsigned __int64)a2[2];
  result[2] = v5;
  v6 = HIDWORD(v5) + a3[3] + (unsigned __int64)a2[3];
  result[3] = v6;
  v43 = (((unsigned __int64)(unsigned int)v3 - 2874688755u) >> 32) + v34 - 595116690;
  v7 = HIDWORD(v6) + a3[4] + (unsigned __int64)a2[4];
  result[4] = v7;
  v8 = HIDWORD(v7) + a3[5] + (unsigned __int64)a2[5];
  result[5] = v8;
  v35 = (int)(((int)(((unsigned __int64)(unsigned int)v3 - 2874688755u) >> 32)
             + (unsigned __int64)(unsigned int)v34
             - 595116690) >> 32)
      + (unsigned __int64)(unsigned int)v5
      - 2378534741u;
  v9 = HIDWORD(v8) + a3[6] + (unsigned __int64)a2[6];
  result[6] = v9;
  v10 = HIDWORD(v9) + a3[7] + (unsigned __int64)a2[7];
  result[7] = v10;
  v11 = HIDWORD(v10) + a3[8] + (unsigned __int64)a2[8];
  result[8] = v11;
  v12 = HIDWORD(v11) + a3[9] + (unsigned __int64)a2[9];
  result[9] = v12;
  v40 = v12;
  v13 = (HIDWORD(v12) + a3[10] + (unsigned __int64)a2[10]) >> 32;
  HIDWORD(v8) = HIDWORD(v12) + a3[10] + a2[10];
  result[10] = HIDWORD(v8);
  LODWORD(v12) = a3[11];
  v42 = HIDWORD(v8);
  v15 = v13 + v12 + a2[11];
  v14 = (v13 + (unsigned int)v12 + (unsigned __int64)a2[11]) >> 32;
  result[11] = v15;
  v12 = (unsigned int)v12;
  v16 = a2[12];
  LODWORD(v12) = a3[12];
  result[12] = v14 + v12 + v16;
  v44 = v14 + v12 + v16;
  v33 = HIDWORD(v44) + a3[13] + (unsigned __int64)a2[13];
  v17 = SHIDWORD(v35) + (unsigned __int64)(unsigned int)v6;
  v36 = (int)(HIDWORD(v17) + (((unsigned __int64)(unsigned int)v17 - 560775794) >> 32))
      + (unsigned __int64)(unsigned int)v7
      - 2933274256u;
  v37 = HIDWORD(v36) + v8 + 1001465015;
  v18 = (int)((SHIDWORD(v36) + (unsigned __int64)(unsigned int)v8 - 3293502281u) >> 32)
      + (unsigned __int64)(unsigned int)v9
      - 2093622249;
  v39 = ((SHIDWORD(v36) + (unsigned __int64)(unsigned int)v8 - 3293502281u) >> 32) + v9 - 2093622249;
  v41 = (int)((((int)(((SHIDWORD(v18) + (unsigned __int64)(unsigned int)v10 + 1) >> 32) - 1)
              + (unsigned __int64)(unsigned int)v11
              + 1) >> 32)
            - 1)
      + (unsigned __int64)v40
      - 0xFFFFFFFF;
  v19 = SHIDWORD(v41) + (unsigned __int64)HIDWORD(v8) + 1;
  v38 = (int)(((int)(((HIDWORD(v19) - 1 + (unsigned __int64)v15 + 1) >> 32) - 1)
             + (unsigned __int64)(unsigned int)v44
             - 0xFFFFFFFF) >> 32)
      + (unsigned __int64)(unsigned int)v33
      - 0x3FFFFFFF;
  v20 = (unsigned int)(v3 + 1420278541) + (unsigned __int64)((HIDWORD(v33) + HIDWORD(v38)) & 0xAB5844F3);
  *result = v20;
  v21 = SHIDWORD(v20) + (unsigned __int64)v43 + ((HIDWORD(v33) + HIDWORD(v38)) & 0x2378C292);
  result[1] = v21;
  v22 = SHIDWORD(v21) + (unsigned __int64)(unsigned int)v35 + ((HIDWORD(v33) + HIDWORD(v38)) & 0x8DC58F55);
  v23 = SHIDWORD(v22) + (unsigned __int64)(unsigned int)(v17 - 560775794) + ((HIDWORD(v33) + HIDWORD(v38)) & 0x216CC272);
  result[2] = v22;
  result[3] = v23;
  v24 = SHIDWORD(v23) + (unsigned __int64)(unsigned int)v36 + ((HIDWORD(v33) + HIDWORD(v38)) & 0xAED63690);
  result[4] = v24;
  v25 = SHIDWORD(v24) + (unsigned __int64)v37 + ((HIDWORD(v33) + HIDWORD(v38)) & 0xC44EDB49);
  result[5] = v25;
  v26 = SHIDWORD(v25) + (unsigned __int64)v39 + ((HIDWORD(v33) + HIDWORD(v38)) & 0x7CCA23E9);
  result[6] = v26;
  v27 = SHIDWORD(v26)
      + (unsigned __int64)(unsigned int)(HIDWORD(v18) + v10 + 1)
      + (unsigned int)(HIDWORD(v33) + HIDWORD(v38));
  result[7] = v27;
  v28 = SHIDWORD(v27)
      + (unsigned __int64)(unsigned int)(((SHIDWORD(v18) + (unsigned __int64)(unsigned int)v10 + 1) >> 32) + v11)
      + (unsigned int)(HIDWORD(v33) + HIDWORD(v38));
  result[8] = v28;
  v29 = (unsigned int)(HIDWORD(v33) + HIDWORD(v38)) + SHIDWORD(v28) + (unsigned __int64)(unsigned int)v41;
  result[9] = v29;
  v30 = SHIDWORD(v29)
      + (unsigned __int64)(unsigned int)(HIDWORD(v41) + v42 + 1)
      + (unsigned int)(HIDWORD(v33) + HIDWORD(v38));
  result[10] = v30;
  v31 = SHIDWORD(v30) + (unsigned __int64)(HIDWORD(v19) + v15) + (unsigned int)(HIDWORD(v33) + HIDWORD(v38));
  result[11] = v31;
  v32 = SHIDWORD(v31)
      + (unsigned __int64)(unsigned int)(((HIDWORD(v19) - 1 + (unsigned __int64)v15 + 1) >> 32) + v44)
      + (unsigned int)(HIDWORD(v33) + HIDWORD(v38));
  result[12] = v32;
  result[13] = HIDWORD(v32) + v38 + ((HIDWORD(v33) + HIDWORD(v38)) & 0x3FFFFFFF);
  return result;
}
