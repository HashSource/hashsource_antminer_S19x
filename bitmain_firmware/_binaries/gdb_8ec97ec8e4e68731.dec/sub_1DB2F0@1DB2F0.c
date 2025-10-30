int __fastcall sub_1DB2F0(int a1, const char *a2)
{
  _DWORD *v2; // r0
  int v3; // r11
  void (__fastcall *v4)(void *); // r0
  void (__fastcall *v5)(void *); // r10
  char *v6; // r4
  const char *v7; // r3
  int v8; // r3
  void (__fastcall *v9)(void *); // r8
  int v10; // r9
  char *v11; // r0
  int v12; // r0
  int v13; // r3
  int v14; // r1
  unsigned int v15; // r3
  char *v16; // r2
  int v17; // r0
  int v18; // r3
  size_t v19; // r2
  void *v20; // r0
  void *v21; // r8
  void *v22; // r0
  void *v23; // r9
  int v24; // r4
  int v25; // r3
  int v26; // r2
  int v27; // r2
  char v28; // r2
  int v29; // r0
  int v30; // r3
  _BYTE *v31; // r0
  int v32; // r4
  int v33; // r3
  char *v34; // r0
  int *v35; // r4
  void (__fastcall *v36)(void *); // r0
  int v37; // r8
  int v38; // r3
  int *v39; // r3
  bool v40; // zf
  int v41; // r10
  int v42; // r4
  const char *v43; // r0
  const char **v44; // r4
  int v45; // r8
  const char **v46; // r4
  unsigned int v47; // r3
  unsigned int n; // r10
  int *v49; // r2
  int v50; // r9
  char *v51; // r0
  int v52; // r0
  int v53; // r3
  unsigned int v54; // r3
  int *v55; // r2
  int v56; // r0
  int v57; // r3
  size_t v58; // r2
  void *v59; // r0
  const char *v60; // r3
  int v61; // r3
  int v62; // r9
  char *v63; // r0
  int v64; // r0
  int v65; // r3
  int v66; // r1
  unsigned int v67; // r3
  int *v68; // r2
  int v69; // r0
  int v70; // r3
  size_t v71; // r2
  void *v72; // r0
  _DWORD *v73; // r0
  const char **v74; // r4
  const char **v75; // r10
  int v76; // r3
  _DWORD *v77; // r0
  const char **v78; // r4
  const char **v79; // r4
  unsigned int v80; // r3
  int *v81; // r2
  void *v82; // r8
  void *v83; // r0
  void *v84; // r9
  int result; // r0
  void *v86; // r10
  void *v87; // r0
  int v88; // r0
  int v89; // r0
  int v90; // r9
  int v91; // r0
  int v92; // r3
  int v93; // r0
  unsigned int v94; // r2
  char *v95; // r1
  int v96; // r0
  int v97; // r3
  const char *v98; // r0
  int v99; // r3
  int v100; // r0
  unsigned int v101; // r2
  int *v102; // r1
  int v103; // r0
  int v104; // r3
  const char *v105; // r0
  _DWORD *v106; // r0
  int v107; // r3
  int v108; // r0
  unsigned int v109; // r2
  int *v110; // r1
  int v111; // r0
  int v112; // r3
  const char *v113; // r0
  int v114; // r3
  size_t v115; // r2
  void *v116; // r0
  int v117; // r3
  size_t v118; // r2
  void *v119; // r0
  int v120; // r3
  size_t v121; // r2
  void *v122; // r0
  int v123; // r0
  int v124; // r0
  const char *v125; // r0
  int v126; // r0
  int v127; // [sp+14h] [bp-58h]
  int *v128; // [sp+18h] [bp-54h]
  int v129; // [sp+1Ch] [bp-50h]
  int v131; // [sp+28h] [bp-44h]
  int v132; // [sp+2Ch] [bp-40h]
  int v133; // [sp+30h] [bp-3Ch]
  char *v134; // [sp+30h] [bp-3Ch]
  void *v135; // [sp+34h] [bp-38h]
  char *v136; // [sp+34h] [bp-38h]
  char *v137; // [sp+3Ch] [bp-30h]
  int src; // [sp+44h] [bp-28h] BYREF
  int v139; // [sp+48h] [bp-24h] BYREF
  int v140; // [sp+4Ch] [bp-20h] BYREF
  int v141; // [sp+50h] [bp-1Ch] BYREF
  int v142; // [sp+54h] [bp-18h] BYREF
  char v143[4]; // [sp+58h] [bp-14h] BYREF
  int v144; // [sp+5Ch] [bp-10h] BYREF
  _DWORD v145[3]; // [sp+60h] [bp-Ch] BYREF

  if ( dword_487D4C )
  {
    v106 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v106, "Saving execution log to core file '%s'\n", a2);
  }
  v2 = sub_1615B8(&v139, a2);
  v128 = off_46DAB8;
  v3 = sub_1DDBBC(v2);
  v4 = (void (__fastcall *)(void *))sub_1DD58C(v3);
  v5 = (void (__fastcall *)(void *))"Process record: record_full_reg %s to inferior num = %d.\n";
  v129 = (int)v4;
  v6 = (char *)off_46DAB8;
  v132 = dword_48809C;
  dword_48809C = 1;
  while ( v6 != (char *)&dword_4880B8 )
  {
    v8 = *((_DWORD *)v6 + 2);
    if ( v8 == 1 )
    {
      v9 = (void (__fastcall *)(void *))*((unsigned __int16 *)v6 + 9);
      if ( *((_WORD *)v6 + 9) )
      {
        v4 = (void (__fastcall *)(void *))sub_9836C(*((unsigned __int16 *)v6 + 9));
        v9 = v4;
      }
      if ( (unsigned int)dword_487D4C > 1 )
      {
        v10 = *(_DWORD *)sub_242FC8(v4);
        v11 = sub_98EEC((int)v6);
        sub_2594B0(
          v10,
          "Process record: record_full_reg %s to inferior num = %d.\n",
          v11,
          *((unsigned __int16 *)v6 + 8));
      }
      v12 = sub_1DE030(v3, *((unsigned __int16 *)v6 + 8), v9);
      v13 = *((_DWORD *)v6 + 2);
      v14 = *((unsigned __int16 *)v6 + 8);
      if ( v13 == 1 )
      {
        v15 = *((unsigned __int16 *)v6 + 9);
        if ( v15 <= 8 )
          v16 = v6 + 20;
        else
          v16 = (char *)*((_DWORD *)v6 + 5);
      }
      else
      {
        if ( v13 != 2 )
        {
          ((void (__fastcall *)(int, int))loc_161F0)(v12, v14);
LABEL_240:
          sub_16284((const char **)v6, 1);
        }
        v15 = *((_DWORD *)v6 + 5);
        if ( v15 <= 4 )
          v16 = v6 + 28;
        else
          v16 = (char *)*((_DWORD *)v6 + 7);
      }
      v17 = sub_1DE614(v3, v14, v16, v15);
      v18 = *((_DWORD *)v6 + 2);
      if ( v18 == 1 )
      {
        v19 = *((unsigned __int16 *)v6 + 9);
        if ( v19 <= 8 )
          v20 = v6 + 20;
        else
          v20 = (void *)*((_DWORD *)v6 + 5);
      }
      else
      {
        if ( v18 != 2 )
        {
          ((void (__fastcall *)(int))loc_161F0)(v17);
          goto LABEL_230;
        }
        v19 = *((unsigned __int16 *)v6 + 9);
        if ( *((_DWORD *)v6 + 5) <= 4u )
          v20 = v6 + 28;
        else
          v20 = (void *)*((_DWORD *)v6 + 7);
      }
      memcpy(v20, v9, v19);
      sub_339E64(v9);
LABEL_25:
      v6 = (char *)off_46DAB8;
      goto LABEL_6;
    }
    if ( v8 == 2 && !*((_DWORD *)v6 + 6) )
    {
      v21 = sub_93028(*((_DWORD *)v6 + 5));
      v22 = sub_9253C((int)sub_1D87E8, (int)v21);
      v23 = v22;
      if ( (unsigned int)dword_487D4C > 1 )
      {
        v133 = *(_DWORD *)sub_242FC8(v22);
        v136 = sub_98EEC((int)v6);
        v88 = sub_25AC8C(v129, *((_DWORD *)v6 + 4));
        sub_2594B0(
          v133,
          "Process record: record_full_mem %s to inferior addr = %s len = %d.\n",
          v136,
          v88,
          *((_DWORD *)v6 + 5));
      }
      if ( sub_1D38B4(v129, *((_DWORD *)v6 + 4), (int)v21, *((_DWORD *)v6 + 5)) )
      {
        *((_DWORD *)v6 + 6) = 1;
      }
      else
      {
        v92 = *((_DWORD *)v6 + 2);
        v93 = *((_DWORD *)v6 + 4);
        if ( v92 == 1 )
        {
          v94 = *((_DWORD *)v6 + 5);
          if ( *((unsigned __int16 *)v6 + 9) > 8u )
            v95 = (char *)*((_DWORD *)v6 + 5);
          else
            v95 = v6 + 20;
        }
        else
        {
          if ( v92 != 2 )
          {
            v100 = ((int (__fastcall *)(int))loc_161F0)(v93);
LABEL_253:
            ((void (__fastcall *)(int))loc_161F0)(v100);
LABEL_254:
            sub_16284((const char **)v5, 8);
          }
          v94 = *((_DWORD *)v6 + 5);
          if ( v94 <= 4 )
            v95 = v6 + 28;
          else
            v95 = (char *)*((_DWORD *)v6 + 7);
        }
        v96 = sub_230484(v93, v95, v94);
        if ( v96 )
        {
          v97 = dword_487D4C;
          *((_DWORD *)v6 + 6) = 1;
          if ( v97 )
          {
            v98 = (const char *)sub_25AC8C(v129, *((_DWORD *)v6 + 4));
            sub_946B0("Process record: error writing memory at addr = %s len = %d.", v98, *((_DWORD *)v6 + 5));
          }
        }
        else
        {
          v114 = *((_DWORD *)v6 + 2);
          if ( v114 == 1 )
          {
            v115 = *((_DWORD *)v6 + 5);
            if ( *((unsigned __int16 *)v6 + 9) > 8u )
              v116 = (void *)*((_DWORD *)v6 + 5);
            else
              v116 = v6 + 20;
          }
          else
          {
            if ( v114 != 2 )
              goto LABEL_257;
            v115 = *((_DWORD *)v6 + 5);
            if ( v115 <= 4 )
              v116 = v6 + 28;
            else
              v116 = (void *)*((_DWORD *)v6 + 7);
          }
          memcpy(v116, v21, v115);
          if ( sub_CDE94(*(_DWORD *)(v3 + 4), *((_DWORD *)v6 + 4), *((_DWORD *)v6 + 5)) )
            dword_488088 = 3;
        }
      }
      sub_92620(v23);
      goto LABEL_25;
    }
LABEL_6:
    v7 = *(const char **)v6;
    if ( *(_DWORD *)v6 )
    {
      v6 = *(char **)v6;
      off_46DAB8 = (int *)v7;
    }
  }
  v24 = 4;
  off_46DAB8 = (int *)dword_4880BC;
  v25 = dword_4880BC;
  if ( dword_4880BC )
  {
    do
    {
      while ( 1 )
      {
        v26 = *(_DWORD *)(v25 + 8);
        if ( v26 != 1 )
          break;
        v27 = *(unsigned __int16 *)(v25 + 18);
        v25 = *(_DWORD *)(v25 + 4);
        v24 += v27 + 5;
        if ( !v25 )
          goto LABEL_47;
      }
      if ( v26 )
      {
        if ( v26 == 2 )
          v24 += *(_DWORD *)(v25 + 20) + 13;
      }
      else
      {
        v24 += 9;
      }
      v25 = *(_DWORD *)(v25 + 4);
    }
    while ( v25 );
LABEL_47:
    off_46DAB8 = (int *)v25;
  }
  v127 = sub_2ADB48(v139, "precord", 264);
  if ( !v127 )
  {
    v124 = sub_2A6910(0);
    v125 = (const char *)sub_2A6920(v124);
    sub_946E0("Failed to create 'precord' section for corefile %s: %s", a2, v125);
  }
  sub_2ADDBC(v139, v127, v24);
  v28 = *(_BYTE *)(v127 + 24);
  v29 = v139;
  *(_DWORD *)(v127 + 32) = 0;
  *(_DWORD *)(v127 + 28) = 0;
  *(_BYTE *)(v127 + 24) = v28 | 1;
  *(_DWORD *)(v127 + 64) = 0;
  sub_1616A8(v29);
  v31 = sub_15C34C(&v140, 4, 0, v30, 0x20091016u, 0);
  src = v140;
  if ( dword_487D4C )
  {
    v32 = *(_DWORD *)sub_242FC8(v31);
    v34 = sub_989F0(src, 0, 4, v33);
    sub_2594B0(v32, "  Writing 4-byte magic cookie RECORD_FULL_FILE_MAGIC (0x%s)\n", v34);
  }
  v35 = (int *)v139;
  v36 = (void (__fastcall *)(void *))sub_2ADDE8(v139, v127, &src, 0, 0, 0, 4u);
  if ( !v36 )
