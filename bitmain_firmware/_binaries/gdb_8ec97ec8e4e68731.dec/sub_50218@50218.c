int __fastcall sub_50218(_DWORD *a1)
{
  _DWORD *v1; // r5
  int *v2; // r4
  int v3; // r2
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int result; // r0
  int v24; // r1
  int v25; // [sp+0h] [bp-28h]
  int v26; // [sp+4h] [bp-24h] BYREF
  int v27; // [sp+8h] [bp-20h]
  int v28; // [sp+Ch] [bp-1Ch]
  int v29; // [sp+10h] [bp-18h] BYREF
  int v30; // [sp+14h] [bp-14h]
  int v31; // [sp+18h] [bp-10h]
  int v32; // [sp+1Ch] [bp-Ch]
  int v33; // [sp+20h] [bp-8h]
  int v34; // [sp+24h] [bp-4h]

  v1 = a1;
  v2 = a1 - 9;
  v3 = a1[2];
  v4 = a1[3];
  v25 = *a1;
  v26 = a1[1];
  v27 = v3;
  v28 = v4;
  v5 = a1[5];
  v6 = a1[6];
  v7 = a1[7];
  v29 = a1[4];
  v30 = v5;
  v31 = v6;
  v32 = v7;
  v8 = a1[9];
  v33 = a1[8];
  v34 = v8;
  while ( 1 )
  {
    v16 = sub_4FC3C(&v26, &v29, v2, v2 + 3);
    v2 -= 10;
    if ( v16 >= 0 )
      break;
    v1 = v2 + 9;
    v9 = v2[10];
    v10 = v2[11];
    v11 = v2[12];
    v2[19] = v2[9];
    v2[20] = v9;
    v2[21] = v10;
    v2[22] = v11;
    v12 = v2[14];
    v13 = v2[15];
    v14 = v2[16];
    v2[23] = v2[13];
    v2[24] = v12;
    v2[25] = v13;
    v2[26] = v14;
    v15 = v2[18];
    v2[27] = v2[17];
    v2[28] = v15;
  }
  v17 = v26;
  v18 = v27;
  v19 = v28;
  *v1 = v25;
  v1[1] = v17;
  v1[2] = v18;
  v1[3] = v19;
  v20 = v30;
  v21 = v31;
  v22 = v32;
  v1[4] = v29;
  v1[5] = v20;
  v1[6] = v21;
  v1[7] = v22;
  result = v33;
  v24 = v34;
  v1[8] = v33;
  v1[9] = v24;
  return result;
}
