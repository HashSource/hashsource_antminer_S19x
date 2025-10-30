int __fastcall sub_5B0F0(int a1, char *a2, size_t a3)
{
  __int16 v3; // r6
  int v6; // r3
  char *v7; // lr
  unsigned int v8; // r0
  unsigned int v9; // r2
  unsigned int v10; // r4
  int v11; // r8
  __int64 v12; // r0
  int v13; // r6
  __int64 v14; // r0
  __int64 v15; // r4
  __int64 v16; // r2
  __int64 v17; // r2
  int v18; // r12
  __int64 v19; // r4
  int v20; // r9
  unsigned int v21; // r6
  __int64 v22; // r8
  unsigned int v24; // r7
  unsigned int v25; // r6
  unsigned int v26; // r10
  int v27; // r4
  int v28; // lr
  __int64 v29; // r8
  __int64 v30; // r6
  int v31; // r1
  signed __int64 v32; // r8
  int v33; // r0
  __int64 v34; // r10
  __int64 v35; // r4
  int v36; // r1
  int v37; // r12
  __int64 v38; // r10
  __int64 v39; // r6
  __int64 v40; // r0
  unsigned __int64 v41; // [sp+0h] [bp-54h]
  __int64 v42; // [sp+0h] [bp-54h]
  __int64 v43; // [sp+0h] [bp-54h]
  __int64 v44; // [sp+0h] [bp-54h]
  unsigned __int64 v45; // [sp+8h] [bp-4Ch]
  __int64 v46; // [sp+10h] [bp-44h]
  signed __int64 v47; // [sp+10h] [bp-44h]
  unsigned __int64 v48; // [sp+18h] [bp-3Ch]
  unsigned int v49; // [sp+20h] [bp-34h]
  unsigned int v50; // [sp+20h] [bp-34h]
  int v51; // [sp+28h] [bp-2Ch]
  __int64 v52; // [sp+2Ch] [bp-28h]
  unsigned int v53; // [sp+34h] [bp-20h]
  char *src; // [sp+3Ch] [bp-18h]
  unsigned int v56; // [sp+44h] [bp-10h]

  *((_WORD *)a2 + 25) = v3;
  *((_DWORD *)a2 + 7) = a1;
  src = a2;
  if ( !a2 )
    return 1;
  v56 = (unsigned int)&a2[a3];
  v6 = *(_DWORD *)(a1 + 72);
  *(_QWORD *)a1 += a3;
  if ( a3 + v6 <= 0x1F )
  {
    memcpy((void *)(a1 + 40 + v6), a2, a3);
    *(_DWORD *)(a1 + 72) += a3;
    return 0;
  }
  else
  {
    if ( v6 )
    {
      memcpy((void *)(a1 + 40 + v6), a2, 32 - v6);
      v24 = *(_DWORD *)(a1 + 48);
      v25 = *(_DWORD *)(a1 + 56);
      v26 = *(_DWORD *)(a1 + 64);
      v27 = -1028477379 * v24 + 668265295 * *(_DWORD *)(a1 + 52);
      v28 = -1028477379 * v25 + 668265295 * *(_DWORD *)(a1 + 60);
      v29 = 668265295LL * v24;
      v47 = 0xC2B2AE3D27D4EB4FLL * *(_QWORD *)(a1 + 40) + *(_QWORD *)(a1 + 8);
      v30 = 668265295LL * v25;
      v31 = -1028477379 * v26 + 668265295 * *(_DWORD *)(a1 + 68);
      v32 = *(_QWORD *)(a1 + 16) + __PAIR64__(HIDWORD(v29) + v27, v29);
      HIDWORD(v30) += v28;
      LODWORD(v43) = 668265295 * v26;
      v33 = (668265295 * (unsigned __int64)v26) >> 32;
      v34 = *(_QWORD *)(a1 + 24);
      HIDWORD(v43) = v33 + v31;
      v35 = v30 + v34;
      HIDWORD(v34) = v30 + v34;
      v44 = v43 + *(_QWORD *)(a1 + 32);
      LODWORD(v35) = ((_DWORD)v32 << 31) | (HIDWORD(v32) >> 1);
      LODWORD(v34) = ((_DWORD)v47 << 31) | (HIDWORD(v47) >> 1);
      HIDWORD(v30) = (HIDWORD(v34) << 31) | (HIDWORD(v35) >> 1);
      HIDWORD(v32) = v32 >> 1;
      v36 = -1640531535 * v34;
      v37 = (HIDWORD(v35) << 31) | (HIDWORD(v34) >> 1);
      v38 = 2246822535LL * (unsigned int)v34;
      LODWORD(v32) = -1640531535 * HIDWORD(v30);
      HIDWORD(v38) += v36 - 2048144761 * (v47 >> 1);
      v39 = 2246822535LL * HIDWORD(v30);
      src += 32 - *(_DWORD *)(a1 + 72);
      *(_DWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 8) = v38;
      HIDWORD(v39) += v32 - 2048144761 * v37;
      v40 = 2246822535LL * (unsigned int)(((_DWORD)v44 << 31) | (HIDWORD(v44) >> 1));
      *(_QWORD *)(a1 + 24) = v39;
      *(_QWORD *)(a1 + 16) = 0x9E3779B185EBCA87LL * __PAIR64__(HIDWORD(v32), v35);
      HIDWORD(v40) += -1640531535 * (((_DWORD)v44 << 31) | (HIDWORD(v44) >> 1)) - 2048144761 * (v44 >> 1);
      *(_QWORD *)(a1 + 32) = v40;
    }
    if ( v56 >= (unsigned int)(src + 32) )
    {
      v7 = src;
      v41 = *(_QWORD *)(a1 + 8);
      v45 = *(_QWORD *)(a1 + 16);
      v46 = *(_QWORD *)(a1 + 24);
      v48 = *(_QWORD *)(a1 + 32);
      v53 = v56 - 32;
      do
      {
        v7 += 32;
        v8 = *((_DWORD *)v7 - 8);
        v9 = *((_DWORD *)v7 - 6);
        v49 = *((_DWORD *)v7 - 2);
        v10 = *((_DWORD *)v7 - 4);
        v11 = -1028477379 * v8 + 668265295 * *((_DWORD *)v7 - 7);
        v12 = 668265295LL * v8;
        v13 = -1028477379 * v9 + 668265295 * *((_DWORD *)v7 - 5);
        HIDWORD(v12) += v11;
        v14 = v41 + v12;
        v51 = -1028477379 * v10 + 668265295 * *((_DWORD *)v7 - 3);
        LODWORD(v52) = ((_DWORD)v14 << 31) | (HIDWORD(v14) >> 1);
        HIDWORD(v52) = v14 >> 1;
        v15 = 668265295LL * v10;
        LODWORD(v14) = -1028477379 * v49 + 668265295 * *((_DWORD *)v7 - 1);
        v16 = 668265295LL * v9;
        HIDWORD(v16) += v13;
        v17 = v45 + v16;
        v18 = ((_DWORD)v17 << 31) | (HIDWORD(v17) >> 1);
        v42 = 668265295LL * v49;
        HIDWORD(v15) += v51;
        v50 = v17 >> 1;
        v19 = v46 + v15;
        HIDWORD(v42) += v14;
        v20 = ((_DWORD)v19 << 31) | (HIDWORD(v19) >> 1);
        HIDWORD(v17) = (((_DWORD)v42 + (_DWORD)v48) << 31) | ((unsigned int)((v42 + v48) >> 32) >> 1);
        v21 = (__int64)(v42 + v48) >> 1;
        LODWORD(v19) = -1640531535 * v20 - 2048144761 * (v19 >> 1);
        v41 = 0x9E3779B185EBCA87LL * v52;
        v45 = 0x9E3779B185EBCA87LL * __PAIR64__(v50, v18);
        v22 = 2246822535LL * (unsigned int)v20;
        LODWORD(v46) = v22;
        HIDWORD(v46) = v19 + HIDWORD(v22);
        v48 = 0x9E3779B185EBCA87LL * __PAIR64__(v21, HIDWORD(v17));
      }
      while ( v53 >= (unsigned int)v7 );
      *(_QWORD *)(a1 + 8) = v41;
      src += ((v53 - (_DWORD)src) & 0xFFFFFFE0) + 32;
      *(_QWORD *)(a1 + 16) = v45;
      *(_QWORD *)(a1 + 24) = v46;
      *(_QWORD *)(a1 + 32) = v48;
    }
    if ( v56 > (unsigned int)src )
    {
      memcpy((void *)(a1 + 40), src, v56 - (_DWORD)src);
      *(_DWORD *)(a1 + 72) = v56 - (_DWORD)src;
    }
    return 0;
  }
}
