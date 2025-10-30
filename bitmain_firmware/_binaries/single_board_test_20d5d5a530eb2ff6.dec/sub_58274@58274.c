unsigned int __fastcall sub_58274(int a1, int a2, _DWORD *a3, unsigned __int8 *a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v7; // r10
  unsigned __int8 *v8; // r7
  char *v9; // r11
  char *v10; // r8
  int v11; // r3
  unsigned __int8 *v12; // r6
  int v13; // r3
  unsigned int v14; // r5
  unsigned int v15; // r7
  int v16; // r5
  char *v17; // r1
  char *v18; // r0
  bool v19; // zf
  int v20; // r3
  unsigned int v21; // r3
  size_t v22; // r7
  int v23; // r3
  unsigned int result; // r0
  int v25; // r1
  size_t v26; // r2
  size_t v27; // r5
  size_t v28; // r0
  size_t v29; // r5
  unsigned __int8 *v30; // r1
  int v31; // r0
  signed int v32; // r7
  unsigned int v33; // r5
  unsigned __int8 *v34; // r1
  unsigned int v35; // r7
  unsigned __int8 *v36; // r3
  int v37; // r3
  signed int v38; // r12
  size_t v39; // lr
  size_t v40; // r5
  int v41; // r0
  unsigned __int8 *v42; // r1
  size_t v43; // r3
  void *v44; // r0
  size_t v45; // r9
  unsigned int v46; // r3
  unsigned int v47; // r5
  unsigned int v48; // r5
  int v49; // r0
  size_t v50; // r5
  unsigned __int8 *v51; // r1
  int v52; // r3
  int v53; // r2
  int v54; // r5
  int v55; // r5
  bool v56; // zf
  size_t v57; // r5
  int v58; // r3
  int v59; // r2
  size_t v60; // r3
  int v61; // r5
  unsigned __int8 *v62; // r1
  unsigned int v63; // r5
  int v64; // r0
  size_t v65; // r2
  size_t v66; // r9
  size_t v67; // r2
  size_t v68; // r0
  size_t v69; // r5
  int v70; // r0
  unsigned __int8 *v71; // r9
  int v72; // r2
  size_t v73; // r5
  void *v74; // r0
  int v75; // r2
  int v76; // r0
  int v77; // r3
  int v78; // r1
  int v79; // r3
  unsigned __int8 *v80; // r1
  unsigned int v81; // r5
  unsigned __int8 *v82; // r5
  unsigned int v83; // r3
  int v84; // lr
  unsigned int v85; // r2
  int v86; // r1
  bool v87; // cc
  signed int v88; // r5
  int v89; // r3
  void (__fastcall *v90)(_DWORD, _DWORD); // r3
  void *v91; // r0
  void (__fastcall *v92)(_DWORD, _DWORD); // r3
  unsigned int v93; // r3
  int v94; // r9
  char *v95; // r0
  bool v96; // cc
  char *v97; // r1
  int v99; // r12
  signed int v100; // r0
  signed int v101; // r5
  char *v102; // r1
  bool v103; // cc
  int v104; // lr
  int v105; // r5
  int v106; // r5
  unsigned int v107; // lr
  unsigned int v108; // r10
  size_t v109; // r2
  unsigned int v110; // lr
  int v111; // r2
  int v112; // r0
  unsigned int v113; // r2
  _DWORD v117[5]; // [sp+20h] [bp-14h] BYREF

  v7 = a6;
  v8 = &a4[*a5];
  if ( a2 )
    v9 = (char *)(a2 + *a3);
  else
    v9 = 0;
  v117[0] = 0;
  if ( !a6 )
    v7 = v117;
  v117[1] = 0;
  *a5 = 0;
  v117[2] = 0;
  v117[3] = 0;
  *a3 = 0;
  v10 = (char *)a2;
  v11 = *(_DWORD *)(a1 + 204);
  v12 = a4;
  if ( v7[1] )
    v11 |= 1u;
  *(_DWORD *)(a1 + 204) = v11;
  while ( 2 )
  {
    v13 = *(_DWORD *)(a1 + 52);
LABEL_9:
    switch ( v13 )
    {
      case 0:
        v65 = v8 - v12;
        if ( (unsigned int)(v8 - v12) > 0x12 )
        {
          result = sub_57378(a1, v12, v65);
          if ( result > 0xFFFFFFEA )
            return result;
          v12 += result;
        }
        else
        {
          v64 = 0;
          *(_DWORD *)(a1 + 76) = 0;
          if ( v8 == v12 )
            return 7;
          v66 = 7;
          *(_DWORD *)(a1 + 80) = 7;
          *(_DWORD *)(a1 + 52) = 1;
LABEL_103:
          if ( v66 >= v65 )
            v66 = v65;
          memcpy((void *)(v64 + a1 + 208), v12, v66);
          v12 += v66;
          v67 = *(_DWORD *)(a1 + 80);
          v68 = *(_DWORD *)(a1 + 76) + v66;
          *(_DWORD *)(a1 + 76) = v68;
          if ( v68 < v67 )
          {
            v16 = v67 + 4 - v68;
            goto LABEL_14;
          }
          if ( (unsigned int)sub_57378(a1, (unsigned __int8 *)(a1 + 208), v67) > 0xFFFFFFEA )
            return sub_57378(a1, (unsigned __int8 *)(a1 + 208), *(_DWORD *)(a1 + 80));
        }
        continue;
      case 1:
        v64 = *(_DWORD *)(a1 + 76);
        v65 = v8 - v12;
        v66 = *(_DWORD *)(a1 + 80) - v64;
        goto LABEL_103;
      case 2:
        if ( *(_DWORD *)(a1 + 24) )
          sub_5A5C0(a1 + 108);
        if ( *(_DWORD *)(a1 + 20) )
          v72 = 0;
        else
          v72 = 0x20000;
        v73 = *(_DWORD *)(a1 + 64) + v72;
        if ( v73 > *(_DWORD *)(a1 + 68) )
        {
          v90 = *(void (__fastcall **)(_DWORD, _DWORD))(a1 + 8);
          *(_DWORD *)(a1 + 68) = 0;
          if ( v90 )
            v90(*(_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 72));
          else
            free(*(void **)(a1 + 72));
          if ( *(_DWORD *)a1 )
            v91 = (void *)(*(int (__fastcall **)(_DWORD, int))a1)(*(_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 64) + 4);
          else
            v91 = malloc(*(_DWORD *)(a1 + 64) + 4);
          *(_DWORD *)(a1 + 72) = v91;
          if ( !v91 )
            return -9;
          v92 = *(void (__fastcall **)(_DWORD, _DWORD))(a1 + 8);
          if ( v92 )
            v92(*(_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 84));
          else
            free(*(void **)(a1 + 84));
          v74 = *(_DWORD *)a1
              ? (void *)(*(int (__fastcall **)(_DWORD, size_t))a1)(*(_DWORD *)(a1 + 12), v73)
              : malloc(v73);
          *(_DWORD *)(a1 + 84) = v74;
          if ( !v74 )
            return -9;
          *(_DWORD *)(a1 + 68) = v73;
        }
        else
        {
          v74 = *(void **)(a1 + 84);
        }
        v50 = v8 - v12;
        *(_DWORD *)(a1 + 96) = v74;
        *(_DWORD *)(a1 + 76) = 0;
        *(_DWORD *)(a1 + 80) = 0;
        *(_DWORD *)(a1 + 104) = 0;
        *(_DWORD *)(a1 + 100) = 0;
        *(_DWORD *)(a1 + 52) = 3;
        if ( (unsigned int)(v8 - v12) <= 3 )
        {
LABEL_126:
          v113 = 4;
          v112 = 0;
          *(_DWORD *)(a1 + 52) = 4;
          *(_DWORD *)(a1 + 76) = 0;
LABEL_98:
          if ( v50 >= v113 )
            v50 = v113;
          v62 = v12;
          v12 += v50;
          memcpy((void *)(v112 + *(_DWORD *)(a1 + 72)), v62, v50);
          v63 = v50 + *(_DWORD *)(a1 + 76);
          *(_DWORD *)(a1 + 76) = v63;
          if ( v63 <= 3 )
          {
            v16 = 4 - v63;
            goto LABEL_14;
          }
          v51 = *(unsigned __int8 **)(a1 + 72);
        }
        else
        {
          v51 = v12;
          v12 += 4;
        }
LABEL_69:
        v52 = *v51 + (v51[2] << 16) + (v51[1] << 8) + (v51[3] << 24);
        if ( v52 )
        {
          v53 = v52 & 0x7FFFFFFF;
          if ( (v52 & 0x7FFFFFFFu) > *(_DWORD *)(a1 + 64) )
            return -2;
          v54 = *(_DWORD *)(a1 + 44);
          if ( v52 < 0 )
          {
            *(_DWORD *)(a1 + 80) = v53;
            if ( v54 )
              sub_5A5C0(a1 + 156);
            *(_DWORD *)(a1 + 52) = 5;
          }
          else
          {
            v55 = v53 + 4 * v54;
            v56 = v12 == v8;
            if ( v12 != v8 )
              v56 = v9 == v10;
            *(_DWORD *)(a1 + 52) = 7;
            *(_DWORD *)(a1 + 80) = v55;
            if ( v56 )
            {
              v16 = v55 + 4;
              goto LABEL_14;
            }
          }
        }
        else
        {
          *(_DWORD *)(a1 + 52) = 10;
        }
        continue;
      case 3:
        v50 = v8 - v12;
        if ( (unsigned int)(v8 - v12) <= 3 )
          goto LABEL_126;
        if ( v13 != 4 )
        {
          v51 = v12;
          v12 += 4;
          goto LABEL_69;
        }
        v112 = *(_DWORD *)(a1 + 76);
        v50 = v8 - (v12 + 4);
        v12 += 4;
        v113 = 4 - v112;
        goto LABEL_98;
      case 4:
        v112 = *(_DWORD *)(a1 + 76);
        v50 = v8 - v12;
        v113 = 4 - v112;
        goto LABEL_98;
      case 5:
        v57 = (size_t)v10;
        if ( v10 )
        {
          v57 = v8 - v12;
          if ( v8 - v12 >= (unsigned int)(v9 - v10) )
            v57 = v9 - v10;
          if ( v57 >= *(_DWORD *)(a1 + 80) )
            v57 = *(_DWORD *)(a1 + 80);
          memcpy(v10, v12, v57);
          if ( !*(_DWORD *)(a1 + 204) )
          {
            if ( *(_DWORD *)(a1 + 44) )
              sub_5A628(a1 + 156, v12);
            if ( *(_DWORD *)(a1 + 24) )
              sub_5A628(a1 + 108, v12);
          }
          if ( *(_QWORD *)(a1 + 32) )
            *(_QWORD *)(a1 + 56) -= v57;
          if ( !*(_DWORD *)(a1 + 20) )
            sub_5707C((_DWORD *)a1, v10, v57, a2, 0);
        }
        v58 = *(_DWORD *)(a1 + 80);
        v12 += v57;
        v10 += v57;
        if ( v57 != v58 )
        {
          v59 = *(_DWORD *)(a1 + 44);
          v60 = v58 - v57;
          *(_DWORD *)(a1 + 80) = v60;
          if ( v59 )
            v61 = 4;
          else
            v61 = 0;
          v16 = v61 + v60 + 4;
          goto LABEL_14;
        }
        if ( !*(_DWORD *)(a1 + 44) )
          goto LABEL_111;
        *(_DWORD *)(a1 + 76) = 0;
        *(_DWORD *)(a1 + 52) = 6;
        continue;
      case 6:
        v69 = v8 - v12;
        v70 = *(_DWORD *)(a1 + 76);
        if ( v8 - v12 <= 3 || v70 )
        {
          v71 = (unsigned __int8 *)(a1 + 208);
          v80 = v12;
          if ( v69 >= 4 - v70 )
            v69 = 4 - v70;
          v12 += v69;
          memcpy(&v71[v70], v80, v69);
          v81 = v69 + *(_DWORD *)(a1 + 76);
          *(_DWORD *)(a1 + 76) = v81;
          if ( v81 <= 3 )
          {
            v16 = 1;
            goto LABEL_14;
          }
        }
        else
        {
          v71 = v12;
          v12 += 4;
        }
        if ( *(_DWORD *)(a1 + 204) )
          goto LABEL_111;
        v106 = *v71 + (v71[2] << 16) + (v71[1] << 8) + (v71[3] << 24);
        if ( sub_5A7B0(a1 + 156) == v106 )
          goto LABEL_111;
        return -7;
      case 7:
        v46 = *(_DWORD *)(a1 + 80);
        if ( v8 - v12 < v46 )
        {
          *(_DWORD *)(a1 + 76) = 0;
          *(_DWORD *)(a1 + 52) = 8;
          continue;
        }
        v82 = v12;
        v12 += v46;
        if ( *(_DWORD *)(a1 + 44) )
        {
LABEL_159:
          v93 = v46 - 4;
          *(_DWORD *)(a1 + 80) = v93;
          v94 = v82[v93] + (v82[v93 + 2] << 16) + (v82[v93 + 1] << 8) + (v82[v93 + 3] << 24);
          if ( sub_5A430(v82, v93, 0) != v94 )
            return -7;
        }
LABEL_133:
        v83 = *(_DWORD *)(a1 + 64);
        if ( v9 - v10 < v83 )
        {
          v95 = *(char **)(a1 + 88);
          v85 = *(_DWORD *)(a1 + 92);
        }
        else
        {
          v84 = *(_DWORD *)(a1 + 88);
          if ( !v84 )
          {
            v86 = *(_DWORD *)(a1 + 92);
            goto LABEL_141;
          }
          v85 = *(_DWORD *)(a1 + 92);
          v86 = *(_DWORD *)(a1 + 96);
          if ( v86 != v84 + v85 )
          {
            v87 = v85 > 0x40000000;
            if ( v85 <= 0x40000000 )
              v86 = *(_DWORD *)(a1 + 92);
            else
              v85 -= 0x10000;
            if ( v87 )
            {
              v86 = 0x10000;
              v84 += v85;
            }
LABEL_141:
            v88 = sub_50330(v82, v10, *(_DWORD *)(a1 + 80), v83, v84, v86);
            if ( v88 < 0 )
              return -16;
            if ( *(_DWORD *)(a1 + 24) && !*(_DWORD *)(a1 + 204) )
            {
              sub_5A628(a1 + 108, v10);
              if ( !*(_QWORD *)(a1 + 32) )
              {
LABEL_145:
                v89 = *(_DWORD *)(a1 + 20);
                if ( v89 )
                {
LABEL_146:
                  v10 += v88;
                  *(_DWORD *)(a1 + 52) = 3;
                  continue;
                }
LABEL_201:
                sub_5707C((_DWORD *)a1, v10, v88, a2, v89);
                goto LABEL_146;
              }
            }
            else if ( !*(_QWORD *)(a1 + 32) )
            {
              goto LABEL_145;
            }
            v89 = *(_DWORD *)(a1 + 20);
            *(_QWORD *)(a1 + 56) -= v88;
            if ( v89 )
              goto LABEL_146;
            goto LABEL_201;
          }
          v95 = *(char **)(a1 + 88);
        }
        if ( *(_DWORD *)(a1 + 20) )
        {
          v96 = v95 != 0;
          if ( v95 )
            v96 = v85 > 0x40000000;
          v97 = *(char **)(a1 + 96);
          if ( v96 )
            goto LABEL_169;
LABEL_194:
          v99 = v85;
          goto LABEL_170;
        }
        v102 = *(char **)(a1 + 84);
        if ( v102 != v95 )
        {
          v103 = v95 != 0;
          if ( v95 )
            v103 = v85 > 0x40000000;
          v104 = v103;
          if ( v85 > 0x10000 )
            v97 = v102 + 0x10000;
          else
            v97 = &v102[v85];
          *(_DWORD *)(a1 + 96) = v97;
          if ( v104 )
          {
LABEL_169:
            v99 = 0x10000;
            v95 += v85 - 0x10000;
            goto LABEL_170;
          }
          goto LABEL_194;
        }
        if ( v85 > 0x20000 )
        {
          memcpy(v95, &v95[v85 - 0x10000], 0x10000u);
          *(_DWORD *)(a1 + 92) = 0x10000;
          v85 = 0x10000;
          v102 = *(char **)(a1 + 84);
          v95 = *(char **)(a1 + 88);
          v83 = *(_DWORD *)(a1 + 64);
        }
        v97 = &v102[v85];
        v99 = v85;
        *(_DWORD *)(a1 + 96) = v97;
LABEL_170:
        v100 = sub_50330(v82, v97, *(_DWORD *)(a1 + 80), v83, (int)v95, v99);
        v101 = v100;
        if ( v100 < 0 )
          return -16;
        if ( *(_DWORD *)(a1 + 24) && !*(_DWORD *)(a1 + 204) )
        {
          sub_5A628(a1 + 108, *(void **)(a1 + 96));
          v38 = v101;
        }
        else
        {
          v38 = v100;
        }
        if ( *(_QWORD *)(a1 + 32) )
          *(_QWORD *)(a1 + 56) -= v101;
        *(_DWORD *)(a1 + 100) = v101;
        v39 = 0;
        *(_DWORD *)(a1 + 104) = 0;
        *(_DWORD *)(a1 + 52) = 9;
LABEL_44:
        if ( v10 )
        {
          v40 = v9 - v10;
          if ( v9 - v10 >= v38 - v39 )
            v40 = v38 - v39;
          memcpy(v10, (const void *)(*(_DWORD *)(a1 + 96) + v39), v40);
          if ( !*(_DWORD *)(a1 + 20) )
            sub_5707C((_DWORD *)a1, v10, v40, a2, 1);
          v10 += v40;
          v38 = *(_DWORD *)(a1 + 100);
          v39 = v40 + *(_DWORD *)(a1 + 104);
          *(_DWORD *)(a1 + 104) = v39;
        }
        if ( v38 != v39 )
        {
          v16 = 4;
          goto LABEL_14;
        }
LABEL_111:
        *(_DWORD *)(a1 + 52) = 3;
        continue;
      case 8:
        v41 = *(_DWORD *)(a1 + 76);
        v42 = v12;
        v43 = *(_DWORD *)(a1 + 80) - v41;
        v44 = (void *)(v41 + *(_DWORD *)(a1 + 72));
        if ( v43 >= v8 - v12 )
          v43 = v8 - v12;
        v45 = v43;
        v12 += v43;
        memcpy(v44, v42, v43);
        v46 = *(_DWORD *)(a1 + 80);
        v47 = *(_DWORD *)(a1 + 76) + v45;
        *(_DWORD *)(a1 + 76) = v47;
        if ( v47 < v46 )
        {
          v48 = v46 + 4 - v47;
          if ( *(_DWORD *)(a1 + 44) )
            v49 = 4;
          else
            v49 = 0;
          v16 = v48 + v49;
          goto LABEL_14;
        }
        v82 = *(unsigned __int8 **)(a1 + 72);
        if ( *(_DWORD *)(a1 + 44) )
          goto LABEL_159;
        goto LABEL_133;
      case 9:
        v38 = *(_DWORD *)(a1 + 100);
        v39 = *(_DWORD *)(a1 + 104);
        goto LABEL_44;
      case 10:
        if ( !*(_QWORD *)(a1 + 56) )
        {
          v37 = *(_DWORD *)(a1 + 24);
          if ( v37 )
          {
            v32 = v8 - v12;
            if ( v32 > 3 )
            {
              v36 = v12;
              v12 += 4;
            }
            else
            {
              v31 = 0;
              *(_DWORD *)(a1 + 76) = 0;
              v33 = 4;
              *(_DWORD *)(a1 + 52) = 11;
LABEL_35:
              if ( v32 >= v33 )
                v32 = v33;
              v34 = v12;
              v12 += v32;
              memcpy((void *)(v31 + *(_DWORD *)(a1 + 72)), v34, v32);
              v35 = v32 + *(_DWORD *)(a1 + 76);
              *(_DWORD *)(a1 + 76) = v35;
              if ( v35 <= 3 )
              {
                v16 = 4 - v35;
                goto LABEL_14;
              }
              v36 = *(unsigned __int8 **)(a1 + 72);
            }
            if ( !*(_DWORD *)(a1 + 204) )
            {
              v105 = *v36 + (v36[2] << 16) + (v36[1] << 8) + (v36[3] << 24);
              if ( sub_5A7B0(a1 + 108) != v105 )
                return -18;
            }
            v37 = 0;
          }
          *(_DWORD *)(a1 + 52) = v37;
          v16 = v37;
          *(_DWORD *)(a1 + 88) = v37;
          *(_DWORD *)(a1 + 92) = v37;
          *(_DWORD *)(a1 + 204) = v37;
          goto LABEL_14;
        }
        return -14;
      case 11:
        v31 = *(_DWORD *)(a1 + 76);
        v32 = v8 - v12;
        v33 = 4 - v31;
        goto LABEL_35;
      case 12:
        v26 = v8 - v12;
        if ( v8 - v12 > 3 )
        {
          v30 = v12;
          v12 += 4;
          goto LABEL_125;
        }
        v27 = 4;
        v25 = 4;
        *(_DWORD *)(a1 + 76) = 4;
        *(_DWORD *)(a1 + 80) = 8;
        *(_DWORD *)(a1 + 52) = 13;
LABEL_27:
        if ( v27 >= v26 )
          v27 = v26;
        memcpy((void *)(a1 + 208 + v25), v12, v27);
        v12 += v27;
        v28 = *(_DWORD *)(a1 + 80);
        v29 = v27 + *(_DWORD *)(a1 + 76);
        *(_DWORD *)(a1 + 76) = v29;
        if ( v29 >= v28 )
        {
          v30 = (unsigned __int8 *)(a1 + 212);
LABEL_125:
          v75 = v30[2];
          v76 = v30[1];
          v77 = *v30;
          v78 = v30[3];
          *(_DWORD *)(a1 + 36) = 0;
          *(_DWORD *)(a1 + 52) = 14;
          v79 = v77 + (v75 << 16) + (v76 << 8) + (v78 << 24);
          *(_DWORD *)(a1 + 32) = v79;
          *(_DWORD *)(a1 + 80) = v79;
          continue;
        }
        v16 = v28 - v29;
LABEL_14:
        if ( !*(_DWORD *)(a1 + 20) )
        {
          v17 = *(char **)(a1 + 88);
          v18 = *(char **)(a1 + 84);
          v19 = v17 == 0;
          if ( v17 )
            v19 = v17 == v18;
          if ( !v19 && !*v7 )
          {
            v20 = *(_DWORD *)(a1 + 52);
            if ( (unsigned int)(v20 - 2) <= 7 )
            {
              if ( v20 != 9 )
              {
                v21 = *(_DWORD *)(a1 + 92);
                v22 = v21;
                if ( v21 >= 0x10000 )
                  v22 = 0x10000;
                memcpy(v18, &v17[v21 - v22], v22);
                v23 = *(_DWORD *)(a1 + 84);
                *(_DWORD *)(a1 + 92) = v22;
                *(_DWORD *)(a1 + 88) = v23;
                *(_DWORD *)(a1 + 96) = v22 + v23;
                goto LABEL_24;
              }
              v107 = *(_DWORD *)(a1 + 100);
              v108 = *(_DWORD *)(a1 + 96) - (_DWORD)v18;
              if ( v107 > 0x10000 )
              {
                v109 = 0;
              }
              else
              {
                v109 = 0x10000 - v107;
                if ( v108 < 0x10000 - v107 )
                {
                  v110 = 0;
                  v109 = *(_DWORD *)(a1 + 96) - (_DWORD)v18;
LABEL_222:
                  memcpy(&v18[v110], &v17[*(_DWORD *)(a1 + 92) - *(_DWORD *)(a1 + 104) - v109], v109);
                  v111 = *(_DWORD *)(a1 + 84);
                  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a1 + 104) + v108;
                  *(_DWORD *)(a1 + 88) = v111;
                  goto LABEL_24;
                }
              }
              v110 = v108 - v109;
              goto LABEL_222;
            }
          }
        }
LABEL_24:
        result = v16;
        *a5 = v12 - a4;
        *a3 = &v10[-a2];
        return result;
      case 13:
        v25 = *(_DWORD *)(a1 + 76);
        v26 = v8 - v12;
        v27 = *(_DWORD *)(a1 + 80) - v25;
        goto LABEL_27;
      case 14:
        v14 = *(_DWORD *)(a1 + 80);
        v15 = v8 - v12;
        if ( v15 >= v14 )
          v15 = *(_DWORD *)(a1 + 80);
        v16 = v14 - v15;
        v12 += v15;
        *(_DWORD *)(a1 + 80) = v16;
        if ( !v16 )
        {
          *(_DWORD *)(a1 + 52) = 0;
          *(_DWORD *)(a1 + 88) = 0;
          *(_DWORD *)(a1 + 92) = 0;
          *(_DWORD *)(a1 + 204) = 0;
        }
        goto LABEL_14;
      default:
        goto LABEL_9;
    }
  }
}
