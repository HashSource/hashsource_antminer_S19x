unsigned int __fastcall sub_F5260(unsigned int *a1, _BYTE *a2, int a3, int *a4, int a5, int a6)
{
  bool v7; // nf
  int v8; // r7
  unsigned int v9; // r2
  unsigned int v10; // r3
  _BYTE *v11; // r4
  unsigned int *v12; // r5
  unsigned int v13; // r6
  unsigned int v14; // r0
  int v15; // r1
  char *v16; // r1
  int v17; // r7
  unsigned int v18; // r5
  unsigned int *v19; // r6
  _BYTE *v20; // r4
  unsigned int v21; // r10
  unsigned int v22; // r11
  unsigned int v23; // r8
  unsigned int v24; // r3
  unsigned int v25; // r5
  unsigned int v26; // r12
  unsigned int v27; // lr
  unsigned int v28; // r0
  unsigned int v29; // r3
  unsigned int v30; // r1
  int v31; // r2
  unsigned int v32; // r4
  unsigned int v33; // r5
  _BYTE *v34; // r1
  int v35; // r3
  int v36; // r2
  _BYTE *v37; // r0
  _BYTE *v38; // r0
  _BYTE *v39; // r0
  unsigned int result; // r0
  char v41; // r4
  char v42; // r1
  char v43; // r7
  unsigned int v44; // lr
  unsigned int v45; // r2
  char v46; // r6
  char v47; // r5
  int v48; // r4
  int v49; // r4
  int v50; // r0
  int v51; // r4
  int v52; // r0
  int v53; // r4
  int v54; // r0
  int v55; // r0
  int v56; // r5
  int v57; // r0
  int v58; // r5
  int v59; // r0
  int v60; // r1
  _BYTE *v61; // [sp+4h] [bp-20h]
  unsigned int *v62; // [sp+Ch] [bp-18h]
  unsigned int v64; // [sp+14h] [bp-10h]
  unsigned int v65; // [sp+14h] [bp-10h]
  unsigned int v66; // [sp+18h] [bp-Ch] BYREF
  unsigned int v67; // [sp+1Ch] [bp-8h]

  v62 = a1;
  v61 = a2;
  if ( a6 )
  {
    v64 = a3 - 8;
    v7 = a3 - 8 < 0;
    v8 = a3 - 8;
    v9 = *(_DWORD *)(a5 + 4);
    v10 = *(_DWORD *)a5;
    if ( !v7 )
    {
      v11 = a2 + 8;
      v12 = a1;
      do
      {
        v13 = *v12;
        v14 = v12[1];
        v11 += 8;
        v12 += 2;
        v66 = v10 ^ v13;
        v67 = v9 ^ v14;
        sub_F5044((int *)&v66, a4);
        v10 = v66;
        v8 -= 8;
        v9 = v67;
        *(v11 - 16) = v66;
        *(v11 - 12) = v9;
        *(v11 - 15) = BYTE1(v10);
        *(v11 - 14) = BYTE2(v10);
        *(v11 - 13) = HIBYTE(v10);
        *(v11 - 11) = BYTE1(v9);
        *(v11 - 10) = BYTE2(v9);
        *(v11 - 9) = HIBYTE(v9);
      }
      while ( v8 >= 0 );
      v8 = a3 - 16 - 8 * (v64 >> 3);
      v15 = 8 * ((v64 >> 3) + 1);
      v62 = (unsigned int *)((char *)v62 + v15);
      v61 += v15;
    }
    if ( v8 == -8 )
    {
      v41 = v9;
      result = BYTE1(v9);
      v42 = BYTE2(v9);
      v43 = v10;
      v44 = HIBYTE(v10);
      v45 = HIBYTE(v9);
      v46 = BYTE1(v10);
      v47 = BYTE2(v10);
    }
    else
    {
      v16 = (char *)v62 + v8 + 8;
      switch ( v8 )
      {
        case -7:
          v53 = 0;
          v59 = 0;
          goto LABEL_30;
        case -6:
          v53 = 0;
          v57 = 0;
          goto LABEL_29;
        case -5:
          v53 = 0;
          v55 = 0;
          goto LABEL_28;
        case -4:
          v53 = 0;
          goto LABEL_27;
        case -3:
          v51 = 0;
          goto LABEL_26;
        case -2:
          v49 = 0;
          goto LABEL_25;
        case -1:
          v48 = (unsigned __int8)*--v16;
          v49 = v48 << 16;
LABEL_25:
          v50 = (unsigned __int8)*--v16;
          v51 = v49 | (v50 << 8);
LABEL_26:
          v52 = (unsigned __int8)*--v16;
          v53 = v51 | v52;
LABEL_27:
          v54 = (unsigned __int8)*--v16;
          v55 = v54 << 24;
LABEL_28:
          v56 = (unsigned __int8)*--v16;
          v57 = v55 | (v56 << 16);
LABEL_29:
          v58 = (unsigned __int8)*--v16;
          v59 = v57 | (v58 << 8);
LABEL_30:
          v60 = (unsigned __int8)*(v16 - 1) | v59;
          break;
        default:
          v53 = 0;
          v60 = 0;
          break;
      }
      v66 = v10 ^ v60;
      v67 = v9 ^ v53;
      sub_F5044((int *)&v66, a4);
      v46 = BYTE1(v66);
      v47 = BYTE2(v66);
      v43 = v66;
      v44 = HIBYTE(v66);
      v41 = v67;
      v45 = HIBYTE(v67);
      result = BYTE1(v67);
      v42 = BYTE2(v67);
      *v61 = v66;
      v61[3] = v44;
      v61[1] = v46;
      v61[2] = v47;
      v61[4] = v41;
      v61[7] = v45;
      v61[5] = result;
      v61[6] = v42;
    }
    *(_BYTE *)a5 = v43;
    *(_BYTE *)(a5 + 1) = v46;
    *(_BYTE *)(a5 + 2) = v47;
    *(_BYTE *)(a5 + 3) = v44;
    *(_BYTE *)(a5 + 4) = v41;
    *(_BYTE *)(a5 + 5) = result;
    *(_BYTE *)(a5 + 6) = v42;
    *(_BYTE *)(a5 + 7) = v45;
  }
  else
  {
    v17 = a3 - 8;
    v65 = a3 - 8;
    v18 = *(_DWORD *)(a5 + 4);
    if ( a3 - 8 < 0 )
    {
      v23 = *(_DWORD *)(a5 + 4);
      v22 = *(_DWORD *)a5;
    }
    else
    {
      v19 = a1;
      v20 = a2 + 8;
      v21 = *(_DWORD *)a5;
      do
      {
        v22 = *v19;
        v23 = v19[1];
        v20 += 8;
        v19 += 2;
        v66 = v22;
        v67 = v23;
        sub_F513C((int *)&v66, (int)a4);
        v17 -= 8;
        v24 = v21 ^ v66;
        v21 = v22;
        v25 = v18 ^ v67;
        v26 = HIWORD(v24);
        v27 = HIBYTE(v24);
        *(v20 - 16) = v24;
        v28 = v25 >> 8;
        *(v20 - 15) = BYTE1(v24);
        v29 = HIBYTE(v25);
        v30 = HIWORD(v25);
        *(v20 - 12) = v25;
        *(v20 - 14) = v26;
        v18 = v23;
        *(v20 - 13) = v27;
        *(v20 - 11) = v28;
        *(v20 - 10) = v30;
        *(v20 - 9) = v29;
      }
      while ( v17 >= 0 );
      v31 = (v65 >> 3) + 1;
      v17 = a3 - 16 - 8 * (v65 >> 3);
      v62 += 2 * v31;
      v61 += 8 * v31;
    }
    if ( v17 != -8 )
    {
      v32 = *v62;
      v33 = v62[1];
      v66 = *v62;
      v67 = v33;
      sub_F513C((int *)&v66, (int)a4);
      v34 = &v61[v17 + 8];
      v35 = v22 ^ v66;
      v36 = v23 ^ v67;
      switch ( v17 )
      {
        case -7:
          v39 = &v61[v17 + 8];
          goto LABEL_20;
        case -6:
          goto LABEL_19;
        case -5:
          v38 = &v61[v17 + 8];
          goto LABEL_18;
        case -4:
          goto LABEL_17;
        case -3:
          v37 = &v61[v17 + 8];
          goto LABEL_16;
        case -2:
          goto LABEL_15;
        case -1:
          *--v34 = BYTE2(v36);
LABEL_15:
          v37 = v34 - 1;
          *(v34 - 1) = BYTE1(v36);
LABEL_16:
          v34 = v37 - 1;
          *(v37 - 1) = v36;
LABEL_17:
          v38 = v34 - 1;
          *(v34 - 1) = HIBYTE(v35);
LABEL_18:
          v34 = v38 - 1;
          *(v38 - 1) = BYTE2(v35);
LABEL_19:
          v39 = v34 - 1;
          *(v34 - 1) = BYTE1(v35);
LABEL_20:
          v23 = v33;
          v22 = v32;
          *(v39 - 1) = v35;
          break;
        default:
          v23 = v33;
          v22 = v32;
          break;
      }
    }
    *(_BYTE *)a5 = v22;
    *(_BYTE *)(a5 + 4) = v23;
    *(_BYTE *)(a5 + 1) = BYTE1(v22);
    *(_BYTE *)(a5 + 2) = BYTE2(v22);
    *(_BYTE *)(a5 + 3) = HIBYTE(v22);
    *(_BYTE *)(a5 + 5) = BYTE1(v23);
    *(_BYTE *)(a5 + 6) = BYTE2(v23);
    *(_BYTE *)(a5 + 7) = HIBYTE(v23);
    return HIBYTE(v22);
  }
  return result;
}
