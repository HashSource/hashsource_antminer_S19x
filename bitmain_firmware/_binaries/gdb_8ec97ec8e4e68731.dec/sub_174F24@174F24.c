void __fastcall sub_174F24(_DWORD *a1, char *a2)
{
  char *v2; // r9
  int v4; // r3
  char *next_free; // r0
  char *v6; // r2
  int v7; // r3
  _DWORD *v8; // t1
  int v9; // r0
  _DWORD *v10; // r0
  const char *v11; // r2
  int v12; // r0
  int v13; // r5
  _DWORD *v14; // r0
  const char *v15; // r2
  int v16; // r0
  int v17; // r4
  _DWORD *v18; // r0
  __int16 *v19; // r3
  int v20; // r0
  _DWORD *v21; // r0
  const char *v22; // r1
  int v23; // r0
  int v24; // r4
  _DWORD *v25; // r0
  int v26; // r0
  int v27; // r4
  _DWORD *v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r4
  _DWORD *v32; // r0
  int v33; // r0
  int v34; // r4
  _DWORD *v35; // r0
  int v36; // r0
  int v37; // r4
  _DWORD *v38; // r0
  int v39; // r3
  int v40; // r2
  char v41; // r3
  char v42; // r3
  int v43; // r0
  int v44; // r4
  _DWORD *v45; // r0
  int v46; // r3
  int v47; // r4
  int v48; // r5
  __int64 v49; // r0
  char *v50; // r0
  int v51; // r0
  int v52; // r10
  _DWORD *v53; // r0
  const char *v54; // r1
  int v55; // r0
  int v56; // r10
  _DWORD *v57; // r0
  int v58; // r2
  int v59; // r0
  int v60; // r4
  _DWORD *v61; // r0
  int v62; // r0
  int v63; // r4
  _DWORD *v64; // r0
  char *v65; // r0
  int v66; // r4
  int v67; // r0
  int v68; // r2
  __int16 *v69; // r4
  _DWORD *v70; // r0
  int v71; // r0
  int v72; // r4
  _DWORD *v73; // r0
  int v74; // r0
  int v75; // r2
  __int16 *v76; // r3
  bool v77; // zf
  int v78; // r2
  int v79; // r3
  bool v80; // zf
  int v81; // r3
  int v82; // r1
  int v83; // r3
  __int16 *v84; // r3
  int v85; // r0
  int v86; // r2
  int v87; // r3
  bool v88; // zf
  _DWORD *v89; // r0
  int v90; // r2
  int v91; // r3
  int v92; // r3
  _DWORD *v93; // r11
  int v94; // r0
  int v95; // r2
  int v96; // r3
  bool v97; // zf
  int v98; // r3
  int v99; // r5
  _DWORD *v100; // r0
  int v101; // r2
  int v102; // r3
  bool v103; // zf
  int v104; // r3
  int v105; // r2
  int v106; // r0
  int v107; // r4
  char *v108; // r6
  _DWORD *v109; // r0
  int v110; // r0
  int v111; // r4
  _DWORD *v112; // r0
  int v113; // r0
  int v114; // r4
  _DWORD *v115; // r0
  int v116; // r3
  int v117; // r4
  int v118; // r9
  int v119; // r5
  const char *v120; // r3
  int v121; // r2
  int v122; // r0
  int v123; // r4
  _DWORD *v124; // r0
  int v125; // r3
  int v126; // r0
  int v127; // r2
  bool v128; // cc
  char *v129; // r0
  char *v130; // r4
  char *v131; // r7
  int v132; // r3
  char *v133; // r6
  __int16 *v134; // r0
  int v135; // r2
  int v136; // r0
  int v137; // r2
  int v138; // r3
  bool v139; // zf
  _DWORD *v140; // r0
  int v141; // r0
  int v142; // r1
  int v143; // r2
  __int16 *v144; // r3
  bool v145; // zf
  int v146; // r2
  int v147; // r0
  int v148; // r2
  int v149; // r3
  bool v150; // zf
  _DWORD *v151; // r0
  int v152; // r0
  int v153; // r2
  int v154; // r3
  bool v155; // zf
  int v156; // r2
  int v157; // r0
  int v158; // r2
  int v159; // r3
  bool v160; // zf
  _DWORD *v161; // r0
  int v162; // r0
  int v163; // r2
  int v164; // r3
  bool v165; // zf
  char *v166; // [sp+0h] [bp-44h]
  int v167; // [sp+Ch] [bp-38h]
  int v168; // [sp+10h] [bp-34h]
  _DWORD *v169; // [sp+14h] [bp-30h]
  char *v170; // [sp+24h] [bp-20h]
  int v171; // [sp+2Ch] [bp-18h]
  char *v172; // [sp+30h] [bp-14h]

  v2 = a2;
  if ( !a2 )
    obstack_begin(&stru_4877FC, 0, 0, (void *(*)(int))sub_93028, sub_16F860);
  v4 = a1[6];
  if ( *(__int16 *)(v4 + 4) > 0
    || (v6 = (char *)(*(_WORD *)(v4 + 2) & 0x380), v6 == (char *)128)
    && (v19 = *(__int16 **)(v4 + 28), v6 = (char *)&word_3B4A2C, v19 != &word_3B4A2C)
    && v19[2] > 0 )
  {
    next_free = stru_4877FC.next_free;
    v6 = stru_4877FC.next_free;
    v7 = (stru_4877FC.next_free - stru_4877FC.object_base) >> 2;
    while ( --v7 >= 0 )
    {
      v8 = (_DWORD *)*((_DWORD *)v6 - 1);
      v6 -= 4;
      if ( v8 == a1 )
      {
        v20 = sub_25A800(v2, "type node ", v6);
        v21 = (_DWORD *)sub_242F8C(v20);
        sub_25A44C(a1, *v21);
        sub_259F10(" <same as already seen type>\n");
        return;
      }
    }
    if ( (unsigned int)(stru_4877FC.chunk_limit - stru_4877FC.next_free) <= 3 )
    {
      obstack_newchunk(&stru_4877FC, 4);
      next_free = stru_4877FC.next_free;
    }
    *(_DWORD *)next_free = a1;
    stru_4877FC.next_free += 4;
  }
  v9 = sub_25A800(v2, "type node ", v6);
  v10 = (_DWORD *)sub_242F8C(v9);
  sub_25A44C(a1, *v10);
  sub_259F10((const char *)&word_356638);
  v11 = *(const char **)(a1[6] + 8);
  if ( !v11 )
    v11 = "<NULL>";
  v12 = sub_25A800(v2, "name '%s' (", v11);
  v13 = *(_DWORD *)(a1[6] + 8);
  v14 = (_DWORD *)sub_242F8C(v12);
  sub_25A44C(v13, *v14);
  sub_259F10(")\n");
  v15 = *(const char **)(a1[6] + 12);
  if ( !v15 )
    v15 = "<NULL>";
  v16 = sub_25A800(v2, "tagname '%s' (", v15);
  v17 = *(_DWORD *)(a1[6] + 12);
  v18 = (_DWORD *)sub_242F8C(v16);
  sub_25A44C(v17, *v18);
  sub_259F10(")\n");
  sub_25A800(v2, "code 0x%x ", *(char *)a1[6]);
  switch ( *(_BYTE *)a1[6] )
  {
    case 0:
      sub_259F10("(TYPE_CODE_UNDEF)");
      break;
    case 1:
      sub_259F10("(TYPE_CODE_PTR)");
      break;
    case 2:
      sub_259F10("(TYPE_CODE_ARRAY)");
      break;
    case 3:
      sub_259F10("(TYPE_CODE_STRUCT)");
      break;
    case 4:
      sub_259F10("(TYPE_CODE_UNION)");
      break;
    case 5:
      sub_259F10("(TYPE_CODE_ENUM)");
      break;
    case 6:
      sub_259F10("(TYPE_CODE_FLAGS)");
      break;
    case 7:
      sub_259F10("(TYPE_CODE_FUNC)");
      break;
    case 8:
      sub_259F10("(TYPE_CODE_INT)");
      break;
    case 9:
      sub_259F10("(TYPE_CODE_FLT)");
      break;
    case 0xA:
      sub_259F10("(TYPE_CODE_VOID)");
      break;
    case 0xB:
      sub_259F10("(TYPE_CODE_SET)");
      break;
    case 0xC:
      sub_259F10("(TYPE_CODE_RANGE)");
      break;
    case 0xD:
      sub_259F10("(TYPE_CODE_STRING)");
      break;
    case 0xE:
      sub_259F10("(TYPE_CODE_ERROR)");
      break;
    case 0xF:
      sub_259F10("(TYPE_CODE_METHOD)");
      break;
    case 0x10:
      sub_259F10("(TYPE_CODE_METHODPTR)");
      break;
    case 0x11:
      sub_259F10("(TYPE_CODE_MEMBERPTR)");
      break;
    case 0x12:
      sub_259F10("(TYPE_CODE_REF)");
      break;
    case 0x14:
      sub_259F10("(TYPE_CODE_CHAR)");
      break;
    case 0x15:
      sub_259F10("(TYPE_CODE_BOOL)");
      break;
    case 0x16:
      sub_259F10("(TYPE_CODE_COMPLEX)");
      break;
    case 0x17:
      sub_259F10("(TYPE_CODE_TYPEDEF)");
      break;
    case 0x18:
      sub_259F10("(TYPE_CODE_NAMESPACE)");
      break;
    default:
      sub_259F10("(UNKNOWN TYPE CODE)");
      break;
  }
  sub_259B34(&word_356638);
  sub_25A800(v2, "length %d\n", a1[5]);
  if ( (*(_BYTE *)(a1[6] + 2) & 0x10) != 0 )
    LOWORD(v22) = 23084;
  else
    LOWORD(v22) = 23096;
  HIWORD(v22) = 59;
  v23 = sub_25A800(v2, v22);
  v24 = *(_DWORD *)(a1[6] + 16);
  v25 = (_DWORD *)sub_242F8C(v23);
  sub_25A44C(v24, *v25);
  sub_259F10((const char *)&word_356638);
  v26 = sub_25A800(v2, "target_type ");
  v27 = *(_DWORD *)(a1[6] + 20);
  v28 = (_DWORD *)sub_242F8C(v26);
  sub_25A44C(v27, *v28);
  sub_259F10((const char *)&word_356638);
  v29 = *(_DWORD *)(a1[6] + 20);
  if ( v29 )
    sub_174F24(v29, v2 + 2);
  v30 = sub_25A800(v2, "pointer_type ");
  v31 = *a1;
  v32 = (_DWORD *)sub_242F8C(v30);
  sub_25A44C(v31, *v32);
  sub_259F10((const char *)&word_356638);
  v33 = sub_25A800(v2, "reference_type ");
  v34 = a1[1];
  v35 = (_DWORD *)sub_242F8C(v33);
  sub_25A44C(v34, *v35);
  sub_259F10((const char *)&word_356638);
  v36 = sub_25A800(v2, "type_chain ");
  v37 = a1[3];
  v38 = (_DWORD *)sub_242F8C(v36);
  sub_25A44C(v37, *v38);
  sub_259F10((const char *)&word_356638);
  sub_25A800(v2, "instance_flags 0x%x", a1[4]);
  v39 = a1[4];
  if ( (v39 & 1) != 0 )
  {
    sub_259B34(" TYPE_CONST");
    v39 = a1[4];
    if ( (v39 & 2) == 0 )
    {
LABEL_28:
      if ( (v39 & 4) == 0 )
        goto LABEL_29;
      goto LABEL_155;
    }
  }
  else if ( (v39 & 2) == 0 )
  {
    goto LABEL_28;
  }
  sub_259B34(" TYPE_VOLATILE");
  v39 = a1[4];
  if ( (v39 & 4) == 0 )
  {
LABEL_29:
    if ( (v39 & 8) == 0 )
      goto LABEL_30;
    goto LABEL_156;
  }
LABEL_155:
  sub_259B34(" TYPE_CODE_SPACE");
  v39 = a1[4];
  if ( (v39 & 8) == 0 )
  {
LABEL_30:
    if ( (v39 & 0x10) == 0 )
      goto LABEL_31;
    goto LABEL_157;
  }
LABEL_156:
  sub_259B34(" TYPE_DATA_SPACE");
  v39 = a1[4];
  if ( (v39 & 0x10) == 0 )
  {
LABEL_31:
    if ( (v39 & 0x20) == 0 )
      goto LABEL_32;
    goto LABEL_158;
  }
LABEL_157:
  sub_259B34(" TYPE_ADDRESS_CLASS_1");
  v39 = a1[4];
  if ( (v39 & 0x20) == 0 )
  {
LABEL_32:
    if ( (v39 & 0x80) == 0 )
      goto LABEL_33;
LABEL_159:
    sub_259B34(" TYPE_RESTRICT");
    if ( (a1[4] & 0x100) == 0 )
      goto LABEL_34;
    goto LABEL_160;
  }
LABEL_158:
  sub_259B34(" TYPE_ADDRESS_CLASS_2");
  v39 = a1[4];
  if ( (v39 & 0x80) != 0 )
    goto LABEL_159;
LABEL_33:
  if ( (v39 & 0x100) == 0 )
    goto LABEL_34;
LABEL_160:
  sub_259B34(" TYPE_ATOMIC");
LABEL_34:
  sub_259B34(&word_356638);
  sub_25A800(v2, "flags");
  v40 = a1[6];
  v41 = *(_BYTE *)(v40 + 1);
  if ( (v41 & 1) != 0 )
  {
    sub_259B34(" TYPE_UNSIGNED");
    v40 = a1[6];
    v41 = *(_BYTE *)(v40 + 1);
  }
  if ( (v41 & 2) != 0 )
  {
    sub_259B34(" TYPE_NOSIGN");
    v40 = a1[6];
    v41 = *(_BYTE *)(v40 + 1);
  }
  if ( (v41 & 4) != 0 )
  {
    sub_259B34(" TYPE_STUB");
    v40 = a1[6];
    v41 = *(_BYTE *)(v40 + 1);
  }
  if ( (v41 & 8) != 0 )
  {
    sub_259B34(" TYPE_TARGET_STUB");
    v40 = a1[6];
    v41 = *(_BYTE *)(v40 + 1);
  }
  if ( (v41 & 0x20) != 0 )
  {
    sub_259B34(" TYPE_PROTOTYPED");
    v40 = a1[6];
    v41 = *(_BYTE *)(v40 + 1);
  }
  if ( (v41 & 0x40) != 0 )
  {
    sub_259B34(" TYPE_INCOMPLETE");
    v40 = a1[6];
    if ( (*(_BYTE *)(v40 + 1) & 0x80) == 0 )
      goto LABEL_46;
  }
  else if ( (v41 & 0x80) == 0 )
  {
    goto LABEL_46;
  }
  sub_259B34(" TYPE_VARARGS");
  v40 = a1[6];
LABEL_46:
  v42 = *(_BYTE *)(v40 + 2);
  if ( (v42 & 1) != 0 )
  {
    sub_259B34(" TYPE_VECTOR");
    v42 = *(_BYTE *)(a1[6] + 2);
  }
  if ( (v42 & 8) == 0 )
  {
    if ( (v42 & 2) == 0 )
      goto LABEL_50;
LABEL_162:
    sub_259B34(" TYPE_STUB_SUPPORTED");
    if ( (a1[4] & 0x40) == 0 )
      goto LABEL_51;
LABEL_163:
    sub_259B34(" TYPE_NOTTEXT");
    goto LABEL_51;
  }
  sub_259B34(" TYPE_FIXED_INSTANCE");
  if ( (*(_BYTE *)(a1[6] + 2) & 2) != 0 )
    goto LABEL_162;
LABEL_50:
  if ( (a1[4] & 0x40) != 0 )
    goto LABEL_163;
LABEL_51:
  sub_259B34(&word_356638);
  v43 = sub_25A800(v2, "nfields %d ", *(__int16 *)(a1[6] + 4));
  v44 = *(_DWORD *)(a1[6] + 24);
  v45 = (_DWORD *)sub_242F8C(v43);
  sub_25A44C(v44, *v45);
  sub_259B34(&word_356638);
  v46 = a1[6];
  if ( *(__int16 *)(v46 + 4) > 0 )
  {
    v47 = 0;
    v48 = 0;
    do
    {
      v49 = *(_QWORD *)(*(_DWORD *)(v46 + 24) + v47);
      if ( *(_BYTE *)v46 == 5 )
      {
        v129 = sub_988AC(v49);
        v51 = sub_25A800(v2 + 2, "[%d] enumval %s type ", v48, v129);
      }
      else
      {
        v50 = sub_988AC(v49);
        v51 = sub_25A800(
                v2 + 2,
                "[%d] bitpos %s bitsize %d type ",
                v48,
                v50,
                *(_DWORD *)(*(_DWORD *)(a1[6] + 24) + v47 + 8) >> 4);
      }
      ++v48;
      v52 = *(_DWORD *)(*(_DWORD *)(a1[6] + 24) + v47 + 12);
      v53 = (_DWORD *)sub_242F8C(v51);
      sub_25A44C(v52, *v53);
      v54 = *(const char **)(*(_DWORD *)(a1[6] + 24) + v47 + 16);
      if ( !v54 )
        v54 = "<NULL>";
      v55 = sub_259F10(" name '%s' (", v54);
      v56 = *(_DWORD *)(*(_DWORD *)(a1[6] + 24) + v47 + 16);
      v57 = (_DWORD *)sub_242F8C(v55);
      sub_25A44C(v56, *v57);
      sub_259F10(")\n");
      v46 = a1[6];
      v58 = *(_DWORD *)(v46 + 24) + v47;
      v47 += 24;
      v59 = *(_DWORD *)(v58 + 12);
      if ( v59 )
      {
        sub_174F24(v59, v2 + 4);
        v46 = a1[6];
      }
    }
    while ( *(__int16 *)(v46 + 4) > v48 );
  }
  if ( *(_BYTE *)v46 == 12 )
  {
    v130 = "";
    v131 = sub_988AC(*(_QWORD *)(*(_DWORD *)(v46 + 24) + 8));
    v132 = *(_DWORD *)(a1[6] + 24);
    if ( *(_DWORD *)v132 )
      v133 = "";
    else
      v133 = " (undefined)";
    v166 = sub_988AC(*(_QWORD *)(v132 + 24));
    if ( !*(_DWORD *)(*(_DWORD *)(a1[6] + 24) + 16) )
      v130 = " (undefined)";
    sub_25A800(v2, "low %s%s  high %s%s\n", v131, v133, v166, v130);
    v46 = a1[6];
  }
  switch ( (*(unsigned __int16 *)(v46 + 2) >> 7) & 7 )
  {
    case 1:
      v67 = sub_25A800(v2, "cplus_stuff ");
      v68 = a1[6];
      if ( (*(_WORD *)(v68 + 2) & 0x380) == 0x80 )
        v69 = *(__int16 **)(v68 + 28);
      else
        v69 = &word_3B4A2C;
      v70 = (_DWORD *)sub_242F8C(v67);
      sub_25A44C(v69, *v70);
      sub_259B34(&word_356638);
      v71 = ((int (__fastcall *)(_DWORD *))loc_1724A0)(a1);
      sub_25A800(v2, "vptr_fieldno %d\n", v71);
      sub_25A800(v2, "vptr_basetype ");
      v72 = ((int (__fastcall *)(_DWORD *))loc_172524)(a1);
      v73 = (_DWORD *)sub_242F8C(v72);
      sub_25A44C(v72, *v73);
      sub_259B34(&word_356638);
      if ( ((int (__fastcall *)(_DWORD *))loc_172524)(a1) )
      {
        v74 = ((int (__fastcall *)(_DWORD *))loc_172524)(a1);
        sub_174F24(v74, v2 + 2);
      }
      v75 = a1[6];
      v76 = (__int16 *)(*(_WORD *)(v75 + 2) & 0x380);
      v77 = v76 == (__int16 *)128;
      if ( v76 == (__int16 *)128 )
        v76 = *(__int16 **)(v75 + 28);
      else
        v75 = 0;
      if ( v77 )
        v75 = *v76;
      sub_25A800(v2, "n_baseclasses %d\n", v75, v76);
      v78 = a1[6];
      v79 = *(_WORD *)(v78 + 2) & 0x380;
      v80 = v79 == 128;
      if ( v79 == 128 )
        v79 = *(_DWORD *)(v78 + 28);
      else
        v78 = 0;
      if ( v80 )
        v78 = *(__int16 *)(v79 + 4);
      sub_25A800(v2, "nfn_fields %d\n", v78, v79);
      v81 = a1[6];
      v82 = v81;
      if ( (*(_WORD *)(v81 + 2) & 0x380) != 0x80 )
      {
        if ( *(__int16 *)(v81 + 4) <= 0 )
          goto LABEL_64;
        goto LABEL_87;
      }
      v134 = *(__int16 **)(v81 + 28);
      if ( v134 == &word_3B4A2C )
      {
        if ( *(__int16 *)(v81 + 4) <= 0 )
          goto LABEL_89;
      }
      else
      {
        v135 = *v134;
        if ( v135 <= 0 )
        {
          v146 = *(__int16 *)(v81 + 4);
          if ( v146 <= 0 )
            goto LABEL_89;
LABEL_188:
          if ( *((_DWORD *)v134 + 5) )
          {
            v147 = sub_25A800(v2, "private_field_bits (%d bits at *", v146);
            v148 = a1[6];
            v149 = *(_WORD *)(v148 + 2) & 0x380;
            v150 = v149 == 128;
            if ( v149 == 128 )
              v149 = *(_DWORD *)(v148 + 28);
            else
              v72 = 0;
            if ( v150 )
              v72 = *(_DWORD *)(v149 + 20);
            v151 = (_DWORD *)sub_242F8C(v147);
            sub_25A44C(v72, *v151);
            v152 = sub_259F10(")");
            v153 = a1[6];
            v154 = *(_WORD *)(v153 + 2) & 0x380;
            v155 = v154 == 128;
            if ( v154 == 128 )
              v154 = *(_DWORD *)(v153 + 28);
            else
              v152 = 0;
            if ( v155 )
              v152 = *(_DWORD *)(v154 + 20);
            sub_16F89C(v152, *(__int16 *)(v153 + 4));
            sub_259B34(&word_356638);
            v81 = a1[6];
            if ( (*(_WORD *)(v81 + 2) & 0x380) != 0x80 )
              goto LABEL_64;
          }
          goto LABEL_200;
        }
        v136 = sub_25A800(v2, "virtual_field_bits (%d bits at *", v135);
        v137 = a1[6];
        v138 = *(_WORD *)(v137 + 2) & 0x380;
        v139 = v138 == 128;
        if ( v138 == 128 )
          v138 = *(_DWORD *)(v137 + 28);
        else
          v72 = 0;
        if ( v139 )
          v72 = *(_DWORD *)(v138 + 16);
        v140 = (_DWORD *)sub_242F8C(v136);
        sub_25A44C(v72, *v140);
        v141 = sub_259F10(")");
        v143 = a1[6];
        v144 = (__int16 *)(*(_WORD *)(v143 + 2) & 0x380);
        v145 = v144 == (__int16 *)128;
        if ( v144 == (__int16 *)128 )
        {
          v144 = *(__int16 **)(v143 + 28);
        }
        else
        {
          v142 = 0;
          v141 = 0;
        }
        if ( v145 )
        {
          v141 = *((_DWORD *)v144 + 4);
          v142 = *v144;
        }
        sub_16F89C(v141, v142);
        sub_259B34(&word_356638);
        v82 = a1[6];
        v146 = *(__int16 *)(v82 + 4);
        v81 = v82;
        if ( v146 <= 0 )
          goto LABEL_213;
        if ( (*(_WORD *)(v82 + 2) & 0x380) != 0x80 )
        {
LABEL_87:
          v82 = v81;
          v83 = *(_WORD *)(v81 + 2) & 0x380;
          goto LABEL_88;
        }
        v134 = *(__int16 **)(v82 + 28);
        if ( v134 != &word_3B4A2C )
          goto LABEL_188;
      }
LABEL_200:
      v156 = *(_DWORD *)(v81 + 28);
      if ( (__int16 *)v156 == &word_3B4A2C || !*(_DWORD *)(v156 + 24) )
      {
        v82 = v81;
        goto LABEL_89;
      }
      v157 = sub_25A800(v2, "protected_field_bits (%d bits at *", *(__int16 *)(v81 + 4));
      v158 = a1[6];
      v159 = *(_WORD *)(v158 + 2) & 0x380;
      v160 = v159 == 128;
      if ( v159 == 128 )
        v159 = *(_DWORD *)(v158 + 28);
      else
        v72 = 0;
      if ( v160 )
        v72 = *(_DWORD *)(v159 + 24);
      v161 = (_DWORD *)sub_242F8C(v157);
      sub_25A44C(v72, *v161);
      v162 = sub_259F10(")");
      v163 = a1[6];
      v164 = *(_WORD *)(v163 + 2) & 0x380;
      v165 = v164 == 128;
      if ( v164 == 128 )
        v164 = *(_DWORD *)(v163 + 28);
      else
        v162 = 0;
      if ( v165 )
        v162 = *(_DWORD *)(v164 + 24);
      sub_16F89C(v162, *(__int16 *)(v163 + 4));
      sub_259B34(&word_356638);
      v82 = a1[6];
LABEL_213:
      v83 = *(_WORD *)(v82 + 2) & 0x380;
LABEL_88:
      if ( v83 != 128 )
        goto LABEL_64;
LABEL_89:
      v84 = *(__int16 **)(v82 + 28);
      if ( v84 != &word_3B4A2C && v84[2] > 0 )
      {
        v85 = sub_25A800(v2, "fn_fieldlists ");
        v86 = a1[6];
        v87 = *(_WORD *)(v86 + 2) & 0x380;
        v88 = v87 == 128;
        if ( v87 == 128 )
          v87 = *(_DWORD *)(v86 + 28);
        else
          v72 = 0;
        if ( v88 )
          v72 = *(_DWORD *)(v87 + 32);
        v89 = (_DWORD *)sub_242F8C(v85);
        sub_25A44C(v72, *v89);
        sub_259F10((const char *)&word_356638);
        v90 = a1[6];
        if ( (*(_WORD *)(v90 + 2) & 0x380) == 0x80 )
        {
          v91 = *(_DWORD *)(v90 + 28);
          if ( (__int16 *)v91 != &word_3B4A2C && *(__int16 *)(v91 + 4) > 0 )
          {
            v92 = *(_DWORD *)(v91 + 32);
            v168 = 0;
            v171 = 0;
            v172 = v2 + 2;
            v169 = a1;
            v170 = v2;
            while ( 1 )
            {
              v93 = *(_DWORD **)(v92 + v168 + 8);
              v94 = sub_25A800(v172, "[%d] name '%s' (", v171, *(_DWORD *)(v92 + v168));
              v95 = v169[6];
              v96 = *(_WORD *)(v95 + 2) & 0x380;
              v97 = v96 == 128;
              if ( v96 == 128 )
                v98 = *(_DWORD *)(v95 + 28);
              else
                v98 = 0;
              if ( v97 )
                v98 = *(_DWORD *)(v98 + 32);
              v99 = *(_DWORD *)(v98 + v168);
              v100 = (_DWORD *)sub_242F8C(v94);
              sub_25A44C(v99, *v100);
              v101 = v169[6];
              v102 = *(_WORD *)(v101 + 2) & 0x380;
              v103 = v102 == 128;
              if ( v102 == 128 )
                v104 = *(_DWORD *)(v101 + 28);
              else
                v104 = 0;
              if ( v103 )
                v104 = *(_DWORD *)(v104 + 32);
              sub_259F10(") length %d\n", *(_DWORD *)(v104 + v168 + 4));
              v167 = 0;
              while ( 1 )
              {
                v105 = v169[6];
                if ( (*(_WORD *)(v105 + 2) & 0x380) == 0x80 )
                  break;
                if ( v167 >= *(_DWORD *)(v168 + 4) )
                  goto LABEL_151;
LABEL_113:
                v106 = sub_25A800(v170 + 4, "[%d] physname '%s' (", v167, *v93);
                v107 = *v93;
                v108 = v170 + 8;
                v109 = (_DWORD *)sub_242F8C(v106);
                sub_25A44C(v107, *v109);
                sub_259F10(")\n");
                v110 = sub_25A800(v170 + 8, "type ");
                v111 = v93[1];
                v112 = (_DWORD *)sub_242F8C(v110);
                sub_25A44C(v111, *v112);
                sub_259F10((const char *)&word_356638);
                sub_174F24(v93[1], v170 + 10);
                v113 = sub_25A800(v170 + 8, "args ");
                v114 = *(_DWORD *)(*(_DWORD *)(v93[1] + 24) + 24);
                v115 = (_DWORD *)sub_242F8C(v113);
                sub_25A44C(v114, *v115);
                sub_259F10((const char *)&word_356638);
                v116 = *(_DWORD *)(v93[1] + 24);
                v117 = *(_DWORD *)(v116 + 24);
                if ( v117 )
                {
                  v118 = *(__int16 *)(v116 + 4);
                  if ( v118 > 0 )
                  {
                    v119 = 0;
                    do
                    {
                      v120 = *(const char **)(v117 + 16);
                      v121 = v119++;
                      v117 += 24;
                      if ( !v120 )
                        v120 = "<NULL>";
                      sub_25A800(v170 + 10, "[%d] name '%s'\n", v121, v120);
                      sub_174F24(*(_DWORD *)(v117 - 12), v170 + 12);
                    }
                    while ( v118 != v119 );
                  }
                }
                v93 += 4;
                ++v167;
                v122 = sub_25A800(v108, "fcontext ");
                v123 = *(v93 - 2);
                v124 = (_DWORD *)sub_242F8C(v122);
                sub_25A44C(v123, *v124);
                sub_259F10((const char *)&word_356638);
                sub_25A800(v108, "is_const %d\n", *(_BYTE *)(v93 - 1) & 1);
                sub_25A800(v108, "is_volatile %d\n", (*((unsigned __int8 *)v93 - 4) >> 1) & 1);
                sub_25A800(v108, "is_private %d\n", (*((unsigned __int8 *)v93 - 4) >> 2) & 1);
                sub_25A800(v108, "is_protected %d\n", (*((unsigned __int8 *)v93 - 4) >> 3) & 1);
                sub_25A800(v108, "is_stub %d\n", (*((unsigned __int8 *)v93 - 4) >> 5) & 1);
                sub_25A800(v108, "voffset %u\n", *((unsigned __int16 *)v93 - 1) - 2);
              }
              v127 = *(_DWORD *)(v105 + 28);
              v92 = *(_DWORD *)(v127 + 32);
              if ( *(_DWORD *)(v92 + v168 + 4) > v167 )
                goto LABEL_113;
              if ( (__int16 *)v127 != &word_3B4A2C )
              {
                v128 = *(__int16 *)(v127 + 4) <= ++v171;
                v168 += 12;
                if ( !v128 )
                  continue;
              }
LABEL_151:
              v2 = v170;
              break;
            }
          }
        }
      }
LABEL_64:
      if ( !v2 )
LABEL_67:
        obstack_free(&stru_4877FC, v2);
      return;
    case 2:
      v62 = sub_25A800(v2, "gnat_stuff ");
      v63 = *(_DWORD *)(a1[6] + 28);
      v64 = (_DWORD *)sub_242F8C(v62);
      sub_25A44C(v63, *v64);
      sub_259B34(&word_356638);
      v65 = v2 + 2;
      v66 = **(_DWORD **)(a1[6] + 28);
      if ( v66 )
      {
        sub_25A800(v65, "descriptive type\n");
        sub_174F24(v66, v2 + 4);
      }
      else
      {
        sub_25A800(v65, "no descriptive type\n");
      }
      goto LABEL_64;
    case 3:
      sub_25A800(v2, "floatformat ");
      v125 = *(_DWORD *)(a1[6] + 28);
      if ( v125 && (v126 = *(_DWORD *)(v125 + 40)) != 0 )
        sub_259B34(v126);
      else
        sub_259B34("(null)");
      goto LABEL_63;
    case 4:
      sub_25A800(v2, "calling_convention %d\n", **(unsigned __int8 **)(v46 + 28));
      if ( !v2 )
        goto LABEL_67;
      return;
    case 5:
      sub_25A800(v2, "self_type ");
      v60 = ((int (__fastcall *)(_DWORD *))loc_1708E0)(a1);
      v61 = (_DWORD *)sub_242F8C(v60);
      sub_25A44C(v60, *v61);
LABEL_63:
      sub_259B34(&word_356638);
      goto LABEL_64;
    default:
      goto LABEL_64;
  }
}
