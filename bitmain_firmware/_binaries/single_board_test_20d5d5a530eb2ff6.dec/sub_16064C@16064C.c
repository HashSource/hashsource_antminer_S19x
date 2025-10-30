int __fastcall sub_16064C(int *a1, unsigned int *a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // r4
  int v5; // lr
  int v6; // r5
  int v7; // r7
  int v8; // r2
  int v9; // r8
  int v10; // r10
  int v11; // r12
  __int64 v12; // r8
  int v13; // r5
  int v14; // r7
  int v15; // r5
  int v16; // r6
  int v17; // r12
  int v18; // r6
  bool v19; // cf
  int v20; // r5
  int v21; // r2
  int v22; // r5
  int v23; // r6
  int v24; // r6
  int v25; // r12
  int v26; // r3
  int v27; // r10
  int v28; // r8
  int v29; // r6
  int v30; // r10
  int v31; // r12
  __int64 v32; // r6
  int v33; // lr
  int v34; // r10
  int v35; // r12
  int v36; // lr
  int v37; // r3
  unsigned int v38; // r4
  int v39; // r2
  unsigned int v40; // r3
  int v42; // [sp+4h] [bp-8h]

  v4 = *a3 + 60 * a3[1] + 3600 * a3[2];
  if ( v4 <= (int)"SAPrivateKey" )
  {
    if ( v4 >= 0 )
    {
      v5 = 0;
    }
    else
    {
      v5 = -1;
      v4 += 86400;
    }
  }
  else
  {
    v5 = 1;
    v4 -= 86400;
  }
  v6 = a3[4];
  v7 = a3[5];
  v8 = a3[3];
  v9 = 367 * (v6 - 1 + 12 * ((v6 - 13) / -12));
  v10 = 1461 * ((v6 - 13) / 12 + v7 + 6700);
  v11 = v9 >> 31;
  v12 = 715827883LL * v9;
  v13 = (v7 + 6800 + (v6 - 13) / 12) / 100;
  v14 = v10 & ~(v10 >> 31);
  if ( v10 < 0 )
    v14 = v10 + 3;
  v15 = 3 * v13;
  v16 = (SHIDWORD(v12) >> 1) - v11;
  v17 = v15 + 3;
  v18 = v16 + (v14 >> 2);
  v19 = v15 < 0;
  v20 = v15 & ~(v15 >> 31);
  if ( v19 )
    v20 = v17;
  v21 = v8 + v18 - (v20 >> 2) - 32075 + v5;
  if ( v21 < 0 )
    return 0;
  v22 = *a4 + 60 * a4[1] + 3600 * a4[2];
  if ( v22 > (int)"SAPrivateKey" )
  {
    v42 = 1;
    v22 -= 86400;
  }
  else
  {
    if ( v22 >= 0 )
    {
      v23 = 0;
    }
    else
    {
      v23 = -1;
      v22 += 86400;
    }
    v42 = v23;
  }
  v24 = a4[4];
  v25 = a4[5];
  v26 = a4[3];
  v27 = (v24 - 13) / 12;
  v28 = v25 + 6800 + v27;
  v29 = 367 * (v24 - 1 + 12 * ((v24 - 13) / -12));
  v30 = 1461 * (v27 + v25 + 6700);
  v31 = v29 >> 31;
  v32 = 715827883LL * v29;
  LODWORD(v32) = v30 + 3;
  v33 = 3 * (v28 / 100);
  v19 = v30 < 0;
  v34 = v30 & ~(v30 >> 31);
  if ( v19 )
    v34 = v32;
  LODWORD(v32) = v33 + 3;
  v35 = (SHIDWORD(v32) >> 1) - v31;
  v19 = v33 < 0;
  v36 = v33 & ~(v33 >> 31);
  if ( v19 )
    v36 = v32;
  v37 = v26 + v35 + (v34 >> 2) - (v36 >> 2) - 32075 + v42;
  if ( v37 < 0 )
    return 0;
  v38 = v22 - v4;
  v39 = v37 - v21;
  if ( v39 > 0 )
    v40 = v38 >> 31;
  else
    v40 = 0;
  if ( v40 )
  {
    --v39;
    v38 += 86400;
  }
  else if ( (((int)v38 > 0) & ((unsigned int)v39 >> 31)) != 0 )
  {
    ++v39;
    v38 -= 86400;
  }
  if ( a1 )
    *a1 = v39;
  if ( a2 )
    *a2 = v38;
  return 1;
}
