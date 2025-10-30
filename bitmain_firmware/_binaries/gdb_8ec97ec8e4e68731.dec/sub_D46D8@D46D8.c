int __fastcall sub_D46D8(int a1, int a2, int a3, int *a4, int a5)
{
  _BOOL4 v9; // r10
  int v10; // r4
  int v11; // r3
  char *v12; // r6
  int v13; // r7
  int v14; // r6
  char *v15; // r2
  int v16; // r0
  int v17; // r2
  int v18; // r3
  int (__fastcall *v19)(int, int *); // r3
  _DWORD *v20; // r2
  char v21; // r6
  int v22; // r3
  _DWORD *v23; // r9
  char *v24; // r3
  char *v25; // r1
  int v26; // r0
  _BOOL4 v27; // r9
  int v28; // r0
  int v29; // r11
  int result; // r0
  const char *v31; // r2
  int v32; // r2
  int v33; // r3
  int v34; // r2
  int v35; // r3
  int v36; // r3
  unsigned int v37; // r3
  int v38; // r1
  int v39; // r2
  int v40; // r3
  int v41; // r2
  int v42; // r3
  int v43; // r1
  int v44; // r2
  int v45; // r3
  int v46; // r2
  int v47; // r3
  int v48; // r1
  int v49; // r2
  int v50; // r3
  __int64 v51; // r2
  int **v52; // r8
  int v53; // r0
  int v54; // r3
  int v55; // r3
  int v56; // r2
  unsigned int v57; // r3
  int v58; // r1
  char *v59; // r3
  bool v60; // cc
  const char *v61; // r0
  int v62; // r2
  int v63; // r3
  __int64 v64; // r0
  char *v65; // r3
  char v66; // r6
  char v67; // r6
  char v68; // r6
  int v69; // r2
  char *v70; // r2
  _DWORD *v71; // r2
  char *v72; // r3
  unsigned int v73; // r9
  char *v74; // r0
  int v75; // r2
  int v76; // r3
  int v77; // r2
  int v78; // r3
  int v79; // r2
  int v80; // r3
  int v81; // r2
  int v82; // r3
  int v83; // r2
  int v84; // r3
  int v85; // r0
  int v86; // r0
  int v87; // r1
  int v88; // r2
  int v89; // r3
  int v90; // r2
  int v91; // r3
  int v92; // r2
  int v93; // r3
  int v94; // r2
  int v95; // r3
  void *v96; // r0
  char v97[12]; // [sp+1Ch] [bp-68h] BYREF
  void *ptr; // [sp+28h] [bp-5Ch] BYREF
  char *v99; // [sp+2Ch] [bp-58h]
  char *v100; // [sp+30h] [bp-54h]
  char v101[20]; // [sp+34h] [bp-50h] BYREF
  int v102; // [sp+48h] [bp-3Ch]

  v9 = a2 == 0;
  v10 = *(_DWORD *)sub_242FDC(a1);
  sub_2665F0(v101);
  if ( a3 )
    v11 = 1;
  else
    v11 = v9;
  if ( !v11 )
  {
    v64 = sub_94700(
            (int)"breakpoint.c",
            6071,
            "%s: Assertion `%s' failed.",
            "void print_one_breakpoint_location(breakpoint*, bp_location*, int, bp_location**, int)",
            "!loc || loc_number != 0");
    goto LABEL_166;
  }
  if ( !a2 )
  {
    v13 = *(_DWORD *)(a1 + 28);
    if ( v13 )
    {
      if ( *(_DWORD *)v13 )
        v14 = 1;
      else
        v14 = *(unsigned __int8 *)(v13 + 38) ^ 1;
    }
    else
    {
      v14 = 0;
    }
    sub_B76D8();
    sub_B7694(0);
    sub_257504(v10, "number", *(_DWORD *)(a1 + 24));
    sub_B7694(1);
    LODWORD(v64) = *(_DWORD *)(a1 + 12);
    if ( (unsigned int)v64 <= 0x21 )
    {
      v65 = &aStdVectorSymta_0[8 * v64];
      if ( (_DWORD)v64 == *((_DWORD *)v65 + 915) )
      {
        sub_2575E8(v10, "type", *((_DWORD *)v65 + 916));
        sub_B7694(2);
        sub_2575E8(v10, "disp", *(_DWORD *)&aStdVectorSymta_0[4 * *(_DWORD *)(a1 + 20) + 2436]);
        sub_B7694(3);
        sub_257694(v10, "enabled", "%c", (unsigned __int8)aStdVectorSymta_0[*(_DWORD *)(a1 + 16) + 3932]);
        goto LABEL_11;
      }
    }
LABEL_166:
    ((void (__fastcall *)(_DWORD, _DWORD))loc_C93F0)(v64, HIDWORD(v64));
    v96 = ptr;
    if ( ptr )
      sub_339E64(ptr);
    sub_338FFC(v96);
  }
  sub_B76D8();
  sub_B7694(0);
  v12 = sub_93140("%d.%d", *(_DWORD *)(a1 + 24), a3);
  sub_2575E8(v10, "number", v12);
  if ( v12 )
    free(v12);
  v13 = a2;
  sub_B7694(1);
  v14 = 0;
  sub_2575A4(v10, "type");
  sub_B7694(2);
  sub_2575A4(v10, "disp");
  sub_B7694(3);
  v15 = "n";
  if ( *(_BYTE *)(a2 + 38) )
    v15 = "y";
  sub_2575E8(v10, "enabled", v15);
LABEL_11:
  v16 = sub_257374(v10, 2);
  v18 = *(_DWORD *)(a1 + 4);
  if ( !v18 || (v19 = *(int (__fastcall **)(int, int *))(v18 + 36)) == 0 )
  {
    v22 = *(_DWORD *)(a1 + 12);
    switch ( v22 )
    {
      case 0:
        sub_94700((int)"breakpoint.c", 6134, "print_one_breakpoint: bp_none encountered\n");
        goto LABEL_160;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 27:
      case 28:
      case 29:
      case 30:
      case 31:
      case 32:
      case 33:
        if ( v102 )
        {
          sub_B7694(4);
          if ( v14 )
          {
            sub_2575E8(v10, "addr", "<MULTIPLE>");
            v16 = sub_B7694(5);
LABEL_112:
            v22 = *(_DWORD *)(a1 + 28);
            v67 = v14 ^ 1;
            if ( v13 )
              v14 = v67 & 1;
            else
              v14 = 0;
            if ( !v22 )
              goto LABEL_37;
            goto LABEL_116;
          }
          if ( *(_DWORD *)(a1 + 28) && !*(_BYTE *)(v13 + 37) )
            sub_257630(v10, "addr", *(_DWORD *)(v13 + 44), *(_DWORD *)(v13 + 52));
          else
            sub_2575E8(v10, "addr", "<PENDING>");
          sub_B7694(5);
        }
        else
        {
          v16 = sub_B7694(5);
          if ( v14 )
            goto LABEL_112;
        }
        v16 = ((int (__fastcall *)(int, int))loc_CBADC)(a1, v13);
        v22 = *(_DWORD *)(a1 + 28);
        v14 = v13;
        if ( v13 )
          v14 = 1;
        if ( !v22 )
          goto LABEL_18;
LABEL_116:
        *a4 = v22;
        goto LABEL_18;
      case 6:
      case 7:
      case 8:
      case 9:
        if ( v102 )
          sub_2575A4(v10, "addr");
        v66 = v14 ^ 1;
        sub_B7694(5);
        v16 = sub_2575E8(v10, "what", *(_DWORD *)(a1 + 136));
        if ( v13 )
          v14 = v66 & 1;
        else
          v14 = 0;
        goto LABEL_18;
      default:
        v68 = v14 ^ 1;
        if ( v13 )
          v14 = v68 & 1;
        else
          v14 = 0;
        goto LABEL_18;
    }
  }
  v20 = *(_DWORD **)(a1 + 28);
  if ( v20 && *v20 )
  {
    sub_94700(
      (int)"breakpoint.c",
      6127,
      "%s: Assertion `%s' failed.",
      "void print_one_breakpoint_location(breakpoint*, bp_location*, int, bp_location**, int)",
      "b->loc == NULL || b->loc->next == NULL");
LABEL_139:
    sub_B7694(8);
    sub_257380(v10, "\tignore next ", v81, v82);
    sub_257504(v10, "ignore", *(_DWORD *)(a1 + 36));
    sub_257380(v10, " hits\n", v83, v84);
LABEL_62:
    if ( *(int *)(a1 + 40) > 1 )
    {
      sub_B7694(8);
      sub_257380(v10, "\tdisable after ", v44, v45);
      v47 = *(_DWORD *)(a1 + 36);
      if ( v47 )
        LOWORD(v48) = 31208;
      else
        LOWORD(v48) = 31184;
      HIWORD(v48) = 56;
      sub_257380(v10, v48, v46, v47);
      sub_257504(v10, "enable", *(_DWORD *)(a1 + 40));
      sub_257380(v10, " hits\n", v49, v50);
    }
    if ( (unsigned int)(*(_DWORD *)(a1 + 12) - 27) <= 2 )
    {
      v51 = *(_QWORD *)(a1 + 152);
      HIDWORD(v51) |= v51;
      if ( HIDWORD(v51) )
      {
        sub_257380(v10, "\ttrace buffer usage ", v51, HIDWORD(v51));
        sub_257504(v10, "traceframe-usage", *(_DWORD *)(a1 + 152));
        sub_257380(v10, " bytes\n", v94, v95);
      }
    }
    v52 = *(int ***)(a1 + 44);
    if ( v52 )
    {
      sub_B7694(9);
      sub_2578AC(v10, 0);
      sub_57ADC(v10, v52, 4);
      sub_25734C(v10, 0);
    }
    if ( (unsigned int)(*(_DWORD *)(a1 + 12) - 27) > 2 )
      goto LABEL_76;
    if ( *(_DWORD *)(a1 + 140) )
    {
LABEL_160:
      sub_B7694(10);
      sub_257380(v10, "\tpass count ", v90, v91);
      sub_257504(v10, "pass", *(_DWORD *)(a1 + 140));
      sub_257380(v10, " \n", v92, v93);
    }
    if ( !v14 )
      goto LABEL_76;
    goto LABEL_75;
  }
  v21 = v14 ^ 1;
  if ( v13 )
    v14 = v21 & 1;
  else
    v14 = 0;
  v16 = v19(a1, a4);
LABEL_18:
  if ( !v14 )
    goto LABEL_37;
  ptr = 0;
  v23 = (_DWORD *)dword_487918;
  v99 = 0;
  v100 = 0;
  if ( dword_487918 )
  {
    do
    {
      while ( v23[9] != *(_DWORD *)(v13 + 48) )
      {
LABEL_21:
        v23 = (_DWORD *)v23[1];
        if ( !v23 )
          goto LABEL_29;
      }
      v24 = v100;
      if ( v99 == v100 )
      {
        sub_96B5C((int *)&ptr, v99, v23 + 2);
        goto LABEL_21;
      }
      v25 = v99 + 4;
      if ( v99 )
        v24 = (char *)v23[2];
      v23 = (_DWORD *)v23[1];
      if ( v99 )
        *(_DWORD *)v99 = v24;
      v99 = v25;
    }
    while ( v23 );
  }
LABEL_29:
  if ( a5 )
  {
    v27 = 0;
  }
  else
  {
    v26 = sub_16F654(v16);
    v27 = ((int (__fastcall *)(int))loc_16D8FC)(v26)
       || sub_1CD360() <= 1 && sub_183DB4() <= 1
       || *(_DWORD *)(*(_DWORD *)(v13 + 16) + 12) == 26;
  }
  v28 = sub_2573F0(v10);
  v22 = v28 ^ 1;
  v29 = v28;
  if ( ((v28 ^ 1) & v27) == 0 )
  {
    sub_2578AC(v10, 1);
    v71 = ptr;
    if ( ptr != v99 )
    {
      v72 = ", ";
      v73 = 0;
      do
      {
        if ( v29 )
        {
          sub_93170(v97, 0xAu, "i%d", v71[v73]);
          sub_2575E8(v10, 0, v97);
        }
        else
        {
          if ( v73 )
            sub_257380(v10, ", ", v71, v72);
          else
            sub_257380(v10, " inf ", v71, v72);
          v74 = sub_988AC(*((int *)ptr + v73));
          sub_257380(v10, v74, v75, v76);
        }
        v71 = ptr;
        ++v73;
        v72 = (char *)(v99 - (_BYTE *)ptr);
      }
      while ( v73 < (v99 - (_BYTE *)ptr) >> 2 );
    }
    sub_25734C(v10, 1);
  }
  if ( ptr )
    sub_339E64(ptr);
LABEL_37:
  if ( !a2 )
  {
    v54 = *(_DWORD *)(a1 + 112);
    if ( v54 == -1 )
    {
      v55 = *(_DWORD *)(a1 + 116);
      if ( v55 )
      {
        sub_257380(v10, " task ", v17, v55);
        sub_257504(v10, "task", *(_DWORD *)(a1 + 116));
      }
    }
    else
    {
      sub_257380(v10, " thread ", v17, v54);
      sub_257504(v10, "thread", *(_DWORD *)(a1 + 112));
    }
    sub_257380(v10, &word_356638, v17, v55);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)(a1 + 4) + 40))(a1, v10);
    if ( !*(_DWORD *)(a1 + 100) )
    {
LABEL_47:
      v33 = *(_DWORD *)(a1 + 112);
      if ( v33 != -1 )
      {
        sub_257380(v10, "\tstop only in thread ", v32, v33);
        if ( sub_2573F0(v10) )
        {
          sub_257504(v10, "thread", *(_DWORD *)(a1 + 112));
        }
        else
        {
          v85 = sub_23E3C4(*(_DWORD *)(a1 + 112));
          v86 = sub_240128(v85);
          sub_2575E8(v10, "thread", v86);
        }
        sub_257380(v10, &word_356638, v34, v35);
      }
      if ( *(_DWORD *)(a1 + 120) )
      {
        v36 = *(_DWORD *)(a1 + 12);
        if ( v36 == 26 )
        {
          sub_257380(v10, "\tcatchpoint", v32, 26);
        }
        else
        {
          v37 = v36 - 27;
          if ( v37 > 2 )
            LOWORD(v38) = 31124;
          else
            LOWORD(v38) = 31112;
          HIWORD(v38) = 56;
          sub_257380(v10, v38, v32, v37);
        }
        sub_257380(v10, " already hit ", v39, v40);
        sub_257504(v10, "times", *(_DWORD *)(a1 + 120));
        v42 = *(_DWORD *)(a1 + 120);
        if ( v42 == 1 )
          LOWORD(v43) = 31160;
        else
          LOWORD(v43) = 31168;
        HIWORD(v43) = 56;
        sub_257380(v10, v43, v41, v42);
      }
      else if ( sub_2573F0(v10) )
      {
        sub_257504(v10, "times", *(_DWORD *)(a1 + 120));
      }
      if ( !*(_DWORD *)(a1 + 36) )
        goto LABEL_62;
      goto LABEL_139;
    }
    sub_B7694(7);
    v57 = *(_DWORD *)(a1 + 12) - 27;
    if ( v57 > 2 )
      LOWORD(v58) = 31052;
    else
      LOWORD(v58) = 31036;
    HIWORD(v58) = 56;
    sub_257380(v10, v58, v56, v57);
    sub_2575E8(v10, "cond", *(_DWORD *)(a1 + 100));
    v59 = *(char **)(a1 + 12);
    v31 = v59 - 1;
    v60 = (unsigned int)v59 > 0x1E;
    if ( v59 != (char *)30 )
      v60 = (unsigned int)(v59 - 1) > 1;
    if ( !v60 )
    {
      v59 = off_46C048;
      if ( off_46C048 == "auto" )
      {
        if ( off_489B60(&dword_4899A0) )
          goto LABEL_93;
      }
      else
      {
        v31 = "target";
        if ( off_46C048 == "target" )
        {
LABEL_93:
          sub_257380(v10, " (", v31, v59);
          v61 = sub_CADB8(a1);
          sub_2575E8(v10, "evaluated-by", v61);
          sub_257380(v10, " evals)", v62, v63);
        }
      }
    }
    sub_257380(v10, &word_356638, v31, v59);
    goto LABEL_47;
  }
  sub_257380(v10, &word_356638, v17, v22);
  if ( sub_15CD58(
         *(_DWORD *)(a1 + 52),
         *(_DWORD *)(a1 + 56),
         *(_DWORD *)(a1 + 60),
         *(_DWORD *)(a1 + 64),
         *(_DWORD *)(a1 + 68)) )
  {
    sub_B7694(6);
    sub_257380(v10, "\tstop only in stack frame at ", v77, v78);
    sub_257630(v10, "frame", *(_DWORD *)(a1 + 88), *(_DWORD *)(a1 + 52));
    sub_257380(v10, &word_356638, v79, v80);
  }
  if ( *(_DWORD *)(a1 + 44) )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 12) - 27) > 2 || !v14 )
      return sub_2573F0(v10);
    goto LABEL_75;
  }
  if ( (unsigned int)(*(_DWORD *)(a1 + 12) - 27) <= 2 )
  {
    if ( !v14 )
      return sub_2573F0(v10);
LABEL_75:
    if ( !*(_BYTE *)(v13 + 37) )
    {
      sub_B7694(11);
      if ( sub_2573F0(v10) )
      {
        v70 = "n";
        if ( *(_BYTE *)(v13 + 39) )
          v70 = "y";
        sub_2575E8(v10, "installed", v70);
      }
      else
      {
        if ( *(_BYTE *)(v13 + 39) )
          LOWORD(v87) = 31308;
        else
          LOWORD(v87) = 31312;
        HIWORD(v87) = 56;
        sub_257380(v10, v87, v69, *(unsigned __int8 *)(v13 + 39));
        sub_257380(v10, "installed on target\n", v88, v89);
      }
    }
  }
LABEL_76:
  result = sub_2573F0(v10);
  if ( (v9 & result) != 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 12) - 6) <= 3 )
    {
      return sub_2575E8(v10, "original-location", *(_DWORD *)(a1 + 136));
    }
    else
    {
      result = *(_DWORD *)(a1 + 76);
      if ( result )
      {
        result = ((int (*)(void))loc_19D228)();
        if ( result )
        {
          v53 = ((int (__fastcall *)(_DWORD))loc_19D228)(*(_DWORD *)(a1 + 76));
          return sub_2575E8(v10, "original-location", v53);
        }
      }
    }
  }
  return result;
}
