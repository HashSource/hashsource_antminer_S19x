void __fastcall sub_27B2D8(
        int a1,
        int a2,
        const char *a3,
        const char *a4,
        const char **a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        unsigned __int8 *a10,
        char *a11,
        int *a12,
        int a13)
{
  unsigned __int8 *v17; // r7
  int v18; // r4
  char *v19; // r6
  char v20; // r3
  int v21; // r11
  unsigned __int64 v22; // kr00_8
  int v23; // r2
  char *v24; // r4
  int v25; // r5
  int v26; // r0
  int v27; // r1
  char *v28; // r2
  char *v29; // r0
  char *v30; // r0
  int v31; // r3
  int v32; // r0
  char v33; // r2
  char *v34; // r2
  unsigned int v35; // r0
  int v36; // r5
  unsigned int v37; // r2
  char *v38; // r3
  unsigned int v39; // r1
  int v40; // r4
  int v41; // r2
  int v42; // r4
  _DWORD *v43; // r0
  const char *v44; // r1
  int v45; // r12
  int v46; // r2
  char v47; // r1
  int v48; // r3
  char *v49; // r2
  char *v50; // r0
  int v51; // r4
  int (__fastcall *v52)(int, char *); // r2
  const char *v53; // r0
  unsigned __int8 *v54; // r5
  const char *v55; // r1
  char *v56; // r0
  int v57; // r0
  int *v58; // r0
  int v59; // r0
  char *v60; // r0
  int v61; // r0
  int v62; // r0
  char *v63; // r0
  __int64 v64; // r0
  int (__fastcall *v65)(int, char *); // r3
  __int64 v66; // r0
  char *v67; // r0
  unsigned int v68; // r0
  char *v69; // r0
  __int64 v70; // r0
  char *v71; // r0
  unsigned int v72; // r0
  int v73; // r1
  char *v74; // r0
  unsigned int v75; // r0
  int v76; // r1
  char *v77; // r0
  unsigned int v78; // r0
  int v79; // r1
  char *v80; // r0
  unsigned int v81; // r0
  int v82; // r1
  char *v83; // r0
  int v84; // r5
  char *v85; // r3
  int v86; // r0
  const char *v87; // r1
  int v88; // r0
  char *v89; // r0
  char *v90; // r0
  char *v91; // r3
  char *v92; // r2
  const char *v93; // r0
  int v94; // r0
  const char *v95; // r0
  const char *v96; // r0
  int v97; // [sp+28h] [bp-7Ch]
  int v99; // [sp+34h] [bp-70h]
  int v100; // [sp+3Ch] [bp-68h]
  int v102; // [sp+4Ch] [bp-58h] BYREF
  int v103; // [sp+50h] [bp-54h] BYREF
  int v104; // [sp+54h] [bp-50h] BYREF
  __int64 v105; // [sp+58h] [bp-4Ch] BYREF
  __int64 v106; // [sp+60h] [bp-44h] BYREF
  __int64 ptr; // [sp+68h] [bp-3Ch] BYREF
  int v108; // [sp+70h] [bp-34h]

  v17 = a10;
  v99 = ((int (__fastcall *)(int))loc_165BB8)(a7);
  ++dword_48AA68;
  sub_25A7C0(a1, a2, "__attribute__ ((unused)) %s %s;\n", a3, a4);
  sub_25A7C0(a1, a2, "{\n");
  ptr = 0;
  v18 = (int)a12;
  if ( a12 )
    v18 = 1;
  v100 = a11 - (char *)a10;
  v97 = a1 + 2;
  v108 = 0;
  if ( a11 == (char *)a10 )
  {
    v19 = (char *)(a11 - (char *)a10);
  }
  else
  {
    if ( (unsigned int)(a11 - (char *)a10) > 0x1FFFFFFF )
      sub_33D184("vector::_M_default_append");
    v90 = (char *)sub_9836C(8 * (a11 - (char *)a10));
    v19 = v90;
    v91 = 0;
    v106 = 0;
    do
    {
      v92 = &v90[8 * (_DWORD)v91++];
      *(_QWORD *)v92 = v106;
    }
    while ( (char *)(a11 - (char *)a10) != v91 );
  }
  LODWORD(v106) = 0;
  sub_11BF6C((int)&ptr, &v106);
  v20 = v19[4];
  v21 = 0;
  *(_DWORD *)v19 = v18;
  v19[4] = v20 | 1;
  while ( 1 )
  {
    v22 = ptr;
    if ( (_DWORD)ptr == HIDWORD(ptr) )
      break;
    while ( 2 )
    {
      v23 = *(_DWORD *)(HIDWORD(v22) - 4);
      HIDWORD(ptr) = HIDWORD(v22) - 4;
      v24 = (char *)&a10[v23];
      if ( (v19[8 * v23 + 4] & 1) == 0 )
      {
        sub_94700(
          (int)"compile/compile-loc2c.c",
          83,
          "%s: Assertion `%s' failed.",
          "void compute_stack_depth_worker(int, int*, std::vector<insn_info>*, std::vector<int>*, bfd_endian, unsigned in"
          "t, const gdb_byte*, const gdb_byte*)",
          "(*info)[start].visited");
        v94 = ptr;
        if ( (_DWORD)ptr )
          sub_339E64((void *)ptr);
        sub_338FFC(v94);
      }
      v25 = *(_DWORD *)&v19[8 * v23];
      if ( a11 > v24 )
      {
LABEL_9:
        v26 = v24 - (char *)a10;
        v27 = (unsigned __int8)*v24;
        v28 = &v19[8 * (v24 - (char *)a10)];
        if ( (v28[4] & 1) != 0 )
        {
          if ( v25 != *(_DWORD *)&v19[8 * v26] )
            sub_946E0("inconsistent stack depths", v27);
        }
        else
        {
          v28[4] |= 1u;
          *(_DWORD *)&v19[8 * v26] = v25;
        }
        v29 = v24 + 1;
        switch ( v27 )
        {
          case 3:
            ++v25;
            v24 = &v29[a9];
            goto LABEL_13;
          case 6:
          case 25:
          case 31:
          case 32:
          case 150:
            goto LABEL_22;
          case 8:
          case 9:
          case 21:
            v24 += 2;
            ++v25;
            goto LABEL_13;
          case 10:
          case 11:
            v24 += 3;
            ++v25;
            goto LABEL_13;
          case 12:
          case 13:
            v24 += 5;
            ++v25;
            goto LABEL_13;
          case 14:
          case 15:
            v24 += 9;
            ++v25;
            goto LABEL_13;
          case 16:
          case 17:
          case 112:
          case 113:
          case 114:
          case 115:
          case 116:
          case 117:
          case 118:
          case 119:
          case 120:
          case 121:
          case 122:
          case 123:
          case 124:
          case 125:
          case 126:
          case 127:
          case 128:
          case 129:
          case 130:
          case 131:
          case 132:
          case 133:
          case 134:
          case 135:
          case 136:
          case 137:
          case 138:
          case 139:
          case 140:
          case 141:
          case 142:
          case 143:
          case 145:
            goto LABEL_17;
          case 18:
          case 20:
          case 48:
          case 49:
          case 50:
          case 51:
          case 52:
          case 53:
          case 54:
          case 55:
          case 56:
          case 57:
          case 58:
          case 59:
          case 60:
          case 61:
          case 62:
          case 63:
          case 64:
          case 65:
          case 66:
          case 67:
          case 68:
          case 69:
          case 70:
          case 71:
          case 72:
          case 73:
          case 74:
          case 75:
          case 76:
          case 77:
          case 78:
          case 79:
          case 80:
          case 81:
          case 82:
          case 83:
          case 84:
          case 85:
          case 86:
          case 87:
          case 88:
          case 89:
          case 90:
          case 91:
          case 92:
          case 93:
          case 94:
          case 95:
          case 96:
          case 97:
          case 98:
          case 99:
          case 100:
          case 101:
          case 102:
          case 103:
          case 104:
          case 105:
          case 106:
          case 107:
          case 108:
          case 109:
          case 110:
          case 111:
          case 156:
            ++v25;
            ++v24;
            goto LABEL_13;
          case 19:
          case 26:
          case 27:
          case 28:
          case 29:
          case 30:
          case 33:
          case 34:
          case 36:
          case 37:
          case 38:
          case 39:
          case 41:
          case 42:
          case 43:
          case 44:
          case 45:
          case 46:
            --v25;
            ++v24;
            goto LABEL_13;
          case 22:
          case 23:
            ++v24;
            v21 = 1;
            goto LABEL_13;
          case 35:
            v29 = sub_11257C(v29, a11, &v105);
LABEL_22:
            v24 = v29;
            goto LABEL_13;
          case 40:
            v24 += 3;
            --v25;
            v45 = &v24[sub_15C190((unsigned __int8 *)v29, 2, v99)] - (char *)a10;
            v47 = v19[8 * v45 + 4];
            v46 = v45;
            v106 = v45;
            if ( (v47 & 1) == 0 )
            {
              v103 = v45;
              sub_11BF6C((int)&ptr, &v103);
              v46 = v106;
            }
            v48 = 8 * v46;
            v49 = &v19[8 * v46];
            if ( (v49[4] & 1) != 0 )
            {
              if ( *(_DWORD *)&v19[v48] != v25 )
                sub_946E0("inconsistent stack depths");
            }
            else
            {
              v49[4] |= 1u;
              *(_DWORD *)&v19[v48] = v25;
            }
            v49[4] |= 2u;
            goto LABEL_13;
          case 47:
            v31 = &v24[sub_15C190((unsigned __int8 *)v29, 2, v99) + 3] - (char *)a10;
            v33 = v19[8 * v31 + 4];
            v32 = v31;
            v106 = v31;
            if ( (v33 & 1) == 0 )
            {
              v104 = v31;
              sub_11BF6C((int)&ptr, &v104);
              v32 = v106;
            }
            v34 = &v19[8 * v32];
            if ( (v34[4] & 1) != 0 )
            {
              if ( v25 != *(_DWORD *)&v19[8 * v32] )
                sub_946E0("inconsistent stack depths");
            }
            else
            {
              v34[4] |= 1u;
              *(_DWORD *)&v19[8 * v32] = v25;
            }
            v35 = ptr;
            v34[4] |= 2u;
            v22 = __PAIR64__(HIDWORD(ptr), v35);
            if ( v35 == HIDWORD(ptr) )
              goto LABEL_31;
            continue;
          case 144:
            v30 = sub_11257C(v29, a11, &v105);
            goto LABEL_18;
          case 146:
            goto LABEL_16;
          case 148:
            v24 += 2;
            goto LABEL_13;
          case 155:
          case 224:
            ++v24;
            v28[4] |= 4u;
            goto LABEL_13;
          default:
            v93 = (const char *)sub_322B3C(v27);
            sub_946E0("unhandled DWARF op: %s", v93);
        }
      }
      break;
    }
    while ( v24 != a11 )
    {
      v29 = (char *)sub_94700(
                      (int)"compile/compile-loc2c.c",
                      364,
                      "%s: Assertion `%s' failed.",
                      "void compute_stack_depth_worker(int, int*, std::vector<insn_info>*, std::vector<int>*, bfd_endian,"
                      " unsigned int, const gdb_byte*, const gdb_byte*)",
                      "op_ptr == op_end");
LABEL_16:
      v29 = sub_11257C(v29, a11, &v105);
LABEL_17:
      v30 = sub_112620(v29, a11, (int *)&v106);
LABEL_18:
      v24 = v30;
      ++v25;
LABEL_13:
      if ( a11 > v24 )
        goto LABEL_9;
    }
  }
LABEL_31:
  if ( v100 <= 0 )
  {
    v40 = 1;
    if ( (_DWORD)v22 )
      sub_339E64((void *)v22);
  }
  else
  {
    v36 = 0;
    v37 = 0;
    v38 = v19;
    do
    {
      v39 = *(_DWORD *)v38;
      v38 += 8;
      if ( v37 < v39 )
        v37 = v39;
      if ( (*(v38 - 4) & 4) != 0 )
        v36 = 1;
    }
    while ( &v19[8 * v100] != v38 );
    v40 = v37 + 1;
    if ( (_DWORD)v22 )
      sub_339E64((void *)v22);
    if ( v36 )
    {
      v41 = sub_15F7E8(0);
      if ( !v41 )
      {
        if ( dword_46D448 )
          v55 = (const char *)sub_21B3C4((int)a5);
        else
          v55 = *a5;
        sub_946E0("Symbol \"%s\" cannot be used because there is no selected frame", v55);
      }
      v42 = ((int (__fastcall *)(const char **, _DWORD, int))loc_15B3A0)(a5, 0, v41);
      nullsub_31();
      if ( *v43 != 1 )
      {
        if ( dword_46D448 )
          v44 = (const char *)sub_21B3C4((int)a5);
        else
          v44 = *a5;
        sub_946E0("Symbol \"%s\" cannot be used for compilation evaluation as its address has not been found.", v44);
      }
      if ( dword_46D448 )
        v87 = (const char *)sub_21B3C4((int)a5);
      else
        v87 = *a5;
      sub_946B0(
        "Symbol \"%s\" is thread-local and currently can only be referenced from the current thread in compiled code.",
        v87);
      v88 = ((int (__fastcall *)(int))loc_26C09C)(v42);
      v89 = sub_98E1C(v88);
      sub_25A7C0(v97, a2, "%s = %s;\n", a4, v89);
      goto LABEL_74;
    }
  }
  sub_25A7C0(v97, a2, "__gdb_uintptr __gdb_stack[%d];\n", v40);
  if ( v21 )
    sub_25A7C0(v97, a2, "__gdb_uintptr __gdb_tmp;\n");
  sub_25A7C0(v97, a2, "int __gdb_tos = -1;\n");
  if ( a12 )
  {
    v50 = sub_98E1C(*a12);
    sub_27B108(v97, a2, "%s", v50);
  }
  if ( a10 < (unsigned __int8 *)a11 )
  {
    while ( 2 )
    {
      v51 = *v17;
      sub_25A788(a1, a2);
      if ( (v19[8 * (v17 - a10) + 4] & 2) != 0 )
      {
        sub_27AFA8(a2, dword_48AA68, v17 - a10);
        v52 = *(int (__fastcall **)(int, char *))(*(_DWORD *)a2 + 16);
        if ( v52 == sub_60124 )
          (*(void (__fastcall **)(int, const char *, int))(*(_DWORD *)a2 + 8))(a2, ":;", 2);
        else
          v52(a2, ":;");
      }
      v53 = (const char *)sub_322B3C(v51);
      sub_25678C(a2, "/* %s */\n", v53);
      v54 = v17 + 1;
      switch ( v51 )
      {
        case 3:
          LODWORD(v70) = sub_15C250(v17 + 1, a9, v99);
          ptr = v70;
          v17 = &v54[a9];
          if ( a11 <= (char *)&v54[a9] || v54[a9] != 224 )
          {
            v86 = sub_132388(a13);
            v70 = ptr + (unsigned int)v86;
            ptr = v70;
          }
          goto LABEL_121;
        case 6:
        case 148:
          if ( v51 == 148 )
          {
            v84 = v17[1];
          }
          else
          {
            ++v17;
            v84 = a9;
          }
          if ( v51 == 148 )
            v17 += 2;
          v85 = sub_278D54(v84);
          if ( !v85 )
          {
            v96 = (const char *)sub_322B3C(v51);
            sub_946E0("Unsupported size %d in %s", v84, v96);
          }
          sub_25A7C0(v97, a2, "__gdb_stack[__gdb_tos] = *((__gdb_int_%s *) __gdb_stack[__gdb_tos]);\n", v85);
          goto LABEL_72;
        case 8:
          v81 = sub_15C250(v17 + 1, 1, v99);
          goto LABEL_134;
        case 9:
          v81 = sub_15C190(v17 + 1, 1, v99);
LABEL_134:
          v83 = sub_98B08(v81, v82);
          sub_25A7C0(v97, a2, "__gdb_stack[++__gdb_tos] = (__gdb_uintptr) %s;\n", v83);
          v17 += 2;
          goto LABEL_72;
        case 10:
          v78 = sub_15C250(v17 + 1, 2, v99);
          goto LABEL_131;
        case 11:
          v78 = sub_15C190(v17 + 1, 2, v99);
LABEL_131:
          v80 = sub_98B08(v78, v79);
          sub_25A7C0(v97, a2, "__gdb_stack[++__gdb_tos] = (__gdb_uintptr) %s;\n", v80);
          v17 += 3;
          goto LABEL_72;
        case 12:
          v75 = sub_15C250(v17 + 1, 4, v99);
          goto LABEL_128;
        case 13:
          v75 = sub_15C190(v17 + 1, 4, v99);
LABEL_128:
          v77 = sub_98B08(v75, v76);
          sub_25A7C0(v97, a2, "__gdb_stack[++__gdb_tos] = (__gdb_uintptr) %s;\n", v77);
          v17 += 5;
          goto LABEL_72;
        case 14:
          v72 = sub_15C250(v17 + 1, 8, v99);
          goto LABEL_125;
        case 15:
          v72 = sub_15C190(v17 + 1, 8, v99);
LABEL_125:
          v74 = sub_98B08(v72, v73);
          sub_25A7C0(v97, a2, "__gdb_stack[++__gdb_tos] = (__gdb_uintptr) %s;\n", v74);
          v17 += 9;
          goto LABEL_72;
        case 16:
          v17 = (unsigned __int8 *)sub_11257C((char *)v17 + 1, a11, &ptr);
          v71 = sub_98B08(ptr, SHIDWORD(ptr));
          goto LABEL_122;
        case 17:
          v17 = (unsigned __int8 *)sub_112620((char *)v17 + 1, a11, (int *)&v106);
          v70 = v106;
LABEL_121:
          v71 = sub_98B08(v70, SHIDWORD(v70));
LABEL_122:
          sub_25A7C0(v97, a2, "__gdb_stack[++__gdb_tos] = (__gdb_uintptr) %s;\n", v71);
          goto LABEL_72;
        case 18:
          sub_27B108(v97, a2, "__gdb_stack[__gdb_tos]");
          goto LABEL_71;
        case 19:
          sub_25A7C0(v97, a2, "--__gdb_tos;\n");
          goto LABEL_71;
        case 20:
          sub_27B108(v97, a2, "__gdb_stack[__gdb_tos - 1]");
          goto LABEL_71;
        case 21:
          v68 = v17[1];
          v17 += 2;
          v106 = v68;
          v69 = sub_988AC(v68);
          sub_27B108(v97, a2, "__gdb_stack[__gdb_tos - %s]", v69);
          goto LABEL_72;
        case 22:
          sub_25A7C0(v97, a2, "__gdb_tmp = __gdb_stack[__gdb_tos - 1];\n");
          sub_25A7C0(v97, a2, "__gdb_stack[__gdb_tos - 1] = __gdb_stack[__gdb_tos];\n");
          sub_25A7C0(v97, a2, "__gdb_stack[__gdb_tos] = __gdb_tmp;\n");
          goto LABEL_71;
        case 23:
          sub_25A7C0(v97, a2, "__gdb_tmp = __gdb_stack[__gdb_tos];\n");
          sub_25A7C0(v97, a2, "__gdb_stack[__gdb_tos] = __gdb_stack[__gdb_tos - 1];\n");
          sub_25A7C0(v97, a2, "__gdb_stack[__gdb_tos - 1] = __gdb_stack[__gdb_tos -2];\n");
          sub_25A7C0(v97, a2, "__gdb_stack[__gdb_tos - 2] = __gdb_tmp;\n");
          goto LABEL_71;
        case 25:
          sub_27AFDC(
            v97,
            a2,
            "((__gdb_intptr) __gdb_stack[__gdb_tos]) < 0 ? -__gdb_stack[__gdb_tos] : __gdb_stack[__gdb_tos]");
          goto LABEL_71;
        case 26:
          sub_27B06C(v97, a2, "%s", "__gdb_stack[__gdb_tos-1] & __gdb_stack[__gdb_tos]");
          goto LABEL_71;
        case 27:
          sub_27B06C(v97, a2, "((__gdb_intptr) __gdb_stack[__gdb_tos-1]) / ((__gdb_intptr) __gdb_stack[__gdb_tos])");
          goto LABEL_71;
        case 28:
          sub_27B06C(v97, a2, "%s", "__gdb_stack[__gdb_tos-1] - __gdb_stack[__gdb_tos]");
          goto LABEL_71;
        case 29:
          sub_27B06C(v97, a2, "%s", "__gdb_stack[__gdb_tos-1] % __gdb_stack[__gdb_tos]");
          goto LABEL_71;
        case 30:
          sub_27B06C(v97, a2, "%s", "__gdb_stack[__gdb_tos-1] * __gdb_stack[__gdb_tos]");
          goto LABEL_71;
        case 31:
          sub_27AFDC(v97, a2, "-__gdb_stack[__gdb_tos]");
          goto LABEL_71;
        case 32:
          sub_27AFDC(v97, a2, "~__gdb_stack[__gdb_tos]");
          goto LABEL_71;
        case 33:
          sub_27B06C(v97, a2, "%s", "__gdb_stack[__gdb_tos-1] | __gdb_stack[__gdb_tos]");
          goto LABEL_71;
        case 34:
          sub_27B06C(v97, a2, "%s", "__gdb_stack[__gdb_tos-1] + __gdb_stack[__gdb_tos]");
          goto LABEL_71;
        case 35:
          v17 = (unsigned __int8 *)sub_11257C((char *)v17 + 1, a11, &ptr);
          v67 = sub_98B08(ptr, SHIDWORD(ptr));
          sub_27AFDC(v97, a2, "__gdb_stack[__gdb_tos] + %s", v67);
          goto LABEL_72;
        case 36:
          sub_27B06C(v97, a2, "%s", "__gdb_stack[__gdb_tos-1] << __gdb_stack[__gdb_tos]");
          goto LABEL_71;
        case 37:
          sub_27B06C(v97, a2, "%s", "__gdb_stack[__gdb_tos-1] >> __gdb_stack[__gdb_tos]");
          goto LABEL_71;
        case 38:
          sub_27B06C(v97, a2, "((__gdb_intptr) __gdb_stack[__gdb_tos-1]) >> __gdb_stack[__gdb_tos]");
          goto LABEL_71;
        case 39:
          sub_27B06C(v97, a2, "%s", "__gdb_stack[__gdb_tos-1] ^ __gdb_stack[__gdb_tos]");
          goto LABEL_71;
        case 40:
          LODWORD(v66) = sub_15C190(v17 + 1, 2, v99);
          v106 = v66;
          v17 += 3;
          sub_25A7C0(v97, a2, "if ((( __gdb_intptr) __gdb_stack[__gdb_tos--]) != 0) goto ");
          goto LABEL_91;
        case 41:
          sub_27B06C(v97, a2, "(((__gdb_intptr) __gdb_stack[__gdb_tos-1]) == ((__gdb_intptr) __gdb_stack[__gdb_tos]))");
          goto LABEL_71;
        case 42:
          sub_27B06C(v97, a2, "(((__gdb_intptr) __gdb_stack[__gdb_tos-1]) >= ((__gdb_intptr) __gdb_stack[__gdb_tos]))");
          goto LABEL_71;
        case 43:
          sub_27B06C(v97, a2, "(((__gdb_intptr) __gdb_stack[__gdb_tos-1]) > ((__gdb_intptr) __gdb_stack[__gdb_tos]))");
          goto LABEL_71;
        case 44:
          sub_27B06C(v97, a2, "(((__gdb_intptr) __gdb_stack[__gdb_tos-1]) <= ((__gdb_intptr) __gdb_stack[__gdb_tos]))");
          goto LABEL_71;
        case 45:
          sub_27B06C(v97, a2, "(((__gdb_intptr) __gdb_stack[__gdb_tos-1]) < ((__gdb_intptr) __gdb_stack[__gdb_tos]))");
          goto LABEL_71;
        case 46:
          sub_27B06C(v97, a2, "(((__gdb_intptr) __gdb_stack[__gdb_tos-1]) != ((__gdb_intptr) __gdb_stack[__gdb_tos]))");
          goto LABEL_71;
        case 47:
          LODWORD(v64) = sub_15C190(v17 + 1, 2, v99);
          v106 = v64;
          v17 += 3;
          sub_25A7C0(v97, a2, "goto ");
LABEL_91:
          sub_27AFA8(a2, dword_48AA68, &v17[v106] - a10);
          v65 = *(int (__fastcall **)(int, char *))(*(_DWORD *)a2 + 16);
          if ( v65 == sub_60124 )
            (*(void (__fastcall **)(int, char *, int))(*(_DWORD *)a2 + 8))(a2, ";\n", 2);
          else
            v65(a2, ";\n");
          goto LABEL_72;
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 59:
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
        case 70:
        case 71:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 79:
          v63 = sub_98B08(v51 - 48, (v51 - 48) >> 31);
          sub_25A7C0(v97, a2, "__gdb_stack[++__gdb_tos] = (__gdb_uintptr) %s;\n", v63);
          goto LABEL_71;
        case 80:
        case 81:
        case 82:
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
        case 88:
        case 89:
        case 90:
        case 91:
        case 92:
        case 93:
        case 94:
        case 95:
        case 96:
        case 97:
        case 98:
        case 99:
        case 100:
        case 101:
        case 102:
        case 103:
        case 104:
        case 105:
        case 106:
        case 107:
        case 108:
        case 109:
        case 110:
        case 111:
          sub_112778(v17 + 1, (unsigned __int8 *)a11, "DW_OP_regx");
          v62 = sub_117648(a7, v51 - 80);
          sub_27B1A4(v97, a2, a8, a7, v62);
          goto LABEL_71;
        case 112:
        case 113:
        case 114:
        case 115:
        case 116:
        case 117:
        case 118:
        case 119:
        case 120:
        case 121:
        case 122:
        case 123:
        case 124:
        case 125:
        case 126:
        case 127:
        case 128:
        case 129:
        case 130:
        case 131:
        case 132:
        case 133:
        case 134:
        case 135:
        case 136:
        case 137:
        case 138:
        case 139:
        case 140:
        case 141:
        case 142:
        case 143:
          v17 = (unsigned __int8 *)sub_112620((char *)v17 + 1, a11, (int *)&v106);
          v57 = sub_117648(a7, v51 - 112);
          goto LABEL_82;
        case 144:
          v17 = (unsigned __int8 *)sub_11257C((char *)v17 + 1, a11, &ptr);
          sub_112778(v17, (unsigned __int8 *)a11, "DW_OP_regx");
          v61 = sub_117648(a7, ptr);
          sub_27B1A4(v97, a2, a8, a7, v61);
          goto LABEL_72;
        case 145:
          v58 = sub_C2574(a6);
          if ( !v58 )
            sub_946E0("No block found for address");
          v59 = sub_C23B0((int)v58);
          if ( !v59 )
            sub_946E0("No function found for block");
          sub_115D30(v59, a6, (int)&v104, &v105);
          v17 = (unsigned __int8 *)sub_112620((char *)v17 + 1, a11, (int *)&v106);
          sub_93170((char *)&ptr, 0x32u, "__frame_base_%ld", v17 - a10);
          sub_27B2D8(v97, a2, "__gdb_uintptr", &ptr, a5, a6, a7, a8, a9, v104, v104 + v105, 0, a13);
          v60 = sub_98B08(v106, SHIDWORD(v106));
          sub_27B108(v97, a2, "%s + %s", (const char *)&ptr, v60);
          goto LABEL_72;
        case 146:
          v56 = sub_11257C((char *)v17 + 1, a11, &ptr);
          v17 = (unsigned __int8 *)sub_112620(v56, a11, (int *)&v106);
          v57 = sub_117648(a7, ptr);
LABEL_82:
          sub_27B220(v97, a2, a8, a7, v57, v106);
          goto LABEL_72;
        case 150:
          goto LABEL_71;
        case 156:
          if ( sub_11066C(a7, a6, a13, &v102, &v106, &v103, &v104, &v105) )
          {
            sub_27B220(v97, a2, a8, a7, v102, v106);
          }
          else
          {
            sub_93170((char *)&ptr, 0x32u, "__cfa_%ld", v54 - a10);
            sub_27B2D8(v97, a2, "__gdb_uintptr", &ptr, a5, a6, a7, a8, a9, v104, v105, &v103, a13);
            sub_27B108(v97, a2, "%s", (const char *)&ptr);
          }
LABEL_71:
          ++v17;
LABEL_72:
          if ( v17 >= (unsigned __int8 *)a11 )
            break;
          continue;
        default:
          v95 = (const char *)sub_322B3C(v51);
          sub_946E0("unhandled DWARF op: %s", v95);
      }
      break;
    }
  }
  sub_25A7C0(v97, a2, "%s = __gdb_stack[__gdb_tos];\n", a4);
LABEL_74:
  sub_25A7C0(a1, a2, "}\n");
  sub_339E64(v19);
}