LABEL_242:
    sub_16284((const char **)v35, 4);
  off_46DAB8 = &dword_4880B8;
  v35 = &dword_4880B8;
  v37 = 4;
  v38 = dword_4880C0;
  while ( v38 == 1 )
  {
    v5 = (void (__fastcall *)(void *))*((unsigned __int16 *)v35 + 9);
    if ( *((_WORD *)v35 + 9) )
    {
      v36 = (void (__fastcall *)(void *))sub_9836C(*((unsigned __int16 *)v35 + 9));
      v5 = v36;
    }
    if ( (unsigned int)dword_487D4C > 1 )
    {
      v50 = *(_DWORD *)sub_242FC8(v36);
      v51 = sub_98EEC((int)v35);
      sub_2594B0(v50, "Process record: record_full_reg %s to inferior num = %d.\n", v51, *((unsigned __int16 *)v35 + 8));
    }
    v52 = sub_1DE030(v3, *((unsigned __int16 *)v35 + 8), v5);
    v53 = v35[2];
    if ( v53 == 1 )
    {
      v54 = *((unsigned __int16 *)v35 + 9);
      if ( v54 <= 8 )
        v55 = v35 + 5;
      else
        v55 = (int *)v35[5];
    }
    else
    {
      if ( v53 != 2 )
        goto LABEL_250;
      v54 = v35[5];
      if ( v54 <= 4 )
        v55 = v35 + 7;
      else
        v55 = (int *)v35[7];
    }
    v56 = sub_1DE614(v3, *((unsigned __int16 *)v35 + 8), v55, v54);
    v57 = v35[2];
    if ( v57 == 1 )
    {
      v58 = *((unsigned __int16 *)v35 + 9);
      if ( v58 <= 8 )
        v59 = v35 + 5;
      else
        v59 = (void *)v35[5];
    }
    else
    {
      if ( v57 != 2 )
      {
        ((void (__fastcall *)(int))loc_161F0)(v56);
        goto LABEL_233;
      }
      v58 = *((unsigned __int16 *)v35 + 9);
      if ( (unsigned int)v35[5] <= 4 )
        v59 = v35 + 7;
      else
        v59 = (void *)v35[7];
    }
    memcpy(v59, v5, v58);
    sub_339E64(v5);
LABEL_90:
    v35 = off_46DAB8;
    v39 = (int *)off_46DAB8[1];
    if ( !v39 )
      goto LABEL_91;
LABEL_57:
    v40 = v39 == &dword_4880B8;
    off_46DAB8 = v39;
    if ( v39 == &dword_4880B8 )
      v35 = &dword_4880B8;
    v38 = v39[2];
    if ( v40 )
      continue;
    v6 = (char *)v139;
    LOBYTE(v140) = v38;
    v36 = (void (__fastcall *)(void *))sub_2ADDE8(v139, v127, &v140, v38, v37, v37 >> 31, 1u);
    if ( !v36 )
      goto LABEL_240;
    v35 = off_46DAB8;
    v41 = v37 + 1;
    v38 = off_46DAB8[2];
    switch ( v38 )
    {
      case 1:
        v76 = dword_487D4C;
        if ( dword_487D4C )
        {
          v77 = (_DWORD *)sub_242FC8(v36);
          sub_2594B0(
            *v77,
            "  Writing register %d (1 plus %lu plus %d bytes)\n",
            *((unsigned __int16 *)off_46DAB8 + 8),
            4,
            *((unsigned __int16 *)off_46DAB8 + 9));
          v35 = off_46DAB8;
        }
        sub_15C34C(&v141, 4, 0, v76, *((unsigned __int16 *)v35 + 8), 0);
        v78 = (const char **)v139;
        v145[0] = v141;
        if ( !sub_2ADDE8(v139, v127, v145, v141, v41, v41 >> 31, 4u) )
          sub_16284(v78, 4);
        v45 = v37 + 5;
        v79 = (const char **)v139;
        v80 = off_46DAB8[2];
        if ( v80 == 1 )
        {
          n = *((unsigned __int16 *)off_46DAB8 + 9);
          if ( n <= 8 )
            v81 = off_46DAB8 + 5;
          else
            v81 = (int *)off_46DAB8[5];
        }
        else
        {
          if ( v80 != 2 )
          {
            v96 = ((int (*)(void))loc_161F0)();
LABEL_257:
            v108 = ((int (__fastcall *)(int))loc_161F0)(v96);
LABEL_258:
            v103 = ((int (__fastcall *)(int))loc_161F0)(v108);
LABEL_259:
            v111 = ((int (__fastcall *)(int))loc_161F0)(v103);
LABEL_260:
            v126 = ((int (__fastcall *)(int))loc_161F0)(v111);
            return sub_1DC2B8(v126);
          }
          v80 = off_46DAB8[5];
          n = *((unsigned __int16 *)off_46DAB8 + 9);
          if ( v80 <= 4 )
            v81 = off_46DAB8 + 7;
          else
            v81 = (int *)off_46DAB8[7];
        }
        v36 = (void (__fastcall *)(void *))sub_2ADDE8(v139, v127, v81, v80, v45, v45 >> 31, n);
        if ( !v36 )
          sub_16284(v79, n);
        break;
      case 0:
        if ( dword_487D4C )
        {
          v73 = (_DWORD *)sub_242FC8(v36);
          sub_2594B0(*v73, "  Writing record_full_end (1 + %lu + %lu bytes)\n", 4, 4);
          v35 = off_46DAB8;
        }
        sub_15C34C(v143, 4, 0, v35[4], v35[4], 0);
        v74 = (const char **)v139;
        if ( !sub_2ADDE8(v139, v127, v143, 4, v41, v41 >> 31, 4u) )
          sub_16284(v74, 4);
        sub_15C34C(&v144, 4, 0, 0, off_46DAB8[6], 0);
        v75 = (const char **)v139;
        v145[0] = v144;
        v36 = (void (__fastcall *)(void *))sub_2ADDE8(v139, v127, v145, v144, v37 + 5, (v37 + 5) >> 31, 4u);
        if ( !v36 )
          sub_16284(v75, 4);
        v35 = off_46DAB8;
        v37 += 9;
        v38 = off_46DAB8[2];
        continue;
      case 2:
        if ( dword_487D4C )
        {
          v42 = *(_DWORD *)sub_242FC8(v36);
          v43 = (const char *)sub_25AC8C(v129, off_46DAB8[4]);
          sub_2594B0(v42, "  Writing memory %s (1 plus %lu plus %lu plus %d bytes)\n", v43, 8, 4, off_46DAB8[5]);
          v35 = off_46DAB8;
        }
        sub_15C34C(&v142, 4, 0, v35[5], v35[5], 0);
        v44 = (const char **)v139;
        v144 = v142;
        if ( !sub_2ADDE8(v139, v127, &v144, v142, v41, v41 >> 31, 4u) )
          sub_16284(v44, 4);
        sub_15C34C(v145, 8, 0, 0, off_46DAB8[4], 0);
        v5 = (void (__fastcall *)(void *))v139;
        if ( !sub_2ADDE8(v139, v127, v145, 8, v37 + 5, (v37 + 5) >> 31, 8u) )
          goto LABEL_254;
        v45 = v37 + 13;
        v46 = (const char **)v139;
        v47 = off_46DAB8[2];
        if ( v47 == 1 )
        {
          v47 = *((unsigned __int16 *)off_46DAB8 + 9);
          n = off_46DAB8[5];
          if ( v47 > 8 )
            v49 = (int *)off_46DAB8[5];
          else
            v49 = off_46DAB8 + 5;
        }
        else
        {
          if ( v47 != 2 )
          {
            v52 = ((int (*)(void))loc_161F0)();
LABEL_250:
            ((void (__fastcall *)(int))loc_161F0)(v52);
            if ( v5 )
              sub_339E64(v5);
            goto LABEL_232;
          }
          n = off_46DAB8[5];
          if ( n <= 4 )
            v49 = off_46DAB8 + 7;
          else
            v49 = (int *)off_46DAB8[7];
        }
        v36 = (void (__fastcall *)(void *))sub_2ADDE8(v139, v127, v49, v47, v45, v45 >> 31, n);
        if ( !v36 )
          sub_16284(v46, n);
        break;
      default:
        ++v37;
        continue;
    }
    v35 = off_46DAB8;
    v37 = n + v45;
    v38 = off_46DAB8[2];
  }
  if ( v38 == 2 && !v35[6] )
  {
    v86 = sub_93028(v35[5]);
    v87 = sub_9253C((int)sub_1D87E8, (int)v86);
    v135 = v87;
    if ( (unsigned int)dword_487D4C > 1 )
    {
      v90 = *(_DWORD *)sub_242FC8(v87);
      v137 = sub_98EEC((int)v35);
      v91 = sub_25AC8C(v129, v35[4]);
      sub_2594B0(v90, "Process record: record_full_mem %s to inferior addr = %s len = %d.\n", v137, v91, v35[5]);
    }
    if ( sub_1D38B4(v129, v35[4], (int)v86, v35[5]) )
    {
      v35[6] = 1;
    }
    else
    {
      v107 = v35[2];
      v108 = v35[4];
      if ( v107 == 1 )
      {
        v109 = v35[5];
        if ( *((unsigned __int16 *)v35 + 9) > 8u )
          v110 = (int *)v35[5];
        else
          v110 = v35 + 5;
      }
      else
      {
        if ( v107 != 2 )
          goto LABEL_258;
        v109 = v35[5];
        if ( v109 <= 4 )
          v110 = v35 + 7;
        else
          v110 = (int *)v35[7];
      }
      v111 = sub_230484(v108, v110, v109);
      if ( v111 )
      {
        v112 = dword_487D4C;
        v35[6] = 1;
        if ( v112 )
        {
          v113 = (const char *)sub_25AC8C(v129, v35[4]);
          sub_946B0("Process record: error writing memory at addr = %s len = %d.", v113, v35[5]);
        }
      }
      else
      {
        v120 = v35[2];
        if ( v120 == 1 )
        {
          v121 = v35[5];
          if ( *((unsigned __int16 *)v35 + 9) > 8u )
            v122 = (void *)v35[5];
          else
            v122 = v35 + 5;
        }
        else
        {
          if ( v120 != 2 )
            goto LABEL_260;
          v121 = v35[5];
          if ( v121 <= 4 )
            v122 = v35 + 7;
          else
            v122 = (void *)v35[7];
        }
        memcpy(v122, v86, v121);
        if ( sub_CDE94(*(_DWORD *)(v3 + 4), v35[4], v35[5]) )
          dword_488088 = 3;
      }
    }
    sub_92620(v135);
    goto LABEL_90;
  }
  v39 = (int *)v35[1];
  if ( v39 )
    goto LABEL_57;
