int __fastcall sub_168148(int a1, int a2, int a3)
{
  int v5; // r10
  int v6; // r12
  unsigned __int64 v7; // r6
  __int64 v8; // r4
  __int64 v9; // r2
  int v10; // lr
  int v11; // r0
  unsigned __int64 v12; // r2
  unsigned __int64 v13; // r4
  unsigned __int64 v14; // r0
  __int64 v15; // r10
  unsigned __int64 v16; // r4
  int v17; // r12
  __int64 v18; // r6
  unsigned __int64 v19; // r0
  int v20; // lr
  int v21; // r0
  __int64 v22; // r2
  unsigned __int64 v23; // r4
  unsigned __int64 v24; // r0
  __int64 v25; // r10
  unsigned __int64 v26; // r4
  unsigned __int64 v27; // r0
  int v28; // lr
  int v29; // r0
  __int64 v30; // r2
  unsigned __int64 v31; // r4
  unsigned __int64 v32; // r0
  __int64 v33; // r10
  unsigned __int64 v34; // r4
  unsigned __int64 v35; // [sp+0h] [bp-9Ch]
  unsigned __int64 v36; // [sp+0h] [bp-9Ch]
  __int64 v37; // [sp+8h] [bp-94h]
  int v38; // [sp+8h] [bp-94h]
  int v39; // [sp+10h] [bp-8Ch]
  __int64 v40; // [sp+18h] [bp-84h]
  __int64 v41; // [sp+20h] [bp-7Ch]
  __int64 v42; // [sp+28h] [bp-74h]
  __int64 v43; // [sp+38h] [bp-64h]
  __int64 v44; // [sp+40h] [bp-5Ch]
  __int64 v45; // [sp+48h] [bp-54h]
  __int64 v46; // [sp+58h] [bp-44h]
  __int64 v47; // [sp+60h] [bp-3Ch]
  __int64 v48; // [sp+68h] [bp-34h]
  int v49; // [sp+74h] [bp-28h]

  v49 = *(_DWORD *)(a1 + 44);
  if ( v49 != a3 )
    return 0;
  v5 = a2;
  HIDWORD(v48) = *(_DWORD *)a1 << 24;
  LODWORD(v48) = 0;
  switch ( *(_DWORD *)(a1 + 40) )
  {
    case 1:
      goto LABEL_10;
    case 2:
      goto LABEL_9;
    case 3:
      goto LABEL_8;
    case 4:
      goto LABEL_7;
    case 5:
      goto LABEL_6;
    case 6:
      goto LABEL_5;
    case 7:
      HIDWORD(v48) |= *(unsigned __int8 *)(a1 + 62) << 16;
LABEL_5:
      HIDWORD(v48) |= *(unsigned __int8 *)(a1 + 61) << 8;
LABEL_6:
      HIDWORD(v48) |= *(unsigned __int8 *)(a1 + 60);
LABEL_7:
      LODWORD(v48) = *(unsigned __int8 *)(a1 + 59) << 24;
LABEL_8:
      LODWORD(v48) = v48 | (*(unsigned __int8 *)(a1 + 58) << 16);
LABEL_9:
      LODWORD(v48) = v48 | (*(unsigned __int8 *)(a1 + 57) << 8);
LABEL_10:
      LODWORD(v48) = v48 | *(unsigned __int8 *)(a1 + 56);
      break;
    default:
      break;
  }
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = v48 ^ *(_QWORD *)(a1 + 32);
  v35 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(a1 + 16);
  if ( v6 > 0 )
  {
    v10 = 0;
    do
    {
      HIDWORD(v37) = v9 >> 19;
      HIDWORD(v40) = v8 >> 16;
      v11 = ((_DWORD)v9 << 13) | (HIDWORD(v9) >> 19);
      v12 = v9 + v7;
      LODWORD(v37) = v11;
      ++v10;
      LODWORD(v40) = ((_DWORD)v8 << 16) | HIWORD(HIDWORD(v8));
      v13 = v35 + v8;
      HIDWORD(v41) = (__int64)(v37 ^ v12) >> 15;
      v14 = v40 ^ v13;
      HIDWORD(v15) = (__int64)(v40 ^ v13) >> 11;
      LODWORD(v15) = (((unsigned int)v40 ^ (unsigned int)v13) << 21)
                   | ((unsigned int)(HIDWORD(v40) ^ HIDWORD(v13)) >> 11);
      LODWORD(v41) = (((unsigned int)v37 ^ (unsigned int)v12) << 17)
                   | ((unsigned int)(HIDWORD(v37) ^ HIDWORD(v12)) >> 15);
      v16 = v13 + (v37 ^ v12);
      v35 = __PAIR64__(v16, HIDWORD(v16));
      v7 = __PAIR64__(v12, HIDWORD(v12)) + v14;
      v9 = v41 ^ v16;
      v8 = v7 ^ v15;
    }
    while ( v10 != v6 );
    v5 = a2;
  }
  v17 = *(_DWORD *)(a1 + 52);
  v18 = v48 ^ v7;
  HIDWORD(v19) = HIDWORD(v35);
  if ( v49 == 16 )
    LODWORD(v19) = v35 ^ 0xEE;
  else
    LODWORD(v19) = v35 ^ 0xFF;
  v36 = v19;
  if ( v17 > 0 )
  {
    v20 = 0;
    v39 = v5;
    do
    {
      HIDWORD(v42) = v9 >> 19;
      HIDWORD(v43) = v8 >> 16;
      v21 = ((_DWORD)v9 << 13) | (HIDWORD(v9) >> 19);
      v22 = v9 + v18;
      LODWORD(v42) = v21;
      ++v20;
      LODWORD(v43) = ((_DWORD)v8 << 16) | HIWORD(HIDWORD(v8));
      v23 = v36 + v8;
      HIDWORD(v44) = (v42 ^ v22) >> 15;
      v24 = v43 ^ v23;
      HIDWORD(v25) = (__int64)(v43 ^ v23) >> 11;
      LODWORD(v25) = (((unsigned int)v43 ^ (unsigned int)v23) << 21)
                   | ((unsigned int)(HIDWORD(v43) ^ HIDWORD(v23)) >> 11);
      LODWORD(v44) = (((unsigned int)v42 ^ (unsigned int)v22) << 17)
                   | ((unsigned int)(HIDWORD(v42) ^ HIDWORD(v22)) >> 15);
      v26 = v23 + (v42 ^ v22);
      v36 = __PAIR64__(v26, HIDWORD(v26));
      v18 = __PAIR64__(v22, HIDWORD(v22)) + v24;
      v9 = v44 ^ v26;
      v8 = v18 ^ v25;
    }
    while ( v20 != v17 );
    v5 = v39;
  }
  v27 = v36 ^ v18 ^ v9 ^ v8;
  *(_BYTE *)v5 = v27;
  *(_BYTE *)(v5 + 4) = BYTE4(v27);
  *(_BYTE *)(v5 + 6) = BYTE6(v27);
  *(_BYTE *)(v5 + 1) = BYTE1(v27);
  *(_BYTE *)(v5 + 2) = BYTE2(v27);
  *(_BYTE *)(v5 + 3) = ((unsigned int)v36 ^ (unsigned int)v18 ^ (unsigned int)v9 ^ (unsigned int)v8) >> 24;
  *(_BYTE *)(v5 + 5) = BYTE5(v27);
  *(_BYTE *)(v5 + 7) = HIBYTE(v27);
  if ( *(_DWORD *)(a1 + 44) == 8 )
    return 1;
  LODWORD(v9) = v9 ^ 0xDD;
  if ( *(int *)(a1 + 52) > 0 )
  {
    v28 = 0;
    v38 = v5;
    do
    {
      HIDWORD(v45) = v9 >> 19;
      HIDWORD(v46) = v8 >> 16;
      v29 = ((_DWORD)v9 << 13) | (HIDWORD(v9) >> 19);
      v30 = v9 + v18;
      LODWORD(v45) = v29;
      ++v28;
      LODWORD(v46) = ((_DWORD)v8 << 16) | HIWORD(HIDWORD(v8));
      v31 = v36 + v8;
      HIDWORD(v47) = (v45 ^ v30) >> 15;
      v32 = v46 ^ v31;
      HIDWORD(v33) = (__int64)(v46 ^ v31) >> 11;
      LODWORD(v33) = (((unsigned int)v46 ^ (unsigned int)v31) << 21)
                   | ((unsigned int)(HIDWORD(v46) ^ HIDWORD(v31)) >> 11);
      LODWORD(v47) = (((unsigned int)v45 ^ (unsigned int)v30) << 17)
                   | ((unsigned int)(HIDWORD(v45) ^ HIDWORD(v30)) >> 15);
      v34 = v31 + (v45 ^ v30);
      v36 = __PAIR64__(v34, HIDWORD(v34));
      v18 = __PAIR64__(v30, HIDWORD(v30)) + v32;
      v9 = v47 ^ v34;
      v8 = v18 ^ v33;
    }
    while ( *(_DWORD *)(a1 + 52) != v28 );
    v5 = v38;
  }
  *(_QWORD *)(v5 + 8) = v8 ^ v36 ^ v18 ^ v9;
  return 1;
}
