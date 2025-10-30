int __fastcall sub_451C0(unsigned __int16 *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r12
  unsigned __int16 *v4; // r4
  int v5; // r3
  int v6; // lr
  int v7; // r6
  int v8; // r5
  int v9; // r3
  int v10; // lr
  int v11; // r2
  int v12; // r3
  int v13; // r5
  int v14; // r2
  int v15; // r12
  int v16; // r2
  int v17; // lr
  int v18; // r3
  int v19; // r2
  int v20; // r2
  int v21; // r3
  unsigned __int16 *v22; // r4
  int v23; // r6
  int v24; // r5
  int v25; // r7
  int v26; // r2
  int v27; // r3
  int v28; // r12
  int v29; // lr
  int v30; // r2
  int v31; // lr
  int v32; // r3
  int v33; // r12
  int v34; // r2
  int v35; // r5
  int v36; // r2
  int v37; // r3
  int v38; // r2
  unsigned __int16 *v39; // r4
  int v40; // r6
  int v41; // r2
  int v42; // r7
  int v43; // r8
  int v44; // r3
  int v45; // r12
  int v46; // lr
  int v47; // r2
  int v48; // lr
  int v49; // r3
  int v50; // r12
  int v51; // r2
  int v52; // r5
  int v53; // r2
  int v54; // r3
  int v55; // r2
  int v56; // r12
  int v57; // r3
  int v58; // r12
  int v59; // lr
  int v60; // r3
  int v61; // r12
  int v62; // r12
  int v64; // r4

  v3 = a3 - 559038737 + a2;
  if ( ((unsigned __int8)a1 & 3) == 0 )
  {
    if ( a2 <= 0xC )
    {
      v5 = a3 - 559038737 + a2;
      v6 = v5;
    }
    else
    {
      v4 = a1 + 6;
      v5 = a3 - 559038737 + a2;
      v6 = v5;
      do
      {
        a2 -= 12;
        v7 = *((_DWORD *)v4 - 3);
        v8 = *((_DWORD *)v4 - 2);
        a1 = v4;
        v9 = v5 + *((_DWORD *)v4 - 1);
        v4 += 6;
        v10 = v6 + v8;
        v11 = (v7 - v9 + v3) ^ __ROR4__(v9, 28);
        v12 = v10 + v9;
        v13 = v11 + v12;
        v14 = (v10 - v11) ^ __ROR4__(v11, 26);
        v15 = v14 + v13;
        v16 = (v12 - v14) ^ __ROR4__(v14, 24);
        v17 = v16 + v15;
        v18 = (v13 - v16) ^ __ROR4__(v16, 16);
        v19 = v15 - v18;
        v3 = v18 + v17;
        v20 = v19 ^ __ROR4__(v18, 13);
        v21 = v17 - v20;
        v6 = v20 + v3;
        v5 = v21 ^ __ROR4__(v20, 28);
      }
      while ( a2 > 0xC );
    }
    switch ( a2 )
    {
      case 1u:
        goto LABEL_27;
      case 2u:
        goto LABEL_32;
      case 3u:
        v56 = (*(_DWORD *)a1 & 0xFFFFFF) + v3;
        goto LABEL_28;
      case 4u:
        v56 = v3 + *(_DWORD *)a1;
        goto LABEL_28;
      case 5u:
        v6 += *((unsigned __int8 *)a1 + 4);
        v56 = v3 + *(_DWORD *)a1;
        goto LABEL_28;
      case 6u:
        v6 += a1[2];
        v56 = v3 + *(_DWORD *)a1;
        goto LABEL_28;
      case 7u:
        v56 = v3 + *(_DWORD *)a1;
        v6 += *((_DWORD *)a1 + 1) & 0xFFFFFF;
        goto LABEL_28;
      case 8u:
        v6 += *((_DWORD *)a1 + 1);
        v56 = v3 + *(_DWORD *)a1;
        goto LABEL_28;
      case 9u:
        v64 = *((unsigned __int8 *)a1 + 8);
        goto LABEL_35;
      case 0xAu:
        v64 = a1[4];
        goto LABEL_35;
      case 0xBu:
        v5 += *((_DWORD *)a1 + 2) & 0xFFFFFF;
        v6 += *((_DWORD *)a1 + 1);
        v56 = v3 + *(_DWORD *)a1;
        goto LABEL_28;
      case 0xCu:
        v64 = *((_DWORD *)a1 + 2);
LABEL_35:
        v5 += v64;
        v6 += *((_DWORD *)a1 + 1);
        v56 = v3 + *(_DWORD *)a1;
        goto LABEL_28;
      default:
        return v5;
    }
  }
  if ( ((unsigned __int8)a1 & 1) == 0 )
  {
    if ( a2 <= 0xC )
    {
      v5 = a3 - 559038737 + a2;
      v6 = v5;
    }
    else
    {
      v22 = a1 + 6;
      v5 = a3 - 559038737 + a2;
      v6 = v5;
      do
      {
        v23 = *(v22 - 1);
        a2 -= 12;
        v24 = *(v22 - 2);
        v25 = *(v22 - 5);
        a1 = v22;
        v26 = *(v22 - 6);
        v22 += 6;
        v27 = v24 + (v23 << 16) + v5;
        v28 = (v26 + (v25 << 16) - v27 + v3) ^ __ROR4__(v27, 28);
        v29 = *(v22 - 10) + (*(v22 - 9) << 16) + v6;
        v30 = v29 - v28;
        v31 = v29 + v27;
        v32 = v30 ^ __ROR4__(v28, 26);
        v33 = v28 + v31;
        v34 = (v31 - v32) ^ __ROR4__(v32, 24);
        v35 = v34 + v32 + v33;
        v36 = (v33 - v34) ^ __ROR4__(v34, 16);
        v37 = v32 + v33 - v36;
        v3 = v36 + v35;
        v38 = v37 ^ __ROR4__(v36, 13);
        v6 = v38 + v3;
        v5 = (v35 - v38) ^ __ROR4__(v38, 28);
      }
      while ( a2 > 0xC );
    }
    switch ( a2 )
    {
      case 1u:
        goto LABEL_27;
      case 2u:
        goto LABEL_32;
      case 3u:
        v3 += *((unsigned __int8 *)a1 + 2) << 16;
LABEL_32:
        v56 = *a1 + v3;
        goto LABEL_28;
      case 4u:
        goto LABEL_50;
      case 5u:
        v6 += *((unsigned __int8 *)a1 + 4);
LABEL_50:
        v56 = *a1 + v3 + (a1[1] << 16);
        goto LABEL_28;
      case 6u:
        goto LABEL_44;
      case 7u:
        v6 += *((unsigned __int8 *)a1 + 6) << 16;
LABEL_44:
        v56 = *a1 + v3 + (a1[1] << 16);
        v6 += a1[2];
        goto LABEL_28;
      case 8u:
        goto LABEL_46;
      case 9u:
        v5 += *((unsigned __int8 *)a1 + 8);
LABEL_46:
        v6 += a1[2] + (a1[3] << 16);
        v56 = *a1 + v3 + (a1[1] << 16);
        goto LABEL_28;
      case 0xAu:
        goto LABEL_48;
      case 0xBu:
        v5 += *((unsigned __int8 *)a1 + 10) << 16;
LABEL_48:
        v6 += a1[2] + (a1[3] << 16);
        v56 = *a1 + v3 + (a1[1] << 16);
        v5 += a1[4];
        goto LABEL_28;
      case 0xCu:
        v5 += a1[4] + (a1[5] << 16);
        v6 += a1[2] + (a1[3] << 16);
        v56 = *a1 + v3 + (a1[1] << 16);
        goto LABEL_28;
      default:
        return v5;
    }
  }
  if ( a2 > 0xC )
  {
    v39 = a1 + 6;
    v5 = a3 - 559038737 + a2;
    v6 = v5;
    do
    {
      v40 = *((unsigned __int8 *)v39 - 2);
      a2 -= 12;
      v41 = *((unsigned __int8 *)v39 - 10);
      v42 = *((unsigned __int8 *)v39 - 3);
      a1 = v39;
      v43 = *((unsigned __int8 *)v39 - 11);
      v39 += 6;
      v44 = (v40 << 16) + (v42 << 8) + *((unsigned __int8 *)v39 - 16) + (*((unsigned __int8 *)v39 - 13) << 24) + v5;
      v45 = ((v41 << 16)
           + (v43 << 8)
           + *((unsigned __int8 *)v39 - 24)
           + (*((unsigned __int8 *)v39 - 21) << 24)
           - v44
           + v3)
          ^ __ROR4__(v44, 28);
      v46 = (*((unsigned __int8 *)v39 - 18) << 16)
          + (*((unsigned __int8 *)v39 - 19) << 8)
          + *((unsigned __int8 *)v39 - 20)
          + (*((unsigned __int8 *)v39 - 17) << 24)
          + v6;
      v47 = v46 - v45;
      v48 = v46 + v44;
      v49 = v47 ^ __ROR4__(v45, 26);
      v50 = v45 + v48;
      v51 = (v48 - v49) ^ __ROR4__(v49, 24);
      v52 = v51 + v49 + v50;
      v53 = (v50 - v51) ^ __ROR4__(v51, 16);
      v54 = v49 + v50 - v53;
      v3 = v53 + v52;
      v55 = v54 ^ __ROR4__(v53, 13);
      v6 = v55 + v3;
      v5 = (v52 - v55) ^ __ROR4__(v55, 28);
    }
    while ( a2 > 0xC );
  }
  else
  {
    v5 = a3 - 559038737 + a2;
    v6 = v5;
  }
  switch ( a2 )
  {
    case 1u:
      goto LABEL_27;
    case 2u:
      goto LABEL_26;
    case 3u:
      goto LABEL_25;
    case 4u:
      goto LABEL_24;
    case 5u:
      goto LABEL_23;
    case 6u:
      goto LABEL_22;
    case 7u:
      goto LABEL_21;
    case 8u:
      goto LABEL_20;
    case 9u:
      goto LABEL_19;
    case 0xAu:
      goto LABEL_18;
    case 0xBu:
      goto LABEL_17;
    case 0xCu:
      v5 += *((unsigned __int8 *)a1 + 11) << 24;
LABEL_17:
      v5 += *((unsigned __int8 *)a1 + 10) << 16;
LABEL_18:
      v5 += *((unsigned __int8 *)a1 + 9) << 8;
LABEL_19:
      v5 += *((unsigned __int8 *)a1 + 8);
LABEL_20:
      v6 += *((unsigned __int8 *)a1 + 7) << 24;
LABEL_21:
      v6 += *((unsigned __int8 *)a1 + 6) << 16;
LABEL_22:
      v6 += *((unsigned __int8 *)a1 + 5) << 8;
LABEL_23:
      v6 += *((unsigned __int8 *)a1 + 4);
LABEL_24:
      v3 += *((unsigned __int8 *)a1 + 3) << 24;
LABEL_25:
      v3 += *((unsigned __int8 *)a1 + 2) << 16;
LABEL_26:
      v3 += *((unsigned __int8 *)a1 + 1) << 8;
LABEL_27:
      v56 = *(unsigned __int8 *)a1 + v3;
LABEL_28:
      v57 = (v5 ^ v6) - __ROR4__(v6, 18);
      v58 = (v56 ^ v57) - __ROR4__(v57, 21);
      v59 = (v6 ^ v58) - __ROR4__(v58, 7);
      v60 = (v57 ^ v59) - __ROR4__(v59, 16);
      v61 = (v58 ^ v60) - __ROR4__(v60, 28);
      v62 = (v59 ^ v61) - __ROR4__(v61, 18);
      v5 = (v60 ^ v62) - __ROR4__(v62, 8);
      break;
    default:
      return v5;
  }
  return v5;
}
