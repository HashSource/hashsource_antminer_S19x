unsigned int __fastcall sub_13E928(unsigned int *a1, _BYTE *a2, int a3, unsigned int *a4, int a5, int a6)
{
  int v8; // r6
  unsigned int v9; // r1
  unsigned int v10; // r3
  _BYTE *v11; // r4
  unsigned int *v12; // r5
  unsigned int v13; // r0
  unsigned int v14; // r7
  int v15; // r2
  char *v16; // r2
  int v17; // r6
  unsigned int v18; // r11
  unsigned int *v19; // r5
  _BYTE *v20; // r4
  unsigned int v21; // r10
  unsigned int v22; // r7
  unsigned int v23; // r8
  int v24; // r1
  int v25; // r2
  unsigned int v26; // r8
  unsigned int v27; // r7
  int v28; // r2
  unsigned int v29; // r4
  unsigned int v30; // r5
  _BYTE *v31; // r0
  _BYTE *v32; // r1
  int v33; // r8
  int v34; // r7
  _BYTE *v35; // r3
  _BYTE *v36; // r2
  _BYTE *v37; // r2
  unsigned int result; // r0
  char v39; // r4
  char v40; // r2
  char v41; // r7
  unsigned int v42; // lr
  unsigned int v43; // r1
  char v44; // r6
  char v45; // r5
  int v46; // r4
  int v47; // r4
  int v48; // r0
  int v49; // r4
  int v50; // r0
  int v51; // r4
  int v52; // r0
  int v53; // r0
  int v54; // r5
  int v55; // r0
  int v56; // r5
  int v57; // r0
  int v58; // r2
  _BYTE *v59; // [sp+4h] [bp-20h]
  unsigned int *v60; // [sp+Ch] [bp-18h]
  unsigned int v62; // [sp+14h] [bp-10h]
  unsigned int v63; // [sp+14h] [bp-10h]
  unsigned int v64; // [sp+18h] [bp-Ch] BYREF
  unsigned int v65; // [sp+1Ch] [bp-8h]

  v60 = a1;
  v59 = a2;
  if ( a6 )
  {
    v62 = a3 - 8;
    v8 = a3 - 8;
    v9 = *(_DWORD *)(a5 + 4);
    v10 = *(_DWORD *)a5;
    if ( a3 - 8 >= 0 )
    {
      v11 = a2 + 8;
      v12 = a1;
      do
      {
        v13 = *v12;
        v14 = v12[1];
        v11 += 8;
        v12 += 2;
        v64 = v10 ^ v13;
        v65 = v14 ^ v9;
        sub_13C7E0((int *)&v64, a4, 1);
        v10 = v64;
        v8 -= 8;
        v9 = v65;
        *(v11 - 16) = v64;
        *(v11 - 12) = v9;
        *(v11 - 15) = BYTE1(v10);
        *(v11 - 14) = BYTE2(v10);
        *(v11 - 13) = HIBYTE(v10);
        *(v11 - 11) = BYTE1(v9);
        *(v11 - 10) = BYTE2(v9);
        *(v11 - 9) = HIBYTE(v9);
      }
      while ( v8 >= 0 );
      v8 = a3 - 16 - 8 * (v62 >> 3);
      v15 = 8 * ((v62 >> 3) + 1);
      v60 = (unsigned int *)((char *)v60 + v15);
      v59 += v15;
    }
    if ( v8 == -8 )
    {
      v39 = v9;
      result = BYTE1(v9);
      v40 = BYTE2(v9);
      v41 = v10;
      v42 = HIBYTE(v10);
      v43 = HIBYTE(v9);
      v44 = BYTE1(v10);
      v45 = BYTE2(v10);
    }
    else
    {
      v16 = (char *)v60 + v8 + 8;
      switch ( v8 )
      {
        case -7:
          v51 = 0;
          v57 = 0;
          goto LABEL_30;
        case -6:
          v51 = 0;
          v55 = 0;
          goto LABEL_29;
        case -5:
          v51 = 0;
          v53 = 0;
          goto LABEL_28;
        case -4:
          v51 = 0;
          goto LABEL_27;
        case -3:
          v49 = 0;
          goto LABEL_26;
        case -2:
          v47 = 0;
          goto LABEL_25;
        case -1:
          v46 = (unsigned __int8)*--v16;
          v47 = v46 << 16;
LABEL_25:
          v48 = (unsigned __int8)*--v16;
          v49 = v47 | (v48 << 8);
LABEL_26:
          v50 = (unsigned __int8)*--v16;
          v51 = v49 | v50;
LABEL_27:
          v52 = (unsigned __int8)*--v16;
          v53 = v52 << 24;
LABEL_28:
          v54 = (unsigned __int8)*--v16;
          v55 = v53 | (v54 << 16);
LABEL_29:
          v56 = (unsigned __int8)*--v16;
          v57 = v55 | (v56 << 8);
LABEL_30:
          v58 = (unsigned __int8)*(v16 - 1) | v57;
          break;
        default:
          v51 = 0;
          v58 = 0;
          break;
      }
      v64 = v10 ^ v58;
      v65 = v51 ^ v9;
      sub_13C7E0((int *)&v64, a4, 1);
      v44 = BYTE1(v64);
      v45 = BYTE2(v64);
      v41 = v64;
      v42 = HIBYTE(v64);
      v39 = v65;
      v43 = HIBYTE(v65);
      result = BYTE1(v65);
      v40 = BYTE2(v65);
      *v59 = v64;
      v59[3] = v42;
      v59[1] = v44;
      v59[2] = v45;
      v59[4] = v39;
      v59[7] = v43;
      v59[5] = result;
      v59[6] = v40;
    }
    *(_BYTE *)a5 = v41;
    *(_BYTE *)(a5 + 1) = v44;
    *(_BYTE *)(a5 + 2) = v45;
    *(_BYTE *)(a5 + 3) = v42;
    *(_BYTE *)(a5 + 4) = v39;
    *(_BYTE *)(a5 + 5) = result;
    *(_BYTE *)(a5 + 6) = v40;
    *(_BYTE *)(a5 + 7) = v43;
  }
  else
  {
    v17 = a3 - 8;
    v63 = a3 - 8;
    v18 = *(_DWORD *)a5;
    if ( a3 - 8 < 0 )
    {
      v27 = *(_DWORD *)(a5 + 4);
      v26 = *(_DWORD *)a5;
    }
    else
    {
      v19 = a1;
      v20 = a2 + 8;
      v21 = *(_DWORD *)(a5 + 4);
      do
      {
        v22 = *v19;
        v23 = v19[1];
        v19 += 2;
        v64 = v22;
        v20 += 8;
        v65 = v23;
        sub_13C7E0((int *)&v64, a4, 0);
        v17 -= 8;
        v24 = v18 ^ v64;
        v18 = v22;
        v25 = v21 ^ v65;
        *((_DWORD *)v20 - 4) = v24;
        v21 = v23;
        *((_DWORD *)v20 - 3) = v25;
      }
      while ( v17 >= 0 );
      v26 = v22;
      v27 = v21;
      v28 = (v63 >> 3) + 1;
      v17 = a3 - 16 - 8 * (v63 >> 3);
      v60 += 2 * v28;
      v59 += 8 * v28;
    }
    if ( v17 != -8 )
    {
      v29 = *v60;
      v30 = v60[1];
      v64 = *v60;
      v65 = v30;
      sub_13C7E0((int *)&v64, a4, 0);
      v31 = &v59[v17 + 8];
      v32 = v31;
      v33 = v26 ^ v64;
      v34 = v27 ^ v65;
      switch ( v17 )
      {
        case -7:
          v37 = &v59[v17 + 8];
          goto LABEL_20;
        case -6:
          goto LABEL_19;
        case -5:
          v36 = &v59[v17 + 8];
          goto LABEL_18;
        case -4:
          goto LABEL_17;
        case -3:
          v35 = &v59[v17 + 8];
          goto LABEL_16;
        case -2:
          goto LABEL_15;
        case -1:
          v32 = v31 - 1;
          *(v31 - 1) = BYTE2(v34);
LABEL_15:
          v35 = v32 - 1;
          *(v32 - 1) = BYTE1(v34);
LABEL_16:
          v32 = v35 - 1;
          *(v35 - 1) = v34;
LABEL_17:
          v36 = v32 - 1;
          *(v32 - 1) = HIBYTE(v33);
LABEL_18:
          v32 = v36 - 1;
          *(v36 - 1) = BYTE2(v33);
LABEL_19:
          v37 = v32 - 1;
          *(v32 - 1) = BYTE1(v33);
LABEL_20:
          *(v37 - 1) = v33;
          v27 = v30;
          v26 = v29;
          break;
        default:
          v27 = v30;
          v26 = v29;
          break;
      }
    }
    *(_BYTE *)a5 = v26;
    *(_BYTE *)(a5 + 4) = v27;
    *(_BYTE *)(a5 + 1) = BYTE1(v26);
    *(_BYTE *)(a5 + 2) = BYTE2(v26);
    *(_BYTE *)(a5 + 3) = HIBYTE(v26);
    *(_BYTE *)(a5 + 5) = BYTE1(v27);
    *(_BYTE *)(a5 + 6) = BYTE2(v27);
    *(_BYTE *)(a5 + 7) = HIBYTE(v27);
    return HIBYTE(v26);
  }
  return result;
}
