unsigned int __fastcall sub_13EC4C(
        unsigned int *a1,
        _BYTE *a2,
        int a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned int *a6,
        int a7,
        int a8)
{
  int v10; // r6
  unsigned int v11; // r1
  unsigned int v12; // r2
  _BYTE *v13; // r4
  unsigned int *v14; // r5
  unsigned int v15; // r0
  unsigned int v16; // lr
  int v17; // r3
  char *v18; // r3
  int v19; // r6
  unsigned int v20; // r11
  unsigned int *v21; // r5
  _BYTE *v22; // r4
  unsigned int v23; // r10
  unsigned int v24; // r7
  unsigned int v25; // r8
  int v26; // r2
  int v27; // r3
  unsigned int v28; // r8
  unsigned int v29; // r7
  int v30; // r2
  unsigned int v31; // r4
  unsigned int v32; // r5
  _BYTE *v33; // r0
  _BYTE *v34; // r3
  int v35; // r8
  int v36; // r7
  _BYTE *v37; // r2
  _BYTE *v38; // r1
  _BYTE *v39; // r1
  unsigned int result; // r0
  char v41; // r4
  char v42; // r3
  char v43; // r7
  unsigned int v44; // lr
  unsigned int v45; // r1
  char v46; // r6
  char v47; // r5
  int v48; // r5
  int v49; // r5
  int v50; // r0
  int v51; // r5
  int v52; // r0
  int v53; // r5
  int v54; // r4
  int v55; // r4
  int v56; // r0
  int v57; // r4
  int v58; // r0
  int v59; // r4
  int v60; // r4
  _BYTE *v61; // [sp+4h] [bp-20h]
  unsigned int *v62; // [sp+Ch] [bp-18h]
  int v64; // [sp+14h] [bp-10h]
  unsigned int v65; // [sp+14h] [bp-10h]
  unsigned int v66; // [sp+18h] [bp-Ch] BYREF
  unsigned int v67; // [sp+1Ch] [bp-8h]

  v62 = a1;
  v61 = a2;
  if ( a8 )
  {
    v64 = a3 - 8;
    v10 = a3 - 8;
    v11 = *(_DWORD *)(a7 + 4);
    v12 = *(_DWORD *)a7;
    if ( v64 >= 0 )
    {
      v13 = a2 + 8;
      v14 = a1;
      do
      {
        v15 = *v14;
        v16 = v14[1];
        v13 += 8;
        v14 += 2;
        v66 = v15 ^ v12;
        v67 = v16 ^ v11;
        sub_13E794((int *)&v66, a4, a5, a6);
        v12 = v66;
        v10 -= 8;
        v11 = v67;
        *((_WORD *)v13 - 8) = v66;
        *(v13 - 14) = BYTE2(v12);
        *(v13 - 13) = HIBYTE(v12);
        *((_DWORD *)v13 - 3) = v11;
      }
      while ( v10 >= 0 );
      v10 = a3 - 16 - 8 * ((unsigned int)v64 >> 3);
      v17 = 8 * (((unsigned int)v64 >> 3) + 1);
      v62 = (unsigned int *)((char *)v62 + v17);
      v61 += v17;
    }
    if ( v10 == -8 )
    {
      v41 = v11;
      result = BYTE1(v11);
      v42 = BYTE2(v11);
      v43 = v12;
      v44 = HIBYTE(v12);
      v45 = HIBYTE(v11);
      v46 = BYTE1(v12);
      v47 = BYTE2(v12);
    }
    else
    {
      v18 = (char *)v62 + v10 + 8;
      switch ( v10 )
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
          v48 = (unsigned __int8)*--v18;
          v49 = v48 << 16;
LABEL_25:
          v50 = (unsigned __int8)*--v18;
          v51 = v49 | (v50 << 8);
LABEL_26:
          v52 = (unsigned __int8)*--v18;
          v53 = v51 | v52;
LABEL_27:
          v54 = (unsigned __int8)*--v18;
          v55 = v54 << 24;
LABEL_28:
          v56 = (unsigned __int8)*--v18;
          v57 = v55 | (v56 << 16);
LABEL_29:
          v58 = (unsigned __int8)*--v18;
          v59 = v57 | (v58 << 8);
LABEL_30:
          v60 = v59 | (unsigned __int8)*(v18 - 1);
          break;
        default:
          v53 = 0;
          v60 = 0;
          break;
      }
      v66 = v60 ^ v12;
      v67 = v53 ^ v11;
      sub_13E794((int *)&v66, a4, a5, a6);
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
    *(_BYTE *)a7 = v43;
    *(_BYTE *)(a7 + 1) = v46;
    *(_BYTE *)(a7 + 2) = v47;
    *(_BYTE *)(a7 + 3) = v44;
    *(_BYTE *)(a7 + 4) = v41;
    *(_BYTE *)(a7 + 5) = result;
    *(_BYTE *)(a7 + 6) = v42;
    *(_BYTE *)(a7 + 7) = v45;
  }
  else
  {
    v19 = a3 - 8;
    v65 = a3 - 8;
    v20 = *(_DWORD *)(a7 + 4);
    if ( a3 - 8 < 0 )
    {
      v29 = *(_DWORD *)(a7 + 4);
      v28 = *(_DWORD *)a7;
    }
    else
    {
      v21 = a1;
      v22 = a2 + 8;
      v23 = *(_DWORD *)a7;
      do
      {
        v24 = *v21;
        v25 = v21[1];
        v22 += 8;
        v21 += 2;
        v66 = v24;
        v67 = v25;
        sub_13E85C((int *)&v66, a4, a5, a6);
        v19 -= 8;
        v26 = v23 ^ v66;
        v23 = v24;
        v27 = v67 ^ v20;
        *((_DWORD *)v22 - 4) = v26;
        v20 = v25;
        *((_DWORD *)v22 - 3) = v27;
      }
      while ( v19 >= 0 );
      v28 = v24;
      v29 = v20;
      v30 = (v65 >> 3) + 1;
      v19 = a3 - 16 - 8 * (v65 >> 3);
      v62 += 2 * v30;
      v61 += 8 * v30;
    }
    if ( v19 != -8 )
    {
      v31 = *v62;
      v32 = v62[1];
      v66 = *v62;
      v67 = v32;
      sub_13E85C((int *)&v66, a4, a5, a6);
      v33 = &v61[v19 + 8];
      v34 = v33;
      v35 = v28 ^ v66;
      v36 = v29 ^ v67;
      switch ( v19 )
      {
        case -7:
          v39 = &v61[v19 + 8];
          goto LABEL_20;
        case -6:
          goto LABEL_19;
        case -5:
          v38 = &v61[v19 + 8];
          goto LABEL_18;
        case -4:
          goto LABEL_17;
        case -3:
          v37 = &v61[v19 + 8];
          goto LABEL_16;
        case -2:
          goto LABEL_15;
        case -1:
          v34 = v33 - 1;
          *(v33 - 1) = BYTE2(v36);
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
          *(v39 - 1) = v35;
          v29 = v32;
          v28 = v31;
          break;
        default:
          v29 = v32;
          v28 = v31;
          break;
      }
    }
    *(_BYTE *)a7 = v28;
    *(_BYTE *)(a7 + 4) = v29;
    *(_BYTE *)(a7 + 1) = BYTE1(v28);
    *(_BYTE *)(a7 + 2) = BYTE2(v28);
    *(_BYTE *)(a7 + 3) = HIBYTE(v28);
    *(_BYTE *)(a7 + 5) = BYTE1(v29);
    *(_BYTE *)(a7 + 6) = BYTE2(v29);
    *(_BYTE *)(a7 + 7) = HIBYTE(v29);
    return HIBYTE(v28);
  }
  return result;
}
