void __fastcall sub_D9338(const char *a1, int a2, int a3, int a4)
{
  unsigned int v4; // r4
  int v5; // r5
  _BYTE *v7; // r1
  const char *v8; // r7
  char *v9; // r6
  int v10; // r3
  bool v11; // zf
  const char *v12; // r3
  int v13; // r2
  int v14; // t1
  bool v15; // zf
  char *v16; // r8
  int v17; // r4
  int v18; // r0
  char *v19; // r2
  unsigned int v20; // r3
  bool v21; // cc
  int v22; // r4
  int v23; // t1
  int v24; // r10
  _BYTE *v25; // r0
  char *v26; // r4
  _BYTE *v27; // r8
  int v28; // r4
  int v29; // r0
  int v30; // r3
  char *v31; // r4
  char *v32; // r2
  int v33; // lr
  void *v34; // r3
  void *v35; // r1
  int v36; // r0
  int v37; // r9
  int v38; // r0
  char *v39; // r0
  const void *v40; // r3
  int *v41; // r6
  int v42; // r0
  int v43; // r1
  int v44; // r2
  int v45; // r3
  int *v46; // r12
  _DWORD *v47; // lr
  int v48; // r0
  int v49; // r1
  int v50; // r2
  char *v51; // r6
  char *v52; // r2
  int v53; // r8
  int v54; // r9
  int v55; // r3
  bool v56; // zf
  char *v57; // r3
  int v58; // r1
  int v59; // t1
  bool v60; // zf
  char *v61; // r0
  char *v62; // r10
  char *v63; // r0
  int v64; // r2
  int v65; // r4
  int v66; // r0
  char *v68; // r3
  int v69; // r1
  int v70; // t1
  bool v71; // zf
  int v72; // r3
  bool v73; // zf
  int v74; // r3
  int v75; // t1
  bool v76; // zf
  char *v77; // r3
  int v78; // r1
  int v79; // t1
  bool v80; // zf
  bool v81; // zf
  int v82; // r0
  int v83; // r3
  bool v84; // zf
  int v85; // r9
  int v86; // r4
  int v87; // r0
  int v88; // r1
  int v89; // r2
  int v90; // r3
  int v91; // r3
  int v92; // r3
  int *v93; // r4
  bool v94; // zf
  unsigned int v95; // r3
  int v96; // r2
  int v97; // r3
  int v98; // r1
  int v99; // r0
  int v100; // r0
  int v101; // [sp+Ch] [bp-98h]
  int v102; // [sp+10h] [bp-94h]
  const void *v103; // [sp+14h] [bp-90h]
  int v104; // [sp+18h] [bp-8Ch]
  _DWORD *v105; // [sp+1Ch] [bp-88h]
  int v108; // [sp+28h] [bp-7Ch]
  int v109; // [sp+2Ch] [bp-78h]
  char *v110; // [sp+30h] [bp-74h]
  int v111; // [sp+34h] [bp-70h]
  int v112; // [sp+38h] [bp-6Ch]
  char *v113; // [sp+3Ch] [bp-68h] BYREF
  int v114; // [sp+40h] [bp-64h] BYREF
  int v115; // [sp+44h] [bp-60h] BYREF
  char *s1; // [sp+48h] [bp-5Ch] BYREF
  int v117; // [sp+4Ch] [bp-58h] BYREF
  void *ptr; // [sp+50h] [bp-54h] BYREF
  int v119; // [sp+54h] [bp-50h] BYREF
  void *v120; // [sp+58h] [bp-4Ch] BYREF
  int v121; // [sp+5Ch] [bp-48h] BYREF
  int v122; // [sp+60h] [bp-44h] BYREF
  int v123; // [sp+64h] [bp-40h]
  int v124; // [sp+68h] [bp-3Ch]
  int v125; // [sp+6Ch] [bp-38h]
  int v126; // [sp+70h] [bp-34h] BYREF
  char *v127; // [sp+74h] [bp-30h] BYREF
  int v128; // [sp+78h] [bp-2Ch]
  int v129; // [sp+7Ch] [bp-28h]
  int v130; // [sp+80h] [bp-24h]
  int v131; // [sp+84h] [bp-20h]
  void *v132[2]; // [sp+88h] [bp-1Ch] BYREF
  _BYTE v133[20]; // [sp+90h] [bp-14h] BYREF

  v4 = (unsigned int)a1;
  v5 = 0;
  v113 = (char *)a1;
  v117 = 0;
  if ( a1 )
  {
    if ( *a1 )
    {
      v51 = (char *)&a1[strlen(a1)];
      v52 = v51 - 1;
      s1 = v51 - 1;
      if ( v4 < (unsigned int)(v51 - 1) )
      {
        v53 = 0;
        v54 = -1;
        while ( 1 )
        {
          v55 = (unsigned __int8)*v52;
          v56 = v55 == 32;
          if ( v55 != 32 )
            v56 = v55 == 9;
          if ( v56 )
          {
            v57 = v52 - 1;
            while ( 1 )
            {
              s1 = v57;
              v52 = v57;
              if ( v57 == (char *)v4 )
                break;
              v59 = (unsigned __int8)*v57--;
              v58 = v59;
              v60 = v59 == 9;
              if ( v59 != 9 )
                v60 = v58 == 32;
              if ( !v60 )
                goto LABEL_85;
            }
            v61 = (char *)v4;
            v62 = (char *)(v4 + 1);
            v127 = (char *)(v4 + 1);
          }
          else
          {
LABEL_85:
            v68 = v52 - 1;
            do
            {
              v52 = v68;
              s1 = v68;
              if ( (unsigned int)v68 <= v4 )
              {
                v62 = v68 + 1;
                v61 = v68;
                v127 = v68 + 1;
                goto LABEL_77;
              }
              v70 = (unsigned __int8)*v68--;
              v69 = v70;
              v71 = v70 == 9;
              if ( v70 != 9 )
                v71 = v69 == 32;
            }
            while ( !v71 );
            v62 = v52 + 1;
            v127 = v52 + 1;
            v72 = (unsigned __int8)*v52;
            v73 = v72 == 9;
            if ( v72 != 9 )
              v73 = v72 == 32;
            if ( v73 )
            {
              --v52;
              while ( 1 )
              {
                s1 = v52;
                v61 = v52;
                if ( (char *)v4 == v52 )
                  break;
                v75 = (unsigned __int8)*v52--;
                v74 = v75;
                v76 = v75 == 9;
                if ( v75 != 9 )
                  v76 = v74 == 32;
                if ( !v76 )
                {
                  v52 = v61;
                  goto LABEL_101;
                }
              }
            }
            else
            {
              v81 = v72 == 9;
              if ( v72 != 9 )
                v81 = v72 == 32;
              if ( v81 )
              {
                v61 = v52;
              }
              else
              {
LABEL_101:
                v77 = v52 - 1;
                do
                {
                  s1 = v77;
                  v61 = v77;
                  if ( (unsigned int)v77 <= v4 )
                    break;
                  v79 = (unsigned __int8)*v77--;
                  v78 = v79;
                  v80 = v79 == 32;
                  if ( v79 != 32 )
                    v80 = v78 == 9;
                }
                while ( !v80 );
              }
            }
          }
LABEL_77:
          v63 = v61 + 1;
          s1 = v63;
          v64 = v52 - v63 + 1;
          if ( v64 == 6 )
          {
            if ( strncmp(v63, "thread", 6u) )
              goto LABEL_121;
            if ( v54 != -1 )
              sub_946E0("You can specify only one thread.");
            v82 = sub_242338(v62, v132);
            v83 = *(unsigned __int8 *)v132[0];
            v84 = v83 == 9;
            if ( v83 != 9 )
              v84 = (v83 & 0xDF) == 0;
            if ( !v84 )
              sub_242324(v127);
            v54 = *(_DWORD *)(v82 + 20);
          }
          else
          {
            if ( v64 != 4 || strncmp(v63, "mask", 4u) )
            {
LABEL_121:
              v7 = v113;
              v101 = v54;
              v102 = v53;
              goto LABEL_122;
            }
            if ( v5 )
              sub_946E0("You can specify only one mask.");
            v65 = sub_26C1E0(0);
            v66 = sub_14CCCC(&v127);
            v5 = 1;
            v53 = sub_26EBA8(v66);
            a3 = 1;
            sub_26C300(v65);
          }
          v51 = s1;
          v4 = (unsigned int)v113;
          v52 = s1 - 1;
          if ( v113 >= --s1 )
          {
            v101 = v54;
            v7 = v113;
            v102 = v53;
            goto LABEL_122;
          }
        }
      }
      v102 = 0;
      v7 = (_BYTE *)v4;
      v101 = -1;
LABEL_122:
      v4 = (unsigned int)v51;
    }
    else
    {
      v7 = a1;
      v102 = *(unsigned __int8 *)a1;
      v5 = 0;
      v101 = -1;
    }
  }
  else
  {
    v7 = 0;
    v102 = 0;
    v5 = 0;
    v101 = -1;
  }
  v132[0] = v133;
  dword_487CE0 = 0;
  sub_CB204(v132, v7, v4);
  v8 = (const char *)v132[0];
  v113 = (char *)v132[0];
  sub_1C427C(&ptr, &v113, 0, 0, 0);
  v9 = v113;
  if ( v8 < v113 )
  {
    v10 = (unsigned __int8)*(v113 - 1);
    v11 = v10 == 32;
    if ( v10 != 32 )
      v11 = v10 == 9;
    if ( v11 )
    {
      v12 = v113 - 1;
      do
      {
        v9 = (char *)v12;
        if ( v8 == v12 )
          break;
        v14 = *(unsigned __int8 *)--v12;
        v13 = v14;
        v15 = v14 == 9;
        if ( v14 != 9 )
          v15 = v13 == 32;
      }
      while ( v15 );
    }
  }
  v16 = (char *)ptr;
  v17 = *((_DWORD *)ptr + 2);
  if ( v17 <= 0 )
  {
LABEL_21:
    v22 = v9 - v8;
    if ( v9 - v8 > 0 )
    {
      do
      {
        v23 = (unsigned __int8)*--v9;
        if ( !isspace(v23) )
          break;
        --v22;
      }
      while ( v22 );
    }
    sub_946E0("Cannot watch constant value `%.*s'.", v22, v8);
  }
  while ( 2 )
  {
    v18 = sub_1C4260(v16, v17, &v121, &v127);
    v17 -= v121;
    v19 = &v16[16 * v17];
    switch ( *((_DWORD *)v19 + 4) )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x1E:
      case 0x21:
      case 0x23:
      case 0x24:
      case 0x26:
      case 0x27:
      case 0x2B:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x3A:
      case 0x3B:
      case 0x3C:
      case 0x3E:
      case 0x4A:
      case 0x58:
      case 0x59:
      case 0x5A:
      case 0x5D:
      case 0x5E:
      case 0x5F:
        goto LABEL_20;
      case 0x28:
        v20 = *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(*((_DWORD *)v19 + 12) + 32) >> 3));
        v21 = v20 > 1;
        if ( v20 != 1 )
          v21 = v20 - 10 > 1;
        if ( v21 )
          goto LABEL_25;
