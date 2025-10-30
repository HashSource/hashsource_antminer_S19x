int __fastcall sub_BE2C0(int a1, int **a2, int a3, int a4)
{
  char *v8; // r9
  __int64 v9; // r0
  int v10; // r10
  int v11; // r0
  int v12; // r1
  int v13; // r11
  __int64 v14; // r0
  int v15; // r0
  int result; // r0
  int v17; // r7
  int v18; // r0
  char *v19; // r11
  int v20; // r3
  int v21; // r9
  int v22; // r0
  int v23; // r8
  const char **v24; // r7
  const char *v25; // r7
  int v26; // r0
  int v27; // r2
  int v28; // r4
  int v29; // r3
  unsigned int v30; // r1
  unsigned int v31; // r0
  int v32; // r3
  unsigned int v33; // r0
  int v34; // r1
  int (__fastcall *v35)(int, int); // r3
  char v36; // r12
  int v37; // r1
  int v38; // r0
  int v39; // r0
  int **v40; // r1
  int v41; // r4
  int v42; // r0
  int v43; // r8
  int v44; // r2
  int v45; // r1
  int v46; // r0
  __int64 v47; // r0
  int v48; // r9
  int v49; // r12
  int v50; // r0
  int v51; // r7
  int v52; // r10
  int v53; // r9
  int v54; // r3
  int *v55; // r3
  int v56; // r2
  int v57; // r7
  int v58; // r0
  int v59; // r10
  int v60; // r0
  int *v61; // r3
  int v62; // r0
  int v63; // r4
  int v64; // r1
  int v65; // r0
  int v66; // r4
  __int64 v67; // r0
  __int64 v68; // r0
  int v69; // r9
  __int64 v70; // r0
  int v71; // r7
  int v72; // r4
  int v73; // r1
  int v74; // r2
  int v75; // r7
  int v76; // r9
  int v77; // r4
  int v78; // r7
  int v79; // r1
  char *v80; // r7
  int v81; // r4
  int v82; // r8
  int v83; // r0
  __int64 v84; // r0
  int v85; // r3
  int *v86; // r3
  int v87; // lr
  int v88; // r12
  int v89; // r0
  int v90; // r0
  int v91; // r7
  char *v92; // r8
  int v93; // r0
  int v94; // r4
  int v95; // r0
  int *v96; // r0
  int v97; // r0
  int v98; // r0
  __int64 v99; // r8
  int v100; // r5
  const char *v101; // r0
  int v102; // r8
  int v103; // r5
  int v104; // r10
  int v105; // r7
  const char *v106; // r0
  int v107; // r1
  __int16 *v108; // r1
  const char *v109; // r1
  const char **v110; // r0
  int v111; // [sp+18h] [bp-40h]
  int v112; // [sp+1Ch] [bp-3Ch]
  int v113; // [sp+24h] [bp-34h]
  int v114; // [sp+28h] [bp-30h] BYREF
  int v115[3]; // [sp+2Ch] [bp-2Ch] BYREF
  int v116; // [sp+38h] [bp-20h] BYREF
  int v117[3]; // [sp+3Ch] [bp-1Ch] BYREF
  int *v118[4]; // [sp+48h] [bp-10h] BYREF

  v8 = (char *)**a2;
  v9 = sub_1780B4(*(_DWORD *)(a3 + 12));
  v10 = *(_DWORD *)(v9 + 12);
  v118[0] = *a2;
  v11 = sub_BCE34(v118, SHIDWORD(v9));
  v13 = v11;
  if ( v11 )
  {
    *a2 = v118[0];
    v14 = sub_26EB1C(v11);
    sub_C0B5C(a3, HIDWORD(v14), v14, HIDWORD(v14));
    *(_DWORD *)a4 = 0;
    v15 = sub_26BC70(v13);
    result = sub_171258(v15);
    *(_DWORD *)(a4 + 4) = result;
    return result;
  }
  switch ( (unsigned int)v8 )
  {
    case 1u:
    case 2u:
    case 3u:
    case 4u:
    case 5u:
    case 7u:
    case 8u:
    case 0xBu:
    case 0xCu:
    case 0xDu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
    case 0x11u:
    case 0x12u:
    case 0x13u:
    case 0x17u:
      *a2 += 4;
      sub_BE2C0(a1, a2, a3, &v114);
      sub_BE184(a3, &v114);
      return ((int (__fastcall *)(int, char *, int **, int, int, int *, int *))loc_BF4F4)(
               a1,
               v8,
               a2,
               a3,
               a4,
               &v114,
               &v116);
    case 9u:
      *a2 += 4;
      sub_BE2C0(a1, a2, a3, &v114);
      sub_BE184(a3, &v114);
      v75 = sub_C0AD4(a3, 32);
      v76 = sub_C0AD4(a3, 33);
      sub_C0B24(a3, v75, *(_DWORD *)(a3 + 4));
      sub_BE2C0(a1, a2, a3, &v116);
      sub_BE184(a3, &v116);
      v77 = sub_C0AD4(a3, 32);
      v78 = sub_C0AD4(a3, 33);
      sub_C0B24(a3, v77, *(_DWORD *)(a3 + 4));
      sub_C0B5C(a3, v79, 1, 0);
      v72 = sub_C0AD4(a3, 33);
      sub_C0B24(a3, v76, *(_DWORD *)(a3 + 4));
      sub_C0B24(a3, v78, *(_DWORD *)(a3 + 4));
      v74 = 0;
      goto LABEL_62;
    case 0xAu:
      *a2 += 4;
      sub_BE2C0(a1, a2, a3, &v114);
      sub_BE184(a3, &v114);
      v69 = sub_C0AD4(a3, 32);
      sub_BE2C0(a1, a2, a3, &v116);
      sub_BE184(a3, &v116);
      v70 = sub_C0AD4(a3, 32);
      v71 = v70;
      sub_C0B5C(a3, HIDWORD(v70), 0, 0);
      v72 = sub_C0AD4(a3, 33);
      sub_C0B24(a3, v69, *(_DWORD *)(a3 + 4));
      sub_C0B24(a3, v71, *(_DWORD *)(a3 + 4));
      v74 = 1;
LABEL_62:
      sub_C0B5C(a3, v73, v74, 0);
      result = sub_C0B24(a3, v72, *(_DWORD *)(a3 + 4));
      *(_DWORD *)a4 = 0;
      *(_DWORD *)(a4 + 4) = v10;
      return result;
    case 0x14u:
      *a2 += 4;
      sub_BE2C0(a1, a2, a3, v118);
      if ( v118[0] != (int *)1 )
        sub_946E0("Left operand of `@' must be an object in memory.");
      v65 = sub_BCE34(a2, v64);
      v66 = v65;
      if ( !v65 )
        sub_946E0("Right operand of `@' must be a constant, in agent expressions.");
      v67 = sub_26BC70(v65);
      if ( **(_BYTE **)(v67 + 24) != 8 )
        sub_946E0("Right operand of `@' must be an integer.", HIDWORD(v67));
      v68 = sub_26EB1C(v66);
      if ( (int)v68 <= 0 )
        sub_946E0("Right operand of `@' must be positive.", HIDWORD(v68));
      result = sub_172140(v118[1], HIDWORD(v68), 0, 0, v68 - 1, ((int)v68 - 1) >> 31);
      *(_DWORD *)a4 = 1;
      *(_DWORD *)(a4 + 4) = result;
      return result;
    case 0x15u:
      v61 = *a2;
      *a2 += 4;
      if ( v61[4] != 45 )
        goto LABEL_129;
      v8 = (char *)sub_26CCD4(v61[8]);
      *a2 += 12;
      sub_BE2C0(a1, a2, a3, a4);
      v62 = sub_249854(v8);
      v63 = v62;
      if ( !v62 )
        goto LABEL_128;
      result = sub_C0D6C(a3, 45, *(_DWORD *)(v62 + 4));
      if ( (*(_BYTE *)(a3 + 48) & 1) != 0 )
        return sub_C0D6C(a3, 46, *(_DWORD *)(v63 + 4));
      return result;
    case 0x16u:
      *a2 += 4;
      sub_BE2C0(a1, a2, a3, &v114);
      sub_BD9D0(a3, &v114);
      return sub_BE2C0(a1, a2, a3, a4);
    case 0x1Fu:
      v55 = *a2;
      v56 = (int)(*a2 + 12);
      *a2 += 4;
      v57 = v55[4];
      *a2 = (int *)v56;
      if ( v55[12] != 45 )
LABEL_129:
        sub_946E0("May only assign to trace state variables");
      v8 = (char *)sub_26CCD4(v55[16]);
      *a2 += 12;
      v58 = sub_249854(v8);
      v59 = v58;
      if ( !v58 )
        goto LABEL_128;
      sub_C0D6C(a3, 44, *(_DWORD *)(v58 + 4));
      if ( (*(_BYTE *)(a3 + 48) & 1) != 0 )
        sub_C0D6C(a3, 46, *(_DWORD *)(v59 + 4));
      v60 = *(_DWORD *)(a3 + 12);
      v114 = 0;
      v115[0] = *(_DWORD *)(sub_1780B4(v60) + 68);
      ((void (__fastcall *)(int, int, int **, int, int, int *, int *))loc_BF4F4)(a1, v57, a2, a3, a4, &v114, &v116);
      result = sub_C0D6C(a3, 45, *(_DWORD *)(v59 + 4));
      if ( (*(_BYTE *)(a3 + 48) & 1) != 0 )
        return sub_C0D6C(a3, 46, *(_DWORD *)(v59 + 4));
      return result;
    case 0x23u:
      *a2 += 4;
      sub_BE2C0(a1, a2, a3, &v114);
      sub_BE184(a3, &v114);
      sub_BD1E8(a3, (int)v115, v10);
      v52 = sub_C0AD4(a3, 32);
      sub_BE2C0(a1, a2, a3, &v116);
      sub_BE184(a3, &v116);
      v53 = sub_C0AD4(a3, 33);
      sub_C0B24(a3, v52, *(_DWORD *)(a3 + 4));
      sub_BE2C0(a1, a2, a3, v118);
      sub_BE184(a3, v118);
      result = sub_C0B24(a3, v53, *(_DWORD *)(a3 + 4));
      v54 = v116;
      *(_DWORD *)(a4 + 4) = v117[0];
      *(_DWORD *)a4 = v54;
      return result;
    case 0x26u:
      v98 = a3;
      v99 = *((_QWORD *)*a2 + 4);
      v100 = (*a2)[4];
      *a2 += 16;
      sub_C0B5C(v98, v12, v99, HIDWORD(v99));
      *(_DWORD *)a4 = 0;
      result = sub_171258(v100);
      *(_DWORD *)(a4 + 4) = result;
      return result;
    case 0x28u:
      result = sub_BD334(a3, a4, (*a2)[8]);
      if ( !*(_BYTE *)(a4 + 8) )
      {
        v86 = *a2;
        if ( **(_BYTE **)(*(_DWORD *)(a4 + 4) + 24) == 14 )
        {
          v96 = (int *)v86[8];
          if ( !dword_46D448 )
          {
LABEL_80:
            v97 = *v96;
            goto LABEL_81;
          }
LABEL_99:
          v97 = sub_21B3C4(v96);
LABEL_81:
          sub_255F3C(v97);
        }
LABEL_70:
        *a2 = v86 + 16;
        return result;
      }
      v110 = (const char **)(*a2)[8];
      if ( dword_46D448 )
        goto LABEL_115;
      v109 = *v110;
      goto LABEL_113;
    case 0x2Au:
      v84 = sub_1C394C((*a2)[8], (*a2)[4], v118);
      *(_DWORD *)(a4 + 4) = v84;
      *(_BYTE *)(a4 + 8) = 0;
      result = sub_C0B5C(a3, HIDWORD(v84), v118[0], 0);
      v85 = *(_DWORD *)(a4 + 4);
      *(_DWORD *)a4 = 1;
      if ( **(_BYTE **)(v85 + 24) == 14 )
      {
        v96 = (int *)(*a2)[8];
        if ( !dword_46D448 )
          goto LABEL_80;
        goto LABEL_99;
      }
      v86 = *a2;
      goto LABEL_70;
    case 0x2Cu:
      v80 = (char *)(*a2 + 8);
      *a2 = (int *)((char *)*a2
                  + (((((int)((unsigned __int64)(*((_QWORD *)*a2 + 2) + 16LL) >> 32) >> 31) & 0xF) + (*a2)[4] + 16)
                   & 0xFFFFFFF0)
                  + 64);
      strlen(v80);
      v81 = sub_257E94(*(_DWORD *)(a3 + 12), v80);
      if ( v81 == -1 )
      {
        sub_94700((int)"ax-gdb.c", 2036, "Register $%s not available", v80);
        goto LABEL_118;
      }
      v82 = ((int (__fastcall *)(_DWORD))loc_166E9C)(*(_DWORD *)(a3 + 12));
      if ( v82 + ((int (__fastcall *)(_DWORD))loc_166F48)(*(_DWORD *)(a3 + 12)) <= v81 )
        sub_946E0("'%s' is a user-register; GDB cannot yet trace user-register contents.", v80);
      v83 = *(_DWORD *)(a3 + 12);
      *(_DWORD *)(a4 + 12) = v81;
      *(_DWORD *)a4 = 2;
      result = ((int (__fastcall *)(int, int))loc_1DD3B4)(v83, v81);
      *(_DWORD *)(a4 + 4) = result;
      return result;
    case 0x2Du:
      v91 = (*a2)[4];
      v92 = (char *)sub_26CCD4(v91);
      *a2 += 12;
      v93 = sub_249854(v92);
      v94 = v93;
      if ( v93 )
      {
        sub_C0D6C(a3, 44, *(_DWORD *)(v93 + 4));
        if ( (*(_BYTE *)(a3 + 48) & 1) != 0 )
          sub_C0D6C(a3, 46, *(_DWORD *)(v94 + 4));
        v95 = *(_DWORD *)(a3 + 12);
        *(_DWORD *)a4 = 0;
        result = sub_1780B4(v95);
        *(_DWORD *)(a4 + 4) = *(_DWORD *)(result + 68);
      }
      else
      {
        result = sub_26CBB4(v91, a3, a4);
        if ( !result )
          sub_946E0("$%s is not a trace state variable; GDB agent expressions cannot use convenience variables.", v92);
      }
      return result;
    case 0x34u:
      v87 = (*a2)[4];
      *a2 += 12;
      return sub_BFB68(a1, a2, a3, a4, v87);
    case 0x35u:
      v88 = (int)*a2 - a1;
      *a2 += 4;
      v118[0] = (int *)(v88 >> 4);
      v89 = sub_14C9EC(0, a1, v118, 2);
      v90 = sub_26BC70(v89);
      *a2 = (int *)(a1 + 16 * ((int)v118[0] + 1));
      return sub_BFB68(a1, a2, a3, a4, v90);
    case 0x38u:
      v51 = sub_171258((*a2)[4]);
      *a2 += 12;
      result = sub_BE2C0(a1, a2, a3, a4);
      if ( *(_DWORD *)a4 == 2 )
        goto LABEL_43;
      goto LABEL_41;
    case 0x39u:
      v49 = (int)*a2 - a1;
      *a2 += 4;
      v118[0] = (int *)(v49 >> 4);
      v50 = sub_14C9EC(0, a1, v118, 2);
      v51 = sub_26BC70(v50);
      *a2 = (int *)(a1 + 16 * ((int)v118[0] + 1));
      result = sub_BE2C0(a1, a2, a3, a4);
      if ( *(_DWORD *)a4 != 2 )
        goto LABEL_41;
LABEL_43:
      result = sub_BE0D4(a3, (_DWORD *)a4);
LABEL_41:
      *(_DWORD *)a4 = 1;
      *(_DWORD *)(a4 + 4) = v51;
      return result;
    case 0x3Au:
      v46 = *(_DWORD *)(a3 + 12);
      *a2 += 4;
      v47 = sub_1780B4(v46);
      v48 = *(_DWORD *)(v47 + 12);
      sub_C0B5C(a3, HIDWORD(v47), 0, 0);
      v114 = 0;
      v115[0] = sub_171258(v48);
      sub_BE184(a3, &v114);
      sub_BE2C0(a1, a2, a3, &v116);
      sub_BE184(a3, &v116);
      sub_BDFA8(a3, v115, v117);
      return sub_BCFE8(a3, (_DWORD *)a4, (_DWORD *)(a4 + 4), (int)v115, (int)v117, 3, 3, 1, "negation");
    case 0x3Bu:
      *a2 += 4;
      sub_BE2C0(a1, a2, a3, a4);
      sub_BE184(a3, (_DWORD *)a4);
      return sub_BD1E8(a3, a4 + 4, v10);
    case 0x3Cu:
      *a2 += 4;
      sub_BE2C0(a1, a2, a3, a4);
      sub_BE184(a3, (_DWORD *)a4);
      v26 = sub_1780B4(*(_DWORD *)(a3 + 12));
      v27 = *(_DWORD *)(a4 + 4);
      v28 = v26;
      v29 = *(_DWORD *)(v26 + 12);
      v30 = *(_DWORD *)(v27 + 20);
      v31 = *(_DWORD *)(v29 + 20);
      if ( v30 > v31
        || v30 == v31
        && (*(_BYTE *)(*(_DWORD *)(v27 + 24) + 1) & 1) != 0
        && (*(_BYTE *)(*(_DWORD *)(v29 + 24) + 1) & 1) == 0 )
      {
        v32 = *(_DWORD *)(v28 + 32);
        v33 = *(_DWORD *)(v32 + 20);
        if ( v30 <= v33
          && (v30 != v33
           || (*(_BYTE *)(*(_DWORD *)(v27 + 24) + 1) & 1) == 0
           || (*(_BYTE *)(*(_DWORD *)(v32 + 24) + 1) & 1) != 0) )
        {
          sub_BCF48(a3, v30, (int *)(v27 + 24), v32);
          v27 = *(_DWORD *)(v28 + 32);
          *(_DWORD *)(a4 + 4) = v27;
        }
      }
      else
      {
        sub_BCF48(a3, v30, (int *)(v27 + 24), v29);
        v27 = *(_DWORD *)(v28 + 12);
        *(_DWORD *)(a4 + 4) = v27;
      }
      if ( **(_BYTE **)(v27 + 24) != 8 )
        sub_946E0("Invalid type of operand to `~'.");
      sub_C09B8(a3, 18);
      v34 = *(_DWORD *)(a4 + 4);
      v35 = sub_C0A68;
      v36 = *(_BYTE *)(*(_DWORD *)(v34 + 24) + 1);
      v37 = 8 * *(_DWORD *)(v34 + 20);
      if ( (v36 & 1) != 0 )
        v35 = sub_C0A74;
      return v35(a3, v37);
    case 0x3Du:
      *a2 += 4;
      sub_BE2C0(a1, a2, a3, a4);
      sub_BE184(a3, (_DWORD *)a4);
      if ( !sub_194300(*(_DWORD *)(a4 + 4)) )
        sub_946E0("Argument of unary `*' is not a pointer.");
      return sub_BD75C((_DWORD *)a4, (_DWORD *)(a4 + 4));
    case 0x3Eu:
      *a2 += 4;
      sub_BE2C0(a1, a2, a3, a4);
      result = *(_DWORD *)(a4 + 4);
      if ( **(_BYTE **)(result + 24) == 7 )
        goto LABEL_86;
      switch ( *(_DWORD *)a4 )
      {
        case 1:
          *(_DWORD *)a4 = 0;
LABEL_86:
          result = sub_1700C0(result);
          *(_DWORD *)(a4 + 4) = result;
          break;
        case 0:
          sub_946E0("Operand of `&' is an rvalue, which has no address.");
        case 2:
          sub_946E0("Operand of `&' is in a register, and has no address.");
      }
      return result;
    case 0x43u:
      v38 = *(_DWORD *)(a3 + 12);
      *a2 += 4;
      v39 = sub_1780B4(v38);
      v40 = a2;
      v41 = *(_DWORD *)(v39 + 12);
      v42 = a1;
      v43 = *(_DWORD *)(a3 + 4);
      sub_BE2C0(v42, v40, a3, a4);
      v44 = *(_DWORD *)(a4 + 4);
      *(_DWORD *)(a3 + 4) = v43;
      result = sub_C0B5C(a3, v45, *(_DWORD *)(v44 + 20), 0);
      *(_DWORD *)(a4 + 4) = v41;
      *(_DWORD *)a4 = 0;
      return result;
    case 0x44u:
      *a2 += 4;
      sub_BE2C0(a1, a2, a3, a4);
      return sub_BE184(a3, (_DWORD *)a4);
    case 0x51u:
    case 0x52u:
      v25 = (const char *)(*a2 + 8);
      *a2 = (int *)((char *)*a2 + (((*a2)[4] + 16) & 0xFFFFFFF0) + 64);
      sub_BE2C0(a1, a2, a3, a4);
      if ( v8 == (char *)81 )
        return sub_BE1EC(a3, (_DWORD *)a4, v25, ".", "structure or union");
      else
        return sub_BE1EC(a3, (_DWORD *)a4, v25, (const char *)&dword_364FCC, "pointer to a structure or union");
    case 0x54u:
      v21 = sub_C2574(*(_DWORD *)(a3 + 16));
      v22 = sub_C23B0(v21);
      v23 = sub_194438(*(_BYTE *)(v22 + 20) & 0x1F);
      sub_21CDC4(v118, v23, v21);
      v24 = (const char **)v118[0];
      if ( !v118[0] )
        sub_946E0("no `%s' found", *(const char **)(v23 + 84));
      result = sub_BD334(a3, a4, (int)v118[0]);
      if ( !*(_BYTE *)(a4 + 8) )
      {
        *a2 += 8;
        return result;
      }
      if ( dword_46D448 )
      {
        v110 = v24;
LABEL_115:
        v109 = (const char *)sub_21B3C4(v110);
      }
      else
      {
        v109 = *v24;
      }
LABEL_113:
      sub_946E0("`%s' has been optimized out, cannot use", v109);
    case 0x56u:
      v17 = (*a2)[4];
      v112 = v17;
      v18 = sub_26725C((*a2)[8], (*a2)[9]);
      v19 = *(char **)(v17 + 24);
      v111 = v18;
      v20 = *v19;
      v8 = (char *)(*a2 + 12);
      if ( v20 < 3 )
        goto LABEL_127;
      if ( v20 <= 4 )
      {
        v102 = *((__int16 *)v19 + 2) - 1;
        v113 = a3;
        v103 = 24 * v102;
        v104 = *((_WORD *)v19 + 1) & 0x380;
        while ( 1 )
        {
          if ( v104 == 128 )
            v108 = (__int16 *)*((_DWORD *)v19 + 7);
          else
            v108 = &word_3B4A2C;
          if ( *v108 > v102 )
          {
            result = sub_BDEE0(v113, a4, (int)v19, (int)v8);
            if ( !result )
              sub_946E0("There is no field named %s", v8);
            goto LABEL_9;
          }
          v105 = *((_DWORD *)v19 + 6) + v103;
          v106 = *(const char **)(v105 + 16);
          if ( v106 )
          {
            if ( !strcmp(v106, v8) )
              break;
          }
          --v102;
          v103 -= 24;
        }
        if ( !sub_174F0C(v105, v107) )
        {
          if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v112 + 24) + 24) + v103 + 8) & 0xFFFFFFF0) != 0 )
            sub_946E0("pointers to bitfield members not allowed");
          sub_946E0("Cannot reference non-static field \"%s\"", v8);
        }
        result = sub_BD7D0(v113, a4, (int *)(v112 + 24), v102);
        if ( *(_BYTE *)(a4 + 8) )
          sub_946E0("static field `%s' has been optimized out, cannot use", v8);
      }
      else
      {
        if ( v20 != 24 )
        {
LABEL_127:
          sub_94700((int)"ax-gdb.c", 1681, "non-aggregate type in gen_aggregate_elt_ref");
LABEL_128:
          sub_946E0("$%s is not a trace state variable, may not assign to it", v8);
        }
        result = sub_BDEE0(a3, a4, (int)v19, (int)v8);
        if ( !result )
LABEL_118:
          sub_946E0("No symbol \"%s\" in namespace \"%s\".", v8, *(const char **)(*(_DWORD *)(v112 + 24) + 12));
      }
LABEL_9:
      *a2 = (int *)((char *)*a2 + ((v111 + 16) & 0xFFFFFFF0) + 80);
      return result;
    case 0x58u:
    case 0x5Du:
    case 0x5Eu:
      sub_946E0("Attempt to use a type name as an expression.");
    default:
      v101 = (const char *)sub_15634C(a1, v8);
      sub_946E0("Unsupported operator %s (%d) in expression.", v101, v8);
  }
}
