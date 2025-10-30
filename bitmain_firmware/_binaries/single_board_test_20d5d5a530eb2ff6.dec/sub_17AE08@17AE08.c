unsigned int __fastcall sub_17AE08(int *a1, _BYTE *a2, int a3, unsigned int *a4, int a5, int *a6, int *a7, int a8)
{
  int *v8; // r5
  int v11; // r9
  int v12; // r7
  int v13; // r6
  unsigned int v14; // r1
  unsigned int v15; // r3
  _BYTE *v16; // r4
  int v17; // r8
  int v18; // r11
  int v19; // lr
  int v20; // r0
  int v21; // r12
  char v22; // lr
  char v23; // r0
  char v24; // r2
  unsigned int v25; // r12
  unsigned int v26; // r0
  unsigned int v27; // r2
  int v28; // r2
  int v29; // r2
  int v30; // r7
  unsigned int v31; // r3
  unsigned int v32; // r4
  unsigned int *v33; // r6
  _BYTE *v34; // r5
  unsigned int v35; // r9
  unsigned int v36; // r11
  unsigned int v37; // r8
  int v38; // r3
  unsigned int v39; // r4
  unsigned int v40; // r0
  unsigned int v41; // r1
  unsigned int v42; // r2
  unsigned int v43; // r7
  unsigned int v44; // r3
  unsigned int *v45; // r2
  _BYTE *v46; // r2
  int v47; // r11
  int v48; // r8
  _BYTE *v49; // r1
  _BYTE *v50; // r0
  _BYTE *v51; // r0
  unsigned int result; // r0
  char v53; // r6
  char v54; // r5
  char v55; // r9
  char v56; // r4
  unsigned int v57; // r1
  char v58; // r2
  unsigned int v59; // r3
  int v60; // r0
  int v61; // r0
  int v62; // r4
  int v63; // r0
  int v64; // r4
  int v65; // r0
  int v66; // r4
  int v67; // r4
  int v68; // r5
  int v69; // r4
  int v70; // r5
  int v71; // r4
  int v72; // r4
  unsigned int v73; // r9
  char v74; // r2^2
  int v75; // [sp+0h] [bp-2Ch]
  int v76; // [sp+4h] [bp-28h]
  int v77; // [sp+8h] [bp-24h]
  _BYTE *v78; // [sp+Ch] [bp-20h]
  unsigned int v79; // [sp+10h] [bp-1Ch]
  int v80; // [sp+10h] [bp-1Ch]
  unsigned int v81; // [sp+10h] [bp-1Ch]
  int *v82; // [sp+18h] [bp-14h]
  unsigned int v84; // [sp+20h] [bp-Ch] BYREF
  int v85; // [sp+24h] [bp-8h]

  v8 = a1;
  v82 = a1;
  v78 = a2;
  v75 = *a6;
  v11 = *a7;
  v76 = a6[1];
  v77 = a7[1];
  if ( !a8 )
  {
    v30 = a3 - 8;
    v31 = *(_DWORD *)a5;
    v32 = *(_DWORD *)(a5 + 4);
    if ( a3 - 8 <= 0 )
    {
      if ( !a3 )
      {
LABEL_21:
        *(_BYTE *)a5 = v31;
        *(_BYTE *)(a5 + 4) = v32;
        *(_BYTE *)(a5 + 1) = BYTE1(v31);
        *(_BYTE *)(a5 + 2) = BYTE2(v31);
        *(_BYTE *)(a5 + 3) = HIBYTE(v31);
        *(_BYTE *)(a5 + 5) = BYTE1(v32);
        *(_BYTE *)(a5 + 6) = BYTE2(v32);
        *(_BYTE *)(a5 + 7) = HIBYTE(v32);
        return HIBYTE(v31);
      }
      v36 = *(_DWORD *)a5;
      v37 = *(_DWORD *)(a5 + 4);
      v45 = (unsigned int *)a1;
    }
    else
    {
      v33 = (unsigned int *)a1;
      v80 = *a7;
      v34 = a2 + 8;
      v35 = *(_DWORD *)a5;
      do
      {
        v36 = *v33;
        v37 = v33[1];
        v30 -= 8;
        v33 += 2;
        v34 += 8;
        v84 = v80 ^ v36;
        v85 = v77 ^ v37;
        sub_13C7E0((int *)&v84, a4, 0);
        v38 = v84 ^ v75 ^ v35;
        v39 = v32 ^ v85 ^ v76;
        v40 = v39 >> 8;
        v41 = HIWORD(v39);
        *(v34 - 15) = (unsigned __int16)(v84 ^ v75 ^ v35) >> 8;
        v42 = HIBYTE(v39);
        *(v34 - 12) = v39;
        *(v34 - 16) = v38;
        v35 = v36;
        *(v34 - 14) = BYTE2(v38);
        v32 = v37;
        *(v34 - 13) = HIBYTE(v38);
        *(v34 - 11) = v40;
        *(v34 - 10) = v41;
        *(v34 - 9) = v42;
      }
      while ( v30 > 0 );
      v11 = v80;
      v43 = (unsigned int)(a3 - 9) >> 3;
      v44 = v43 + 1;
      v30 = a3 - 16 - 8 * v43;
      v44 *= 8;
      v78 += v44;
      v45 = (unsigned int *)((char *)v82 + v44);
    }
    v32 = v45[1];
    v81 = *v45;
    v84 = v11 ^ *v45;
    v85 = v77 ^ v32;
    sub_13C7E0((int *)&v84, a4, 0);
    v46 = &v78[v30 + 8];
    v47 = v75 ^ v84 ^ v36;
    v48 = v76 ^ v85 ^ v37;
    v31 = v81;
    switch ( v30 )
    {
      case -7:
        v51 = &v78[v30 + 8];
        goto LABEL_20;
      case -6:
        goto LABEL_19;
      case -5:
        v50 = &v78[v30 + 8];
        goto LABEL_18;
      case -4:
        goto LABEL_17;
      case -3:
        v49 = &v78[v30 + 8];
        goto LABEL_16;
      case -2:
        goto LABEL_15;
      case -1:
        goto LABEL_14;
      case 0:
        *--v46 = HIBYTE(v48);
LABEL_14:
        *--v46 = BYTE2(v48);
LABEL_15:
        v49 = v46 - 1;
        *(v46 - 1) = BYTE1(v48);
LABEL_16:
        v46 = v49 - 1;
        *(v49 - 1) = v48;
LABEL_17:
        v50 = v46 - 1;
        *(v46 - 1) = HIBYTE(v47);
LABEL_18:
        v46 = v50 - 1;
        *(v50 - 1) = BYTE2(v47);
LABEL_19:
        v51 = v46 - 1;
        *(v46 - 1) = BYTE1(v47);
LABEL_20:
        *(v51 - 1) = v47;
        break;
      default:
        goto LABEL_21;
    }
    goto LABEL_21;
  }
  v12 = a3 - 8;
  v13 = a3 - 8;
  v14 = *(_DWORD *)a5;
  v15 = *(_DWORD *)(a5 + 4);
  if ( a3 - 8 >= 0 )
  {
    v16 = a2 + 8;
    v17 = a6[1];
    v18 = a7[1];
    v19 = *(_DWORD *)(a5 + 4);
    v79 = a3 - 8;
    do
    {
      v20 = *v8;
      v8 += 2;
      v16 += 8;
      v21 = v17 ^ *(v8 - 1);
      v84 = v20 ^ v75 ^ v14;
      v85 = v21 ^ v19;
      sub_13C7E0((int *)&v84, a4, 1);
      v12 -= 8;
      v14 = v11 ^ v84;
      v22 = (unsigned __int16)(v11 ^ v84) >> 8;
      v23 = (v11 ^ v84) >> 16;
      v24 = (v11 ^ v84) >> 24;
      *(v16 - 16) = v11 ^ v84;
      *(v16 - 15) = v22;
      *(v16 - 14) = v23;
      *(v16 - 13) = v24;
      v19 = v18 ^ v85;
      v25 = (v18 ^ (unsigned int)v85) >> 8;
      v26 = (v18 ^ (unsigned int)v85) >> 16;
      v27 = (v18 ^ (unsigned int)v85) >> 24;
      *(v16 - 12) = v18 ^ v85;
      *(v16 - 11) = v25;
      *(v16 - 10) = v26;
      *(v16 - 9) = v27;
    }
    while ( v12 >= 0 );
    v15 = v19;
    v13 = a3 - 16 - 8 * (v79 >> 3);
    v28 = 8 * ((v79 >> 3) + 1);
    v82 = (int *)((char *)v82 + v28);
    v78 += v28;
  }
  if ( v13 == -8 )
  {
    v53 = v14;
    v54 = BYTE1(v14);
    v55 = BYTE2(v14);
    v56 = v15;
    result = BYTE1(v15);
    v57 = HIBYTE(v14);
    v58 = BYTE2(v15);
    v59 = HIBYTE(v15);
  }
  else
  {
    v29 = (int)v82 + v13 + 8;
    switch ( v13 )
    {
      case -7:
        v65 = 0;
        v71 = 0;
        goto LABEL_30;
      case -6:
        v65 = 0;
        v69 = 0;
        goto LABEL_29;
      case -5:
        v65 = 0;
        v67 = 0;
        goto LABEL_28;
      case -4:
        v65 = 0;
        goto LABEL_27;
      case -3:
        v63 = 0;
        goto LABEL_26;
      case -2:
        v61 = 0;
        goto LABEL_25;
      case -1:
        v60 = *(unsigned __int8 *)--v29;
        v61 = v60 << 16;
LABEL_25:
        v62 = *(unsigned __int8 *)--v29;
        v63 = v61 | (v62 << 8);
LABEL_26:
        v64 = *(unsigned __int8 *)--v29;
        v65 = v63 | v64;
LABEL_27:
        v66 = *(unsigned __int8 *)--v29;
        v67 = v66 << 24;
LABEL_28:
        v68 = *(unsigned __int8 *)--v29;
        v69 = v67 | (v68 << 16);
LABEL_29:
        v70 = *(unsigned __int8 *)--v29;
        v71 = v69 | (v70 << 8);
LABEL_30:
        v72 = v71 | *(unsigned __int8 *)(v29 - 1);
        break;
      default:
        v65 = 0;
        v72 = 0;
        break;
    }
    v84 = v72 ^ v75 ^ v14;
    v85 = v76 ^ v15 ^ v65;
    sub_13C7E0((int *)&v84, a4, 1);
    v73 = v11 ^ v84;
    v53 = v73;
    v57 = HIBYTE(v73);
    v54 = BYTE1(v73);
    v74 = BYTE2(v77) ^ BYTE2(v85);
    v56 = v77 ^ v85;
    v59 = (v77 ^ (unsigned int)v85) >> 24;
    result = (unsigned __int8)((unsigned __int16)(v77 ^ v85) >> 8);
    v55 = BYTE2(v73);
    *v78 = v53;
    v58 = v74;
    v78[3] = v57;
    v78[1] = BYTE1(v73);
    v78[2] = BYTE2(v73);
    v78[4] = v56;
    v78[7] = v59;
    v78[5] = result;
    v78[6] = v74;
  }
  *(_BYTE *)a5 = v53;
  *(_BYTE *)(a5 + 1) = v54;
  *(_BYTE *)(a5 + 2) = v55;
  *(_BYTE *)(a5 + 3) = v57;
  *(_BYTE *)(a5 + 4) = v56;
  *(_BYTE *)(a5 + 5) = result;
  *(_BYTE *)(a5 + 6) = v58;
  *(_BYTE *)(a5 + 7) = v59;
  return result;
}
