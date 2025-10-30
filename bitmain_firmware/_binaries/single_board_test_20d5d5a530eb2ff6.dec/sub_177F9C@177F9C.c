unsigned int __fastcall sub_177F9C(unsigned int *a1, _BYTE *a2, int a3, _DWORD *a4, int a5, int a6)
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
  int v16; // r7
  int v17; // r2
  char *v18; // r2
  int v19; // r7
  unsigned int v20; // r10
  unsigned int v21; // r11
  unsigned int *v22; // r6
  int v23; // r8
  _BYTE *v24; // r5
  unsigned int v25; // r3
  unsigned int v26; // r11
  int v27; // r10
  int v28; // lr
  int v29; // r4
  int v30; // r2
  int v31; // r12
  int v32; // r4
  int v33; // r7
  int v34; // r7
  int v35; // r0
  int v36; // r2
  unsigned int v37; // r3
  int v38; // r2
  unsigned int v39; // r5
  unsigned int v40; // r6
  _BYTE *v41; // r0
  unsigned int v42; // r4
  int v43; // r3
  _BYTE *v44; // r2
  _BYTE *v45; // r2
  _BYTE *v46; // r1
  unsigned int v47; // r2
  unsigned int result; // r0
  char v49; // r1
  char v50; // r2
  unsigned int v51; // r6
  char v52; // lr
  char v53; // r5
  char v54; // r4
  int v55; // r1
  int v56; // r1
  int v57; // r0
  int v58; // r1
  int v59; // r4
  int v60; // r4
  int v61; // r1
  char *v62; // r0
  int v63; // r1
  int v64; // r0
  int v65; // r1
  int v66; // r2
  _BYTE *v67; // [sp+4h] [bp-20h]
  unsigned int v68; // [sp+8h] [bp-1Ch]
  unsigned int *v69; // [sp+Ch] [bp-18h]
  unsigned int v71; // [sp+14h] [bp-10h]
  unsigned int v72; // [sp+14h] [bp-10h]
  unsigned int v73; // [sp+18h] [bp-Ch] BYREF
  unsigned int v74; // [sp+1Ch] [bp-8h]

  v69 = a1;
  v67 = a2;
  v7 = (_BYTE *)a5;
  if ( a6 )
  {
    v71 = a3 - 8;
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
        v16 = v10
            ^ ((v15 << 16)
             | (*((unsigned __int8 *)v11 - 12) << 24)
             | *((unsigned __int8 *)v11 - 9)
             | (*((unsigned __int8 *)v11 - 10) << 8));
        v73 = v9 ^ ((v13 << 16) | (v14 << 24) | *((unsigned __int8 *)v11 - 13) | (*((unsigned __int8 *)v11 - 14) << 8));
        v74 = v16;
        sub_177780((int *)&v73, a4);
        v9 = v73;
        v8 -= 8;
        v10 = v74;
        *(v12 - 13) = v73;
        *(v12 - 16) = HIBYTE(v9);
        *(v12 - 15) = BYTE2(v9);
        *(v12 - 14) = BYTE1(v9);
        *(v12 - 9) = v10;
        *(v12 - 12) = HIBYTE(v10);
        *(v12 - 11) = BYTE2(v10);
        *(v12 - 10) = BYTE1(v10);
      }
      while ( v8 >= 0 );
      v8 = a3 - 16 - 8 * (v71 >> 3);
      v17 = 8 * ((v71 >> 3) + 1);
      v69 = (unsigned int *)((char *)v69 + v17);
      v67 += v17;
    }
    if ( v8 == -8 )
    {
      result = HIBYTE(v10);
      v49 = BYTE2(v10);
      v50 = BYTE1(v10);
      v51 = HIBYTE(v9);
      v52 = v9;
      v53 = BYTE2(v9);
      v54 = BYTE1(v9);
    }
    else
    {
      v18 = (char *)v69 + v8 + 8;
      switch ( v8 )
      {
        case -7:
          v60 = 0;
          v65 = 0;
          goto LABEL_30;
        case -6:
          v60 = 0;
          v63 = 0;
          goto LABEL_29;
        case -5:
          v60 = 0;
          v62 = (char *)v69 + v8 + 8;
          v61 = 0;
          goto LABEL_28;
        case -4:
          v60 = 0;
          goto LABEL_27;
        case -3:
          v58 = 0;
          goto LABEL_26;
        case -2:
          v56 = 0;
          goto LABEL_25;
        case -1:
          v55 = (unsigned __int8)*--v18;
          v56 = v55 << 8;
LABEL_25:
          v57 = (unsigned __int8)*--v18;
          v58 = v56 | (v57 << 16);
LABEL_26:
          v59 = (unsigned __int8)*--v18;
          v60 = v58 | (v59 << 24);
LABEL_27:
          v61 = (unsigned __int8)*(v18 - 1);
          v62 = v18 - 1;
LABEL_28:
          v18 = v62 - 1;
          v63 = v61 | ((unsigned __int8)*(v62 - 1) << 8);
LABEL_29:
          v64 = (unsigned __int8)*--v18;
          v65 = v63 | (v64 << 16);
LABEL_30:
          v66 = v65 | ((unsigned __int8)*(v18 - 1) << 24);
          break;
        default:
          v60 = 0;
          v66 = 0;
          break;
      }
      v73 = v9 ^ v66;
      v74 = v10 ^ v60;
      sub_177780((int *)&v73, a4);
      v53 = BYTE2(v73);
      v54 = BYTE1(v73);
      v51 = HIBYTE(v73);
      v52 = v73;
      result = HIBYTE(v74);
      LOBYTE(v10) = v74;
      v49 = BYTE2(v74);
      v50 = BYTE1(v74);
      *v67 = HIBYTE(v73);
      v67[3] = v52;
      v67[1] = v53;
      v67[2] = v54;
      v67[4] = result;
      v67[7] = v10;
      v67[5] = v49;
      v67[6] = v50;
    }
    *(_BYTE *)a5 = v51;
    *(_BYTE *)(a5 + 1) = v53;
    *(_BYTE *)(a5 + 2) = v54;
    *(_BYTE *)(a5 + 3) = v52;
    *(_BYTE *)(a5 + 4) = result;
    *(_BYTE *)(a5 + 5) = v49;
    *(_BYTE *)(a5 + 6) = v50;
    *(_BYTE *)(a5 + 7) = v10;
  }
  else
  {
    v19 = a3 - 8;
    v72 = a3 - 8;
    v20 = _byteswap_ulong(*(_DWORD *)a5);
    v21 = _byteswap_ulong(*(_DWORD *)(a5 + 4));
    if ( a3 - 8 < 0 )
    {
      v37 = v21;
      v32 = v20;
    }
    else
    {
      v22 = a1 + 2;
      v23 = a3 - 8;
      v24 = a2 + 8;
      v25 = v21;
      v26 = v20;
      v27 = v25;
      do
      {
        v28 = *((unsigned __int8 *)v22 - 7);
        v29 = *((unsigned __int8 *)v22 - 8);
        v24 += 8;
        v30 = *((unsigned __int8 *)v22 - 3);
        v22 += 2;
        v31 = *((unsigned __int8 *)v22 - 10);
        v32 = (v28 << 16) | (v29 << 24) | *((unsigned __int8 *)v22 - 13) | (*((unsigned __int8 *)v22 - 14) << 8);
        v33 = *((unsigned __int8 *)v22 - 9) | (v30 << 16) | (*((unsigned __int8 *)v22 - 12) << 24);
        v73 = v32;
        v34 = v33 | (v31 << 8);
        v74 = v34;
        sub_177B80((int *)&v73, a4);
        v23 -= 8;
        v35 = v26 ^ v73;
        v26 = v32;
        v36 = v27 ^ v74;
        *(v24 - 13) = v35;
        *(v24 - 9) = v36;
        v27 = v34;
        *(v24 - 16) = HIBYTE(v35);
        *(v24 - 15) = BYTE2(v35);
        *(v24 - 14) = BYTE1(v35);
        *(v24 - 12) = HIBYTE(v36);
        *(v24 - 11) = BYTE2(v36);
        *(v24 - 10) = BYTE1(v36);
      }
      while ( v23 >= 0 );
      v37 = v34;
      v7 = (_BYTE *)a5;
      v38 = 8 * ((v72 >> 3) + 1);
      v19 = a3 - 16 - 8 * (v72 >> 3);
      v69 = (unsigned int *)((char *)v69 + v38);
      v67 += v38;
    }
    if ( v19 != -8 )
    {
      v68 = v37;
      v39 = _byteswap_ulong(*v69);
      v40 = _byteswap_ulong(v69[1]);
      v73 = v39;
      v74 = v40;
      sub_177B80((int *)&v73, a4);
      v41 = &v67[v19 + 8];
      v42 = v32 ^ v73;
      v43 = v68 ^ v74;
      switch ( v19 )
      {
        case -7:
          v46 = &v67[v19 + 8];
          goto LABEL_20;
        case -6:
          goto LABEL_19;
        case -5:
          v45 = &v67[v19 + 8];
          goto LABEL_18;
        case -4:
          goto LABEL_17;
        case -3:
          v44 = &v67[v19 + 8];
          goto LABEL_16;
        case -2:
          goto LABEL_15;
        case -1:
          *--v41 = BYTE1(v43);
LABEL_15:
          v44 = v41 - 1;
          *(v41 - 1) = BYTE2(v43);
LABEL_16:
          v41 = v44 - 1;
          *(v44 - 1) = HIBYTE(v43);
LABEL_17:
          v45 = v41 - 1;
          *(v41 - 1) = v42;
LABEL_18:
          v41 = v45 - 1;
          *(v45 - 1) = BYTE1(v42);
LABEL_19:
          v46 = v41 - 1;
          *(v41 - 1) = BYTE2(v42);
LABEL_20:
          v47 = HIBYTE(v42);
          v37 = v40;
          v32 = v39;
          *(v46 - 1) = v47;
          break;
        default:
          v37 = v40;
          v32 = v39;
          break;
      }
    }
    v7[3] = v32;
    v7[7] = v37;
    *v7 = HIBYTE(v32);
    v7[1] = BYTE2(v32);
    v7[2] = BYTE1(v32);
    v7[4] = HIBYTE(v37);
    v7[5] = BYTE2(v37);
    v7[6] = BYTE1(v37);
    return HIBYTE(v37);
  }
  return result;
}
