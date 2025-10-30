int __fastcall sub_30A6EC(int result, int a2, int a3)
{
  int v3; // r6
  int v4; // r7
  int v5; // r12
  int v6; // r2
  int v7; // r11
  _WORD *v8; // r1
  int v9; // r8
  int v10; // lr
  int v11; // r2
  int v12; // r5
  int v13; // r5
  int v14; // r12
  int v15; // r7
  bool v16; // cc
  __int16 v17; // r3
  int v18; // lr
  int v19; // r7
  int v20; // r7
  int v21; // r9
  int v22; // r5
  int v23; // r9
  char v24; // r3
  int v25; // r3
  int v26; // r12
  int v27; // r3
  int v28; // r2
  int v29; // r7
  int v30; // lr
  int v31; // r12
  int v32; // r10
  int v33; // r12
  int v34; // r8
  char v35; // r3
  int v36; // r12
  char v37; // r3
  int v38; // r8
  int v39; // r7
  __int16 v40; // r3
  __int16 v41; // lr
  int v42; // r9
  int v43; // r12
  int v44; // r7
  int v45; // lr
  int v46; // r7
  char v47; // r3
  int v48; // lr
  int v49; // r12
  unsigned __int16 v50; // r2
  int v51; // r3
  int v52; // r7
  int v53; // lr
  int v54; // r12
  int v55; // lr
  int v56; // r3
  int v57; // r9
  int v58; // r7
  __int16 v59; // r3
  int v60; // r7
  int v61; // lr
  int v62; // r3
  int v63; // r2
  int v64; // r12
  int v65; // lr
  int v66; // r12
  int v67; // lr
  int v68; // r3
  int v69; // r9
  int v70; // r7
  __int16 v71; // r3
  int v72; // r7
  int v73; // lr
  int v74; // r3
  int v75; // r2
  int v76; // r12
  int v77; // lr
  int v78; // r12
  int v79; // lr
  int v80; // r3
  int v81; // r12
  int v82; // r10
  int v83; // r12
  int v84; // r10
  int v85; // r3
  int v86; // r12
  int v87; // r12
  int v88; // r10
  int v89; // r12
  int v90; // r10
  int v91; // r3
  int v92; // r12
  int v93; // [sp+4h] [bp-18h]
  int v94; // [sp+8h] [bp-14h]

  v3 = *(unsigned __int16 *)(a2 + 2);
  if ( *(_WORD *)(a2 + 2) )
    v4 = 4;
  else
    v4 = 3;
  if ( *(_WORD *)(a2 + 2) )
    v5 = 7;
  else
    v5 = 138;
  if ( a3 >= 0 )
  {
    v6 = a2 + 4 * a3;
    v7 = a2;
    v8 = (_WORD *)(result + 5816);
    v9 = 0;
    v10 = -1;
    v93 = v6 + 4;
    while ( 1 )
    {
      v11 = v9 + 1;
      v12 = *(unsigned __int16 *)(v7 + 6);
      if ( v9 + 1 >= v5 )
        goto LABEL_25;
      if ( v12 != v3 )
        break;
      ++v9;
LABEL_23:
      v7 += 4;
      v3 = v12;
      if ( v93 == v7 )
        return result;
    }
    if ( v11 < v4 )
    {
      v94 = *(unsigned __int16 *)(v7 + 6);
      do
      {
        v13 = *(_DWORD *)(result + 5820);
        v14 = *(unsigned __int16 *)(result + 4 * v3 + 2684);
        v15 = *(unsigned __int16 *)(result + 4 * v3 + 2686);
        v16 = v13 <= 16 - v15;
        v17 = *v8 | ((_WORD)v14 << v13);
        v18 = v15 - 16;
        v19 = v13 + v15;
        if ( v16 )
        {
          *v8 = v17;
          *(_DWORD *)(result + 5820) = v19;
        }
        else
        {
          v20 = *(_DWORD *)(result + 20);
          v21 = *(_DWORD *)(result + 8);
          *v8 = v17;
          *(_DWORD *)(result + 20) = v20 + 1;
          *(_BYTE *)(v21 + v20) = v17;
          v22 = *(_DWORD *)(result + 20);
          v23 = *(_DWORD *)(result + 8);
          v24 = HIBYTE(*v8);
          *(_DWORD *)(result + 20) = v22 + 1;
          *(_BYTE *)(v23 + v22) = v24;
          v25 = *(_DWORD *)(result + 5820);
          *v8 = v14 >> (16 - v25);
          *(_DWORD *)(result + 5820) = v18 + v25;
        }
        --v11;
      }
      while ( v11 );
      v12 = v94;
      goto LABEL_19;
    }
LABEL_25:
    v26 = *(_DWORD *)(result + 5820);
    LOWORD(v27) = *v8;
    if ( v3 )
    {
      if ( v3 != v10 )
      {
        v28 = result + 4 * v3;
        v29 = *(unsigned __int16 *)(v28 + 2684);
        v30 = *(unsigned __int16 *)(v28 + 2686);
        LOWORD(v27) = v27 | ((_WORD)v29 << v26);
        if ( 16 - v30 >= v26 )
        {
          v26 += v30;
          *v8 = v27;
          LOWORD(v11) = v9;
        }
        else
        {
          v31 = *(_DWORD *)(result + 20);
          LOWORD(v11) = v9;
          v32 = *(_DWORD *)(result + 8);
          *v8 = v27;
          *(_DWORD *)(result + 20) = v31 + 1;
          *(_BYTE *)(v32 + v31) = v27;
          v33 = *(_DWORD *)(result + 20);
          v34 = *(_DWORD *)(result + 8);
          v35 = HIBYTE(*v8);
          *(_DWORD *)(result + 20) = v33 + 1;
          *(_BYTE *)(v34 + v33) = v35;
          v36 = *(_DWORD *)(result + 5820);
          v37 = 16 - v36;
          v26 = v30 - 16 + v36;
          v27 = v29 >> v37;
          *v8 = v27;
        }
        *(_DWORD *)(result + 5820) = v26;
      }
      v38 = *(unsigned __int16 *)(result + 2748);
      v39 = *(unsigned __int16 *)(result + 2750);
      v40 = v27 | ((_WORD)v38 << v26);
      v41 = v40;
      if ( 16 - v39 >= v26 )
      {
        v49 = v39 + v26;
      }
      else
      {
        v42 = *(_DWORD *)(result + 20);
        v43 = v39 - 16;
        v44 = *(_DWORD *)(result + 8);
        *v8 = v40;
        *(_DWORD *)(result + 20) = v42 + 1;
        *(_BYTE *)(v44 + v42) = v40;
        v45 = *(_DWORD *)(result + 20);
        v46 = *(_DWORD *)(result + 8);
        v47 = HIBYTE(*v8);
        *(_DWORD *)(result + 20) = v45 + 1;
        *(_BYTE *)(v46 + v45) = v47;
        v48 = *(_DWORD *)(result + 5820);
        v49 = v43 + v48;
        v41 = v38 >> (16 - v48);
      }
      *v8 = v41;
      *(_DWORD *)(result + 5820) = v49;
      v50 = v11 - 3;
      if ( v49 > 14 )
      {
        v51 = *(_DWORD *)(result + 20);
        v52 = *(_DWORD *)(result + 8);
        v53 = v41 | (v50 << v49);
        *v8 = v53;
        *(_DWORD *)(result + 20) = v51 + 1;
        *(_BYTE *)(v52 + v51) = v53;
        v54 = *(_DWORD *)(result + 20);
        v55 = *(_DWORD *)(result + 8);
        LOBYTE(v51) = HIBYTE(*v8);
        *(_DWORD *)(result + 20) = v54 + 1;
        *(_BYTE *)(v55 + v54) = v51;
        v56 = *(_DWORD *)(result + 5820);
        *v8 = (int)v50 >> (16 - v56);
        *(_DWORD *)(result + 5820) = v56 - 14;
        if ( v12 )
        {
LABEL_20:
          if ( v12 == v3 )
          {
            v10 = v12;
            v4 = 3;
            v5 = 6;
          }
          else
          {
            v10 = v3;
            v4 = 4;
            v5 = 7;
          }
          v9 = 0;
          goto LABEL_23;
        }
        goto LABEL_34;
      }
      *v8 = v41 | (v50 << v49);
      *(_DWORD *)(result + 5820) = v49 + 2;
LABEL_19:
      if ( v12 )
        goto LABEL_20;
LABEL_34:
      v10 = v3;
      v9 = v12;
      v4 = 3;
      v5 = 138;
      goto LABEL_23;
    }
    if ( v11 <= 10 )
    {
      v57 = *(unsigned __int16 *)(result + 2752);
      v58 = *(unsigned __int16 *)(result + 2754);
      v59 = v27 | ((_WORD)v57 << v26);
      if ( 16 - v58 < v26 )
      {
        v87 = *(_DWORD *)(result + 20);
        v88 = *(_DWORD *)(result + 8);
        *v8 = v59;
        *(_DWORD *)(result + 20) = v87 + 1;
        *(_BYTE *)(v88 + v87) = v59;
        v89 = *(_DWORD *)(result + 20);
        v90 = *(_DWORD *)(result + 8);
        v91 = HIBYTE(*v8);
        *(_DWORD *)(result + 20) = v89 + 1;
        *(_BYTE *)(v90 + v89) = v91;
        v92 = *(_DWORD *)(result + 5820);
        v60 = v58 - 16 + v92;
        v61 = v57 >> (16 - v92);
        *v8 = v61;
        v61 = (__int16)v61;
        *(_DWORD *)(result + 5820) = v60;
        if ( v60 > 13 )
          goto LABEL_38;
      }
      else
      {
        v60 = v58 + v26;
        *v8 = v59;
        *(_DWORD *)(result + 5820) = v60;
        v61 = v59;
        if ( v60 > 13 )
        {
LABEL_38:
          v62 = *(_DWORD *)(result + 20);
          v63 = (unsigned __int16)(v9 - 2);
          v64 = *(_DWORD *)(result + 8);
          v65 = v61 | (v63 << v60);
          *v8 = v65;
          *(_DWORD *)(result + 20) = v62 + 1;
          *(_BYTE *)(v64 + v62) = v65;
          v66 = *(_DWORD *)(result + 20);
          v67 = *(_DWORD *)(result + 8);
          LOBYTE(v62) = HIBYTE(*v8);
          *(_DWORD *)(result + 20) = v66 + 1;
          *(_BYTE *)(v67 + v66) = v62;
          v68 = *(_DWORD *)(result + 5820);
          *v8 = v63 >> (16 - v68);
          *(_DWORD *)(result + 5820) = v68 - 13;
          goto LABEL_19;
        }
      }
      *v8 = v61 | (((_WORD)v9 - 2) << v60);
      *(_DWORD *)(result + 5820) = v60 + 3;
      goto LABEL_19;
    }
    v69 = *(unsigned __int16 *)(result + 2756);
    v70 = *(unsigned __int16 *)(result + 2758);
    v71 = v27 | ((_WORD)v69 << v26);
    if ( 16 - v70 < v26 )
    {
      v81 = *(_DWORD *)(result + 20);
      v82 = *(_DWORD *)(result + 8);
      *v8 = v71;
      *(_DWORD *)(result + 20) = v81 + 1;
      *(_BYTE *)(v82 + v81) = v71;
      v83 = *(_DWORD *)(result + 20);
      v84 = *(_DWORD *)(result + 8);
      v85 = HIBYTE(*v8);
      *(_DWORD *)(result + 20) = v83 + 1;
      *(_BYTE *)(v84 + v83) = v85;
      v86 = *(_DWORD *)(result + 5820);
      v72 = v70 - 16 + v86;
      v73 = v69 >> (16 - v86);
      *v8 = v73;
      v73 = (__int16)v73;
      *(_DWORD *)(result + 5820) = v72;
      if ( v72 > 9 )
        goto LABEL_44;
    }
    else
    {
      v72 = v70 + v26;
      *v8 = v71;
      *(_DWORD *)(result + 5820) = v72;
      v73 = v71;
      if ( v72 > 9 )
      {
LABEL_44:
        v74 = *(_DWORD *)(result + 20);
        v75 = (unsigned __int16)(v9 - 10);
        v76 = *(_DWORD *)(result + 8);
        v77 = v73 | (v75 << v72);
        *v8 = v77;
        *(_DWORD *)(result + 20) = v74 + 1;
        *(_BYTE *)(v76 + v74) = v77;
        v78 = *(_DWORD *)(result + 20);
        v79 = *(_DWORD *)(result + 8);
        LOBYTE(v74) = HIBYTE(*v8);
        *(_DWORD *)(result + 20) = v78 + 1;
        *(_BYTE *)(v79 + v78) = v74;
        v80 = *(_DWORD *)(result + 5820);
        *v8 = v75 >> (16 - v80);
        *(_DWORD *)(result + 5820) = v80 - 9;
        goto LABEL_19;
      }
    }
    *v8 = v73 | (((_WORD)v9 - 10) << v72);
    *(_DWORD *)(result + 5820) = v72 + 7;
    goto LABEL_19;
  }
  return result;
}