LABEL_20:
        if ( v17 <= 0 )
          goto LABEL_21;
        continue;
      default:
LABEL_25:
        v24 = dword_487CE0;
        v109 = sub_26C1E0(v18);
        sub_14CDB8(ptr, &v117, &v114, &v115, 0, a3);
        if ( v114 )
        {
          if ( !a3 )
          {
            sub_26C3B8(v114);
            v112 = 0;
            v111 = 0;
            goto LABEL_28;
          }
          v111 = sub_26BC90(v114);
          v112 = sub_26BCA0(v114);
        }
        else
        {
          if ( !a3 )
          {
            v112 = 0;
            v111 = 0;
            goto LABEL_28;
          }
          v112 = v114;
          v111 = v114;
        }
        v114 = sub_2616BC(v115);
        sub_26C3B8(v114);
        sub_26C300(v109);
        if ( v5 )
        {
          v99 = sub_26EBA8(v114);
          v100 = sub_23253C(v99, v102);
          if ( v100 == -1 )
            sub_946E0("This target does not support masked watchpoints.");
          if ( v100 == -2 )
            sub_946E0("Invalid mask or memory region.");
        }
        v24 = 0;
LABEL_28:
        s1 = (char *)sub_9360C(v113);
        v25 = sub_93610((unsigned __int8 *)s1);
        v26 = s1;
        v27 = v25;
        if ( v25 - s1 > 0 && !strncmp(s1, "if", v25 - s1) )
        {
          v103 = v27 + 1;
          dword_487CE0 = 0;
          s1 = v27 + 1;
          sub_1C427C(&v120, &s1, 0, 0, 0);
          if ( v120 )
            free(v120);
          v26 = s1;
          v110 = s1;
          v104 = dword_487CE0;
        }
        else
        {
          v110 = 0;
          v103 = 0;
          v104 = 0;
        }
        if ( *v26 )
          sub_946E0("Junk at end of command.");
        v28 = sub_C37D4(v24);
        ((void (__fastcall *)(int *, int))loc_15CFA0)(&v122, v28);
        v29 = v28;
        if ( v28 )
          v29 = 1;
        if ( !v24 )
          v29 = 0;
        if ( v29 && (sub_15FA2C(&v127, v28), (v29 = sub_15CD58(v127, v128, v129, v130, v131)) != 0) )
        {
          v85 = ((int (__fastcall *)(int))loc_1602C8)(v28);
          v86 = ((int (__fastcall *)(int))loc_15F9E0)(v28);
          v105 = (_DWORD *)sub_D03A0(v85, v86, 17, (int)&dword_4784E4);
          v87 = (int)v127;
          v88 = v128;
          v89 = v129;
          v90 = v130;
          v105[4] = 1;
          v105[5] = 0;
          v105[13] = v87;
          v105[14] = v88;
          v105[15] = v89;
          v105[16] = v90;
          v91 = v105[7];
          v105[17] = v131;
          *(_DWORD *)(v91 + 44) = v85;
          *(_DWORD *)(v105[7] + 68) = v86;
          v92 = v105[3];
          v93 = (int *)v105[7];
          v94 = v92 == 3;
          if ( v92 != 3 )
            v94 = v92 == 26;
          v95 = v92 - 6;
          v96 = v94;
          if ( v95 <= 3 )
            v97 = v96 | 1;
          else
            v97 = v96;
          v98 = v93[17];
          if ( !v97 )
            v98 = sub_CA074(v93[11], v98);
          v93[13] = v98;
        }
        else
        {
          v105 = (_DWORD *)v29;
        }
        if ( a2 == 1 )
        {
          v108 = 8;
        }
        else
        {
          if ( a2 == 2 )
            v30 = 9;
          else
            v30 = 7;
          v108 = v30;
        }
        v31 = (char *)sub_9836C(0xDCu);
        memset(v31, 0, 0xDCu);
        *((_DWORD *)v31 + 4) = 1;
        v31[32] = 0;
        v31[33] = 0;
        *((_DWORD *)v31 + 13) = 0;
        *((_DWORD *)v31 + 14) = 0;
        *((_DWORD *)v31 + 15) = 0;
        *((_DWORD *)v31 + 16) = 0;
        v32 = off_46D5A4[0][2];
        v33 = dword_46DE54;
        *((_DWORD *)v31 + 17) = 0;
        *((_DWORD *)v31 + 28) = -1;
        *((_DWORD *)v31 + 23) = v32;
        *(_DWORD *)v31 = off_37E21C;
        if ( v5 )
          v34 = &unk_478374;
        else
          v34 = &unk_478574;
        *((_DWORD *)v31 + 3) = v108;
        *((_DWORD *)v31 + 1) = v34;
        v35 = ptr;
        v36 = dword_487D2C;
        *((_DWORD *)v31 + 28) = v101;
        *((_DWORD *)v31 + 24) = v33;
        *((_DWORD *)v31 + 27) = v31;
        *((_DWORD *)v31 + 37) = v24;
        *((_DWORD *)v31 + 39) = v104;
        *((_DWORD *)v31 + 18) = v36;
        *((_DWORD *)v31 + 36) = v35;
        *((_DWORD *)v31 + 5) = 3;
        ptr = 0;
        if ( a3 )
        {
          v37 = sub_26BC70(v114);
          v38 = sub_26EBA8(v114);
          (*((void (__fastcall **)(int *, int, int))off_46D5A4[0] + 35))(&v119, v37, v38);
          *((_DWORD *)v31 + 35) = v119;
          v39 = sub_93140("-location %.*s", v9 - v8, v8);
        }
        else
        {
          v39 = sub_93330(v8, v9 - v8);
        }
        *((_DWORD *)v31 + 34) = v39;
        if ( v5 )
        {
          *((_DWORD *)v31 + 54) = v102;
          v40 = v103;
          if ( v103 )
          {
LABEL_50:
            *((_DWORD *)v31 + 25) = sub_93330(v40, v110 - (_BYTE *)v40);
            goto LABEL_51;
          }
        }
        else
        {
          *((_QWORD *)v31 + 20) = (unsigned int)v114 | 0x100000000LL;
          v40 = v103;
          *((_DWORD *)v31 + 42) = v111;
          *((_DWORD *)v31 + 43) = v112;
          if ( v103 )
            goto LABEL_50;
        }
        *((_DWORD *)v31 + 25) = v103;
