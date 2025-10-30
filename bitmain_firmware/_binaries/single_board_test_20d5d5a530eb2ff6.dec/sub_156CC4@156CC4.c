_DWORD *__fastcall sub_156CC4(_DWORD *result, unsigned int *a2, unsigned int *a3)
{
  unsigned __int64 v3; // kr08_8
  unsigned __int64 v4; // r4
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r4
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // kr18_8
  unsigned __int64 v9; // r4
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r6
  unsigned __int64 v14; // r6
  unsigned __int64 v15; // r4
  unsigned __int64 v16; // kr20_8
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r4
  unsigned __int64 v19; // r4
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r2
  unsigned __int64 v23; // r4
  unsigned __int64 v24; // r6
  unsigned __int64 v25; // r2
  unsigned __int64 v26; // kr28_8
  unsigned __int64 v27; // kr30_8
  unsigned int v28; // [sp+8h] [bp-6Ch]
  unsigned int v29; // [sp+10h] [bp-64h]
  unsigned int v30; // [sp+20h] [bp-54h]
  int v31; // [sp+28h] [bp-4Ch]
  unsigned int v32; // [sp+30h] [bp-44h]
  unsigned int v33; // [sp+38h] [bp-3Ch]
  unsigned int v34; // [sp+40h] [bp-34h]
  unsigned int v35; // [sp+48h] [bp-2Ch]
  unsigned int v36; // [sp+58h] [bp-1Ch]
  unsigned int v37; // [sp+60h] [bp-14h]
  unsigned int v38; // [sp+68h] [bp-Ch]

  v3 = *a2 - (unsigned __int64)*a3;
  *result = v3;
  v4 = SHIDWORD(v3) + (unsigned __int64)a2[1] - a3[1];
  result[1] = v4;
  v36 = v4;
  v5 = SHIDWORD(v4) + (unsigned __int64)a2[2] - a3[2];
  result[2] = v5;
  v37 = v5;
  v6 = SHIDWORD(v5) + (unsigned __int64)a2[3] - a3[3];
  result[3] = v6;
  v28 = v6;
  v7 = SHIDWORD(v6) + (unsigned __int64)a2[4] - a3[4];
  result[4] = v7;
  v29 = v7;
  v8 = SHIDWORD(v7) + (unsigned __int64)a2[5] - a3[5];
  result[5] = v8;
  v9 = SHIDWORD(v8) + (unsigned __int64)a2[6] - a3[6];
  result[6] = v9;
  v30 = v9;
  v10 = SHIDWORD(v9) + (unsigned __int64)a2[7] - a3[7];
  result[7] = v10;
  v11 = SHIDWORD(v10) + (unsigned __int64)a2[8] - a3[8];
  result[8] = v11;
  v32 = v11;
  v12 = SHIDWORD(v11) + (unsigned __int64)a2[9] - a3[9];
  result[9] = v12;
  v33 = v12;
  v13 = SHIDWORD(v12) + (unsigned __int64)a2[10] - a3[10];
  result[10] = v13;
  v38 = v13;
  v14 = SHIDWORD(v13) + (unsigned __int64)a2[11] - a3[11];
  result[11] = v14;
  v34 = v14;
  v15 = SHIDWORD(v14) + (unsigned __int64)a2[12] - a3[12];
  result[12] = v15;
  v35 = v15;
  v16 = SHIDWORD(v15) + (unsigned __int64)a2[13] - a3[13];
  v31 = HIDWORD(v15) + a2[13] - a3[13];
  *result = (HIDWORD(v16) & 0xAB5844F3) + v3;
  v17 = (int)(((HIDWORD(v16) & 0xAB5844F3) + (unsigned __int64)(unsigned int)v3) >> 32)
      + (unsigned __int64)v36
      + (HIDWORD(v16) & 0x2378C292);
  result[1] = v17;
  v18 = SHIDWORD(v17) + (unsigned __int64)v37 + (HIDWORD(v16) & 0x8DC58F55);
  result[2] = v18;
  result[3] = HIDWORD(v18) + v28 + (HIDWORD(v16) & 0x216CC272);
  v19 = (int)((SHIDWORD(v18) + (unsigned __int64)v28 + (HIDWORD(v16) & 0x216CC272)) >> 32)
      + (unsigned __int64)v29
      + (HIDWORD(v16) & 0xAED63690);
  result[4] = v19;
  v20 = SHIDWORD(v19) + (unsigned __int64)(unsigned int)v8 + (HIDWORD(v16) & 0xC44EDB49);
  result[5] = v20;
  v21 = SHIDWORD(v20) + (unsigned __int64)v30 + (HIDWORD(v16) & 0x7CCA23E9);
  result[6] = v21;
  v22 = HIDWORD(v16) + SHIDWORD(v21) + (unsigned __int64)(unsigned int)v10;
  result[7] = v22;
  v23 = HIDWORD(v16) + SHIDWORD(v22) + (unsigned __int64)v32;
  result[8] = v23;
  v24 = HIDWORD(v16) + SHIDWORD(v23) + (unsigned __int64)v33;
  result[9] = v24;
  v25 = HIDWORD(v16) + SHIDWORD(v24) + (unsigned __int64)v38;
  result[10] = v25;
  v26 = HIDWORD(v16) + SHIDWORD(v25) + (unsigned __int64)v34;
  result[11] = v26;
  v27 = HIDWORD(v16) + SHIDWORD(v26) + (unsigned __int64)v35;
  result[12] = v27;
  result[13] = HIDWORD(v27) + v31 + (HIDWORD(v16) & 0x3FFFFFFF);
  return result;
}
