int __fastcall sub_5B520(int a1)
{
  __int64 v1; // kr18_8
  unsigned int v3; // r7
  unsigned int v4; // r4
  unsigned int v5; // r6
  unsigned int v6; // r3
  __int64 v7; // r10
  int v8; // r5
  int v9; // r3
  int v10; // r2
  unsigned int v11; // r1
  unsigned int v12; // r4
  __int64 v13; // r6
  __int64 v14; // r10
  unsigned int v15; // r2
  unsigned __int64 v16; // r4
  int v17; // r8
  unsigned int v18; // r2
  __int64 v19; // r8
  int v20; // r12
  int v21; // r2
  int v22; // r1
  __int64 v23; // r4
  int v24; // lr
  __int64 v25; // r6
  __int64 v26; // r4
  __int64 v27; // [sp+8h] [bp-34h]
  unsigned __int64 v28; // [sp+18h] [bp-24h]
  __int64 v29; // [sp+20h] [bp-1Ch]
  int v30; // [sp+28h] [bp-14h]
  unsigned int v31; // [sp+28h] [bp-14h]

  if ( *(_QWORD *)a1 >= 0x20u )
  {
    v3 = *(_DWORD *)(a1 + 12);
    v4 = *(_DWORD *)(a1 + 8);
    v5 = *(_DWORD *)(a1 + 16);
    v6 = *(_DWORD *)(a1 + 20);
    HIDWORD(v29) = *(__int64 *)(a1 + 8) >> 31;
    LODWORD(v29) = (2 * v4) | (v3 >> 31);
    HIDWORD(v7) = *(__int64 *)(a1 + 16) >> 25;
    v28 = 0xC2B2AE3D27D4EB4FLL * __PAIR64__(v3, v4);
    LODWORD(v7) = (v5 << 7) | (v6 >> 25);
    v8 = -1028477379 * v5 + 668265295 * v6;
    v9 = 668265295 * v4;
    v10 = (668265295 * (unsigned __int64)v5) >> 32;
    v11 = 668265295 * v5;
    v12 = (v4 << 31) | ((unsigned int)((0xC2B2AE3D27D4EB4FLL * __PAIR64__(v3, v4)) >> 32) >> 1);
    v30 = 668265295 * v5;
    v13 = 2246822535LL * v12;
    v14 = v29 + v7 + ((*(_QWORD *)(a1 + 24) << 12) | (*(_DWORD *)(a1 + 28) >> 20));
    HIDWORD(v13) += -1640531535 * v12 - 2048144761 * (__SPAIR64__(HIDWORD(v28), v9) >> 1);
    HIDWORD(v28) = *(__int64 *)(a1 + 32) >> 14;
    LODWORD(v28) = (*(_DWORD *)(a1 + 32) << 18) | (*(_DWORD *)(a1 + 36) >> 14);
    v15 = v8 + v10;
    v16 = v28 + v14;
    v17 = (v30 << 31) | (v15 >> 1);
    v31 = (v28 + v14) ^ v13;
    HIDWORD(v14) = -1640531535 * v17 - 2048144761 * ((v15 << 31) | (v11 >> 1));
    LODWORD(v29) = -2048144761 * v31;
    v18 = (0xC2B2AE3D27D4EB4FLL * *(_QWORD *)(a1 + 24)) >> 32;
    v19 = 2246822535LL * (unsigned int)v17;
    v20 = v18 << 31;
    LODWORD(v14) = (*(_DWORD *)(a1 + 24) << 31) | (v18 >> 1);
    HIDWORD(v29) = -1640531535 * v31
                 - 2048144761 * (HIDWORD(v16) ^ HIDWORD(v13))
                 + ((2246822535u * (unsigned __int64)v31) >> 32);
    v21 = ((unsigned __int64)(sub_5B7E8 + v29) >> 32) ^ (HIDWORD(v19) + HIDWORD(v14));
    LODWORD(v29) = (sub_5B7E8 - 2048144761 * v31) ^ v19;
    LODWORD(v28) = -2048144761 * v29;
    v27 = 2246822535LL * (unsigned int)v14;
    LODWORD(v16) = (*(_DWORD *)(a1 + 32) << 31)
                 | ((unsigned int)((0xC2B2AE3D27D4EB4FLL * *(_QWORD *)(a1 + 32)) >> 32) >> 1);
    HIDWORD(v28) = ((2246822535u * (unsigned __int64)(unsigned int)v29) >> 32) + -1640531535 * v29 - 2048144761 * v21;
    v22 = -1640531535 * v16;
    v23 = 2246822535LL * (unsigned int)v16;
    LODWORD(v13) = v27 ^ (sub_5B7E8 - 2048144761 * v29);
    v24 = -1640531535 * v13;
    v25 = 2246822535LL * (unsigned int)v13;
    LODWORD(v19) = (sub_5B7E8 + v25) ^ v23;
    HIDWORD(v25) += v24
                  - 2048144761
                  * ((HIDWORD(v27)
                    + -1640531535 * v14
                    - 2048144761 * (v20 | ((unsigned int)(668265295 * *(_DWORD *)(a1 + 24)) >> 1)))
                   ^ ((sub_5B7E8 + v28) >> 32));
    HIDWORD(v19) = ((unsigned __int64)(sub_5B7E8 + v25) >> 32)
                 ^ (HIDWORD(v23) + v22 - 2048144761 * ((__int64)(0xC2B2AE3D27D4EB4FLL * *(_QWORD *)(a1 + 32)) >> 1));
    v26 = 2246822535LL * (unsigned int)v19;
    HIDWORD(v26) += -1640531535 * v19 - 2048144761 * HIDWORD(v19);
    v1 = sub_5B7E8 + v26;
  }
  else
  {
    v1 = *(_QWORD *)(a1 + 24) + 0x27D4EB2F165667C5LL;
  }
  return sub_58BB0(*(_QWORD *)a1 + v1, (unsigned __int8 *)(a1 + 40), *(_QWORD *)a1, 0);
}
