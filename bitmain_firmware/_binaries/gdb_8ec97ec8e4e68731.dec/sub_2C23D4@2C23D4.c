int __fastcall sub_2C23D4(int a1, int a2, _DWORD *a3, int a4)
{
  _DWORD *v4; // r9
  int v6; // r12
  int v7; // r12
  _DWORD *v8; // r12
  _DWORD *v10; // r7
  int i; // r8
  int v12; // r0
  int v13; // r5
  _BOOL4 v14; // r3
  int v15; // r1
  unsigned int v16; // r3
  int v17; // r3
  int v18; // r1
  int v19; // r4
  unsigned int v20; // r6
  int v21; // r5
  _BOOL4 v22; // r1
  int v23; // r6
  _DWORD *v24; // r5
  int v25; // r11
  int v26; // r3
  int v27; // r6
  unsigned int v28; // r7
  _BYTE *v29; // r9
  unsigned int v30; // r4
  bool v31; // cc
  int v32; // r3
  int v33; // r2
  int v34; // r12
  int v35; // r3
  _BOOL4 v36; // r1
  int v37; // r3
  int v38; // r6
  int v39; // r4
  int v40; // r8
  int v41; // r0
  int v42; // r1
  _BYTE *v43; // r7
  int v44; // r6
  _BYTE *v45; // r6
  unsigned int v46; // r2
  _BYTE *v47; // r3
  int v48; // r0
  int v49; // r2
  int v50; // r4
  int v51; // r6
  _BOOL4 v52; // r3
  int v53; // r8
  unsigned int v54; // r4
  __int16 v55; // r2
  unsigned int v56; // r2
  unsigned int v57; // r4
  int v58; // r6
  int v59; // r12
  bool v60; // zf
  int v61; // r1
  char v62; // r3
  _BYTE *v63; // r7
  int v64; // lr
  int v65; // r2
  int v66; // r6
  int v67; // r5
  int v68; // r3
  int v69; // r0
  int v70; // r12
  __int16 v71; // r1
  int v72; // r2
  int v73; // r10
  int v74; // r8
  unsigned int v75; // r7
  _DWORD *v76; // r4
  void *v77; // r0
  unsigned int v78; // r9
  unsigned int v79; // r5
  unsigned int v80; // r6
  unsigned int v81; // r3
  bool v82; // zf
  int v83; // r6
  int v84; // r2
  __int64 v85; // r0
  unsigned int v86; // r3
  int v87; // r2
  int v88; // r1
  int v89; // r2
  int v90; // r1
  int v91; // r6
  int v92; // r8
  unsigned int v93; // r2
  unsigned int v94; // r12
  unsigned int v95; // r3
  _DWORD *v96; // r1
  size_t v97; // r0
  unsigned int v98; // r3
  char v99; // lr
  char *v100; // r3
  char v101; // r5
  char v102; // r4
  char v103; // lr
  char v104; // r2
  _BYTE *v105; // r4
  unsigned int v106; // r6
  unsigned int v107; // r6
  int v108; // r2
  int v109; // r3
  unsigned int v110; // r7
  unsigned int v111; // r4
  unsigned int v112; // r3
  unsigned int v113; // r7
  int v114; // r8
  int v115; // r1
  int v116; // r0
  unsigned int v117; // r2
  unsigned int v118; // r12
  _BYTE *v119; // r3
  unsigned int v120; // r4
  unsigned int v121; // r4
  unsigned int v122; // r3
  unsigned int v123; // r8
  _BOOL4 v124; // r2
  __int16 v125; // r3
  unsigned int v126; // r6
  int v127; // r4
  unsigned int v128; // r4
  unsigned int v129; // r6
  _BYTE *v130; // r4
  unsigned int v131; // r12
  __int16 v132; // r2
  unsigned int v133; // r6
  int v134; // [sp+10h] [bp-74h]
  _DWORD *src; // [sp+18h] [bp-6Ch]
  void *srca; // [sp+18h] [bp-6Ch]
  int v138; // [sp+1Ch] [bp-68h]
  int v139; // [sp+24h] [bp-60h]
  int v140; // [sp+24h] [bp-60h]
  int v141; // [sp+24h] [bp-60h]
  size_t nmemb; // [sp+28h] [bp-5Ch]
  _DWORD *ptr; // [sp+38h] [bp-4Ch]
  int v146; // [sp+40h] [bp-44h]
  int v147; // [sp+40h] [bp-44h]
  int v148; // [sp+40h] [bp-44h]
  int v149; // [sp+40h] [bp-44h]
  _BYTE *v150; // [sp+40h] [bp-44h]
  int v151; // [sp+40h] [bp-44h]
  int v152; // [sp+40h] [bp-44h]
  int v153; // [sp+44h] [bp-40h]
  int v154; // [sp+44h] [bp-40h]
  _BYTE *v155; // [sp+44h] [bp-40h]
  int v156; // [sp+48h] [bp-3Ch]
  int v157; // [sp+48h] [bp-3Ch]
  unsigned int v158; // [sp+58h] [bp-2Ch]
  int v159; // [sp+58h] [bp-2Ch]
  int v160; // [sp+5Ch] [bp-28h]
  int v161; // [sp+5Ch] [bp-28h]
  int v162; // [sp+60h] [bp-24h]
  _DWORD *v163; // [sp+68h] [bp-1Ch]
  int v164; // [sp+70h] [bp-14h]
  unsigned __int8 v165; // [sp+74h] [bp-10h]
  _DWORD v166[3]; // [sp+78h] [bp-Ch] BYREF

  v4 = *(_DWORD **)(a2 + 28);
  if ( v4[11] != 4 )
    return 0;
  v6 = a3[37];
  if ( !v6 )
    return 0;
  if ( *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4) != 5 )
    return 0;
  v7 = *(_DWORD *)(v6 + 160);
  if ( !v7 )
    return 0;
  if ( (*(_BYTE *)(v7 + 2340) & 0x3F) != 4 )
    return 0;
  v8 = (_DWORD *)a3[35];
  src = v8;
  if ( !v8 )
    return 0;
  nmemb = v8[36];
  v134 = *(_DWORD *)(a3[15] + 28) + a3[14];
  ptr = (_DWORD *)v8[38];
  if ( v8[39] )
  {
    v10 = (_DWORD *)v8[40];
    for ( i = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 8) ? 0 : 3; v10; v10 = (_DWORD *)*v10 )
    {
      v17 = v10[4];
      v18 = v10[1];
      v19 = v18 - v134;
      if ( v17 )
      {
        if ( v17 != 2 )
          sub_2A6BF0((int)"elf32-arm.c", 18390, (int)"elf32_arm_write_section");
        v12 = v10[2];
        v13 = *(_DWORD *)(v12 + 4) - v18 - 12;
        v14 = v13 > 0x1FFFFFF;
        if ( v13 < -33554432 )
          v14 = 1;
        if ( v14 )
        {
          sub_2A6A5C("%B: error: VFP11 veneer out of range", a1);
          v12 = v10[2];
        }
        v15 = *(_DWORD *)(v12 + 12);
        *(_BYTE *)(a4 + (i ^ v19)) = v15;
        *(_BYTE *)(a4 + ((v19 + 1) ^ i)) = BYTE1(v15);
        v16 = ((unsigned int)v13 >> 2) & 0xFFFFFF | 0xEA000000;
        *(_BYTE *)(a4 + ((v19 + 2) ^ i)) = BYTE2(v15);
        *(_BYTE *)(a4 + ((v19 + 3) ^ i)) = HIBYTE(v15);
        *(_BYTE *)(a4 + ((v19 + 4) ^ i)) = (unsigned int)v13 >> 2;
        *(_BYTE *)(a4 + ((v19 + 5) ^ i)) = BYTE1(v16);
        *(_BYTE *)(a4 + ((v19 + 6) ^ i)) = BYTE2(v16);
        *(_BYTE *)(a4 + ((v19 + 7) ^ i)) = -22;
      }
      else
      {
        v20 = v10[3] & 0xF0000000 | 0xA000000;
        v21 = *(_DWORD *)(v10[2] + 4) - v18 - 4;
        v22 = v21 > 0x1FFFFFF;
        if ( v21 < -33554432 )
          v22 = 1;
        if ( v22 )
          sub_2A6A5C("%B: error: VFP11 veneer out of range", a1);
        v23 = ((unsigned int)v21 >> 2) & 0xFFFFFF | v20;
        *(_BYTE *)(a4 + (i ^ (v19 - 4))) = v23;
        *(_BYTE *)(a4 + ((v19 - 3) ^ i)) = BYTE1(v23);
        *(_BYTE *)(a4 + ((v19 - 2) ^ i)) = BYTE2(v23);
        *(_BYTE *)(a4 + ((v19 - 1) ^ i)) = HIBYTE(v23);
      }
    }
  }
  if ( src[41] )
  {
    v24 = (_DWORD *)src[42];
    if ( v24 )
    {
      v138 = a4;
      v25 = (int)v4;
      while ( 1 )
      {
        v32 = v24[4];
        v33 = v24[1];
        v34 = v33 - v134;
        if ( !v32 )
        {
          v35 = *(_DWORD *)(v24[2] + 4) - v33;
          v36 = v35 >= 0x1000000;
          if ( v35 < -16777216 )
            v36 = 1;
          if ( v36 )
          {
            if ( v35 >= -16777216 )
              v37 = v35 - 0x1000000;
            else
              v37 = -16777216 - v35;
            sub_2A6A5C(
              "%B(%#Lx): error: Cannot create STM32L4XX veneer. Jump out of range by %Ld bytes. Cannot encode branch instruction. ",
              a1,
              v33 - 4,
              v37);
          }
          else
          {
            sub_2B72EC(
              *(_DWORD *)(v25 + 364),
              *(_DWORD *)(a1 + 4),
              (16 * v35) & 0x3FF0000
            | ((unsigned int)v35 >> 1) & 0x7FF
            | 0xF0009000
            | ((HIBYTE(v35) & 1) << 26)
            | ((((v35 & 0x800000) == 0) ^ HIBYTE(v35) & 1) << 13)
            | ((HIBYTE(v35) & 1 ^ ((v35 & 0x400000) == 0)) << 11),
              (_BYTE *)(v138 + v34 - 4));
          }
          goto LABEL_39;
        }
        if ( v32 != 1 )
          sub_2A6BF0((int)"elf32-arm.c", 18473, (int)"elf32_arm_write_section");
        v26 = v24[2];
        v27 = *(_DWORD *)(v26 + 4) - v33 - 4;
        if ( v27 < 0x1000000 )
          break;
        sub_2A6A5C("%B: error: Cannot create STM32L4XX veneer.", a1);
LABEL_39:
        v24 = (_DWORD *)*v24;
        if ( !v24 )
        {
          v4 = (_DWORD *)v25;
          a4 = v138;
          goto LABEL_51;
        }
      }
      v28 = *(_DWORD *)(v26 + 12);
      v29 = (_BYTE *)(v138 + v34);
      v139 = v138 + v34 + v27;
      if ( (v28 & 0xFFD02000) != 0xE8900000 )
      {
        if ( (v28 & 0xFFD02000) != 0xE9100000 )
        {
          if ( (v28 & 0xFE100E00) != 0xEC100A00 )
            goto LABEL_39;
          v30 = (v28 >> 21) & 0xD;
          v31 = v30 > 9;
          if ( v30 != 9 )
            v31 = v30 - 4 > 1;
          if ( v31 )
            goto LABEL_39;
          v157 = (unsigned __int8)v28;
          if ( (unsigned __int8)v28 <= 8u )
          {
            v107 = *(_DWORD *)(v26 + 4) - v33 - 8;
            sub_2B72EC(*(_DWORD *)(v25 + 364), *(_DWORD *)(a1 + 4), v28, (_BYTE *)(v138 + v34));
            if ( v107 + 0x1000000 >= 0x2000000 )
              sub_2A6BBC("elf32-arm.c", 17577);
            v155 = v29 + 8;
            sub_2B72EC(
              *(_DWORD *)(v25 + 364),
              *(_DWORD *)(a1 + 4),
              (v107 >> 1) & 0x7FF
            | 0xF0009000
            | ((HIBYTE(v107) & 1) << 26)
            | (16 * v107) & 0x3FF0000
            | ((((v107 & 0x800000) == 0) ^ HIBYTE(v107) & 1) << 13)
            | ((((v107 & 0x400000) == 0) ^ HIBYTE(v107) & 1) << 11),
              v29 + 4);
          }
          else
          {
            v161 = (v28 >> 22) & 1 | (2 * ((unsigned __int16)v28 >> 12));
            v159 = HIWORD(v28) & 0xF;
            v58 = (int)(unsigned __int8)v28 >> 3;
            if ( (v28 & 7) != 0 )
              v58 = ((int)(unsigned __int8)v28 >> 3) + 1;
            if ( (v30 == 9) == ((v30 == 4) ^ (v30 == 5)) )
              sub_2A6BBC("elf32-arm.c", 18192);
            v59 = v58;
            v60 = (v28 & 0xFE100F00) == -334492928;
            v61 = -326104576;
            v62 = 8 - 8 * v58;
            v63 = v29;
            v163 = v24;
            v64 = v159 << 16;
            LOWORD(v65) = 2560;
            if ( v60 )
              v61 = -326104320;
            HIWORD(v65) = -4816;
            v154 = v61;
            v66 = 0;
            v67 = v59;
            if ( v60 )
              v65 = -315618560;
            v164 = v65;
            v165 = v62 + v157;
            v68 = v64 | 0x200000;
            v149 = v64 | 0x200000;
            while ( 1 )
            {
              ++v66;
              if ( v30 - 4 > 1 )
              {
                if ( v67 == v66 )
                  v68 = v165;
                v69 = v159 << 16;
                v70 = v164;
                v71 = ((_WORD)v161 + 8 * (_WORD)v66 - 8) << 11;
                if ( v67 != v66 )
                  v68 = 8;
                v72 = (v161 << 22) & 0x400000;
              }
              else
              {
                v69 = v149;
                v68 = v67 == v66 ? v165 : 8;
                v72 = (v161 << 22) & 0x400000;
                v71 = ((_WORD)v161 + 8 * (_WORD)v66 - 8) << 11;
                v70 = v154;
              }
              sub_2B72EC(*(_DWORD *)(v25 + 364), *(_DWORD *)(a1 + 4), v72 | v69 | v70 | v71 & 0xF000 | v68, v63);
              if ( v67 == v66 )
                break;
              v63 += 4;
            }
            v150 = v63 + 4;
            v24 = v163;
            v155 = v63 + 8;
            if ( v30 == 4 )
            {
              v150 = v63 + 8;
              v155 = v63 + 12;
              sub_2B72EC(
                *(_DWORD *)(v25 + 364),
                *(_DWORD *)(a1 + 4),
                (v159 << 16) | (v159 << 8) | 0xF1A00000 | (unsigned __int8)(4 * v157) | ((char)(v157 >> 6) << 12),
                v63 + 4);
            }
            if ( (unsigned int)(v139 - (_DWORD)v150 + 0x1000000) >= 0x2000000 )
              sub_2A6BBC("elf32-arm.c", 17577);
            sub_2B72EC(
              *(_DWORD *)(v25 + 364),
              *(_DWORD *)(a1 + 4),
              ((unsigned int)(v139 - (_DWORD)v150) >> 1) & 0x7FF
            | 0xF0009000
            | ((((unsigned int)(v139 - (_DWORD)v150) >> 24) & 1) << 26)
            | (16 * (v139 - (_DWORD)v150)) & 0x3FF0000
            | (((((v139 - (_DWORD)v150) & 0x800000) == 0) ^ ((unsigned int)(v139 - (_DWORD)v150) >> 24) & 1) << 13)
            | (((((v139 - (_DWORD)v150) & 0x400000) == 0) ^ ((unsigned int)(v139 - (_DWORD)v150) >> 24) & 1) << 11),
              v150);
          }
          v46 = (unsigned int)(v29 + 24);
          v47 = v155;
          goto LABEL_70;
        }
        v48 = sub_347FB0((unsigned __int16)v28);
        v49 = v48;
        if ( v48 <= 8 )
        {
          v106 = v27 - 4;
          sub_2B72EC(*(_DWORD *)(v25 + 364), *(_DWORD *)(a1 + 4), v28, v29);
          if ( v106 + 0x1000000 >= 0x2000000 )
            sub_2A6BBC("elf32-arm.c", 17577);
          sub_2B72EC(
            *(_DWORD *)(v25 + 364),
            *(_DWORD *)(a1 + 4),
            (v106 >> 1) & 0x7FF
          | 0xF0009000
          | ((HIBYTE(v106) & 1) << 26)
          | (16 * v106) & 0x3FF0000
          | ((((v106 & 0x800000) == 0) ^ HIBYTE(v106) & 1) << 13)
          | ((((v106 & 0x400000) == 0) ^ HIBYTE(v106) & 1) << 11),
            v29 + 4);
          v46 = (unsigned int)(v29 + 16);
          v47 = v29 + 8;
          goto LABEL_70;
        }
        if ( (v28 & 0x2000) != 0 )
        {
          v147 = v48;
          sub_2A6BBC("elf32-arm.c", 17941);
          v49 = v147;
        }
        if ( (v28 & 0xC000) == 0xC000 )
        {
          v152 = v49;
          sub_2A6BBC("elf32-arm.c", 17944);
          v49 = v152;
        }
        v50 = (int)(unsigned __int16)v28 >> 15;
        v158 = v28 >> 21;
        v51 = ((int)(unsigned __int16)v28 >> (BYTE2(v28) & 0xF)) & 1;
        v52 = (v28 & 0x200000) != 0;
        v148 = HIWORD(v28) & 0xF;
        v153 = (v28 >> 21) & 1 | v50;
        v160 = v52 & v51;
        v156 = v28 & 0xDF80;
        v53 = v28 & 0x7F;
        if ( (v52 & v51) != 0 )
        {
          v162 = v49;
          sub_2A6BBC("elf32-arm.c", 17947);
          v49 = v162;
          v52 = (v28 & 0x200000) != 0;
        }
        else if ( !(v51 | v153) )
        {
          v54 = __clz(__rbit32(v53 & ~(1 << (BYTE2(v28) & 0xF))));
          v55 = v54 | (8 * v148);
          v54 <<= 16;
          sub_2B72C4(*(_DWORD *)(v25 + 364), *(_DWORD *)(a1 + 4), v55 | 0x4600, v29);
          sub_2B72EC(*(_DWORD *)(v25 + 364), *(_DWORD *)(a1 + 4), v156 | 0xE9300000 | v54, v29 + 2);
          v56 = v53 | 0xE9100000 | v54;
          v57 = v139 - (_DWORD)(v29 + 10);
          sub_2B72EC(*(_DWORD *)(v25 + 364), *(_DWORD *)(a1 + 4), v56, v29 + 6);
          if ( v57 + 0x1000000 >= 0x2000000 )
            sub_2A6BBC("elf32-arm.c", 17577);
          sub_2B72EC(
            *(_DWORD *)(v25 + 364),
            *(_DWORD *)(a1 + 4),
            (v57 >> 1) & 0x7FF
          | 0xF0009000
          | ((HIBYTE(v57) & 1) << 26)
          | (16 * v57) & 0x3FF0000
          | ((((v57 & 0x800000) == 0) ^ HIBYTE(v57) & 1) << 13)
          | ((((v57 & 0x400000) == 0) ^ HIBYTE(v57) & 1) << 11),
            v29 + 10);
          v47 = v29 + 14;
          goto LABEL_81;
        }
        if ( (v52 & (v50 ^ 1)) != 0 )
        {
          if ( !v51 )
          {
            v128 = (v148 << 16) | 0xE9300000;
            v129 = v139 - (_DWORD)(v29 + 8);
            sub_2B72EC(*(_DWORD *)(v25 + 364), *(_DWORD *)(a1 + 4), v156 | v128, v29);
            sub_2B72EC(*(_DWORD *)(v25 + 364), *(_DWORD *)(a1 + 4), v53 | v128, v29 + 4);
            if ( v129 + 0x1000000 >= 0x2000000 )
              sub_2A6BBC("elf32-arm.c", 17577);
            sub_2B72EC(
              *(_DWORD *)(v25 + 364),
              *(_DWORD *)(a1 + 4),
              (v129 >> 1) & 0x7FF
            | 0xF0009000
            | ((HIBYTE(v129) & 1) << 26)
            | (16 * v129) & 0x3FF0000
            | ((((v129 & 0x800000) == 0) ^ HIBYTE(v129) & 1) << 13)
            | ((((v129 & 0x400000) == 0) ^ HIBYTE(v129) & 1) << 11),
              v29 + 8);
            v47 = v29 + 12;
            goto LABEL_81;
          }
          if ( (v50 & ~v158) == 0 )
          {
LABEL_157:
            if ( v153 )
            {
LABEL_158:
              if ( v160 )
                sub_2A6BBC("elf32-arm.c", 18129);
              v47 = v29;
              goto LABEL_81;
            }
LABEL_201:
            if ( ((v53 >> (BYTE2(v28) & 0xF)) & 1) != 0 )
            {
              v130 = v29;
            }
            else
            {
              v130 = v29 + 2;
              v131 = __clz(__rbit32(v53 & ~(1 << (BYTE2(v28) & 0xF))));
              v132 = v131 | (8 * v148);
              v148 = v131;
              sub_2B72C4(*(_DWORD *)(v25 + 364), *(_DWORD *)(a1 + 4), v132 | 0x4600, v29);
            }
            sub_2B72EC(*(_DWORD *)(v25 + 364), *(_DWORD *)(a1 + 4), v156 | 0xE9300000 | (v148 << 16), v130);
            v133 = v139 - (_DWORD)(v130 + 8);
            sub_2B72EC(*(_DWORD *)(v25 + 364), *(_DWORD *)(a1 + 4), v53 | 0xE9100000 | (v148 << 16), v130 + 4);
            if ( v133 + 0x1000000 >= 0x2000000 )
              sub_2A6BBC("elf32-arm.c", 17577);
            sub_2B72EC(
              *(_DWORD *)(v25 + 364),
              *(_DWORD *)(a1 + 4),
              (v133 >> 1) & 0x7FF
            | 0xF0009000
            | ((HIBYTE(v133) & 1) << 26)
            | (16 * v133) & 0x3FF0000
            | ((((v133 & 0x800000) == 0) ^ HIBYTE(v133) & 1) << 13)
            | ((((v133 & 0x400000) == 0) ^ HIBYTE(v133) & 1) << 11),
              v130 + 8);
            v47 = v130 + 12;
            goto LABEL_81;
          }
        }
        else
        {
          if ( (v50 & ~v158) == 0 )
          {
            if ( (v52 & v50) != 0 )
            {
              if ( v51 )
                goto LABEL_157;
              v127 = __clz(__rbit32(v28 & 0x1F80 & ~(1 << (BYTE2(v28) & 0xF))));
              sub_2B72EC(
                *(_DWORD *)(v25 + 364),
                *(_DWORD *)(a1 + 4),
                (v148 << 16) | (v148 << 8) | 0xF1A00000 | (4 * v49),
                v29);
              sub_2B72C4(
                *(_DWORD *)(v25 + 364),
                *(_DWORD *)(a1 + 4),
                (8 * v148) | 0x4600 | v127 & 7 | ((unsigned __int16)(v127 >> 3) << 7),
                v29 + 4);
              sub_2B72EC(*(_DWORD *)(v25 + 364), *(_DWORD *)(a1 + 4), v53 | 0xE8B00000 | (v127 << 16), v29 + 6);
              sub_2B72EC(*(_DWORD *)(v25 + 364), *(_DWORD *)(a1 + 4), v156 | 0xE8900000 | (v127 << 16), v29 + 10);
              v47 = v29 + 14;
LABEL_81:
              v46 = (unsigned int)(v29 + 16);
              goto LABEL_70;
            }
            if ( v153 )
              goto LABEL_158;
            goto LABEL_200;
          }
          if ( !v51 )
          {
            v115 = *(_DWORD *)(a1 + 4);
            v116 = *(_DWORD *)(v25 + 364);
            v117 = (v148 << 16) | 0xF1A00000 | (4 * v49);
            v118 = __clz(__rbit32(v28 & 0x1F80 & ~(1 << (BYTE2(v28) & 0xF))));
            v119 = v29;
LABEL_176:
            v120 = v118 << 16;
            sub_2B72EC(v116, v115, v117 | (v118 << 8), v119);
            sub_2B72EC(*(_DWORD *)(v25 + 364), *(_DWORD *)(a1 + 4), v53 | 0xE8B00000 | v120, v29 + 4);
            sub_2B72EC(*(_DWORD *)(v25 + 364), *(_DWORD *)(a1 + 4), v156 | 0xE8900000 | v120, v29 + 8);
            v47 = v29 + 12;
            goto LABEL_81;
          }
        }
        if ( (v52 & v50) != 0 )
        {
          if ( !v153 )
            goto LABEL_201;
          goto LABEL_188;
        }
        if ( v153 )
        {
LABEL_188:
          v116 = *(_DWORD *)(v25 + 364);
          if ( ((v156 >> (BYTE2(v28) & 0xF)) & 1) != 0 )
            v118 = HIWORD(v28) & 0xF;
          else
            v118 = v28 & 0x1F80 & ~(1 << (BYTE2(v28) & 0xF));
          v119 = v29;
          v115 = *(_DWORD *)(a1 + 4);
          if ( ((v156 >> (BYTE2(v28) & 0xF)) & 1) == 0 )
            v118 = __rbit32(v118);
          v117 = (v148 << 16) | 0xF1A00000 | (4 * v49);
          if ( ((v156 >> (BYTE2(v28) & 0xF)) & 1) == 0 )
            v118 = __clz(v118);
          goto LABEL_176;
        }
LABEL_200:
        if ( !v51 )
          goto LABEL_158;
        goto LABEL_201;
      }
      v146 = (int)(unsigned __int16)v28 >> 15;
      if ( sub_347FB0((unsigned __int16)v28) <= 8 )
      {
        v105 = v29 + 4;
        sub_2B72EC(*(_DWORD *)(v25 + 364), *(_DWORD *)(a1 + 4), v28, v29);
        if ( !v146 )
        {
          v126 = v27 - 4;
          if ( v126 + 0x1000000 >= 0x2000000 )
            sub_2A6BBC("elf32-arm.c", 17577);
          v105 = v29 + 8;
          sub_2B72EC(
            *(_DWORD *)(v25 + 364),
            *(_DWORD *)(a1 + 4),
            (v126 >> 1) & 0x7FF
          | 0xF0009000
          | ((HIBYTE(v126) & 1) << 26)
          | (16 * v126) & 0x3FF0000
          | ((((v126 & 0x800000) == 0) ^ HIBYTE(v126) & 1) << 13)
          | ((((v126 & 0x400000) == 0) ^ HIBYTE(v126) & 1) << 11),
            v29 + 4);
        }
        v46 = (unsigned int)(v29 + 16);
        v47 = v105;
        goto LABEL_70;
      }
      if ( (v28 & 0x2000) != 0 )
        sub_2A6BBC("elf32-arm.c", 17798);
      if ( (v28 & 0xC000) == 0xC000 )
        sub_2A6BBC("elf32-arm.c", 17801);
      v38 = HIWORD(v28) & 0xF;
      v39 = v28 & 0xDF80;
      v40 = v28 & 0x7F;
      if ( ((v28 >> 21) & 1 & ((int)(unsigned __int16)v28 >> (BYTE2(v28) & 0xF))) != 0 )
      {
        sub_2A6BBC("elf32-arm.c", 17804);
        v108 = *(_DWORD *)(a1 + 4);
        v109 = *(_DWORD *)(v25 + 364);
      }
      else
      {
        v41 = *(_DWORD *)(v25 + 364);
        v42 = *(_DWORD *)(a1 + 4);
        v109 = v41;
        v108 = v42;
        if ( v28 >> 21 == 1860 )
        {
          if ( ((v39 >> (BYTE2(v28) & 0xF)) & 1) != 0 )
          {
            v43 = v29;
          }
          else
          {
            v125 = 8 * v38;
            v38 = __clz(__rbit32(v28 & 0x1F80 & ~(1 << (BYTE2(v28) & 0xF))));
            v43 = v29 + 2;
            sub_2B72C4(v41, v42, v125 | 0x4600 | v38 & 7 | ((unsigned __int16)(v38 >> 3) << 7), v29);
            v41 = *(_DWORD *)(v25 + 364);
            v42 = *(_DWORD *)(a1 + 4);
          }
          v44 = v38 << 16;
          sub_2B72EC(v41, v42, v40 | 0xE8B00000 | v44, v43);
          sub_2B72EC(*(_DWORD *)(v25 + 364), *(_DWORD *)(a1 + 4), v39 | 0xE8900000 | v44, v43 + 4);
          v45 = v43 + 8;
          if ( !v146 )
          {
            v121 = v139 - (_DWORD)v45;
            v122 = v139 - (_DWORD)v45 + 0x1000000;
            v123 = ((unsigned int)(v139 - (_DWORD)v45) >> 24) & 1;
            v124 = ((v139 - (_DWORD)v45) & 0x400000) == 0;
            v141 = (((v139 - (_DWORD)v45) & 0x800000) == 0) ^ v123;
            v151 = v124 ^ v123;
            if ( v122 >= 0x2000000 )
              sub_2A6BBC("elf32-arm.c", 17577);
            v45 = v43 + 12;
            sub_2B72EC(
              *(_DWORD *)(v25 + 364),
              *(_DWORD *)(a1 + 4),
              (v121 >> 1) & 0x7FF | 0xF0009000 | (v123 << 26) | (16 * v121) & 0x3FF0000 | (v141 << 13) | (v151 << 11),
              v43 + 8);
          }
          goto LABEL_69;
        }
      }
      v110 = (v38 << 16) | 0xE8B00000;
      v45 = v29 + 8;
      sub_2B72EC(v109, v108, v40 | v110, v29);
      sub_2B72EC(*(_DWORD *)(v25 + 364), *(_DWORD *)(a1 + 4), v39 | v110, v29 + 4);
      if ( !v146 )
      {
        v111 = v139 - (_DWORD)v45;
        v112 = v139 - (_DWORD)v45 + 0x1000000;
        v113 = ((unsigned int)(v139 - (_DWORD)v45) >> 24) & 1;
        v114 = (((v139 - (_DWORD)v45) & 0x800000) == 0) ^ v113;
        v140 = (((v139 - (_DWORD)v45) & 0x400000) == 0) ^ v113;
        if ( v112 >= 0x2000000 )
          sub_2A6BBC("elf32-arm.c", 17577);
        v45 = v29 + 12;
        sub_2B72EC(
          *(_DWORD *)(v25 + 364),
          *(_DWORD *)(a1 + 4),
          (v111 >> 1) & 0x7FF | 0xF0009000 | (v113 << 26) | (16 * v111) & 0x3FF0000 | (v114 << 13) | (v140 << 11),
          v29 + 8);
      }
LABEL_69:
      v46 = (unsigned int)(v29 + 16);
      v47 = v45;
LABEL_70:
      sub_2B7344(v25, a1, (char)v29, v47, v46);
      goto LABEL_39;
    }
  }
