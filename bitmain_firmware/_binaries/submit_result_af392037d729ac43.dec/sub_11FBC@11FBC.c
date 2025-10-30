int __fastcall sub_11FBC(unsigned __int16 *a1, unsigned int a2, int a3)
{
  unsigned __int16 *v3; // r3
  int v4; // r2
  int v5; // r4
  int i; // r7
  int v7; // r5
  int v8; // r0
  int v9; // t1
  int v10; // r2
  int v11; // r4
  int v12; // r0
  int v13; // r2
  int v14; // r6
  int v15; // r7
  int v16; // r5
  int v17; // r6
  int v18; // r4
  int v19; // r0
  int v20; // r0
  int j; // r6
  int v22; // r7
  int v23; // r3
  int v24; // r7
  int v25; // r4
  int v26; // r3
  int v27; // r7
  int v28; // r4
  int v30; // r9
  int v31; // r8
  int v32; // r12
  int v33; // r5
  int v34; // r6
  int v35; // t1
  int v36; // r2
  int v37; // r4
  int v38; // r0
  int v39; // r2
  int v40; // r6
  int v41; // r7
  int v42; // r5
  int v43; // r6
  int v44; // r4
  int v45; // r0
  int v46; // r0
  int v47; // r2
  int v48; // r7
  int v49; // r4
  int v50; // r2
  int v51; // r6
  int v52; // r7
  int v53; // r8
  int v54; // r5
  int v55; // r7
  int v56; // t2
  int v57; // r0
  int v58; // r0

  v3 = a1;
  v4 = a3 + a2 - 559038737;
  v5 = v4;
  if ( ((unsigned __int8)a1 & 3) == 0 )
  {
    for ( i = v4; a2 > 0xC; v4 = (v17 - v20) ^ __ROR4__(v20, 28) )
    {
      v7 = *((_DWORD *)v3 + 2);
      a2 -= 12;
      v8 = *((_DWORD *)v3 + 1);
      v9 = *(_DWORD *)v3;
      v3 += 6;
      v10 = v4 + v7;
      v11 = v5 + v8;
      v12 = v10 + v11;
      v13 = (i + v9 - v10) ^ __ROR4__(v10, 28);
      v14 = (v11 - v13) ^ __ROR4__(v13, 26);
      v15 = v14 + v13 + v12;
      v16 = (v12 - v14) ^ __ROR4__(v14, 24);
      v17 = v16 + v15;
      v18 = (v13 + v12 - v16) ^ __ROR4__(v16, 16);
      v19 = v15 - v18;
      i = v18 + v17;
      v20 = v19 ^ __ROR4__(v18, 13);
      v5 = v20 + v18 + v17;
    }
    switch ( a2 )
    {
      case 1u:
        goto LABEL_28;
      case 2u:
        goto LABEL_27;
      case 3u:
        v22 = (*(_DWORD *)v3 & 0xFFFFFF) + i;
        goto LABEL_17;
      case 4u:
        v22 = i + *(_DWORD *)v3;
        goto LABEL_17;
      case 5u:
        v5 += *((unsigned __int8 *)v3 + 4);
        v22 = i + *(_DWORD *)v3;
        goto LABEL_17;
      case 6u:
        v5 += v3[2];
        v22 = i + *(_DWORD *)v3;
        goto LABEL_17;
      case 7u:
        v5 += *((_DWORD *)v3 + 1) & 0xFFFFFF;
        v22 = i + *(_DWORD *)v3;
        goto LABEL_17;
      case 8u:
        v5 += *((_DWORD *)v3 + 1);
        v22 = i + *(_DWORD *)v3;
        goto LABEL_17;
      case 9u:
        v58 = *((unsigned __int8 *)v3 + 8);
        goto LABEL_30;
      case 0xAu:
        v58 = v3[4];
        goto LABEL_30;
      case 0xBu:
        v4 += *((_DWORD *)v3 + 2) & 0xFFFFFF;
        v5 += *((_DWORD *)v3 + 1);
        v22 = i + *(_DWORD *)v3;
        goto LABEL_17;
      case 0xCu:
        v58 = *((_DWORD *)v3 + 2);
LABEL_30:
        v4 += v58;
        v5 += *((_DWORD *)v3 + 1);
        v22 = i + *(_DWORD *)v3;
        goto LABEL_17;
      default:
        return v4;
    }
  }
  if ( ((unsigned __int8)a1 & 1) == 0 )
  {
    for ( i = v4; a2 > 0xC; v4 = (v43 - v46) ^ __ROR4__(v46, 28) )
    {
      v30 = v3[5];
      a2 -= 12;
      v31 = v3[4];
      v32 = v3[2];
      v33 = v3[3];
      v34 = v3[1];
      v35 = *v3;
      v3 += 6;
      v36 = v4 + v31 + (v30 << 16);
      v37 = v5 + v32 + (v33 << 16);
      v38 = v36 + v37;
      v39 = (i + v35 + (v34 << 16) - v36) ^ __ROR4__(v36, 28);
      v40 = (v37 - v39) ^ __ROR4__(v39, 26);
      v41 = v40 + v39 + v38;
      v42 = (v38 - v40) ^ __ROR4__(v40, 24);
      v43 = v42 + v41;
      v44 = (v39 + v38 - v42) ^ __ROR4__(v42, 16);
      v45 = v41 - v44;
      i = v44 + v43;
      v46 = v45 ^ __ROR4__(v44, 13);
      v5 = v46 + v44 + v43;
    }
    switch ( a2 )
    {
      case 1u:
LABEL_28:
        v22 = *(unsigned __int8 *)v3 + i;
        goto LABEL_17;
      case 2u:
        goto LABEL_27;
      case 3u:
        i += *((unsigned __int8 *)v3 + 2) << 16;
LABEL_27:
        v22 = i + *v3;
        goto LABEL_17;
      case 4u:
        goto LABEL_41;
      case 5u:
        v5 += *((unsigned __int8 *)v3 + 4);
LABEL_41:
        v22 = *v3 + i + (v3[1] << 16);
        goto LABEL_17;
      case 6u:
        goto LABEL_43;
      case 7u:
        v5 += *((unsigned __int8 *)v3 + 6) << 16;
LABEL_43:
        v22 = *v3 + i + (v3[1] << 16);
        v5 += v3[2];
        goto LABEL_17;
      case 8u:
        goto LABEL_45;
      case 9u:
        v4 += *((unsigned __int8 *)v3 + 8);
LABEL_45:
        v5 += v3[2] + (v3[3] << 16);
        v22 = *v3 + i + (v3[1] << 16);
        goto LABEL_17;
      case 0xAu:
        goto LABEL_47;
      case 0xBu:
        v4 += *((unsigned __int8 *)v3 + 10) << 16;
LABEL_47:
        v5 += v3[2] + (v3[3] << 16);
        v22 = *v3 + i + (v3[1] << 16);
        v4 += v3[4];
        goto LABEL_17;
      case 0xCu:
        v4 += v3[4] + (v3[5] << 16);
        v5 += v3[2] + (v3[3] << 16);
        v22 = *v3 + i + (v3[1] << 16);
        goto LABEL_17;
      default:
        return v4;
    }
  }
  for ( j = v4; a2 > 0xC; v4 = (v54 + v53 - v57) ^ __ROR4__(v57, 28) )
  {
    a2 -= 12;
    v47 = v4
        + (*((unsigned __int8 *)v3 + 10) << 16)
        + (*((unsigned __int8 *)v3 + 9) << 8)
        + *((unsigned __int8 *)v3 + 8)
        + (*((unsigned __int8 *)v3 + 11) << 24);
    v48 = ((*((unsigned __int8 *)v3 + 2) << 16)
         + (*((unsigned __int8 *)v3 + 1) << 8)
         + *(unsigned __int8 *)v3
         + (*((unsigned __int8 *)v3 + 3) << 24)
         - v47
         + j)
        ^ __ROR4__(v47, 28);
    v49 = v5
        + (*((unsigned __int8 *)v3 + 6) << 16)
        + (*((unsigned __int8 *)v3 + 5) << 8)
        + *((unsigned __int8 *)v3 + 4)
        + (*((unsigned __int8 *)v3 + 7) << 24);
    v3 += 6;
    v50 = v47 + v49;
    v51 = (v49 - v48) ^ __ROR4__(v48, 26);
    v52 = v48 + v50;
    v53 = v51 + v52;
    v54 = (v50 - v51) ^ __ROR4__(v51, 24);
    v55 = v52 - v54;
    v56 = __ROR4__(v54, 16);
    j = (v55 ^ v56) + v54 + v53;
    v57 = (v53 - (v55 ^ v56)) ^ __ROR4__(v55 ^ v56, 13);
    v5 = v57 + j;
  }
  switch ( a2 )
  {
    case 1u:
      goto LABEL_16;
    case 2u:
      goto LABEL_15;
    case 3u:
      goto LABEL_14;
    case 4u:
      goto LABEL_13;
    case 5u:
      goto LABEL_12;
    case 6u:
      goto LABEL_11;
    case 7u:
      goto LABEL_10;
    case 8u:
      goto LABEL_9;
    case 9u:
      goto LABEL_8;
    case 0xAu:
      goto LABEL_7;
    case 0xBu:
      goto LABEL_6;
    case 0xCu:
      v4 += *((unsigned __int8 *)v3 + 11) << 24;
LABEL_6:
      v4 += *((unsigned __int8 *)v3 + 10) << 16;
LABEL_7:
      v4 += *((unsigned __int8 *)v3 + 9) << 8;
LABEL_8:
      v4 += *((unsigned __int8 *)v3 + 8);
LABEL_9:
      v5 += *((unsigned __int8 *)v3 + 7) << 24;
LABEL_10:
      v5 += *((unsigned __int8 *)v3 + 6) << 16;
LABEL_11:
      v5 += *((unsigned __int8 *)v3 + 5) << 8;
LABEL_12:
      v5 += *((unsigned __int8 *)v3 + 4);
LABEL_13:
      j += *((unsigned __int8 *)v3 + 3) << 24;
LABEL_14:
      j += *((unsigned __int8 *)v3 + 2) << 16;
LABEL_15:
      j += *((unsigned __int8 *)v3 + 1) << 8;
LABEL_16:
      v22 = j + *(unsigned __int8 *)v3;
LABEL_17:
      v23 = (v4 ^ v5) - __ROR4__(v5, 18);
      v24 = (v22 ^ v23) - __ROR4__(v23, 21);
      v25 = (v5 ^ v24) - __ROR4__(v24, 7);
      v26 = (v23 ^ v25) - __ROR4__(v25, 16);
      v27 = (v24 ^ v26) - __ROR4__(v26, 28);
      v28 = (v25 ^ v27) - __ROR4__(v27, 18);
      v4 = (v28 ^ v26) - __ROR4__(v28, 8);
      break;
    default:
      return v4;
  }
  return v4;
}
