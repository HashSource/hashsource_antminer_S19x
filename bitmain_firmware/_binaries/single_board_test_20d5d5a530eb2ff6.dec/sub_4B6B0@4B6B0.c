signed int __fastcall sub_4B6B0(char *a1, _BYTE *a2, signed int *a3, int a4)
{
  __int64 v4; // r8
  signed int result; // r0
  int v10; // r2
  int v11; // r8
  char *v12; // r1
  _BYTE *v13; // r6
  char *v14; // r2
  _BYTE *v15; // r11
  size_t v16; // r7
  unsigned int v17; // r3
  int v18; // r1
  int *v19; // r2
  int *v20; // r3
  int v21; // r1
  int *v22; // r3
  unsigned int v23; // r0
  int v24; // r2
  char *v25; // r9
  unsigned int v26; // r7
  char *v27; // r6
  _BYTE *v28; // r8
  unsigned int v29; // r3
  int v30; // r5
  int v31; // r12
  char *v32; // r0
  int v33; // r2
  unsigned int v34; // r10
  unsigned int v35; // r1
  char *v36; // lr
  unsigned int v37; // r2
  int v38; // r3
  char *v39; // r0
  unsigned int v40; // lr
  unsigned int v41; // r3
  char *v42; // r7
  int v43; // r5
  int v44; // r6
  int v45; // r3
  char *v46; // r2
  int v47; // r12
  char *v48; // r8
  char *v49; // r1
  int v50; // lr
  char *v51; // r2
  int v52; // r0
  char *v53; // r1
  bool v54; // cf
  char *v55; // r10
  unsigned int v56; // r12
  _BYTE *v57; // r0
  unsigned __int64 v58; // r2
  _BYTE *v59; // r2
  int v60; // r3
  _BYTE *k; // r2
  _BYTE *v62; // r12
  char *v63; // r3
  int v64; // lr
  int v65; // r5
  char *v66; // r2
  unsigned int v67; // lr
  char *v68; // r10
  _BYTE *v69; // r2
  unsigned int v70; // r3
  char *v71; // r0
  _DWORD *v72; // r11
  unsigned int v73; // r3
  unsigned int v74; // r10
  char v75; // r3
  unsigned int v76; // r10
  unsigned __int64 v77; // r0
  char *v78; // r1
  unsigned int v79; // r2
  unsigned int v80; // r3
  char *v81; // r2
  char *v82; // r3
  int v83; // r5
  int v84; // t1
  int v85; // t1
  unsigned int v86; // r2
  int v87; // r1
  int v88; // r2
  _BYTE *v89; // r10
  signed int *v90; // r5
  _BYTE *v91; // lr
  _BYTE *v92; // r1
  size_t v93; // r6
  unsigned int v94; // r3
  void *v95; // r3
  _BOOL4 v96; // r3
  char *v97; // r6
  char *i; // r3
  _DWORD *v99; // r12
  unsigned int v100; // r6
  int v101; // r5
  _BYTE *j; // r3
  _BYTE *v103; // r3
  char *v104; // r5
  int v105; // r9
  int v106; // r8
  unsigned int v107; // r10
  char *v108; // r8
  _BYTE *v109; // r2
  unsigned int v110; // r3
  _DWORD *v111; // r0
  _DWORD *v112; // r9
  unsigned int v113; // r3
  unsigned int v114; // r8
  unsigned int v115; // r8
  unsigned int v116; // r3
  int v117; // r1
  bool v118; // cf
  int v119; // r1
  int *v120; // r0
  int v121; // t1
  int v122; // r1
  int *v123; // r0
  int v124; // r3
  int *v125; // r2
  int *v126; // r10
  int *v127; // r3
  unsigned int v128; // [sp+8h] [bp-4054h]
  int v129; // [sp+8h] [bp-4054h]
  char *v130; // [sp+Ch] [bp-4050h]
  unsigned int v131; // [sp+Ch] [bp-4050h]
  char *v132; // [sp+10h] [bp-404Ch]
  char *v133; // [sp+10h] [bp-404Ch]
  _BYTE *v134; // [sp+18h] [bp-4044h]
  signed int *v135; // [sp+1Ch] [bp-4040h]
  _BYTE *v136; // [sp+1Ch] [bp-4040h]
  unsigned int v137; // [sp+20h] [bp-403Ch]
  signed int *v138; // [sp+20h] [bp-403Ch]
  unsigned int v139; // [sp+28h] [bp-4034h]
  unsigned int v140; // [sp+2Ch] [bp-4030h]
  char *v141; // [sp+30h] [bp-402Ch]
  int *v142; // [sp+34h] [bp-4028h]
  _DWORD s[4104]; // [sp+38h] [bp-4024h] BYREF
  int v144; // [sp+4058h] [bp-4h] BYREF

  memset(s, 0, 0x4014u);
  result = *a3;
  if ( (unsigned int)*a3 > 0x7E000000 )
  {
    v10 = 0;
  }
  else
  {
    v10 = result >> 31;
    v4 = -2139062143LL * result;
  }
  if ( (unsigned int)*a3 <= 0x7E000000 )
    v10 = ((result + HIDWORD(v4)) >> 7) - v10 + result + 16;
  if ( a4 >= v10 )
    return sub_48DCC((int)s, (int)a1, a2, result, a4, 1);
  if ( result <= 65546 )
  {
    if ( (unsigned int)result > 0x7E000000 )
      return 0;
    if ( !result )
    {
      if ( a4 > 0 )
      {
        *a2 = 0;
        *a3 = 0;
        return 1;
      }
      return result;
    }
    if ( a4 <= 0 )
      return 0;
    v128 = (unsigned int)&a2[a4];
    s[4100] = *a3;
    s[4098] = result;
    v12 = &a1[result];
    s[4099] = 3;
    v130 = &a1[result];
    if ( result <= 12 )
    {
      v13 = a2 + 1;
      v14 = a1;
      v15 = a2;
      v132 = a1;
LABEL_22:
      v16 = v130 - v14;
      if ( v128 < (unsigned int)&v15[v130 - v14 + 1 + (v130 - v14 + 240) / 0xFFu] )
        v16 = v128 - (_DWORD)v15 - 1 - ((v128 - (unsigned int)v15 + 240) >> 8);
      if ( v16 > 0xE )
      {
        v17 = v16 - 15;
        for ( *v15 = -16; v17 > 0xFE; ++v13 )
        {
          v17 -= 255;
          *v13 = -1;
        }
        *v13++ = v17;
      }
      else
      {
        *v15 = 16 * v16;
      }
      memcpy(v13, a1, v16);
      *a3 = &a1[v16] - v132;
      return &v13[v16] - a2;
    }
    v39 = a1 + 1;
    v15 = a2;
    v132 = a1;
    v40 = (unsigned int)(v12 - 11);
    v140 = (unsigned int)(v12 - 5);
    v139 = (unsigned int)(v12 - 6);
    v41 = (unsigned int)(-1640531535 * *(_DWORD *)(a1 + 1)) >> 19;
    v42 = a1;
    v136 = a2;
    v138 = a3;
    *((_WORD *)s + ((unsigned int)(-1640531535 * *(_DWORD *)a1) >> 19)) = 0;
LABEL_46:
    v43 = 64;
    v44 = 1;
    while ( 1 )
    {
      v46 = &v39[v44];
      v54 = v40 >= (unsigned int)&v39[v44];
      v47 = 2 * v41;
      v44 = v43 >> 6;
      v48 = v39;
      ++v43;
      v49 = &a1[*((unsigned __int16 *)s + v41)];
      if ( !v54 )
      {
        a3 = v138;
        a2 = v136;
        v14 = v42;
        v13 = v15 + 1;
        a1 = v42;
        goto LABEL_22;
      }
      v45 = *(_DWORD *)v46;
      *(_WORD *)((char *)s + v47) = (_WORD)v39 - (_WORD)a1;
      v41 = (unsigned int)(-1640531535 * v45) >> 19;
      if ( *(_DWORD *)v49 == *(_DWORD *)v39 )
        break;
      v39 = v46;
    }
    v96 = a1 < v49;
    if ( v39 <= v42 )
      v96 = 0;
    if ( v96 && *(v39 - 1) == *(v49 - 1) )
    {
      v97 = v49 - 1;
      for ( i = v39 - 1; ; --i )
      {
        v118 = v42 >= i;
        if ( v42 < i )
          v118 = a1 >= v97;
        v49 = v97;
        v99 = i;
        --v97;
        if ( v118 || *(i - 1) != *(v49 - 1) )
          break;
      }
      v48 = i;
    }
    else
    {
      v99 = v39;
    }
    v100 = v48 - v42;
    v14 = v42;
    if ( v128 < (unsigned int)&v15[v48 - v42 + 12 + (v48 - v42 + 240) / 0xFFu] )
    {
      v13 = v15 + 1;
      a3 = v138;
      a2 = v136;
      a1 = v42;
      goto LABEL_22;
    }
    if ( v100 <= 0xE )
    {
      v103 = v15 + 1;
      *v15 = 16 * v100;
    }
    else
    {
      v101 = v100 - 15;
      *v15 = -16;
      for ( j = v15 + 1; v101 > 254; ++j )
      {
        v101 -= 255;
        *j = -1;
      }
      *j = v101;
      v103 = j + 1;
    }
    v13 = &v103[v100];
    v104 = v42;
    do
    {
      v105 = *(_DWORD *)v104;
      v103 += 8;
      v106 = *((_DWORD *)v104 + 1);
      v104 += 8;
      *((_DWORD *)v103 - 2) = v105;
      *((_DWORD *)v103 - 1) = v106;
    }
    while ( v13 > v103 );
    if ( v128 < (unsigned int)(v13 + 11) )
    {
      v13 = v15 + 1;
      a3 = v138;
      a2 = v136;
      a1 = v42;
      goto LABEL_22;
    }
    v107 = (unsigned int)(v130 - 8);
    v142 = (int *)(v39 + 1);
    v141 = v39;
    while ( 1 )
    {
      v108 = (char *)(v99 + 1);
      *(_WORD *)v13 = (_WORD)v99 - (_WORD)v49;
      v109 = v13 + 2;
      if ( (unsigned int)(v99 + 1) >= v107 )
      {
        v112 = v49 + 4;
        v111 = v99 + 1;
      }
      else
      {
        v110 = *((_DWORD *)v49 + 1) ^ v99[1];
        if ( v110 )
        {
          v114 = __clz(__rbit32(v110)) >> 3;
          goto LABEL_130;
        }
        v111 = v99 + 2;
        v112 = v49 + 8;
        if ( (unsigned int)(v99 + 2) < v107 )
        {
          v113 = v99[2] ^ *((_DWORD *)v49 + 2);
          if ( v113 )
          {
LABEL_129:
            v114 = (char *)v111 + (__clz(__rbit32(v113)) >> 3) - v108;
            goto LABEL_130;
          }
          while ( 1 )
          {
            ++v111;
            ++v112;
            if ( (unsigned int)v111 >= v107 )
              break;
            v113 = *v112 ^ *v111;
            if ( v113 )
              goto LABEL_129;
          }
        }
      }
      if ( (unsigned int)v111 < v139 && *(unsigned __int16 *)v112 == *(unsigned __int16 *)v111 )
      {
        v111 = (_DWORD *)((char *)v111 + 2);
        v112 = (_DWORD *)((char *)v112 + 2);
      }
      if ( (unsigned int)v111 < v140 && *(unsigned __int8 *)v112 == *(unsigned __int8 *)v111 )
        v111 = (_DWORD *)((char *)v111 + 1);
      v114 = (char *)v111 - v108;
LABEL_130:
      v99 = (_DWORD *)((char *)v99 + v114 + 4);
      if ( v128 < (unsigned int)&v109[(v114 + 240) / 0xFF + 6] )
      {
        v119 = 255 * (v128 - (_DWORD)v109) - 1516;
        v99 = (_DWORD *)((char *)v99 + v119 - v114);
        if ( v141 >= (char *)v99 )
        {
          v120 = v99;
          do
          {
            v121 = *v120;
            v120 = (int *)((char *)v120 + 1);
            *((_WORD *)s + ((unsigned int)(-1640531535 * v121) >> 19)) = 0;
          }
          while ( v120 != v142 );
          v109 = v13 + 2;
          v114 = v119;
        }
        else
        {
          v114 = 255 * (v128 - (_DWORD)v109) - 1516;
        }
      }
      if ( v114 <= 0xE )
      {
        *v15 += v114;
        v15 = v109;
      }
      else
      {
        v115 = v114 - 15;
        *v15 += 15;
        v13[2] = -1;
        v13[3] = -1;
        v13[4] = -1;
        for ( v13[5] = -1; v115 >= 0x3FC; v109[3] = -1 )
        {
          v115 -= 1020;
          v109[4] = -1;
          v109 += 4;
          v109[1] = -1;
          v109[2] = -1;
        }
        v15 = &v109[v115 / 0xFF + 1];
        v109[v115 / 0xFF] = v115 + v115 / 0xFF;
      }
      if ( v40 <= (unsigned int)v99 )
      {
        a2 = v136;
        v14 = (char *)v99;
        a3 = v138;
        v13 = v15 + 1;
        a1 = (char *)v99;
        goto LABEL_22;
      }
      v14 = (char *)v99;
      *((_WORD *)s + ((unsigned int)(-1640531535 * *(_DWORD *)((char *)v99 - 2)) >> 19)) = (_WORD)v99 - 2 - (_WORD)a1;
      v116 = (unsigned int)(-1640531535 * *v99) >> 19;
      v117 = *((unsigned __int16 *)s + v116);
      *((_WORD *)s + v116) = (_WORD)v99 - (_WORD)a1;
      v49 = &a1[v117];
      if ( *(_DWORD *)v49 != *v99 )
      {
        v39 = (char *)v99 + 1;
        v42 = (char *)v99;
        v41 = (unsigned int)(-1640531535 * *(_DWORD *)((char *)v99 + 1)) >> 19;
        goto LABEL_46;
      }
      *v15 = 0;
      v13 = v15 + 1;
      if ( v128 < (unsigned int)(v15 + 12) )
      {
        a2 = v136;
        a1 = (char *)v99;
        a3 = v138;
        goto LABEL_22;
      }
    }
  }
  if ( (unsigned int)a1 < 0x10000 )
    v11 = 2;
  else
    v11 = 1;
  if ( (unsigned int)result > 0x7E000000 || a4 <= 0 )
    return 0;
  v18 = *(_DWORD *)a1;
  s[4100] = *a3;
  s[4098] = result;
  s[4099] = v11;
  v19 = &v144;
  v133 = &a1[result];
  v131 = (unsigned int)&a2[a4];
  v20 = &v144 + ((unsigned int)(-1640531535 * v18) >> 20);
  if ( v11 == 2 )
    v19 = 0;
  v21 = (int)&a1[result - 11];
  v129 = v11;
  v22 = v20 - 4096;
  if ( v11 == 2 )
    *(v22 - 8) = (int)v19;
  LOWORD(v23) = -32639;
  v24 = *(_DWORD *)(a1 + 1);
  v25 = a1;
  if ( v11 != 2 )
    *(v22 - 8) = (int)a1;
  v26 = v21;
  v27 = a1 + 1;
  v28 = a2;
  HIWORD(v23) = -32640;
  v137 = v23;
  v134 = a2;
  v135 = a3;
  v29 = (unsigned int)(-1640531535 * v24) >> 20;
LABEL_38:
  v30 = 64;
  if ( v129 == 1 )
  {
    v50 = 1;
    while ( 1 )
    {
      v51 = &v27[v50];
      v54 = v26 >= (unsigned int)&v27[v50];
      v50 = v30++ >> 6;
      if ( !v54 )
      {
LABEL_97:
        v89 = v134;
        v90 = v135;
        v91 = v28;
        v92 = v28 + 1;
        goto LABEL_98;
      }
      v52 = *(_DWORD *)v51;
      v53 = (char *)s[v29];
      s[v29] = v27;
      v29 = (unsigned int)(-1640531535 * v52) >> 20;
      if ( v27 <= v53 + 0xFFFF && *(_DWORD *)v53 == *(_DWORD *)v27 )
        break;
      v27 = v51;
    }
  }
  else
  {
    v31 = 1;
    while ( 1 )
    {
      v32 = &v27[v31];
      v33 = s[v29];
      v54 = v26 >= (unsigned int)&v27[v31];
      v34 = v29;
      v31 = v30 >> 6;
      v35 = v27 - a1;
      v36 = &a1[v33];
      ++v30;
      v37 = v33 + 0xFFFF;
      if ( !v54 )
        goto LABEL_97;
      v38 = *(_DWORD *)v32;
      s[v34] = v35;
      v29 = (unsigned int)(-1640531535 * v38) >> 20;
      if ( v35 <= v37 && *(_DWORD *)v36 == *(_DWORD *)v27 )
        break;
      v27 = v32;
    }
    v53 = v36;
  }
  v54 = a1 >= v53;
  if ( a1 < v53 )
    v54 = v25 >= v27;
  if ( !v54 && *(v53 - 1) == *(v27 - 1) )
  {
    v81 = v53 - 1;
    v82 = v27 - 1;
    do
    {
      v55 = v82;
      v53 = v81;
      if ( v25 >= v82 )
        break;
      if ( a1 >= v81 )
        break;
      v84 = (unsigned __int8)*--v82;
      v83 = v84;
      v85 = (unsigned __int8)*--v81;
    }
    while ( v83 == v85 );
  }
  else
  {
    v55 = v27;
  }
  v56 = v55 - v25;
  v57 = v28 + 1;
  v58 = (unsigned int)(v55 - v25 + 240) * (unsigned __int64)v137;
  v59 = v28 + 1;
  if ( v131 >= (unsigned int)&v28[v55 - v25 + 12 + (HIDWORD(v58) >> 7)] )
  {
    if ( v56 > 0xE )
    {
      v60 = v56 - 15;
      *v28 = -16;
      for ( k = v28 + 1; v60 > 254; ++k )
      {
        v60 -= 255;
        *k = -1;
      }
      *k = v60;
      v59 = k + 1;
    }
    else
    {
      *v28 = 16 * v56;
    }
    v62 = &v59[v56];
    v63 = v25;
    do
    {
      v64 = *(_DWORD *)v63;
      v59 += 8;
      v65 = *((_DWORD *)v63 + 1);
      v63 += 8;
      *((_DWORD *)v59 - 2) = v64;
      *((_DWORD *)v59 - 1) = v65;
    }
    while ( v62 > v59 );
    v66 = v25;
    v25 = v55;
    v67 = (unsigned int)(v133 - 8);
    while ( 1 )
    {
      if ( v131 < (unsigned int)(v62 + 11) )
      {
        v91 = v28;
        v89 = v134;
        v90 = v135;
        v92 = v57;
        v25 = v66;
        goto LABEL_98;
      }
      v68 = v25 + 4;
      *(_WORD *)v62 = (_WORD)v25 - (_WORD)v53;
      v69 = v62 + 2;
      if ( (unsigned int)(v25 + 4) >= v67 )
      {
        v72 = v53 + 4;
        v71 = v25 + 4;
      }
      else
      {
        v70 = *((_DWORD *)v53 + 1) ^ *((_DWORD *)v25 + 1);
        if ( v70 )
        {
          v74 = __clz(__rbit32(v70)) >> 3;
          goto LABEL_80;
        }
        v71 = v25 + 8;
        v72 = v53 + 8;
        if ( v67 > (unsigned int)(v25 + 8) )
        {
          v73 = *((_DWORD *)v53 + 2) ^ *((_DWORD *)v25 + 2);
          if ( v73 )
          {
LABEL_79:
            v74 = &v71[__clz(__rbit32(v73)) >> 3] - v68;
            goto LABEL_80;
          }
          while ( 1 )
          {
            v71 += 4;
            ++v72;
            if ( v67 <= (unsigned int)v71 )
              break;
            v73 = *v72 ^ *(_DWORD *)v71;
            if ( v73 )
              goto LABEL_79;
          }
        }
      }
      if ( v71 < v133 - 6 && *(unsigned __int16 *)v72 == *(unsigned __int16 *)v71 )
      {
        v71 += 2;
        v72 = (_DWORD *)((char *)v72 + 2);
      }
      if ( v71 < v133 - 5 && *(unsigned __int8 *)v72 == (unsigned __int8)*v71 )
        ++v71;
      v74 = v71 - v68;
LABEL_80:
      v25 += v74 + 4;
      if ( v131 < (unsigned int)&v69[((unsigned int)(((v74 + 240) * (unsigned __int64)v137) >> 32) >> 7) + 6] )
      {
        v122 = 255 * (v131 - (_DWORD)v69) - 1516;
        v25 += v122 - v74;
        if ( v25 <= v27 )
        {
          v123 = (int *)v25;
          do
          {
            v124 = *v123;
            v123 = (int *)((char *)v123 + 1);
            v125 = &v144;
            v126 = &v144 + ((unsigned int)(-1640531535 * v124) >> 20);
            if ( v129 == 2 )
            {
              v125 = 0;
              v127 = v126 - 4096;
            }
            else
            {
              v126 -= 4096;
              v127 = 0;
            }
            if ( v129 == 2 )
              *(v127 - 8) = (int)v125;
            else
              *(v126 - 8) = (int)v127;
          }
          while ( v123 != (int *)(v27 + 1) );
          v69 = v62 + 2;
          v74 = v122;
        }
        else
        {
          v74 = 255 * (v131 - (_DWORD)v69) - 1516;
        }
      }
      v75 = *v28;
      if ( v74 <= 0xE )
      {
        *v28 = v74 + v75;
        v28 = v69;
      }
      else
      {
        v76 = v74 - 15;
        *v28 = v75 + 15;
        v62[2] = -1;
        v62[3] = -1;
        v62[4] = -1;
        for ( v62[5] = -1; v76 >= 0x3FC; v69[3] = -1 )
        {
          v76 -= 1020;
          v69[4] = -1;
          v69 += 4;
          v69[1] = -1;
          v69[2] = -1;
        }
        v77 = v76 * (unsigned __int64)v137;
        v28 = &v69[(HIDWORD(v77) >> 7) + 1];
        v69[HIDWORD(v77) >> 7] = v76 + (HIDWORD(v77) >> 7);
      }
      if ( v26 <= (unsigned int)v25 )
        goto LABEL_97;
      v78 = v25 - 2;
      v79 = (unsigned int)(-1640531535 * *(_DWORD *)(v25 - 2)) >> 20;
      if ( v129 == 2 )
      {
        s[v79] = v78 - a1;
        v86 = (unsigned int)(-1640531535 * *(_DWORD *)v25) >> 20;
        v87 = s[v86];
        s[v86] = v25 - a1;
        v88 = v87 + 65280;
        v53 = &a1[v87];
        if ( v25 - a1 > (unsigned int)(v88 + 255) )
        {
LABEL_96:
          v27 = v25 + 1;
          v29 = (unsigned int)(-1640531535 * *(_DWORD *)(v25 + 1)) >> 20;
          goto LABEL_38;
        }
      }
      else
      {
        s[v79] = v78;
        v80 = (unsigned int)(-1640531535 * *(_DWORD *)v25) >> 20;
        v53 = (char *)s[v80];
        s[v80] = v25;
        if ( v25 > v53 + 0xFFFF )
          goto LABEL_96;
      }
      if ( *(_DWORD *)v53 != *(_DWORD *)v25 )
        goto LABEL_96;
      v57 = v28 + 1;
      *v28 = 0;
      v62 = v28 + 1;
      v66 = v25;
    }
  }
  v91 = v28;
  v89 = v134;
  v90 = v135;
  v92 = v28 + 1;
LABEL_98:
  v93 = v133 - v25;
  if ( v131 < (unsigned int)&v91[v133 - v25 + 1 + (v133 - v25 + 240) / 0xFFu] )
    v93 = v131 - (_DWORD)v91 - 1 - ((v131 - (unsigned int)v91 + 240) >> 8);
  if ( v93 <= 0xE )
  {
    v95 = v92;
    *v91 = 16 * v93;
  }
  else
  {
    v94 = v93 - 15;
    for ( *v91 = -16; v94 > 0xFE; ++v92 )
    {
      v94 -= 255;
      *v92 = -1;
    }
    *v92 = v94;
    v95 = v92 + 1;
  }
  result = (_BYTE *)memcpy(v95, v25, v93) + v93 - v89;
  *v90 = &v25[v93] - a1;
  return result;
}
