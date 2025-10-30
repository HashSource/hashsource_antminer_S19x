unsigned __int64 __fastcall sub_120C4(unsigned __int8 *a1, unsigned int a2)
{
  __int64 v3; // r2
  unsigned __int64 v4; // r0
  __int64 v5; // r2
  unsigned __int64 v6; // r4
  __int64 v7; // r0
  unsigned __int64 v8; // r0
  __int64 v9; // r2
  __int64 v10; // r4
  __int64 v11; // r0
  unsigned __int64 v12; // r0
  __int64 v13; // r2
  double v14; // r4
  __int64 v15; // r0
  unsigned __int64 v16; // r0
  __int64 v17; // r2
  unsigned __int64 v18; // r2
  unsigned __int64 v19; // r4
  __int64 v20; // r0
  unsigned __int64 v21; // r4
  __int64 v22; // r0
  __int64 v23; // r4
  __int64 v24; // r0
  __int64 v25; // r4
  __int64 v26; // r0
  unsigned __int8 *v27; // r6
  unsigned __int64 v28; // r4
  __int64 v29; // r0
  unsigned __int64 v30; // r4
  unsigned __int64 v31; // r0
  __int64 v32; // r2
  __int64 v33; // r4
  unsigned __int64 v34; // r0
  double v36; // [sp+8h] [bp-7Ch] BYREF
  __int64 v37; // [sp+10h] [bp-74h]
  unsigned int v38; // [sp+18h] [bp-6Ch]
  unsigned __int8 *v39; // [sp+1Ch] [bp-68h]
  double v40; // [sp+20h] [bp-64h] BYREF
  __int64 v41; // [sp+28h] [bp-5Ch]
  double v42; // [sp+30h] [bp-54h] BYREF
  __int64 v43; // [sp+38h] [bp-4Ch]
  __int64 v44; // [sp+40h] [bp-44h]
  unsigned __int8 *v45; // [sp+48h] [bp-3Ch]
  unsigned __int8 *v46; // [sp+4Ch] [bp-38h]
  __int64 v47; // [sp+50h] [bp-34h]
  unsigned __int64 v48; // [sp+58h] [bp-2Ch]
  unsigned __int64 v49; // [sp+60h] [bp-24h]
  __int64 v50; // [sp+68h] [bp-1Ch]

  v39 = a1;
  v38 = a2;
  v47 = 81;
  if ( a2 <= 0x10 )
    return sub_116D8(v39, v38);
  if ( v38 <= 0x20 )
    return sub_119FC((int)v39, v38);
  if ( v38 <= 0x40 )
    return sub_11BD4((int)v39, v38);
  v3 = 3197694579LL * (unsigned int)v47;
  HIDWORD(v3) += -1265453457 * v47 - 1097272717 * HIDWORD(v47);
  v49 = v3 + 113;
  v4 = sub_11514(0x9AE16A3B2F90404FLL * (v3 + 113) + 113);
  v5 = 797982799LL * (unsigned int)v4;
  HIDWORD(v5) += 797982799 * HIDWORD(v4) - 1696503237 * v4;
  v48 = v5;
  v42 = 0.0;
  v43 = 0;
  v40 = 0.0;
  v41 = 0;
  v50 = sub_114DC(v39) - 0x651E95C4D06FBFB1LL * v47;
  v46 = &v39[64 * ((v38 - 1) >> 6)];
  v45 = &v46[(((_BYTE)v38 - 1) & 0x3F) - 63];
  do
  {
    v6 = v50 + v49 + *(_QWORD *)&v42;
    v7 = sub_114DC(v39 + 8);
    v8 = sub_11558(v6 + v7, 37);
    v9 = 3197694579LL * (unsigned int)v8;
    HIDWORD(v9) += -1097272717 * HIDWORD(v8) - 1265453457 * v8;
    v50 = v9;
    v10 = v43 + v49;
    v11 = sub_114DC(v39 + 48);
    v12 = sub_11558(v10 + v11, 42);
    v13 = 3197694579LL * (unsigned int)v12;
    HIDWORD(v13) += -1097272717 * HIDWORD(v12) - 1265453457 * v12;
    v49 = v13;
    v50 ^= v41;
    v14 = v42;
    v15 = sub_114DC(v39 + 40);
    v49 += v15 + *(_QWORD *)&v14;
    v16 = sub_11558(*(_QWORD *)&v40 + v48, 33);
    v17 = 3197694579LL * (unsigned int)v16;
    HIDWORD(v17) += -1097272717 * HIDWORD(v16) - 1265453457 * v16;
    v48 = v17;
    v18 = 3197694579LL * (unsigned int)v43;
    HIDWORD(v18) += -1097272717 * HIDWORD(v43) - 1265453457 * v43;
    sub_12020(&v42, (int)v39, v18, v50 + *(_QWORD *)&v40);
    v19 = v41 + v48;
    v20 = sub_114DC(v39 + 16);
    sub_12020(&v40, (int)(v39 + 32), v19, v49 + v20);
    v48 ^= v50;
    v50 ^= v48;
    v48 ^= v50;
    v39 += 64;
  }
  while ( v39 != v46 );
  v44 = 2LL * (unsigned __int8)v48 - 0x4B6D499041670D8DLL;
  v39 = v45;
  *(_QWORD *)&v40 += (v38 - 1) & 0x3FLL;
  *(_QWORD *)&v42 += *(_QWORD *)&v40;
  *(_QWORD *)&v40 += *(_QWORD *)&v42;
  v21 = v50 + v49 + *(_QWORD *)&v42;
  v22 = sub_114DC(v45 + 8);
  v50 = v44 * sub_11558(v21 + v22, 37);
  v23 = v43 + v49;
  v24 = sub_114DC(v39 + 48);
  v49 = v44 * sub_11558(v23 + v24, 42);
  v50 ^= vshld_n_s64(v41, 3u) + v41;
  v25 = vshld_n_s64(*(__int64 *)&v42, 3u) + *(_QWORD *)&v42;
  v26 = sub_114DC(v39 + 40);
  v49 += v26 + v25;
  v48 = v44 * sub_11558(*(_QWORD *)&v40 + v48, 33);
  sub_12020(&v36, (int)v39, v44 * v43, v50 + *(_QWORD *)&v40);
  v42 = v36;
  v43 = v37;
  v27 = v39 + 32;
  v28 = v41 + v48;
  v29 = sub_114DC(v39 + 16);
  sub_12020(&v36, (int)v27, v28, v49 + v29);
  v40 = v36;
  v41 = v37;
  v48 ^= v50;
  v50 ^= v48;
  v48 ^= v50;
  v30 = sub_115C4(*(__int64 *)&v42, *(__int64 *)&v36, v44, SHIDWORD(v44));
  v31 = sub_11514(v49);
  v32 = 2546676007LL * (unsigned int)v31;
  HIDWORD(v32) += -1748291289 * HIDWORD(v31) - 1012545444 * v31;
  v33 = v30 + v32 + v48;
  v34 = sub_115C4(v43, v41, v44, SHIDWORD(v44));
  return sub_115C4(v33, v34 + v50, v44, SHIDWORD(v44));
}
