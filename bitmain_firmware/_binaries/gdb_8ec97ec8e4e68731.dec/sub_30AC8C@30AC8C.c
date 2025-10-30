int __fastcall sub_30AC8C(int result, int a2, int a3)
{
  __int16 v3; // r2
  int v4; // r10
  int v5; // lr
  _WORD *v6; // r7
  unsigned int v7; // r12
  int v8; // r12
  int v9; // r4
  int v10; // r5
  int v11; // r3
  int v12; // r12
  int v13; // r2
  int v14; // lr
  int v15; // r3
  int v16; // r10
  __int16 v17; // r3
  unsigned int v18; // r9
  int v19; // lr
  int v20; // r12
  int v21; // r4
  int v22; // r8
  int v23; // r5
  __int16 v24; // r3
  int v25; // r2
  int v26; // r10
  int v27; // r5
  int v28; // r5
  char v29; // r3
  int v30; // r10
  int v31; // r5
  int v32; // r10
  int v33; // r12
  int v34; // r4
  int v35; // r5
  int v36; // r2
  int v37; // r5
  int v38; // r3
  int v39; // r5
  unsigned int v40; // r8
  int v41; // r12
  int v42; // r12
  int v43; // r3
  int v44; // r10
  __int16 v45; // r4
  int v46; // lr
  int v47; // r5
  int v48; // lr
  int v49; // r5
  char v50; // r2
  int v51; // r5
  char *v52; // r12
  int v53; // r8
  int v54; // r3
  int v55; // r12
  int v56; // r2
  int v57; // lr
  int v58; // r10
  unsigned int v59; // r3
  unsigned __int16 *v60; // r1
  int v61; // r3
  int v62; // r12
  __int16 v63; // lr
  int v64; // r4
  int v65; // r5
  int v66; // lr
  int v67; // r4
  char v68; // r2
  int v69; // r2
  int v71; // [sp+Ch] [bp-8h]

  v3 = *(_WORD *)(result + 5816);
  v4 = *(_DWORD *)(result + 5820);
  if ( *(_DWORD *)(result + 5792) )
  {
    v6 = (_WORD *)(result + 5816);
    v7 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v17 = v3;
        v18 = v7 + 1;
        v19 = *(unsigned __int16 *)(*(_DWORD *)(result + 5796) + 2 * v7);
        v20 = *(unsigned __int8 *)(*(_DWORD *)(result + 5784) + v7);
        if ( v19 )
          break;
        v8 = 4 * v20;
        v9 = *(unsigned __int16 *)(a2 + v8);
        v10 = *(unsigned __int16 *)(a2 + v8 + 2);
        LOWORD(v5) = v3 | ((_WORD)v9 << v4);
        v3 = v5;
        if ( 16 - v10 >= v4 )
          goto LABEL_24;
        v11 = *(_DWORD *)(result + 20);
        v12 = *(_DWORD *)(result + 8);
        *v6 = v5;
        *(_DWORD *)(result + 20) = v11 + 1;
        *(_BYTE *)(v12 + v11) = v5;
        v13 = *(_DWORD *)(result + 20);
        v14 = *(_DWORD *)(result + 8);
        v15 = HIBYTE(*v6);
        *(_DWORD *)(result + 20) = v13 + 1;
        *(_BYTE *)(v14 + v13) = v15;
        v16 = *(_DWORD *)(result + 5820);
        LOBYTE(v14) = 16 - v16;
        v4 = v10 - 16 + v16;
        v5 = v9 >> v14;
        v3 = v5;
        *v6 = v5;
        *(_DWORD *)(result + 5820) = v4;
LABEL_6:
        v7 = v18;
        if ( *(_DWORD *)(result + 5792) <= v18 )
          goto LABEL_22;
      }
      v21 = length_code[v20];
      v25 = 4 * (v21 + 257);
      v22 = *(unsigned __int16 *)(a2 + v25);
      v23 = *(unsigned __int16 *)(a2 + v25 + 2);
      v24 = v17 | ((_WORD)v22 << v4);
      LOWORD(v25) = v24;
      if ( 16 - v23 >= v4 )
      {
        v31 = v23 + v4;
        *v6 = v24;
        *(_DWORD *)(result + 5820) = v31;
      }
      else
      {
        v26 = *(_DWORD *)(result + 20);
        v71 = v23 - 16;
        v27 = *(_DWORD *)(result + 8);
        *v6 = v24;
        *(_DWORD *)(result + 20) = v26 + 1;
        *(_BYTE *)(v27 + v26) = v24;
        v25 = *(_DWORD *)(result + 20);
        v28 = *(_DWORD *)(result + 8);
        v29 = HIBYTE(*v6);
        *(_DWORD *)(result + 20) = v25 + 1;
        *(_BYTE *)(v28 + v25) = v29;
        v30 = *(_DWORD *)(result + 5820);
        v31 = v71 + v30;
        LOWORD(v25) = v22 >> (16 - v30);
        *v6 = v25;
        *(_DWORD *)(result + 5820) = v71 + v30;
      }
      v32 = dword_42FEA0[v21];
      if ( v32 )
      {
        v33 = (unsigned __int16)(v20 - dword_42FEA0[v21 + 29]);
        LOWORD(v25) = v25 | ((_WORD)v33 << v31);
        if ( 16 - v32 >= v31 )
        {
          v31 += v32;
        }
        else
        {
          v34 = *(_DWORD *)(result + 20);
          v35 = *(_DWORD *)(result + 8);
          *v6 = v25;
          *(_DWORD *)(result + 20) = v34 + 1;
          *(_BYTE *)(v35 + v34) = v25;
          v36 = *(_DWORD *)(result + 20);
          v37 = *(_DWORD *)(result + 8);
          v38 = HIBYTE(*v6);
          *(_DWORD *)(result + 20) = v36 + 1;
          *(_BYTE *)(v37 + v36) = v38;
          v39 = *(_DWORD *)(result + 5820);
          LOBYTE(v36) = 16 - v39;
          v31 = v32 - 16 + v39;
          v25 = v33 >> v36;
        }
        *v6 = v25;
        *(_DWORD *)(result + 5820) = v31;
      }
      v40 = v19 - 1;
      if ( (unsigned int)(v19 - 1) > 0xFF )
        v41 = (unsigned __int8)dist_code[(v40 >> 7) + 256];
      else
        v41 = (unsigned __int8)dist_code[v40];
      v42 = 4 * v41;
      v43 = *(unsigned __int16 *)(a3 + v42);
      v44 = *(unsigned __int16 *)(a3 + v42 + 2);
      v45 = v25 | ((_WORD)v43 << v31);
      v3 = v45;
      if ( 16 - v44 >= v31 )
      {
        v4 = v44 + v31;
      }
      else
      {
        v46 = *(_DWORD *)(result + 20);
        v47 = *(_DWORD *)(result + 8);
        *v6 = v45;
        *(_DWORD *)(result + 20) = v46 + 1;
        *(_BYTE *)(v47 + v46) = v45;
        v48 = *(_DWORD *)(result + 20);
        v49 = *(_DWORD *)(result + 8);
        v50 = HIBYTE(*v6);
        *(_DWORD *)(result + 20) = v48 + 1;
        *(_BYTE *)(v49 + v48) = v50;
        v51 = *(_DWORD *)(result + 5820);
        v4 = v44 - 16 + v51;
        v3 = v43 >> (16 - v51);
      }
      *v6 = v3;
      *(_DWORD *)(result + 5820) = v4;
      LOWORD(v5) = v3;
      v52 = (char *)&dword_42FEA0[v42 / 4u];
      v10 = *((_DWORD *)v52 + 58);
      if ( !v10 )
        goto LABEL_6;
      v53 = (unsigned __int16)(v40 - *((_DWORD *)v52 + 88));
      LOWORD(v5) = v3 | ((_WORD)v53 << v4);
      v3 = v5;
      if ( 16 - v10 >= v4 )
      {
LABEL_24:
        v4 += v10;
        *v6 = v3;
        *(_DWORD *)(result + 5820) = v4;
        goto LABEL_6;
      }
      v54 = *(_DWORD *)(result + 20);
      v55 = *(_DWORD *)(result + 8);
      *v6 = v5;
      *(_DWORD *)(result + 20) = v54 + 1;
      *(_BYTE *)(v55 + v54) = v5;
      v56 = *(_DWORD *)(result + 20);
      v57 = *(_DWORD *)(result + 8);
      LOBYTE(v54) = HIBYTE(*v6);
      *(_DWORD *)(result + 20) = v56 + 1;
      v7 = v18;
      *(_BYTE *)(v57 + v56) = v54;
      v58 = *(_DWORD *)(result + 5820);
      v59 = *(_DWORD *)(result + 5792);
      LOBYTE(v57) = 16 - v58;
      v4 = v10 - 16 + v58;
      v5 = v53 >> v57;
      v3 = v5;
      *v6 = v5;
      *(_DWORD *)(result + 5820) = v4;
      if ( v59 <= v18 )
        goto LABEL_22;
    }
  }
  LOWORD(v5) = *(_WORD *)(result + 5816);
LABEL_22:
  v60 = (unsigned __int16 *)(a2 + 1024);
  v61 = *v60;
  v62 = v60[1];
  v63 = v5 | ((_WORD)v61 << v4);
  if ( 16 - v62 < v4 )
  {
    v64 = *(_DWORD *)(result + 20);
    v65 = *(_DWORD *)(result + 8);
    *(_WORD *)(result + 5816) = v63;
    *(_DWORD *)(result + 20) = v64 + 1;
    *(_BYTE *)(v65 + v64) = v63;
    v66 = *(_DWORD *)(result + 20);
    v67 = *(_DWORD *)(result + 8);
    v68 = HIBYTE(*(_WORD *)(result + 5816));
    *(_DWORD *)(result + 20) = v66 + 1;
    *(_BYTE *)(v67 + v66) = v68;
    v69 = *(_DWORD *)(result + 5820);
    *(_DWORD *)(result + 5820) = v62 - 16 + v69;
    *(_WORD *)(result + 5816) = v61 >> (16 - v69);
    return 16 - v69;
  }
  else
  {
    *(_DWORD *)(result + 5820) = v62 + v4;
    *(_WORD *)(result + 5816) = v63;
  }
  return result;
}
