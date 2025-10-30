unsigned int __fastcall sub_DD1F0(unsigned int *a1, _BYTE *a2, int a3, _DWORD *a4, int a5, int a6)
{
  _BYTE *v7; // r8
  int v8; // r6
  unsigned int v9; // r3
  unsigned int v10; // r7
  unsigned int *v11; // r5
  _BYTE *v12; // r4
  int v13; // r0
  int v14; // lr
  int v15; // r2
  int v16; // r0
  int v17; // r10
  int v18; // lr
  int v19; // r2
  int v20; // r2
  char *v21; // r2
  int v22; // r7
  unsigned int v23; // r10
  unsigned int v24; // r11
  unsigned int v25; // r8
  unsigned int v26; // r11
  int v27; // r10
  unsigned int *v28; // r6
  _BYTE *v29; // r5
  int v30; // lr
  int v31; // r4
  int v32; // r2
  int v33; // r12
  int v34; // r4
  int v35; // r7
  int v36; // r7
  int v37; // r0
  int v38; // r2
  unsigned int v39; // r3
  int v40; // r2
  unsigned int v41; // r5
  unsigned int v42; // r6
  _BYTE *v43; // r0
  unsigned int v44; // r4
  int v45; // r3
  _BYTE *v46; // r2
  _BYTE *v47; // r2
  _BYTE *v48; // r1
  unsigned int v49; // r2
  unsigned int result; // r0
  char v51; // r1
  char v52; // r2
  unsigned int v53; // r6
  char v54; // lr
  char v55; // r5
  char v56; // r4
  int v57; // r1
  int v58; // r1
  int v59; // r0
  int v60; // r1
  int v61; // r4
  int v62; // r4
  int v63; // r1
  char *v64; // r0
  int v65; // r1
  int v66; // r0
  int v67; // r1
  int v68; // r2
  unsigned int v69; // [sp+4h] [bp-20h]
  _BYTE *v70; // [sp+8h] [bp-1Ch]
  unsigned int *v71; // [sp+Ch] [bp-18h]
  unsigned int v73; // [sp+14h] [bp-10h]
  unsigned int v74; // [sp+14h] [bp-10h]
  unsigned int v75; // [sp+18h] [bp-Ch] BYREF
  unsigned int v76; // [sp+1Ch] [bp-8h]

  v71 = a1;
  v70 = a2;
  v7 = (_BYTE *)a5;
  if ( a6 )
  {
    v73 = a3 - 8;
    v8 = a3 - 8;
    v9 = _byteswap_ulong(*(_DWORD *)a5);
    v10 = _byteswap_ulong(*(_DWORD *)(a5 + 4));
    if ( a3 - 8 >= 0 )
    {
      v11 = a1 + 2;
      v12 = a2 + 8;
      do
      {
        v13 = *((unsigned __int8 *)v11 - 7);
        v14 = *((unsigned __int8 *)v11 - 8);
        v12 += 8;
        v15 = *((unsigned __int8 *)v11 - 3);
        v11 += 2;
        v16 = (v13 << 16) | (v14 << 24) | *((unsigned __int8 *)v11 - 13);
        v17 = (v15 << 16) | (*((unsigned __int8 *)v11 - 12) << 24);
        v18 = *((unsigned __int8 *)v11 - 10);
        v19 = *((unsigned __int8 *)v11 - 9);
        v75 = v9 ^ (v16 | (*((unsigned __int8 *)v11 - 14) << 8));
        v76 = v10 ^ (v17 | v19 | (v18 << 8));
        sub_DCCAC((int *)&v75, a4);
        v9 = v75;
        v8 -= 8;
        v10 = v76;
        *(v12 - 13) = v75;
        *(v12 - 16) = HIBYTE(v9);
        *(v12 - 15) = BYTE2(v9);
        *(v12 - 14) = BYTE1(v9);
        *(v12 - 9) = v10;
        *(v12 - 12) = HIBYTE(v10);
        *(v12 - 11) = BYTE2(v10);
        *(v12 - 10) = BYTE1(v10);
      }
      while ( v8 >= 0 );
      v8 = a3 - 16 - 8 * (v73 >> 3);
      v20 = 8 * ((v73 >> 3) + 1);
      v71 = (unsigned int *)((char *)v71 + v20);
      v70 += v20;
    }
    if ( v8 == -8 )
    {
      result = HIBYTE(v10);
      v51 = BYTE2(v10);
      v52 = BYTE1(v10);
      v53 = HIBYTE(v9);
      v54 = v9;
      v55 = BYTE2(v9);
      v56 = BYTE1(v9);
    }
    else
    {
      v21 = (char *)v71 + v8 + 8;
      switch ( v8 )
      {
        case -7:
          v62 = 0;
          v67 = 0;
          goto LABEL_30;
        case -6:
          v62 = 0;
          v65 = 0;
          goto LABEL_29;
        case -5:
          v62 = 0;
          v64 = (char *)v71 + v8 + 8;
          v63 = 0;
          goto LABEL_28;
        case -4:
          v62 = 0;
          goto LABEL_27;
        case -3:
          v60 = 0;
          goto LABEL_26;
        case -2:
          v58 = 0;
          goto LABEL_25;
        case -1:
          v57 = (unsigned __int8)*--v21;
          v58 = v57 << 8;
LABEL_25:
          v59 = (unsigned __int8)*--v21;
          v60 = v58 | (v59 << 16);
LABEL_26:
          v61 = (unsigned __int8)*--v21;
          v62 = v60 | (v61 << 24);
LABEL_27:
          v63 = (unsigned __int8)*(v21 - 1);
          v64 = v21 - 1;
LABEL_28:
          v21 = v64 - 1;
          v65 = v63 | ((unsigned __int8)*(v64 - 1) << 8);
LABEL_29:
          v66 = (unsigned __int8)*--v21;
          v67 = v65 | (v66 << 16);
LABEL_30:
          v68 = v67 | ((unsigned __int8)*(v21 - 1) << 24);
          break;
        default:
          v62 = 0;
          v68 = 0;
          break;
      }
      v75 = v9 ^ v68;
      v76 = v10 ^ v62;
      sub_DCCAC((int *)&v75, a4);
      v55 = BYTE2(v75);
      v56 = BYTE1(v75);
      v53 = HIBYTE(v75);
      v54 = v75;
      result = HIBYTE(v76);
      LOBYTE(v10) = v76;
      v51 = BYTE2(v76);
      v52 = BYTE1(v76);
      *v70 = HIBYTE(v75);
      v70[3] = v54;
      v70[1] = v55;
      v70[2] = v56;
      v70[4] = result;
      v70[7] = v10;
      v70[5] = v51;
      v70[6] = v52;
    }
    *(_BYTE *)a5 = v53;
    *(_BYTE *)(a5 + 1) = v55;
    *(_BYTE *)(a5 + 2) = v56;
    *(_BYTE *)(a5 + 3) = v54;
    *(_BYTE *)(a5 + 4) = result;
    *(_BYTE *)(a5 + 5) = v51;
    *(_BYTE *)(a5 + 6) = v52;
    *(_BYTE *)(a5 + 7) = v10;
  }
  else
  {
    v22 = a3 - 8;
    v74 = a3 - 8;
    v23 = _byteswap_ulong(*(_DWORD *)a5);
    v24 = _byteswap_ulong(*(_DWORD *)(a5 + 4));
    if ( a3 - 8 < 0 )
    {
      v39 = v24;
      v34 = v23;
    }
    else
    {
      v25 = v24;
      v26 = v23;
      v27 = a3 - 8;
      v28 = a1 + 2;
      v29 = a2 + 8;
      do
      {
        v30 = *((unsigned __int8 *)v28 - 7);
        v31 = *((unsigned __int8 *)v28 - 8);
        v29 += 8;
        v32 = *((unsigned __int8 *)v28 - 3);
        v28 += 2;
        v33 = *((unsigned __int8 *)v28 - 10);
        v34 = (v30 << 16) | (v31 << 24) | *((unsigned __int8 *)v28 - 13) | (*((unsigned __int8 *)v28 - 14) << 8);
        v35 = *((unsigned __int8 *)v28 - 9) | (v32 << 16) | (*((unsigned __int8 *)v28 - 12) << 24);
        v75 = v34;
        v36 = v35 | (v33 << 8);
        v76 = v36;
        sub_DCCAC((int *)&v75, a4);
        v27 -= 8;
        v37 = v26 ^ v75;
        v26 = v34;
        v38 = v25 ^ v76;
        *(v29 - 13) = v37;
        *(v29 - 9) = v38;
        v25 = v36;
        *(v29 - 16) = HIBYTE(v37);
        *(v29 - 15) = BYTE2(v37);
        *(v29 - 14) = BYTE1(v37);
        *(v29 - 12) = HIBYTE(v38);
        *(v29 - 11) = BYTE2(v38);
        *(v29 - 10) = BYTE1(v38);
      }
      while ( v27 >= 0 );
      v39 = v36;
      v7 = (_BYTE *)a5;
      v40 = 8 * ((v74 >> 3) + 1);
      v22 = a3 - 16 - 8 * (v74 >> 3);
      v71 = (unsigned int *)((char *)v71 + v40);
      v70 += v40;
    }
    if ( v22 != -8 )
    {
      v69 = v39;
      v41 = _byteswap_ulong(*v71);
      v42 = _byteswap_ulong(v71[1]);
      v75 = v41;
      v76 = v42;
      sub_DCCAC((int *)&v75, a4);
      v43 = &v70[v22 + 8];
      v44 = v34 ^ v75;
      v45 = v69 ^ v76;
      switch ( v22 )
      {
        case -7:
          v48 = &v70[v22 + 8];
          goto LABEL_20;
        case -6:
          goto LABEL_19;
        case -5:
          v47 = &v70[v22 + 8];
          goto LABEL_18;
        case -4:
          goto LABEL_17;
        case -3:
          v46 = &v70[v22 + 8];
          goto LABEL_16;
        case -2:
          goto LABEL_15;
        case -1:
          *--v43 = BYTE1(v45);
LABEL_15:
          v46 = v43 - 1;
          *(v43 - 1) = BYTE2(v45);
LABEL_16:
          v43 = v46 - 1;
          *(v46 - 1) = HIBYTE(v45);
LABEL_17:
          v47 = v43 - 1;
          *(v43 - 1) = v44;
LABEL_18:
          v43 = v47 - 1;
          *(v47 - 1) = BYTE1(v44);
LABEL_19:
          v48 = v43 - 1;
          *(v43 - 1) = BYTE2(v44);
LABEL_20:
          v49 = HIBYTE(v44);
          v39 = v42;
          v34 = v41;
          *(v48 - 1) = v49;
          break;
        default:
          v39 = v42;
          v34 = v41;
          break;
      }
    }
    v7[3] = v34;
    v7[7] = v39;
    *v7 = HIBYTE(v34);
    v7[1] = BYTE2(v34);
    v7[2] = BYTE1(v34);
    v7[4] = HIBYTE(v39);
    v7[5] = BYTE2(v39);
    v7[6] = BYTE1(v39);
    return HIBYTE(v39);
  }
  return result;
}
