unsigned int __fastcall sub_50364(unsigned __int8 *a1, char *dest, int a3, int a4, int a5, int a6, int a7)
{
  unsigned int v7; // r6
  int v9; // r3
  unsigned __int8 *v10; // r11
  char *v11; // r8
  unsigned __int8 *v12; // r4
  char *v13; // r6
  unsigned int v14; // r5
  unsigned int v15; // r3
  unsigned __int8 *v16; // r9
  size_t v17; // r10
  bool v18; // cc
  char *v19; // r7
  unsigned int v20; // r2
  unsigned int v21; // r2
  int v22; // lr
  int v23; // r3
  char *v24; // r0
  int v25; // r7
  unsigned int v26; // r3
  bool v27; // cc
  char *v28; // r1
  size_t v29; // r2
  char *v30; // r0
  char v31; // t1
  unsigned __int8 *v32; // r7
  int v33; // r3
  unsigned __int8 *v34; // r11
  char *v35; // r9
  char *v36; // r5
  unsigned int v37; // r6
  unsigned int v38; // r4
  unsigned __int8 *v39; // r10
  size_t v40; // r3
  bool v41; // cc
  char *v42; // r8
  unsigned int v43; // r2
  int v44; // lr
  unsigned __int8 *v45; // r7
  unsigned int v46; // r0
  int v47; // r2
  unsigned int v48; // r4
  int v49; // r3
  unsigned int v50; // lr
  unsigned int v51; // t1
  bool v52; // cc
  char *v53; // r1
  unsigned __int16 *v54; // r7
  unsigned int v55; // t1
  unsigned int v56; // r4
  size_t v57; // r2
  char *v58; // r0
  char v59; // t1
  int v60; // r0
  int v61; // r3
  int v62; // t1
  char *v63; // r3
  int v64; // r2
  int v65; // r2
  unsigned int v66; // r0
  int *v67; // r3
  int v68; // r1
  int v69; // r2
  int v70; // r7
  char *v71; // r3
  int v72; // r1
  int v73; // r1
  char *v74; // r0
  int *v75; // r3
  int v76; // r1
  int v77; // r2
  int v78; // r10
  int v79; // r2
  int v80; // t1
  unsigned __int16 *v81; // r4
  int v82; // r1
  int v83; // r2
  int v84; // r2
  int v85; // r3
  int v86; // r4
  int v87; // r3
  int v88; // t1
  int v89; // r2
  int v90; // r6
  int v91; // t1
  int v92; // r7
  int v93; // r3
  unsigned int v94; // t1
  int v95; // lr
  int v96; // r3
  int *v97; // r8
  int v98; // r2
  int v99; // r3
  char *v100; // r2
  int v101; // r7
  int v102; // r3
  char *v103; // r7
  char *v104; // [sp+0h] [bp-24h]
  char *v105; // [sp+0h] [bp-24h]
  unsigned int v106; // [sp+4h] [bp-20h]
  unsigned int v107; // [sp+4h] [bp-20h]
  char *v108; // [sp+8h] [bp-1Ch]
  char *v109; // [sp+8h] [bp-1Ch]
  size_t v112; // [sp+14h] [bp-10h]
  char v113; // [sp+14h] [bp-10h]

  v7 = a5;
  if ( !a7 )
    return sub_4F048(a1, dest, a3, a4, a5);
  if ( dest != (char *)(a6 + a7) )
    return sub_4FA24(a1, dest, a3, a4, a5, a6, a7);
  if ( a5 >= a4 )
    v7 = a4;
  if ( a7 <= 65534 )
  {
    v32 = a1;
    v105 = &dest[-a7];
    v33 = v7 >> 31;
    if ( !a1 )
      v33 = 1;
    if ( v33 )
      return -1;
    v34 = &a1[a3];
    v35 = &dest[v7];
    v36 = dest;
    v107 = (unsigned int)&a1[a3 - 16];
    v109 = &dest[v7 - 32];
    if ( !v7 )
      return v7;
    if ( !a3 )
      return -1;
    v37 = (unsigned int)(v35 - 12);
    while ( 1 )
    {
      v38 = *v32;
      v39 = v32 + 1;
      v40 = v38 >> 4;
      if ( v38 >> 4 == 15 )
        goto LABEL_64;
LABEL_40:
      v41 = v109 > v36;
      if ( v109 >= v36 )
        v41 = v107 > (unsigned int)v39;
      if ( !v41 )
      {
        v42 = &v36[v40];
        v43 = (unsigned int)&v39[v40];
        goto LABEL_71;
      }
      v44 = *(_DWORD *)v39;
      v45 = &v39[v40];
      v46 = (unsigned int)&v36[v40];
      v47 = *((_DWORD *)v39 + 2);
      v48 = v38 & 0xF;
      v49 = *((_DWORD *)v39 + 3);
      *((_DWORD *)v36 + 1) = *((_DWORD *)v39 + 1);
      *(_DWORD *)v36 = v44;
      *((_DWORD *)v36 + 2) = v47;
      *((_DWORD *)v36 + 3) = v49;
      v51 = *(unsigned __int16 *)v45;
      v32 = v45 + 2;
      v50 = v51;
      v52 = v48 > 0xF;
      if ( v48 != 15 )
        v52 = v50 > 7;
      v53 = (char *)(v46 - v50);
      if ( v52 )
      {
        if ( v105 > v53 )
          return a1 - v32 - 1;
        v95 = *(_DWORD *)v53;
        v36 = (char *)(v46 + v48 + 4);
        *(_DWORD *)(v46 + 4) = *((_DWORD *)v53 + 1);
        *(_DWORD *)v46 = v95;
        v96 = *((_DWORD *)v53 + 3);
        *(_DWORD *)(v46 + 8) = *((_DWORD *)v53 + 2);
        *(_DWORD *)(v46 + 12) = v96;
        *(_WORD *)(v46 + 16) = *((_WORD *)v53 + 8);
      }
      else
      {
        while ( 1 )
        {
          if ( v48 == 15 )
          {
            v86 = 0;
            do
            {
              v88 = *v32++;
              v87 = v88;
              v86 += v88;
              if ( v34 - 4 < v32 || v86 < 0 )
                return a1 - v32 - 1;
            }
            while ( v87 == 255 );
            v48 = v86 + 15;
            if ( __CFADD__(v46, v48) )
              return a1 - v32 - 1;
          }
          v56 = v48 + 4;
          if ( v105 > v53 )
            return a1 - v32 - 1;
          v36 = (char *)(v46 + v56);
          if ( v46 + v56 <= v37 )
            break;
          v57 = (size_t)&v35[-v46];
          if ( (unsigned int)&v35[-v46] >= v56 )
            v57 = v56;
          v36 = (char *)(v46 + v57);
          if ( v46 >= (unsigned int)&v53[v57] )
          {
            memcpy((void *)v46, v53, v57);
          }
          else if ( v46 < (unsigned int)v36 )
          {
            v58 = (char *)(v46 - 1);
            do
            {
              v59 = *v53++;
              *++v58 = v59;
            }
            while ( v58 != v36 - 1 );
          }
          if ( v35 == v36 )
            return v35 - dest;
          v38 = *v32;
          v39 = v32 + 1;
          v40 = v38 >> 4;
          if ( v38 >> 4 != 15 )
            goto LABEL_40;
LABEL_64:
          if ( v39 >= v34 - 15 )
            goto LABEL_129;
          v32 = v34 - 14;
          v60 = 0;
          do
          {
            v62 = *v39++;
            v61 = v62;
            v60 += v62;
            if ( v39 == v32 )
              return a1 - v32 - 1;
            if ( v60 < 0 )
              goto LABEL_129;
          }
          while ( v61 == 255 );
          v40 = v60 + 15;
          v42 = &v36[v60 + 15];
          if ( v36 > v42 || (v43 = (unsigned int)&v39[v40], v39 > &v39[v40]) )
          {
LABEL_129:
            v32 = v39;
            return a1 - v32 - 1;
          }
LABEL_71:
          if ( (unsigned int)v42 <= v37 && (v54 = (unsigned __int16 *)v43, v43 <= (unsigned int)(v34 - 8)) )
          {
            do
            {
              v84 = *(_DWORD *)v39;
              v36 += 8;
              v85 = *((_DWORD *)v39 + 1);
              v39 += 8;
              *((_DWORD *)v36 - 2) = v84;
              *((_DWORD *)v36 - 1) = v85;
            }
            while ( v42 > v36 );
            v46 = (unsigned int)v42;
          }
          else
          {
            if ( v43 > (unsigned int)v34 )
            {
              v40 = v34 - v39;
              v42 = &v36[v34 - v39];
            }
            if ( v35 < v42 )
            {
              memmove(v36, v39, v35 - v36);
              return v35 - dest;
            }
            v112 = v40;
            memmove(v36, v39, v40);
            v46 = (unsigned int)v42;
            v54 = (unsigned __int16 *)&v39[v112];
            if ( v35 == v42 )
              return v35 - dest;
            if ( v54 >= (unsigned __int16 *)v34 - 1 )
            {
              v35 = v42;
              return v35 - dest;
            }
          }
          v55 = *v54;
          v32 = (unsigned __int8 *)(v54 + 1);
          v50 = v55;
          v48 = v38 & 0xF;
          v53 = &v42[-v55];
        }
        if ( v50 <= 7 )
        {
          *(_BYTE *)v46 = 0;
          *(_BYTE *)(v46 + 1) = 0;
          *(_BYTE *)(v46 + 2) = 0;
          v97 = &dword_19FFE8[v50];
          *(_BYTE *)(v46 + 3) = 0;
          v98 = *v97;
          v99 = v97[8];
          *(_BYTE *)v46 = *v53;
          v100 = &v53[v98];
          v63 = &v100[-v99];
          *(_BYTE *)(v46 + 1) = v53[1];
          *(_BYTE *)(v46 + 2) = v53[2];
          *(_BYTE *)(v46 + 3) = v53[3];
          *(_DWORD *)(v46 + 4) = *(_DWORD *)v100;
        }
        else
        {
          v63 = v53 + 8;
          v64 = *((_DWORD *)v53 + 1);
          *(_DWORD *)v46 = *(_DWORD *)v53;
          *(_DWORD *)(v46 + 4) = v64;
        }
        v65 = *((_DWORD *)v63 + 1);
        *(_DWORD *)(v46 + 8) = *(_DWORD *)v63;
        *(_DWORD *)(v46 + 12) = v65;
        if ( v56 > 0x10 )
        {
          v66 = v46 + 16;
          v67 = (int *)(v63 + 8);
          do
          {
            v68 = *v67;
            v66 += 8;
            v69 = v67[1];
            v67 += 2;
            *(_DWORD *)(v66 - 8) = v68;
            *(_DWORD *)(v66 - 4) = v69;
          }
          while ( (unsigned int)v36 > v66 );
        }
      }
    }
  }
  v104 = dest - 0x10000;
  v9 = v7 >> 31;
  if ( !a1 )
    v9 = 1;
  if ( v9 )
    return -1;
  v10 = &a1[a3];
  v11 = &dest[v7];
  v106 = (unsigned int)&a1[a3 - 16];
  v108 = &dest[v7 - 32];
  if ( !v7 )
    return v7;
  if ( !a3 )
    return -1;
  v12 = a1;
  v13 = dest;
  v14 = (unsigned int)(v11 - 12);
  while ( 1 )
  {
    v15 = *v12;
    v16 = v12 + 1;
    v17 = v15 >> 4;
    if ( v15 >> 4 == 15 )
      break;
    v18 = v108 > v13;
    if ( v108 >= v13 )
      v18 = v106 > (unsigned int)v16;
    if ( v18 )
    {
      v21 = v15 & 0xF;
      v22 = *(_DWORD *)v16;
      v23 = *(_DWORD *)(v12 + 13);
      v24 = &v13[v17];
      v25 = *(_DWORD *)(v12 + 5);
      *((_DWORD *)v13 + 2) = *(_DWORD *)(v12 + 9);
      *(_DWORD *)v13 = v22;
      *((_DWORD *)v13 + 1) = v25;
      *((_DWORD *)v13 + 3) = v23;
      v12 = &v16[v17 + 2];
      v26 = *(unsigned __int16 *)&v16[v17];
      v27 = v21 > 0xF;
      if ( v21 != 15 )
        v27 = v26 > 7;
      v28 = &v24[-v26];
      if ( !v27 )
        goto LABEL_21;
      v92 = *((_DWORD *)v28 + 1);
      *(_DWORD *)&v13[v17] = *(_DWORD *)v28;
      v13 = &v24[v21 + 4];
      *((_DWORD *)v24 + 1) = v92;
      v93 = *((_DWORD *)v28 + 3);
      *((_DWORD *)v24 + 2) = *((_DWORD *)v28 + 2);
      *((_DWORD *)v24 + 3) = v93;
      *((_WORD *)v24 + 8) = *((_WORD *)v28 + 8);
    }
    else
    {
      v19 = &v13[v17];
      v20 = (unsigned int)&v16[v17];
LABEL_97:
      if ( (unsigned int)v19 <= v14 && (v81 = (unsigned __int16 *)v20, v20 <= (unsigned int)(v10 - 8)) )
      {
        do
        {
          v82 = *(_DWORD *)v16;
          v13 += 8;
          v83 = *((_DWORD *)v16 + 1);
          v16 += 8;
          *((_DWORD *)v13 - 2) = v82;
          *((_DWORD *)v13 - 1) = v83;
        }
        while ( v19 > v13 );
        v24 = v19;
      }
      else
      {
        if ( (unsigned int)v10 < v20 )
        {
          v17 = v10 - v16;
          v19 = &v13[v10 - v16];
        }
        if ( v11 < v19 )
        {
          memmove(v13, v16, v11 - v13);
          return v11 - dest;
        }
        v113 = v15;
        memmove(v13, v16, v17);
        v81 = (unsigned __int16 *)&v16[v17];
        v24 = v19;
        if ( v11 == v19 )
          return v11 - dest;
        LOBYTE(v15) = v113;
        if ( v81 >= (unsigned __int16 *)v10 - 1 )
        {
          v11 = v19;
          return v11 - dest;
        }
      }
      v21 = v15 & 0xF;
      v94 = *v81;
      v12 = (unsigned __int8 *)(v81 + 1);
      v26 = v94;
      v28 = &v19[-v94];
LABEL_21:
      if ( v21 == 15 )
      {
        v89 = 0;
        while ( 1 )
        {
          v91 = *v12++;
          v90 = v91;
          v89 += v91;
          if ( v10 - 4 < v12 || v89 < 0 )
            return a1 - v12 - 1;
          if ( v90 != 255 )
          {
            v21 = v89 + 15;
            if ( __CFADD__(v24, v21) )
              return a1 - v12 - 1;
            break;
          }
        }
      }
      v29 = v21 + 4;
      if ( v104 > v28 )
        return a1 - v12 - 1;
      v13 = &v24[v29];
      if ( (unsigned int)&v24[v29] <= v14 )
      {
        if ( v26 <= 7 )
        {
          *v24 = 0;
          v24[1] = 0;
          v24[2] = 0;
          v24[3] = 0;
          *v24 = *v28;
          v101 = dword_19FFE8[v26];
          v102 = dword_19FFE8[v26 + 8];
          v24[1] = v28[1];
          v103 = &v28[v101];
          v71 = &v103[-v102];
          v24[2] = v28[2];
          v24[3] = v28[3];
          *((_DWORD *)v24 + 1) = *(_DWORD *)v103;
        }
        else
        {
          v70 = *(_DWORD *)v28;
          v71 = v28 + 8;
          v72 = *((_DWORD *)v28 + 1);
          *(_DWORD *)v24 = v70;
          *((_DWORD *)v24 + 1) = v72;
        }
        v73 = *((_DWORD *)v71 + 1);
        *((_DWORD *)v24 + 2) = *(_DWORD *)v71;
        *((_DWORD *)v24 + 3) = v73;
        if ( v29 > 0x10 )
        {
          v74 = v24 + 16;
          v75 = (int *)(v71 + 8);
          do
          {
            v76 = *v75;
            v74 += 8;
            v77 = v75[1];
            v75 += 2;
            *((_DWORD *)v74 - 2) = v76;
            *((_DWORD *)v74 - 1) = v77;
          }
          while ( v13 > v74 );
        }
      }
      else
      {
        if ( v29 >= v11 - v24 )
          v29 = v11 - v24;
        v13 = &v24[v29];
        if ( v24 >= &v28[v29] )
        {
          memcpy(v24, v28, v29);
        }
        else if ( v24 < v13 )
        {
          v30 = v24 - 1;
          do
          {
            v31 = *v28++;
            *++v30 = v31;
          }
          while ( v13 - 1 != v30 );
        }
        if ( v11 == v13 )
          return v11 - dest;
      }
    }
  }
  if ( v16 >= v10 - 15 )
  {
LABEL_128:
    v12 = v16;
  }
  else
  {
    v12 = v10 - 14;
    v78 = 0;
    while ( 1 )
    {
      v80 = *v16++;
      v79 = v80;
      v78 += v80;
      if ( v16 == v12 )
        break;
      if ( v78 < 0 )
        goto LABEL_128;
      if ( v79 != 255 )
      {
        v17 = v78 + 15;
        v19 = &v13[v17];
        if ( v13 > &v13[v17] )
          goto LABEL_128;
        v20 = (unsigned int)&v16[v17];
        if ( v16 > &v16[v17] )
          goto LABEL_128;
        goto LABEL_97;
      }
    }
  }
  return a1 - v12 - 1;
}
