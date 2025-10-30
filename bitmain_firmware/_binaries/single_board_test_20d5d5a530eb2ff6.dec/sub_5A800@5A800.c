int __fastcall sub_5A800(unsigned int a1, unsigned int a2, signed __int64 a3)
{
  unsigned int v3; // r6
  unsigned int v4; // r4
  int v5; // r9
  __int64 v6; // r6
  __int64 v7; // r6
  __int64 v8; // r2
  int v9; // r1
  int v10; // r9
  int v11; // r10
  __int64 v12; // r4
  int v13; // r8
  unsigned __int64 v14; // r6
  __int64 v15; // r8
  unsigned int v16; // r8
  int v17; // r6
  int v18; // lr
  unsigned int v19; // r3
  unsigned int v20; // r7
  int v21; // r5
  __int64 v22; // r10
  __int64 v23; // r8
  __int64 v24; // r6
  unsigned int v25; // r3
  __int64 v26; // r4
  int v27; // r2
  unsigned int v28; // r3
  unsigned __int64 v29; // r10
  __int64 v30; // r8
  int v31; // lr
  __int64 v32; // r0
  unsigned __int64 v33; // r8
  unsigned int v34; // r2
  int v35; // lr
  __int64 v36; // r4
  unsigned __int64 v37; // r2
  __int64 v38; // kr48_8
  unsigned __int64 v39; // r4
  unsigned int v40; // r6
  unsigned int v42; // r2
  __int64 v43; // r4
  __int64 v44; // r8
  int v45; // lr
  __int64 v46; // r0
  unsigned int v47; // r7
  __int64 v48; // r2
  __int64 v49; // r2
  int v50; // r7
  __int64 v51; // r6
  unsigned int v52; // r3
  int v53; // r5
  __int64 v54; // r8
  __int64 v55; // r10
  __int64 v56; // r8
  __int64 v57; // r4
  __int64 v58; // r4
  __int64 v59; // r2
  int v60; // lr
  __int64 v61; // r10
  signed __int64 v62; // [sp+8h] [bp-54h]
  __int64 v63; // [sp+8h] [bp-54h]
  signed __int64 v64; // [sp+10h] [bp-4Ch]
  signed __int64 v65; // [sp+10h] [bp-4Ch]
  signed __int64 v66; // [sp+18h] [bp-44h]
  __int64 v67; // [sp+18h] [bp-44h]
  __int64 v68; // [sp+18h] [bp-44h]
  unsigned __int64 v69; // [sp+20h] [bp-3Ch]
  __int64 v70; // [sp+20h] [bp-3Ch]
  unsigned int v71; // [sp+28h] [bp-34h]
  __int64 v72; // [sp+30h] [bp-2Ch]
  int v73; // [sp+30h] [bp-2Ch]
  __int64 v74; // [sp+30h] [bp-2Ch]
  int v75; // [sp+38h] [bp-24h]
  unsigned int v76; // [sp+4Ch] [bp-10h]
  unsigned int v77; // [sp+50h] [bp-Ch]

  v62 = a3;
  v71 = a1;
  if ( a1 << 29 )
  {
    if ( a2 > 0x1F )
    {
      v70 = a3 + 0x60EA27EEADC0B5D6LL;
      v67 = a3 - 0x3D4D51C2D82B14B1LL;
      v76 = a2 - 32 + a1;
      v65 = a3 + 0x61C8864E7A143579LL;
      do
      {
        v42 = *(_DWORD *)(v71 + 8);
        v43 = *(_QWORD *)(v71 + 16);
        v44 = *(_QWORD *)(v71 + 24);
        v45 = -1028477379 * v42 + 668265295 * *(_DWORD *)(v71 + 12);
        v46 = v70 - 0x3D4D51C2D82B14B1LL * *(_QWORD *)v71;
        v47 = HIDWORD(v46);
        v71 += 32;
        HIDWORD(v46) = ((_DWORD)v46 << 31) | (HIDWORD(v46) >> 1);
        v73 = __SPAIR64__(v47, v46) >> 1;
        v48 = 668265295LL * v42;
        HIDWORD(v48) += v45;
        v49 = v67 + v48;
        v50 = ((_DWORD)v49 << 31) | (HIDWORD(v49) >> 1);
        LODWORD(v70) = -2048144761 * HIDWORD(v46);
        LODWORD(v67) = -2048144761 * v50;
        HIDWORD(v70) = -1640531535 * HIDWORD(v46)
                     - 2048144761 * v73
                     + ((2246822535u * (unsigned __int64)HIDWORD(v46)) >> 32);
        v65 = 0x9E3779B185EBCA87LL
            * (((0xC2B2AE3D27D4EB4FLL * v44 + v65) << 31)
             | ((unsigned int)((0xC2B2AE3D27D4EB4FLL * v44 + v65) >> 32) >> 1));
        v62 = 0x9E3779B185EBCA87LL
            * (((0xC2B2AE3D27D4EB4FLL * v43 + v62) << 31)
             | ((unsigned int)((0xC2B2AE3D27D4EB4FLL * v43 + v62) >> 32) >> 1));
        HIDWORD(v67) = -1640531535 * v50
                     - 2048144761 * (v49 >> 1)
                     + ((2246822535u * (unsigned __int64)(unsigned int)v50) >> 32);
      }
      while ( v76 >= v71 );
      HIDWORD(v51) = v70 >> 31;
      v52 = ((_DWORD)v70 << 31) | ((unsigned int)((0xC2B2AE3D27D4EB4FLL * v70) >> 32) >> 1);
      v53 = -1028477379 * v67 + 668265295 * HIDWORD(v67);
      v74 = 2246822535LL * v52;
      HIDWORD(v54) = v67 >> 25;
      LODWORD(v51) = (2 * v70) | (HIDWORD(v70) >> 31);
      v55 = v67;
      v68 = 668265295LL * (unsigned int)v67;
      LODWORD(v54) = ((_DWORD)v55 << 7) | (HIDWORD(v55) >> 25);
      v56 = v54 + v51;
      HIDWORD(v51) = v62 >> 20;
      LODWORD(v51) = ((_DWORD)v62 << 12) | (HIDWORD(v62) >> 20);
      HIDWORD(v68) += v53;
      HIDWORD(v57) = v65 >> 14;
      LODWORD(v57) = ((_DWORD)v65 << 18) | (HIDWORD(v65) >> 14);
      v58 = v57 + v51 + v56;
      HIDWORD(v56) = (-1640531535 * v52 - 2048144761 * ((__int64)(0xC2B2AE3D27D4EB4FLL * v70) >> 1) + HIDWORD(v74))
                   ^ HIDWORD(v58);
      v59 = 2246822535LL * ((unsigned int)v74 ^ (unsigned int)v58);
      LODWORD(v55) = (-2048144761 * (((_DWORD)v68 << 31) | (HIDWORD(v68) >> 1))) ^ (v59 - 1028477341);
      v60 = -1640531535 * v55;
      HIDWORD(v59) = ((0x9E3779B185EBCA87LL * ((v68 << 31) | (HIDWORD(v68) >> 1)))
                    ^ (__PAIR64__(
                         -1640531535 * ((unsigned int)v74 ^ (unsigned int)v58)
                       - 2048144761 * HIDWORD(v56)
                       + HIDWORD(v59),
                         v59)
                     - 0x7A1435883D4D519DLL)) >> 32;
      v61 = 2246822535LL * (unsigned int)v55;
      LODWORD(v59) = ((_DWORD)v65 << 31) | ((unsigned int)((0xC2B2AE3D27D4EB4FLL * v65) >> 32) >> 1);
      LODWORD(v51) = (v61 - 1028477341)
                   ^ (-2048144761 * (((_DWORD)v62 << 31) | ((unsigned int)((0xC2B2AE3D27D4EB4FLL * v62) >> 32) >> 1)));
      HIDWORD(v61) += v60 - 2048144761 * HIDWORD(v59);
      HIDWORD(v51) = ((unsigned __int64)(v61 - 0x7A1435883D4D519DLL) >> 32)
                   ^ ((0x9E3779B185EBCA87LL
                     * ((0x93EA75A780000000LL * v62) | ((unsigned int)((0xC2B2AE3D27D4EB4FLL * v62) >> 32) >> 1))) >> 32);
      v39 = 0x9E3779B185EBCA87LL
          * __PAIR64__(
              (unsigned int)(((0x9E3779B185EBCA87LL * v51) >> 32)
                           + __CFADD__(-2048144761 * v51, -1028477341)
                           - 2048144777)
            ^ (unsigned int)(((2246822535u * (unsigned __int64)(unsigned int)v59) >> 32)
                           + -1640531535 * v59
                           - 2048144761 * ((__int64)(0xC2B2AE3D27D4EB4FLL * v65) >> 1)),
              (-2048144761 * v51 - 1028477341) ^ (-2048144761 * v59))
          - 0x7A1435883D4D519DLL;
    }
    else
    {
      v39 = a3 + 0x27D4EB2F165667C5LL;
    }
    v40 = 1;
  }
  else
  {
    if ( a2 <= 0x1F )
    {
      v39 = a3 + 0x27D4EB2F165667C5LL;
    }
    else
    {
      v66 = a3 + 0x60EA27EEADC0B5D6LL;
      v77 = a2 - 32 + a1;
      v69 = a3 - 0x3D4D51C2D82B14B1LL;
      v64 = a3 + 0x61C8864E7A143579LL;
      do
      {
        a1 += 32;
        v3 = *(_DWORD *)(a1 - 32);
        v4 = *(_DWORD *)(a1 - 8);
        v5 = -1028477379 * v3;
        v6 = 668265295LL * v3;
        HIDWORD(v6) += v5 + 668265295 * *(_DWORD *)(a1 - 28);
        v7 = v66 + v6;
        HIDWORD(v8) = v7 >> 1;
        LODWORD(v8) = ((_DWORD)v7 << 31) | (HIDWORD(v7) >> 1);
        v9 = -1028477379 * v4 + 668265295 * *(_DWORD *)(a1 - 4);
        v11 = (668265295 * (unsigned __int64)v4) >> 32;
        v10 = 668265295 * v4;
        v12 = v62 - 0x3D4D51C2D82B14B1LL * *(_QWORD *)(a1 - 16);
        v13 = (((_DWORD)v62 + 668265295 * *(_DWORD *)(a1 - 16)) << 31) | (HIDWORD(v12) >> 1);
        v14 = v64 + __PAIR64__(v11 + v9, v10);
        v75 = -1640531535 * v13;
        v69 = 0x9E3779B185EBCA87LL
            * (((v69 - 0x3D4D51C2D82B14B1LL * *(_QWORD *)(a1 - 24)) << 31)
             | ((unsigned int)((v69 - 0x3D4D51C2D82B14B1LL * *(_QWORD *)(a1 - 24)) >> 32) >> 1));
        v66 = 0x9E3779B185EBCA87LL * v8;
        v15 = 2246822535LL * (unsigned int)v13;
        LODWORD(v62) = v15;
        HIDWORD(v62) = v75 - 2048144761 * (v12 >> 1) + HIDWORD(v15);
        v64 = 0x9E3779B185EBCA87LL * ((v14 << 31) | (HIDWORD(v14) >> 1));
      }
      while ( v77 >= a1 );
      v71 = a1;
      v16 = HIDWORD(v69);
      v17 = v69;
      v18 = HIDWORD(v69) << 7;
      HIDWORD(v69) = v66 >> 31;
      v19 = ((_DWORD)v8 << 31) | ((unsigned int)((0xDEF35B010F796CA9LL * v8) >> 32) >> 1);
      v20 = v16;
      v21 = -1028477379 * v69 + 668265295 * v16;
      LODWORD(v72) = -2048144761 * v19;
      HIDWORD(v22) = v18 | ((unsigned int)v69 >> 25);
      v23 = 668265295LL * (unsigned int)v69;
      LODWORD(v69) = (2 * v66) | (HIDWORD(v66) >> 31);
      HIDWORD(v72) = -1640531535 * v19
                   - 2048144761 * ((__int64)(0xC2B2AE3D27D4EB4FLL * v66) >> 1)
                   + ((2246822535u * (unsigned __int64)v19) >> 32);
      LODWORD(v22) = (v17 << 7) | (v20 >> 25);
      HIDWORD(v24) = v62 >> 20;
      LODWORD(v24) = ((_DWORD)v62 << 12) | (HIDWORD(v62) >> 20);
      v25 = HIDWORD(v23) + v21;
      HIDWORD(v26) = v64 >> 14;
      LODWORD(v26) = ((_DWORD)v64 << 18) | (HIDWORD(v64) >> 14);
      v27 = ((_DWORD)v23 << 31) | (v25 >> 1);
      v28 = -1640531535 * v27 - 2048144761 * ((v25 << 31) | ((unsigned int)v23 >> 1));
      v29 = 0x9E3779B185EBCA87LL * (v72 ^ (v26 + v24 + v69 + v22));
      v30 = 2246822535LL * (unsigned int)v27;
      LODWORD(v26) = (HIDWORD(v30) + v28) ^ ((v29 - 0x7A1435883D4D519DLL) >> 32);
      v31 = -1640531535 * (v30 ^ (v29 - 1028477341));
      v32 = 2246822535LL * ((unsigned int)v30 ^ ((_DWORD)v29 - 1028477341));
      v33 = 0x9E3779B185EBCA87LL
          * ((0x93EA75A780000000LL * v62) | ((unsigned int)((0xC2B2AE3D27D4EB4FLL * v62) >> 32) >> 1));
      LODWORD(v63) = v32;
      HIDWORD(v63) = HIDWORD(v32) + v31 - 2048144761 * v26;
      v34 = ((_DWORD)v64 << 31) | ((unsigned int)((0xC2B2AE3D27D4EB4FLL * v64) >> 32) >> 1);
      v35 = -1640531535 * v34;
      v36 = 2246822535LL * v34;
      v37 = 0x9E3779B185EBCA87LL * ((v63 - 0x7A1435883D4D519DLL) ^ v33);
      v38 = (unsigned int)v37 - 0x7A1435883D4D519DLL;
      LODWORD(v37) = v38 ^ v36;
      HIDWORD(v37) = (HIDWORD(v37) + HIDWORD(v38))
                   ^ (HIDWORD(v36) + v35 - 2048144761 * ((__int64)(0xC2B2AE3D27D4EB4FLL * v64) >> 1));
      v39 = 0x9E3779B185EBCA87LL * v37 - 0x7A1435883D4D519DLL;
    }
    v40 = 0;
  }
  return sub_58BB0(v39 + a2, (unsigned __int8 *)v71, a2, v40);
}