LABEL_91:
  v5 = sub_1D87E8;
  while ( 2 )
  {
    if ( v128 != v35 )
    {
      v61 = v35[2];
      if ( v61 == 1 )
      {
        v9 = (void (__fastcall *)(void *))*((unsigned __int16 *)v35 + 9);
        if ( *((_WORD *)v35 + 9) )
        {
          v36 = (void (__fastcall *)(void *))sub_9836C(*((unsigned __int16 *)v35 + 9));
          v9 = v36;
        }
        if ( (unsigned int)dword_487D4C > 1 )
        {
          v62 = *(_DWORD *)sub_242FC8(v36);
          v63 = sub_98EEC((int)v35);
          sub_2594B0(
            v62,
            "Process record: record_full_reg %s to inferior num = %d.\n",
            v63,
            *((unsigned __int16 *)v35 + 8));
        }
        v64 = sub_1DE030(v3, *((unsigned __int16 *)v35 + 8), v9);
        v65 = v35[2];
        v66 = *((unsigned __int16 *)v35 + 8);
        if ( v65 == 1 )
        {
          v67 = *((unsigned __int16 *)v35 + 9);
          if ( v67 <= 8 )
            v68 = v35 + 5;
          else
            v68 = (int *)v35[5];
        }
        else
        {
          if ( v65 != 2 )
          {
            ((void (__fastcall *)(int, int))loc_161F0)(v64, v66);
            goto LABEL_242;
          }
          v67 = v35[5];
          if ( v67 <= 4 )
            v68 = v35 + 7;
          else
            v68 = (int *)v35[7];
        }
        v69 = sub_1DE614(v3, v66, v68, v67);
        v70 = v35[2];
        if ( v70 == 1 )
        {
          v71 = *((unsigned __int16 *)v35 + 9);
          if ( v71 <= 8 )
            v72 = v35 + 5;
          else
            v72 = (void *)v35[5];
        }
        else
        {
          if ( v70 != 2 )
          {
            ((void (__fastcall *)(int))loc_161F0)(v69);
LABEL_230:
            if ( v9 )
              sub_339E64(v9);
LABEL_232:
            dword_48809C = v132;
LABEL_233:
            if ( a2 )
              unlink(a2);
            v123 = v139;
            if ( v139 )
              v123 = ((int (*)(void))loc_1625A8)();
            sub_338FFC(v123);
          }
          v71 = *((unsigned __int16 *)v35 + 9);
          if ( (unsigned int)v35[5] <= 4 )
            v72 = v35 + 7;
          else
            v72 = (void *)v35[7];
        }
        memcpy(v72, v9, v71);
        sub_339E64(v9);
LABEL_113:
        v35 = off_46DAB8;
      }
      else if ( v61 == 2 && !v35[6] )
      {
        v82 = sub_93028(v35[5]);
        v83 = sub_9253C((int)sub_1D87E8, (int)v82);
        v84 = v83;
        if ( (unsigned int)dword_487D4C > 1 )
        {
          v131 = *(_DWORD *)sub_242FC8(v83);
          v134 = sub_98EEC((int)v35);
          v89 = sub_25AC8C(v129, v35[4]);
          sub_2594B0(v131, "Process record: record_full_mem %s to inferior addr = %s len = %d.\n", v134, v89, v35[5]);
        }
        if ( sub_1D38B4(v129, v35[4], (int)v82, v35[5]) )
        {
          v35[6] = 1;
        }
        else
        {
          v99 = v35[2];
          v100 = v35[4];
          if ( v99 == 1 )
          {
            v101 = v35[5];
            if ( *((unsigned __int16 *)v35 + 9) > 8u )
              v102 = (int *)v35[5];
            else
              v102 = v35 + 5;
          }
          else
          {
            if ( v99 != 2 )
              goto LABEL_253;
            v101 = v35[5];
            if ( v101 <= 4 )
              v102 = v35 + 7;
            else
              v102 = (int *)v35[7];
          }
          v103 = sub_230484(v100, v102, v101);
          if ( v103 )
          {
            v104 = dword_487D4C;
            v35[6] = 1;
            if ( v104 )
            {
              v105 = (const char *)sub_25AC8C(v129, v35[4]);
              sub_946B0("Process record: error writing memory at addr = %s len = %d.", v105, v35[5]);
            }
          }
          else
          {
            v117 = v35[2];
            if ( v117 == 1 )
            {
              v118 = v35[5];
              if ( *((unsigned __int16 *)v35 + 9) > 8u )
                v119 = (void *)v35[5];
              else
                v119 = v35 + 5;
            }
            else
            {
              if ( v117 != 2 )
                goto LABEL_259;
              v118 = v35[5];
              if ( v118 <= 4 )
                v119 = v35 + 7;
              else
                v119 = (void *)v35[7];
            }
            memcpy(v119, v82, v118);
            if ( sub_CDE94(*(_DWORD *)(v3 + 4), v35[4], v35[5]) )
              dword_488088 = 3;
          }
        }
        sub_92620(v84);
        goto LABEL_113;
      }
      v60 = (const char *)*v35;
      if ( *v35 )
      {
        v35 = (int *)*v35;
        off_46DAB8 = (int *)v60;
      }
      continue;
    }
    break;
  }
  sub_259F10("Saved core file %s with execution log.\n", a2);
  result = v139;
  dword_48809C = v132;
  if ( v139 )
    return ((int (*)(void))loc_1625A8)();
  return result;
}
