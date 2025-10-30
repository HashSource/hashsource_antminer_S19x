_DWORD *__fastcall sub_17D5F0(int a1, int *a2, int a3, char *a4, int a5, int a6)
{
  int *v6; // r6
  const char *v7; // r7
  char ***v8; // r10
  _DWORD *v9; // r0
  int *v10; // r5
  int v11; // r0
  int v12; // r3
  int v13; // r0
  int v14; // r4
  int v15; // r11
  __int64 v16; // r0
  int v17; // r5
  const char *v18; // r4
  __int64 v19; // r0
  int v20; // r0
  int *v21; // r3
  unsigned __int8 v22; // r0
  int *v23; // r4
  int v24; // r0
  int v25; // r3
  int v26; // r2
  int v27; // r4
  int v28; // r7
  _DWORD *v29; // r0
  _DWORD *v30; // r6
  _DWORD *v31; // r0
  int v32; // r9
  _DWORD *v33; // r8
  int v34; // r1
  int v35; // r0
  int v36; // r0
  int v37; // r0
  _BOOL4 v38; // r1
  _DWORD *v39; // r0
  unsigned int v40; // r12
  unsigned int v41; // r0
  _DWORD *v42; // r0
  int **v43; // r0
  _DWORD *v44; // r0
  _DWORD *v45; // r0
  int v46; // r0
  int v47; // r7
  _DWORD *v48; // r5
  void *v49; // r0
  void *v50; // r4
  int v51; // r0
  int v52; // r5
  void *v53; // r4
  int v54; // r0
  int v55; // r4
  int v56; // r3
  int v57; // r0
  int i; // r2
  int v59; // r0
  int v60; // r3
  _DWORD *v61; // r5
  int v62; // r0
  int v63; // r1
  int v64; // r2
  int v65; // r12
  _DWORD *v66; // r4
  _DWORD *v67; // r3
  void *v68; // r0
  void *v69; // r1
  void *v70; // r2
  unsigned int v71; // r12
  int v72; // r2
  int v73; // r2
  int v74; // r0
  int v75; // r0
  int v76; // r1
  int v77; // r2
  void *v78; // r5
  int v79; // r0
  unsigned int v80; // r0
  void *v81; // r0
  void *v82; // r1
  void *v83; // r2
  int v84; // r0
  int v85; // r1
  int v86; // r2
  int v87; // r6
  int v88; // r8
  int v89; // r0
  int v90; // r1
  const char *v91; // r2
  int v92; // r0
  int v93; // r5
  int v94; // r1
  size_t v95; // r4
  _DWORD *v96; // r0
  int v97; // r0
  int v98; // r1
  const char *v99; // r2
  int v100; // r3
  int v101; // r4
  unsigned int v102; // r1
  const char *v103; // r0
  const char *v104; // r0
  const char *v105; // r5
  size_t v106; // r0
  void **v107; // r2
  int v108; // r0
  void **v110; // r0
  __int64 v111; // r8
  int *v112; // r0
  int v113; // r1
  const char *v114; // r2
  const char *v115; // r4
  int *v116; // [sp+3Ch] [bp-F0h]
  int v117; // [sp+3Ch] [bp-F0h]
  int v118; // [sp+40h] [bp-ECh]
  int v119; // [sp+40h] [bp-ECh]
  int v120; // [sp+40h] [bp-ECh]
  int v121; // [sp+40h] [bp-ECh]
  int *v122; // [sp+40h] [bp-ECh]
  int v123; // [sp+44h] [bp-E8h]
  _DWORD *v124; // [sp+44h] [bp-E8h]
  int v125; // [sp+44h] [bp-E8h]
  unsigned int v126; // [sp+48h] [bp-E4h]
  int v127; // [sp+48h] [bp-E4h]
  int v129; // [sp+50h] [bp-DCh]
  int *v131; // [sp+58h] [bp-D4h]
  int v134; // [sp+64h] [bp-C8h]
  int v135; // [sp+68h] [bp-C4h]
  int v136; // [sp+6Ch] [bp-C0h]
  _DWORD *v137; // [sp+70h] [bp-BCh]
  int v138; // [sp+74h] [bp-B8h]
  int v139; // [sp+78h] [bp-B4h]
  _DWORD *v140; // [sp+7Ch] [bp-B0h]
  _DWORD v141[7]; // [sp+80h] [bp-ACh] BYREF
  int *v142; // [sp+9Ch] [bp-90h] BYREF
  int *v143; // [sp+A0h] [bp-8Ch] BYREF
  void *v144; // [sp+A4h] [bp-88h] BYREF
  void *v145; // [sp+A8h] [bp-84h] BYREF
  _DWORD v146[3]; // [sp+ACh] [bp-80h] BYREF
  int v147; // [sp+B8h] [bp-74h] BYREF
  int v148; // [sp+BCh] [bp-70h]
  const char *v149; // [sp+C0h] [bp-6Ch]
  int v150; // [sp+C4h] [bp-68h]
  int v151; // [sp+C8h] [bp-64h]
  const char *v152; // [sp+CCh] [bp-60h]
  _DWORD v153[3]; // [sp+D0h] [bp-5Ch] BYREF
  _DWORD v154[4]; // [sp+DCh] [bp-50h] BYREF
  int v155; // [sp+ECh] [bp-40h] BYREF
  int v156; // [sp+F0h] [bp-3Ch]
  int v157; // [sp+F4h] [bp-38h]
  int v158; // [sp+F8h] [bp-34h]
  int v159; // [sp+FCh] [bp-30h]
  void *ptr[11]; // [sp+100h] [bp-2Ch] BYREF

  v131 = &dword_4878EC;
  v9 = (_DWORD *)sub_26BC70(a1);
  v10 = (int *)sub_171258(v9);
  v116 = v10;
  v11 = sub_23EA78(dword_4878EC, dword_4878F0, dword_4878F4);
  v12 = v10[6];
  v135 = v11;
  if ( *(_BYTE *)v12 == 1 )
  {
    v11 = sub_171258(*(_DWORD **)(v12 + 20));
    v116 = (int *)v11;
  }
  if ( !sub_22EBBC(v11) )
    sub_22F11C();
  v13 = sub_24B59C();
  if ( v13 >= 0 )
    sub_946E0("May not call functions while looking at trace frames.");
  if ( dword_48794C == 1 )
    sub_946E0("Cannot call functions in reverse mode.");
  v14 = sub_15F70C(v13);
  v15 = sub_15ECB4(v14);
  if ( !((int (*)(void))loc_167B10)() )
    goto LABEL_160;
  v139 = sub_189318();
  v137 = (_DWORD *)sub_189510();
  v138 = sub_1890BC();
  sub_1891E4();
  v126 = sub_1603F0(v14);
  if ( ((int (__fastcall *)(int))loc_169C9C)(v15) )
  {
    v101 = ((int (__fastcall *)(int, unsigned int))loc_169CE8)(v15, v126);
    if ( ((int (__fastcall *)(int, int, int))loc_16900C)(v15, 1, 2) )
      v66 = (_DWORD *)(v101 - ((int (__fastcall *)(int))loc_169E60)(v15));
    else
      v66 = (_DWORD *)(((int (__fastcall *)(int))loc_169E60)(v15) + v101);
    if ( (_DWORD *)((int (__fastcall *)(int, _DWORD *))loc_169CE8)(v15, v66) != v66 )
    {
      sub_94700(
        (int)"infcall.c",
        793,
        "%s: Assertion `%s' failed.",
        "value* call_function_by_hand_dummy(value*, type*, int, value**, void (*)(void*, int), void*)",
        "sp == gdbarch_frame_align (gdbarch, sp)");
      goto LABEL_165;
    }
    if ( (_DWORD *)v126 == v66 )
    {
      if ( ((int (__fastcall *)(int, int, int))loc_16900C)(v15, 1, 2) )
        v102 = v126 - 1;
      else
        v102 = v126 + 1;
      v126 = ((int (__fastcall *)(int, unsigned int))loc_169CE8)(v15, v102);
    }
    else
    {
      v126 = (unsigned int)v66;
    }
  }
  if ( v135 )
  {
    v17 = sub_23ECF8(dword_4878EC, dword_4878F0, dword_4878F4);
    if ( v17 )
    {
      v18 = (const char *)((int (*)(void))loc_26C09C)();
      if ( ((int (__fastcall *)(int, int, int))loc_16900C)(v15, 1, 2) )
      {
        if ( (unsigned int)v18 > v126 )
        {
          sub_94700(
            (int)"infcall.c",
            855,
            "%s: Assertion `%s' failed.",
            "value* call_function_by_hand_dummy(value*, type*, int, value**, void (*)(void*, int), void*)",
            "sp >= lastval_addr");
          goto LABEL_143;
        }
        v126 = (unsigned int)v18;
      }
      else
      {
        if ( (unsigned int)v18 < v126 )
        {
LABEL_168:
          sub_94700(
            (int)"infcall.c",
            860,
            "%s: Assertion `%s' failed.",
            "value* call_function_by_hand_dummy(value*, type*, int, value**, void (*)(void*, int), void*)",
            "sp <= lastval_addr");
LABEL_169:
          ((void (__fastcall *)(int, int, int, int, int, char **, char **, char **))loc_10D524)(
            v155,
            v156,
            v157,
            v158,
            v159,
            *v8,
            v8[1],
            v8[2]);
          sub_1893C0(v139);
          sub_946E0(
            "The program being debugged entered a std::terminate call, most likely\n"
            "caused by an unhandled C++ exception.  GDB blocked this call in order\n"
            "to prevent the program from being terminated, and has restored the\n"
            "context to its original state before the call.\n"
            "To change this behaviour use \"set unwind-on-terminating-exception off\".\n"
            "Evaluation of the expression containing the function (%s)\n"
            "will be abandoned.",
            (const char *)ptr[0]);
        }
        v19 = sub_26BC70(v17);
        v126 = (unsigned int)&v18[*(_DWORD *)(v19 + 20)];
      }
      if ( ((int (__fastcall *)(int, _DWORD))loc_169C9C)(v15, HIDWORD(v19)) )
        v126 = ((int (__fastcall *)(int, unsigned int))loc_169CE8)(v15, v126);
    }
  }
  v20 = sub_17D408(a1, &v142);
  v21 = v142;
  v129 = v20;
  if ( !v142 )
  {
    v142 = a2;
    if ( !a2 )
    {
      v103 = (const char *)((int (__fastcall *)(int, _DWORD *))loc_17D318)(v20, v154);
      sub_946E0("'%s' has unknown return type; cast the call to its declared return type", v103);
    }
    v21 = a2;
  }
  v142 = (int *)sub_171258(v21);
  if ( ((int (__fastcall *)(int, int *))loc_168C84)(v15, v142) )
  {
    v136 = 1;
    sub_1780B4();
    v23 = *v43;
    v134 = 0;
  }
  else
  {
    v136 = 0;
    v22 = sub_26DFC4(v15, a1, v142);
    v23 = v142;
    v134 = v22;
  }
  sub_1BA898(dword_4878EC, dword_4878F0, dword_4878F4, v129);
  v24 = ((int (__fastcall *)(int))loc_167C54)(v15);
  if ( v24 != 1 )
  {
    if ( v24 == 4 )
    {
      v143 = (int *)v129;
      v144 = (void *)sub_1B72D8();
      goto LABEL_21;
    }
    sub_94700((int)"infcall.c", 966, "bad switch");
LABEL_159:
    v16 = sub_94700(
            (int)"infcall.c",
            1111,
            "%s: Assertion `%s' failed.",
            "value* call_function_by_hand_dummy(value*, type*, int, value**, void (*)(void*, int), void*)",
            "bpt->related_breakpoint == bpt");
LABEL_160:
    sub_946E0("This target does not support function calls.", HIDWORD(v16));
  }
  v93 = sub_1DDBBC(1);
  if ( !((int (__fastcall *)(int))loc_167CCC)(v15) )
  {
    sub_94700(
      (int)"infcall.c",
      336,
      "%s: Assertion `%s' failed.",
      "CORE_ADDR push_dummy_code(gdbarch*, CORE_ADDR, CORE_ADDR, value**, int, type*, CORE_ADDR*, CORE_ADDR*, regcache*)",
      "gdbarch_push_dummy_code_p (gdbarch)");
    goto LABEL_168;
  }
  v126 = ((int (__fastcall *)(int, unsigned int, int, char *, int, int *, int **, void **, int))loc_167D18)(
           v15,
           v126,
           v129,
           a4,
           a3,
           v23,
           &v143,
           &v144,
           v93);
  v155 = (int)v144;
  v94 = ((int (__fastcall *)(int, int *, void **))loc_1690CC)(v15, &v155, ptr);
  if ( v94 )
    sub_FAAE0(v155, v94, (int)ptr[0]);
LABEL_21:
  v25 = v116[6];
  v26 = *(__int16 *)(v25 + 4);
  if ( v26 > a3 )
    sub_946E0("Too few arguments in function call.");
  v27 = a3 - 1;
  if ( a3 - 1 >= 0 )
  {
    v8 = off_46D5A4;
    v140 = &unk_46D518;
    v10 = (int *)&a4[4 * v27];
    if ( *(_DWORD *)(v25 + 20) )
      goto LABEL_24;
    goto LABEL_35;
  }
LABEL_59:
  if ( v134 | v136 || v135 && sub_1738E8((int)v142) )
  {
    if ( ((int (__fastcall *)(int, int, int))loc_16900C)(v15, 1, 2) )
    {
      v47 = v126 - v142[5];
      if ( ((int (__fastcall *)(int))loc_169C9C)(v15) )
      {
        v126 = ((int (__fastcall *)(int, int))loc_169CE8)(v15, v47);
        v47 = v126;
      }
      else
      {
        v126 = v47;
      }
    }
    else
    {
      if ( ((int (__fastcall *)(int))loc_169C9C)(v15) )
        v47 = ((int (__fastcall *)(int, unsigned int))loc_169CE8)(v15, v126);
      else
        v47 = v126;
      v126 = v47 + v142[5];
      if ( ((int (__fastcall *)(int))loc_169C9C)(v15) )
        v126 = ((int (__fastcall *)(int, unsigned int))loc_169CE8)(v15, v126);
    }
    if ( v136 )
    {
      v95 = 4 * ++a3;
      v48 = sub_93028(v95);
      v96 = sub_1700C0(v142);
      *v48 = sub_26DC9C(v96, v47);
      memcpy(v48 + 1, a4, v95 - 4);
      v49 = sub_9253C((int)sub_17D128, (int)v48);
      v50 = v49;
      goto LABEL_63;
    }
  }
  else
  {
    v47 = 0;
  }
  v48 = a4;
  v49 = sub_9253C((int)nullsub_39, 0);
  v50 = v49;
LABEL_63:
  v51 = sub_1DDBBC(v49);
  v52 = ((int (__fastcall *)(int, int, int, void *, int, _DWORD *, unsigned int, int, int))loc_167B5C)(
          v15,
          a1,
          v51,
          v144,
          a3,
          v48,
          v126,
          v134,
          v47);
  sub_92620(v50);
  sub_15CD0C(v141, v52, (int)v144);
  v155 = v141[0];
  v156 = v141[1];
  v157 = v141[2];
  v158 = v141[3];
  v159 = v141[4];
  memset(&ptr[1], 0, 0x24u);
  v53 = v144;
  ptr[0] = (void *)dword_487D2C;
  ptr[3] = (void *)sub_214838(v144);
  ptr[5] = v53;
  v54 = ((int (__fastcall *)(_DWORD *, int, void *, void *, void *, void *, void *, void *, void *, void *, void *, void *, int, int, int, int, int, int))loc_D8E08)(
          v154,
          v15,
          ptr[0],
          ptr[1],
          ptr[2],
          ptr[3],
          ptr[4],
          v53,
          ptr[6],
          ptr[7],
          ptr[8],
          ptr[9],
          v155,
          v156,
          v157,
          v158,
          v159,
          18);
  v55 = v154[0];
  v56 = *(_DWORD *)(v154[0] + 108);
  *(_DWORD *)(v154[0] + 20) = 0;
  if ( v56 != v55 )
    goto LABEL_159;
  v57 = ((int (__fastcall *)(int))loc_D8BCC)(v54);
  if ( v57 )
  {
    *(_DWORD *)(v55 + 108) = v57;
    for ( i = v57; *(_DWORD *)(i + 108) != v57; i = *(_DWORD *)(i + 108) )
      ;
    *(_DWORD *)(i + 108) = v55;
  }
  if ( dword_46D51C )
    sub_D8CD4();
  sub_92640(v137);
  sub_10D4B4(v138, &v155, *v131, v131[1], v131[2]);
  if ( a5 )
    ((void (__fastcall *)(int, int, int, int, int, int, int, int, int, int))loc_10D70C)(
      v155,
      v156,
      v157,
      v158,
      v159,
      *v131,
      v131[1],
      v131[2],
      a5,
      a6);
  v6 = &dword_487668;
  v131 = (int *)sub_9253C((int)sub_17D124, 0);
  v59 = ((int (*)(void))loc_23DBE4)();
  v60 = v59 + 8;
  v61 = (_DWORD *)v59;
  v62 = *(_DWORD *)(v59 + 8);
  v63 = *(_DWORD *)(v60 + 4);
  v64 = *(_DWORD *)(v60 + 8);
  v8 = (char ***)v146;
  v65 = v61[51];
  v61[51] = 0;
  v146[0] = v62;
  v146[1] = v63;
  v146[2] = v64;
  v125 = v60;
  a3 = v65;
  v117 = dword_487668;
  v127 = sub_191770(v62);
  v122 = v142;
  v66 = sub_93094(1u, 0x2Cu);
  sub_2421FC(v66, &unk_46D520, v127);
  v66[3] = v15;
  v67 = (_DWORD *)dword_487668;
  v150 = 0;
  v151 = 0;
  v152 = 0;
  v15 = 0;
  v66[10] = v117;
  v66[4] = a1;
  v68 = *(void **)v125;
  v69 = *(void **)(v125 + 4);
  v70 = *(void **)(v125 + 8);
  v66[6] = (v134 | v136) != 0;
  v71 = v61[31];
  v66[7] = v47;
  v7 = (const char *)v67[17];
  v126 = v71;
  ptr[0] = v68;
  ptr[1] = v69;
  ptr[2] = v70;
  v72 = v67[9];
  v66[5] = v122;
  v123 = v72;
  v73 = v61[11];
  v74 = v67[15];
  v67[17] = 0;
  v118 = v73;
  v67[9] = 0;
  v116 = v143;
  sub_152E2C(v74);
  v61[31] = 1;
  v75 = sub_187D70(0);
  v61[51] = v66;
  sub_DA284(v75, v76, v77);
  v61[30] = 1;
  v78 = sub_92E28();
  v79 = sub_18BAD4(v116, 0);
  sub_24353C(v79);
  sub_92E40((int)v78);
  while ( 1 )
  {
    v80 = *v6;
    *(_DWORD *)(*v6 + 68) = v7;
    if ( v7 )
      sub_1541A4(v80);
    else
      sub_152E2C(*(_DWORD *)(v80 + 60));
    v81 = ptr[0];
    v82 = ptr[1];
    v83 = ptr[2];
    *(_DWORD *)(*v6 + 36) = v123;
    v84 = sub_23E408(v81, v82, v83);
    v87 = v84;
    if ( v118 != 1 )
    {
      v84 = sub_98F78(ptr, &dword_4878EC);
      if ( v84 )
      {
        if ( dword_487910 == 1 )
        {
          sub_187C40(v153, 0);
          v84 = sub_23F57C(v153[0], v153[1], v153[2]);
        }
      }
    }
    sub_DA2DC(v84, v85, v86);
    v88 = v151;
    v7 = v152;
    if ( v15 >= 0 )
    {
      if ( v87 )
      {
        v150 = v15;
        v89 = v15;
        v90 = v151;
        v91 = v152;
        v10 = &v147;
        *(_DWORD *)(v87 + 124) = v126;
        goto LABEL_83;
      }
      goto LABEL_151;
    }
    if ( v87 )
    {
      v10 = &v147;
      sub_DBBA0(*(int **)(v87 + 136));
      v150 = v15;
      v97 = v15;
      v98 = v151;
      v99 = v152;
      v100 = v129;
      *(_DWORD *)(v87 + 124) = v126;
    }
    else
    {
      v150 = v15;
      v10 = &v147;
      v97 = v15;
      v98 = v151;
      v99 = v152;
      v100 = v129;
    }
    v147 = v97;
    v148 = v98;
    v149 = v99;
    sub_1BA968(*v8, v8[1], v8[2], v100);
    v6 = (int *)sub_23E408(*v8, v8[1], v8[2]);
    if ( !v6 )
      goto LABEL_87;
LABEL_84:
    if ( (_DWORD *)v6[51] != v66 )
    {
      sub_94700(
        (int)"infcall.c",
        1195,
        "%s: Assertion `%s' failed.",
        "value* call_function_by_hand_dummy(value*, type*, int, value**, void (*)(void*, int), void*)",
        "tp->thread_fsm == &sm->thread_fsm");
LABEL_172:
      v115 = (const char *)((int (__fastcall *)(int, _DWORD *))loc_17D318)(v129, v154);
      sub_189520(v139);
      sub_946E0(
        "The program being debugged exited while in a function called from GDB.\n"
        "Evaluation of the expression containing the function\n"
        "(%s) will be abandoned.",
        v115);
    }
    v92 = sub_242280(v66);
    if ( !v92 )
    {
      v6[51] = a3;
      if ( v15 >= 0 )
      {
        while ( 1 )
        {
          if ( !sub_22EBBC(v92) )
            goto LABEL_172;
          if ( !sub_98F78(v8, &dword_4878EC) )
          {
            v18 = (const char *)((int (__fastcall *)(int, _DWORD *))loc_17D318)(v129, v154);
            sub_189520(v139);
            if ( dword_48790C )
              sub_946E0(
                "The program received a signal in another thread while\n"
                "making a function call from GDB.\n"
                "Evaluation of the expression containing the function\n"
                "(%s) will be abandoned.\n"
                "When the function is done executing, GDB will silently stop.",
                v18);
LABEL_143:
            sub_946E0(
              "The program stopped in another thread while making a function call from GDB.\n"
              "Evaluation of the expression containing the function\n"
              "(%s) will be abandoned.\n"
              "When the function is done executing, GDB will silently stop.",
              v18);
          }
          v104 = (const char *)((int (__fastcall *)(int, _DWORD *))loc_17D318)(v129, v154);
          v105 = v104;
          ptr[0] = &ptr[2];
          if ( !v104 )
            sub_33D0B8("basic_string::_M_construct null not valid");
          v106 = strlen(v104);
          v66 = (_DWORD *)v106;
          v145 = (void *)v106;
          if ( v106 > 0xF )
            break;
          if ( v106 != 1 )
          {
            if ( !v106 )
            {
              v107 = &ptr[2];
              goto LABEL_127;
            }
            v110 = &ptr[2];
            goto LABEL_145;
          }
          v107 = &ptr[2];
          LOBYTE(ptr[2]) = *v105;
LABEL_127:
          ptr[1] = v66;
          *((_BYTE *)v66 + (_DWORD)v107) = 0;
          if ( dword_48790C )
          {
            if ( dword_4878E8 )
            {
              ((void (__fastcall *)(int, int, int, int, int, char **, char **, char **))loc_10D524)(
                v155,
                v156,
                v157,
                v158,
                v159,
                *v8,
                v8[1],
                v8[2]);
              sub_1893C0(v139);
              sub_946E0(
                "The program being debugged was signaled while in a function called from GDB.\n"
                "GDB has restored the context to what it was before the call.\n"
                "To change this behavior use \"set unwindonsignal off\".\n"
                "Evaluation of the expression containing the function\n"
                "(%s) will be abandoned.",
                (const char *)ptr[0]);
            }
            sub_189520(v139);
            sub_946E0(
              "The program being debugged was signaled while in a function called from GDB.\n"
              "GDB remains in the frame where the signal was received.\n"
              "To change this behavior use \"set unwindonsignal on\".\n"
              "Evaluation of the expression containing the function\n"
              "(%s) will be abandoned.\n"
              "When the function is done executing, GDB will silently stop.",
              (const char *)ptr[0]);
          }
          if ( dword_487910 == 2 )
            goto LABEL_169;
          if ( !dword_487910 )
          {
            sub_189520(v139);
            sub_946E0(
              "The program being debugged stopped while in a function called from GDB.\n"
              "Evaluation of the expression containing the function\n"
              "(%s) will be abandoned.\n"
              "When the function is done executing, GDB will silently stop.",
              (const char *)ptr[0]);
          }
          if ( ptr[0] != &ptr[2] )
            sub_339E64(ptr[0]);
          sub_94700(
            (int)"infcall.c",
            1412,
            "%s: %s",
            "value* call_function_by_hand_dummy(value*, type*, int, value**, void (*)(void*, int), void*)",
            "... should not be here");
LABEL_151:
          v150 = v15;
          v10 = &v147;
          v89 = v15;
          v90 = v151;
          v91 = v152;
LABEL_83:
          v147 = v89;
          v148 = v90;
          v149 = v91;
          sub_1BA968(*v8, v8[1], v8[2], v129);
          v92 = sub_23E408(*v8, v8[1], v8[2]);
          v6 = (int *)v92;
          if ( v92 )
            goto LABEL_84;
        }
        v110 = (void **)sub_33B2BC(ptr, &v145, 0);
        ptr[0] = v110;
        ptr[2] = v145;
LABEL_145:
        memcpy(v110, v105, (size_t)v66);
        v66 = v145;
        v107 = (void **)ptr[0];
        goto LABEL_127;
      }
LABEL_87:
      v27 = ((int (__fastcall *)(int, _DWORD *))loc_17D318)(v129, v154);
      sub_189520(v139);
      if ( v15 != -1 )
      {
        v147 = v15;
        v148 = v88;
        v149 = v7;
        sub_92F1C(v15, v88, (int)v7);
      }
      sub_92F64(
        v88,
        "%s\n"
        "An error occurred while in a function called from GDB.\n"
        "Evaluation of the expression containing the function\n"
        "(%s) will be abandoned.\n"
        "When the function is done executing, GDB will silently stop.",
        v7,
        (const char *)v27);
LABEL_89:
      *v10 = sub_2616BC(*v10);
      while ( 2 )
      {
        --v27;
        --v10;
        if ( v27 != -1 )
        {
          v25 = v116[6];
          v26 = *(__int16 *)(v25 + 4);
          if ( *(_DWORD *)(v25 + 20) )
            goto LABEL_24;
LABEL_35:
          v38 = v26 == 0;
          if ( !a2 )
            v38 = 0;
          if ( v38 )
          {
            v119 = 1;
            goto LABEL_26;
          }
LABEL_24:
          if ( v27 < v26 )
          {
            v28 = *v10;
            v119 = (*(unsigned __int8 *)(v25 + 1) >> 5) & 1;
            v30 = *(_DWORD **)(*(_DWORD *)(v25 + 24) + 24 * v27 + 12);
            sub_1780B4();
            v124 = v44;
            v45 = (_DWORD *)sub_26BC70(v28);
            v46 = sub_171258(v45);
            v32 = v46;
            if ( v30 )
            {
              v33 = (_DWORD *)sub_171258(v30);
              if ( (*v8)[2] != (char *)14 )
                goto LABEL_28;
              goto LABEL_58;
            }
            v33 = (_DWORD *)v46;
LABEL_27:
            if ( (*v8)[2] != (char *)14 )
            {
LABEL_28:
              v34 = sub_2615A8(v28);
              v35 = v33[6];
              switch ( *(_BYTE *)v35 )
              {
                case 2:
                  if ( *((_BYTE *)*v8 + 112) && (*(_BYTE *)(v35 + 2) & 1) == 0 )
                  {
                    v121 = v34;
                    v42 = sub_1700C0(*(_DWORD **)(v35 + 20));
                    v34 = v121;
                    v33 = v42;
                  }
                  goto LABEL_40;
                case 5:
                case 8:
                case 0x14:
                case 0x15:
                  if ( v33[5] < *(_DWORD *)(v124[3] + 20) )
                    v33 = (_DWORD *)v124[3];
                  goto LABEL_40;
                case 7:
                  v120 = v34;
                  v39 = sub_1700C0(v33);
                  v34 = v120;
                  v33 = v39;
                  goto LABEL_40;
                case 9:
                  if ( !v119 && *v140 )
                  {
                    v40 = v33[5];
                    v41 = *(_DWORD *)(v124[11] + 20);
                    if ( v40 >= v41 )
                    {
                      if ( v40 > v41 )
                        v33 = (_DWORD *)v124[12];
                    }
                    else
                    {
                      v33 = (_DWORD *)v124[11];
                    }
                  }
                  goto LABEL_40;
                case 0x12:
                case 0x13:
                  if ( (unsigned int)**(unsigned __int8 **)(v32 + 24) - 18 <= 1 )
                  {
                    v37 = ((int (__fastcall *)(_DWORD *, int, _DWORD))loc_2638F0)(v33, v34, 0);
                  }
                  else
                  {
                    v36 = sub_2647C8(*(_DWORD *)(v35 + 20), v34);
                    v37 = ((int (__fastcall *)(int, _DWORD))loc_2618D4)(v36, *(char *)v33[6]);
                  }
                  goto LABEL_31;
                default:
LABEL_40:
                  v37 = sub_2647C8(v33, v34);
LABEL_31:
                  *v10 = v37;
                  if ( !v30 || !sub_19455C(v30) )
                    continue;
                  goto LABEL_89;
              }
            }
LABEL_58:
            v28 = sub_AB3BC(v28, (int)v33);
            goto LABEL_28;
          }
          v119 = 0;
LABEL_26:
          v28 = *v10;
          sub_1780B4();
          v124 = v29;
          v30 = 0;
          v31 = (_DWORD *)sub_26BC70(v28);
          v32 = sub_171258(v31);
          v33 = (_DWORD *)v32;
          goto LABEL_27;
        }
        goto LABEL_59;
      }
    }
    ((void (__fastcall *)(int, int, int, int, int, char **, char **, char **))loc_10D524)(
      v155,
      v156,
      v157,
      v158,
      v159,
      *v8,
      v8[1],
      v8[2]);
    sub_1893C0(v139);
    v66 = (_DWORD *)v66[9];
    sub_242238(v6[51], v6);
    v108 = sub_24220C(v6[51]);
    v6[51] = a3;
    sub_188978(v108);
    sub_92620(v131);
    if ( v66 )
      return v66;
LABEL_165:
    v111 = sub_94700(
             (int)"infcall.c",
             1220,
             "%s: Assertion `%s' failed.",
             "value* call_function_by_hand_dummy(value*, type*, int, value**, void (*)(void*, int), void*)",
             "retval != NULL");
    sub_92E40((int)v10);
    if ( HIDWORD(v111) != 1 )
    {
      sub_339E78(v111);
      sub_92E60();
    }
    v112 = (int *)sub_339E78(v111);
    v113 = v112[1];
    v114 = (const char *)v112[2];
    v150 = *v112;
    v151 = v113;
    v152 = v114;
    v15 = v150;
    sub_339EF8(v150);
  }
}