LABEL_51:
  if ( src[1] != 1879048193 )
  {
    if ( v4[95] )
    {
      v166[0] = a3;
      v166[1] = a4;
      sub_2AAF90((int)(v4 + 313), (int (__fastcall *)(_DWORD *, int))sub_2B2A6C, (int)v166);
    }
    if ( nmemb )
    {
      if ( v4[91] )
      {
        v91 = 0;
        v92 = 3 - a4;
        qsort(ptr, nmemb, 8u, (__compar_fn_t)sub_2B5F00);
        v95 = *ptr;
        v96 = ptr;
        v97 = nmemb - 1;
        do
        {
          if ( v91 == v97 )
            v93 = (unsigned int)a3;
          else
            v94 = v96[2];
          if ( v91 == v97 )
            v94 = *(_DWORD *)(v93 + 36);
          v93 = *((unsigned __int8 *)v96 + 4);
          if ( v93 == 97 )
          {
            v93 = v95 + 3;
            if ( v94 > v95 + 3 )
            {
              v100 = (char *)(a4 + v95);
              do
              {
                v101 = *v100;
                v100 += 4;
                v102 = *(v100 - 1);
                v103 = *(v100 - 3);
                v104 = *(v100 - 2);
                *(v100 - 1) = v101;
                *(v100 - 4) = v102;
                *(v100 - 2) = v103;
                *(v100 - 3) = v104;
                v93 = (unsigned int)&v100[v92];
              }
              while ( v94 > (unsigned int)&v100[v92] );
            }
          }
          else if ( v93 == 116 )
          {
            v98 = v95 + 1;
            if ( v94 > v98 )
            {
              v93 = a4 + v98;
              do
              {
                v99 = *(_BYTE *)(v93 - 1);
                v93 += 2;
                *(_BYTE *)(v93 - 3) = *(_BYTE *)(a4 + v98);
                *(_BYTE *)(a4 + v98) = v99;
                v98 += 2;
              }
              while ( v98 < v94 );
            }
          }
          v96 += 2;
          ++v91;
          v95 = v94;
        }
        while ( &ptr[2 * nmemb] != v96 );
      }
      free(ptr);
      src[36] = -1;
      src[37] = 0;
      src[38] = 0;
      return 0;
    }
    return 0;
  }
  v73 = 0;
  v74 = 0;
  v75 = 0;
  v76 = (_DWORD *)src[44];
  v77 = sub_2AB368(a3[9]);
  v78 = a3[10];
  srca = v77;
  if ( !v78 )
    v78 = a3[9];
  v79 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v80 = v79;
      if ( v79 < v78 )
        break;
      if ( !v76 )
        goto LABEL_125;
      v81 = v76[2];
      if ( v75 >= v81 && v75 == v81 )
      {
LABEL_113:
        if ( *v76 )
        {
          if ( *v76 == 1 )
          {
            v83 = 8 * v74;
            v84 = v76[1];
            ++v74;
            v73 -= 8;
            v85 = *(_QWORD *)(v84 + 56);
            LODWORD(v85) = v85 + *(_DWORD *)(v84 + 36);
            if ( (*(_BYTE *)a2 & 3) != 2 )
              LODWORD(v85) = (*(_DWORD *)(HIDWORD(v85) + 28) - v83 + v85 - v134) & 0x7FFFFFFF;
            (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)(a1 + 4) + 48))(v85, (int)srca + v83);
            (*(void (__fastcall **)(int, int))(*(_DWORD *)(a1 + 4) + 48))(1, (int)srca + v83 + 4);
          }
        }
        else
        {
          ++v75;
          v73 += 8;
          v79 = 8 * v75;
        }
        v76 = (_DWORD *)v76[3];
      }
      else
      {
        v82 = v81 == -1;
LABEL_111:
        if ( v82 )
          goto LABEL_113;
      }
    }
    if ( !v76 )
      break;
    v86 = v76[2];
    v82 = v75 == v86;
    if ( v75 >= v86 )
      goto LABEL_111;
    v87 = a4 + v79;
    ++v75;
    v79 = 8 * v75;
    v88 = (int)srca + 8 * v74++;
    sub_2B5F40(a1 + 4, v88, v87, v73);
  }
  do
  {
    v89 = a4 + v80;
    v90 = (int)srca + 8 * v74 - v79 + v80;
    v80 += 8;
    sub_2B5F40(a1 + 4, v90, v89, v73);
  }
  while ( v78 > v80 );
LABEL_125:
  if ( (a3[5] & 0x8200) == 0 )
    sub_2ADDE8(a1, (_DWORD *)a3[15], srca, 0, (unsigned int)a3[14], a3[9]);
  return 1;
}
