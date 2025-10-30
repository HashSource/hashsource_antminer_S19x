unsigned __int64 __fastcall sub_12180(unsigned __int8 *a1, unsigned int a2)
{
  __int64 v3; // r2
  int v4; // r0
  int v5; // r1
  __int64 v6; // r2
  unsigned __int64 v7; // r0
  __int64 v8; // r2
  unsigned __int64 v9; // r0
  __int64 v10; // r2
  __int64 v11; // r4
  unsigned __int64 v12; // r0
  unsigned __int64 v13; // r2
  __int64 v14; // r0
  unsigned __int8 *v15; // r4
  __int64 v16; // r0
  unsigned __int64 v17; // r4
  int v18; // r0
  int v19; // r1
  __int64 v20; // r2
  unsigned __int64 v21; // r0
  unsigned __int64 v23; // [sp+18h] [bp-1C4h]
  unsigned __int64 v24; // [sp+50h] [bp-18Ch]
  __int64 v25; // [sp+68h] [bp-174h]
  __int64 v26; // [sp+70h] [bp-16Ch]
  unsigned __int64 v27; // [sp+80h] [bp-15Ch]
  unsigned __int64 v28; // [sp+98h] [bp-144h]
  __int64 v29; // [sp+B0h] [bp-12Ch]
  unsigned __int64 v30; // [sp+C0h] [bp-11Ch]
  unsigned __int64 v31; // [sp+C8h] [bp-114h]
  unsigned __int64 v32; // [sp+D0h] [bp-10Ch]
  unsigned __int64 v33; // [sp+D8h] [bp-104h]
  unsigned __int64 v34; // [sp+118h] [bp-C4h]
  unsigned __int64 v35; // [sp+130h] [bp-ACh]
  unsigned __int64 v36; // [sp+138h] [bp-A4h]
  unsigned __int64 v37; // [sp+140h] [bp-9Ch]
  unsigned __int64 v38; // [sp+148h] [bp-94h]
  __int64 v39; // [sp+158h] [bp-84h] BYREF
  __int64 v40; // [sp+160h] [bp-7Ch]
  unsigned int v41; // [sp+168h] [bp-74h]
  unsigned __int8 *v42; // [sp+16Ch] [bp-70h]
  __int64 v43; // [sp+170h] [bp-6Ch] BYREF
  __int64 v44; // [sp+178h] [bp-64h]
  __int64 v45; // [sp+180h] [bp-5Ch] BYREF
  __int64 v46; // [sp+188h] [bp-54h]
  __int64 v47; // [sp+190h] [bp-4Ch]
  unsigned __int8 *v48; // [sp+198h] [bp-44h]
  unsigned __int8 *v49; // [sp+19Ch] [bp-40h]
  __int64 v50; // [sp+1A0h] [bp-3Ch]
  unsigned __int64 v51; // [sp+1A8h] [bp-34h]
  unsigned __int64 v52; // [sp+1B0h] [bp-2Ch]
  unsigned __int64 v53; // [sp+1B8h] [bp-24h]

  v42 = a1;
  v41 = a2;
  v50 = 81;
  if ( a2 <= 0x10 )
    return sub_116C8(v42, v41);
  if ( v41 <= 0x20 )
    return sub_11A00((int)v42, v41);
  if ( v41 <= 0x40 )
    return sub_11BE0((int)v42, v41);
  v3 = 3197694579LL * (unsigned int)v50;
  HIDWORD(v3) += -1265453457 * v50 - 1097272717 * HIDWORD(v50);
  v52 = v3 + 113;
  v4 = sub_114C8(797982799 * (v3 + 113) + 113, (0x9AE16A3B2F90404FLL * (v3 + 113) + 113) >> 32);
  v6 = 797982799LL * (unsigned int)v4;
  HIDWORD(v6) += 797982799 * v5 - 1696503237 * v4;
  v51 = v6;
  v45 = 0;
  v46 = 0;
  v43 = 0;
  v44 = 0;
  v53 = 0x9AE16A3B2F90404FLL * v50 + sub_11490(v42);
  v49 = &v42[(v41 - 1) & 0xFFFFFFC0];
  v48 = &v49[(((_BYTE)v41 - 1) & 0x3F) - 63];
  do
  {
    v38 = v53 + v52 + v45;
    v37 = v38 + sub_11490(v42 + 8);
    v7 = sub_11514(v37, 37);
    v8 = 3197694579LL * (unsigned int)v7;
    HIDWORD(v8) += -1097272717 * HIDWORD(v7) - 1265453457 * v7;
    v53 = v8;
    v36 = v46 + v52;
    v35 = v36 + sub_11490(v42 + 48);
    v9 = sub_11514(v35, 42);
    v10 = 3197694579LL * (unsigned int)v9;
    HIDWORD(v10) += -1097272717 * HIDWORD(v9) - 1265453457 * v9;
    v52 = v10;
    v53 ^= v44;
    v11 = v45;
    v26 = v11 + sub_11490(v42 + 40);
    v52 += v26;
    v12 = sub_11514(v43 + v51, 33);
    v13 = 3197694579LL * (unsigned int)v12;
    HIDWORD(v13) += -1097272717 * HIDWORD(v12) - 1265453457 * v12;
    v51 = v13;
    LODWORD(v13) = -1097272717 * v46;
    HIDWORD(v13) = -1097272717 * HIDWORD(v46)
                 - 1265453457 * v46
                 + ((3197694579u * (unsigned __int64)(unsigned int)v46) >> 32);
    sub_120DC(&v45, (int)v42, v13, v43 + v53);
    v34 = v44 + v51;
    v14 = sub_11490(v42 + 16);
    sub_120DC(&v43, (int)(v42 + 32), v34, v14 + v52);
    v24 = v51 ^ v53;
    v53 = v51;
    v51 ^= v24;
    v42 += 64;
  }
  while ( v42 != v49 );
  v47 = ((2 * (int)v51) & 0x1FELL) - 0x4B6D499041670D8DLL;
  v42 = v48;
  v43 += (v41 - 1) & 0x3FLL;
  v45 += v43;
  v43 += v45;
  v33 = v53 + v52 + v45;
  v32 = v33 + sub_11490(v48 + 8);
  v53 = sub_11514(v32, 37) * v47;
  v31 = v46 + v52;
  v30 = v31 + sub_11490(v42 + 48);
  v52 = sub_11514(v30, 42) * v47;
  v53 ^= 9 * v44;
  v29 = 9 * v45;
  v25 = v29 + sub_11490(v42 + 40);
  v52 += v25;
  v51 = sub_11514(v43 + v51, 33) * v47;
  sub_120DC(&v39, (int)v42, v47 * v46, v43 + v53);
  v45 = v39;
  v46 = v40;
  v15 = v42 + 32;
  v28 = v44 + v51;
  v16 = sub_11490(v42 + 16);
  sub_120DC(&v39, (int)v15, v28, v16 + v52);
  v43 = v39;
  v44 = v40;
  v23 = v51 ^ v53;
  v53 = v51;
  v51 ^= v23;
  v17 = sub_11598(v45, SHIDWORD(v45), v39, v47);
  v18 = sub_114C8(v52, HIDWORD(v52));
  v20 = 2546676007LL * (unsigned int)v18;
  HIDWORD(v20) += -1748291289 * v19 - 1012545444 * v18;
  v27 = v17 + v20 + v51;
  v21 = sub_11598(v46, SHIDWORD(v46), v44, v47);
  return sub_11598(v27, SHIDWORD(v27), v21 + v53, v47);
}