LABEL_51:
        if ( sub_15CD58(v122, v123, v124, v125, v126) )
        {
          v41 = &dword_4878EC;
          v42 = v122;
          v43 = v123;
          v44 = v124;
          v45 = v125;
          v46 = &v126;
          v47 = v31 + 176;
        }
        else
        {
          v41 = &dword_475848;
          v47 = v31 + 176;
          v42 = 0;
          v43 = 0;
          v44 = 0;
          v45 = 0;
          v46 = &dword_3A981C;
        }
        *v47 = v42;
        v47[1] = v43;
        v47[2] = v44;
        v47[3] = v45;
        v48 = *v41;
        v49 = v41[1];
        v50 = v41[2];
        v47[4] = *v46;
        *((_DWORD *)v31 + 49) = v48;
        *((_DWORD *)v31 + 50) = v49;
        *((_DWORD *)v31 + 51) = v50;
        if ( v105 )
        {
          *((_DWORD *)v31 + 27) = v105;
          v105[27] = v31;
        }
        if ( !a3 )
          sub_26C300(v109);
        sub_C96DC((int)v31, 1);
        v127 = v31;
        sub_D9044(a4, (int *)&v127, 1);
        if ( v127 )
          (*(void (__fastcall **)(char *))(*(_DWORD *)v127 + 4))(v127);
        if ( ptr )
          free(ptr);
        if ( v132[0] != v133 )
          sub_339E64(v132[0]);
        return;
    }
  }
}
