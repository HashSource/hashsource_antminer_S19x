void __fastcall sub_236624(int a1)
{
  char *v1; // r5
  int v2; // r4
  size_t v3; // r0
  int v4; // r0
  char *v5; // r6
  int v6; // r0
  int v7; // r7
  const char *v8; // r6
  size_t v9; // r0
  int v10; // r1
  _BYTE *v11; // r2
  int v12; // r3
  bool v13; // zf
  int v14; // t1
  bool v15; // zf
  unsigned int v16; // r0
  char *v17; // r2
  _BYTE *v18; // r3
  int v19; // r2
  int (*v20)(); // r2
  const char *v21; // r0
  int v22; // r7
  int (*v23)(); // r3
  unsigned int v24; // r0
  char *v25; // r2
  _BYTE *v26; // r3
  int v27; // r2
  char *v28; // r3
  char *v29; // r2
  int v30; // t1
  char *v31; // r3
  char *v32; // r1
  int v33; // t1
  const char *v34; // r5
  const char *v35; // r0
  void (__fastcall ****v36)(_DWORD, void **); // r4
  void (__fastcall ****v37)(_DWORD, void **); // r6
  void (__fastcall ***v38)(_DWORD, void **); // t1
  int (****v39)(); // r6
  int (****i)(); // r8
  int (***v41)(); // r4
  int (***v42)(); // t1
  int (*v43)(); // r3
  int (**v44)(); // r1
  const char *v45; // r5
  size_t v46; // r0
  int v47; // r1
  _BYTE *v48; // r2
  int v49; // r3
  bool v50; // zf
  int v51; // t1
  bool v52; // zf
  const char *v53; // r0
  int v54; // r3
  unsigned int v55; // r0
  int *v56; // r6
  int *v57; // r8
  int v58; // t1
  const char **v59; // r6
  const char **j; // r8
  int v61; // r7
  int (*v62)(); // r3
  void (__fastcall ****v63)(_DWORD, void **); // r4
  void (__fastcall ****v64)(_DWORD, void **); // r6
  void (__fastcall ***v65)(_DWORD, void **); // t1
  __int64 v66; // r6
  int (***v67)(); // r4
  int (***v68)(); // t1
  int (*v69)(); // r3
  int v70; // r12
  unsigned int *v71; // r3
  unsigned int v72; // r2
  int v73; // r4
  _DWORD *v74; // r0
  int v75; // r5
  void *v76; // r0
  const char *v77; // r0
  int *v78; // [sp+0h] [bp-ACh]
  int *v79; // [sp+0h] [bp-ACh]
  int *v80; // [sp+8h] [bp-A4h]
  int *v81; // [sp+8h] [bp-A4h]
  char *s1; // [sp+20h] [bp-8Ch] BYREF
  size_t v83; // [sp+24h] [bp-88h]
  _DWORD v84[4]; // [sp+28h] [bp-84h] BYREF
  void *v85; // [sp+38h] [bp-74h] BYREF
  unsigned int v86; // [sp+3Ch] [bp-70h]
  _DWORD v87[4]; // [sp+40h] [bp-6Ch] BYREF
  void *v88; // [sp+50h] [bp-5Ch] BYREF
  unsigned int v89; // [sp+54h] [bp-58h]
  _DWORD v90[4]; // [sp+58h] [bp-54h] BYREF
  void *v91; // [sp+68h] [bp-44h] BYREF
  unsigned int v92; // [sp+6Ch] [bp-40h]
  _DWORD v93[4]; // [sp+70h] [bp-3Ch] BYREF
  void *v94; // [sp+80h] [bp-2Ch] BYREF
  void *v95; // [sp+84h] [bp-28h] BYREF
  unsigned int v96; // [sp+88h] [bp-24h] BYREF
  _DWORD v97[4]; // [sp+8Ch] [bp-20h] BYREF
  void *ptr; // [sp+9Ch] [bp-10h]
  char v99; // [sp+A0h] [bp-Ch]
  char v100; // [sp+A1h] [bp-Bh]
  char v101; // [sp+A2h] [bp-Ah]
  int (**v102)(); // [sp+A4h] [bp-8h]

  v1 = (char *)a1;
  if ( a1 )
  {
    v2 = sub_277050(a1);
    if ( v2 )
      goto LABEL_3;
LABEL_143:
    sub_946E0("There is no target description to print.");
  }
  v73 = sub_183688();
  v74 = *(_DWORD **)(v73 + 164);
  if ( !v74 )
  {
    v74 = sub_93094(1u, 0xCu);
    *(_DWORD *)(v73 + 164) = v74;
  }
  v2 = v74[1];
  v75 = sub_183688();
  v76 = *(void **)(v75 + 164);
  if ( !v76 )
  {
    v76 = sub_93094(1u, 0xCu);
    *(_DWORD *)(v75 + 164) = v76;
  }
  v1 = (char *)*((_DWORD *)v76 + 2);
  if ( !v2 )
    goto LABEL_143;
  if ( !v1 )
    sub_946E0("The current target description did not come from an XML file.");
LABEL_3:
  s1 = (char *)v84;
  v3 = strlen(v1);
  sub_2350F8(&s1, v1, (int)&v1[v3]);
  v4 = sub_33C6E4((int)&s1, "/features/", -1, 0xAu);
  if ( v4 == -1 )
    goto LABEL_4;
  v70 = v4 + 10;
  if ( v4 + 10 > v83 )
    sub_33D20C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::substr", v70, v83);
  v94 = &v96;
  sub_2350F8(&v94, &s1[v70], (int)&s1[v83]);
  v71 = (unsigned int *)s1;
  if ( v94 == &v96 )
  {
    sub_33B48C(&s1, &v94);
    v71 = (unsigned int *)v94;
  }
  else
  {
    if ( s1 == (char *)v84 )
    {
      s1 = (char *)v94;
      v83 = (size_t)v95;
      v84[0] = v96;
    }
    else
    {
      s1 = (char *)v94;
      v83 = (size_t)v95;
      v72 = v84[0];
      v84[0] = v96;
      if ( v71 )
      {
        v94 = v71;
        v96 = v72;
        goto LABEL_120;
      }
    }
    v94 = &v96;
    v71 = &v96;
  }
LABEL_120:
  v95 = 0;
  *(_BYTE *)v71 = 0;
  if ( v94 != &v96 )
    sub_339E64(v94);
LABEL_4:
  v5 = s1;
  v6 = strncmp(s1, "i386/32bit-", 0xBu);
  v7 = (int)&v5[v83];
  if ( !v6
    || !strncmp(v5, "i386/64bit-", 0xBu)
    || !strncmp(v5, "i386/x32-core.xml", 0x11u)
    || !strncmp(v5, "tic6x-", 6u)
    || !strncmp(v5, "aarch64", 7u) )
  {
    v94 = off_3E9B5C;
    v95 = v97;
    sub_2350F8(&v95, v5, v7);
    v99 = 0;
    v100 = 0;
    v101 = 0;
    v8 = (const char *)sub_3245A4(v95);
    v9 = strlen(v8);
    ptr = sub_93028(v9 + 1);
    v11 = ptr;
    v12 = *(unsigned __int8 *)v8;
    v13 = v12 == 0;
    if ( *v8 )
      v13 = v12 == 46;
    if ( !v13 )
    {
      v10 = 95;
      do
      {
        ++v11;
        if ( v12 == 45 )
          *(v11 - 1) = 95;
        else
          *(v11 - 1) = v12;
        v14 = *(unsigned __int8 *)++v8;
        v12 = v14;
        v15 = v14 == 46;
        if ( v14 != 46 )
          v15 = v12 == 0;
      }
      while ( !v15 );
    }
    *v11 = 0;
    sub_259858("/* THIS FILE IS GENERATED.  -*- buffer-read-only: t -*- vi:set ro:\n", v10);
    v102 = 0;
    v94 = off_3E9B84;
    v16 = sub_33C748(&v95, 46, -1);
    v85 = v87;
    if ( v16 > v96 )
      v17 = (char *)v95 + v96;
    else
      v17 = (char *)v95 + v16;
    sub_2350F8(&v85, v95, (int)v17);
    v18 = v95;
    if ( v85 == v87 )
    {
      sub_33B48C(&v95, &v85);
      v18 = v85;
      goto LABEL_24;
    }
    if ( v95 == v97 )
    {
      v95 = v85;
      v96 = v86;
      v97[0] = v87[0];
    }
    else
    {
      v95 = v85;
      v96 = v86;
      v19 = v97[0];
      v97[0] = v87[0];
      if ( v18 )
      {
        v85 = v18;
        v87[0] = v19;
LABEL_24:
        v86 = 0;
        *v18 = 0;
        if ( v85 != v87 )
          sub_339E64(v85);
        v20 = **(int (***)())v2;
        if ( v20 != sub_2399CC )
          goto LABEL_131;
        v21 = (const char *)sub_3245A4(v95);
        sub_259858("  Original: %s */\n\n", v21);
        sub_259858("#include \"arch/tdesc.h\"\n");
        sub_259858((const char *)&word_356638);
        v80 = *(int **)(v2 + 40);
        if ( *(int **)(v2 + 36) == v80 )
          goto LABEL_66;
        v78 = *(int **)(v2 + 36);
        while ( 1 )
        {
          v22 = *v78++;
          v23 = **(int (***)())v22;
          if ( v23 == sub_2390E4 )
            break;
          ((void (__fastcall *)(int, void **))v23)(v22, &v94);
LABEL_65:
          if ( v80 == v78 )
            goto LABEL_66;
        }
        v88 = v90;
        sub_2350F8(&v88, v95, (int)v95 + v96);
        v24 = sub_33C6C4(&v88, 46, 0);
        v91 = v93;
        if ( v24 > v89 )
          v25 = (char *)v88 + v89;
        else
          v25 = (char *)v88 + v24;
        sub_2350F8(&v91, v88, (int)v25);
        v26 = v88;
        if ( v91 == v93 )
        {
          sub_33B48C(&v88, &v91);
          v26 = v91;
          goto LABEL_37;
        }
        if ( v88 == v90 )
        {
          v88 = v91;
          v89 = v92;
          v90[0] = v93[0];
        }
        else
        {
          v88 = v91;
          v89 = v92;
          v27 = v90[0];
          v90[0] = v93[0];
          if ( v26 )
          {
            v91 = v26;
            v93[0] = v27;
LABEL_37:
            v92 = 0;
            *v26 = 0;
            if ( v91 != v93 )
              sub_339E64(v91);
            if ( v88 != (char *)v88 + v89 )
            {
              v28 = (char *)v88 - 1;
              v29 = (char *)v88 + v89 - 1;
              do
              {
                v30 = (unsigned __int8)*++v28;
                if ( v30 == 47 )
                  *v28 = 95;
              }
              while ( v29 != v28 );
              if ( v88 != (char *)v88 + v89 )
              {
                v31 = (char *)v88 - 1;
                v32 = (char *)v88 + v89 - 1;
                do
                {
                  v33 = (unsigned __int8)*++v31;
                  if ( v33 == 45 )
                    *v31 = 95;
                }
                while ( v31 != v32 );
              }
            }
            sub_259858("static int\n");
            sub_259858("create_feature_%s ", v88);
            sub_259858("(struct target_desc *result, long regnum)\n");
            sub_259858("{\n");
            sub_259858("  struct tdesc_feature *feature;\n");
            v34 = *(const char **)(v22 + 4);
            v35 = (const char *)sub_3245A4(v95);
            sub_259858("\n  feature = tdesc_create_feature (result, \"%s\", \"%s\");\n", v34, v35);
            if ( v88 != v90 )
              sub_339E64(v88);
            v36 = *(void (__fastcall *****)(_DWORD, void **))(v22 + 40);
            v37 = *(void (__fastcall *****)(_DWORD, void **))(v22 + 44);
            while ( v37 != v36 )
            {
              v38 = *v36++;
              (**v38)(v38, &v94);
            }
            v39 = *(int (*****)())(v22 + 28);
            for ( i = *(int (*****)())(v22 + 32); i != v39; v102 = (int (**)())((char *)v102 + 1) )
            {
              while ( 1 )
              {
                v42 = *v39++;
                v41 = v42;
                v43 = **v42;
                if ( v43 == sub_238B10 )
                  break;
                ((void (__fastcall *)(int (***)(), void **))v43)(v41, &v94);
                if ( i == v39 )
                  goto LABEL_64;
              }
              v44 = v41[7];
              if ( (int)v44 < (int)v102 )
              {
                sub_259858("ERROR: \"regnum\" attribute %ld ", v44);
                sub_259858("is not the largest number (%d).\n", v102);
                sub_946E0("\"regnum\" attribute %ld is not the largest number (%d).", v41[7], v102);
              }
              if ( (int)v44 > (int)v102 )
              {
                sub_259858("  regnum = %ld;\n", v44);
                v102 = v41[7];
              }
              sub_259858("  tdesc_create_reg (feature, \"%s\", regnum++, %d, ", (const char *)v41[1], v41[8]);
              if ( v41[10] )
                sub_259858("\"%s\", ", (const char *)v41[9]);
              else
                sub_259858("NULL, ");
              sub_259858("%d, \"%s\");\n", v41[15], (const char *)v41[16]);
            }
LABEL_64:
            sub_259858("  return regnum;\n");
            sub_259858("}\n");
            goto LABEL_65;
          }
        }
        v91 = v93;
        v26 = v93;
        goto LABEL_37;
      }
    }
    v85 = v87;
    v18 = v87;
    goto LABEL_24;
  }
  v94 = off_3E9B5C;
  v95 = v97;
  sub_2350F8(&v95, v5, v7);
  v99 = 0;
  v100 = 0;
  v101 = 0;
  v45 = (const char *)sub_3245A4(v95);
  v46 = strlen(v45);
  ptr = sub_93028(v46 + 1);
  v48 = ptr;
  v49 = *(unsigned __int8 *)v45;
  v50 = v49 == 0;
  if ( *v45 )
    v50 = v49 == 46;
  if ( !v50 )
  {
    v47 = 95;
    do
    {
      ++v48;
      if ( v49 == 45 )
        *(v48 - 1) = 95;
      else
        *(v48 - 1) = v49;
      v51 = *(unsigned __int8 *)++v45;
      v49 = v51;
      v52 = v51 == 0;
      if ( v51 )
        v52 = v49 == 46;
    }
    while ( !v52 );
  }
  *v48 = 0;
  sub_259858("/* THIS FILE IS GENERATED.  -*- buffer-read-only: t -*- vi:set ro:\n", v47);
  v20 = **(int (***)())v2;
  if ( v20 != sub_2399CC )
  {
LABEL_131:
    ((void (__fastcall *)(int, void **))v20)(v2, &v94);
    goto LABEL_66;
  }
  v53 = (const char *)sub_3245A4(v95);
  sub_259858("  Original: %s */\n\n", v53);
  sub_259858("#include \"defs.h\"\n");
  sub_259858("#include \"osabi.h\"\n");
  sub_259858("#include \"target-descriptions.h\"\n");
  sub_259858((const char *)&word_356638);
  sub_259858("struct target_desc *tdesc_%s;\n", (const char *)ptr);
  sub_259858("static void\n");
  sub_259858("initialize_tdesc_%s (void)\n", (const char *)ptr);
  sub_259858("{\n");
  sub_259858("  struct target_desc *result = allocate_target_description ();\n");
  v54 = *(_DWORD *)(v2 + 4);
  if ( v54 )
  {
    sub_259858("  set_tdesc_architecture (result, bfd_scan_arch (\"%s\"));\n", *(const char **)(v54 + 24));
    sub_259858((const char *)&word_356638);
  }
  v55 = *(_DWORD *)(v2 + 8);
  if ( v55 - 1 <= 0x12 )
  {
    v77 = sub_1BD890(v55);
    sub_259858("  set_tdesc_osabi (result, osabi_from_tdesc_string (\"%s\"));\n", v77);
    sub_259858((const char *)&word_356638);
  }
  v56 = *(int **)(v2 + 12);
  v57 = *(int **)(v2 + 16);
  if ( v56 != v57 )
  {
    do
    {
      v58 = *v56++;
      sub_259858("  tdesc_add_compatible (result, bfd_scan_arch (\"%s\"));\n", *(const char **)(v58 + 24));
    }
    while ( v57 != v56 );
    if ( *(_DWORD *)(v2 + 12) != *(_DWORD *)(v2 + 16) )
      sub_259858((const char *)&word_356638);
  }
  v59 = *(const char ***)(v2 + 24);
  for ( j = *(const char ***)(v2 + 28); j != v59; v59 += 12 )
    sub_259858("  set_tdesc_property (result, \"%s\", \"%s\");\n", *v59, v59[6]);
  sub_259858("  struct tdesc_feature *feature;\n");
  v81 = *(int **)(v2 + 40);
  if ( *(int **)(v2 + 36) != v81 )
  {
    v79 = *(int **)(v2 + 36);
    do
    {
      v61 = *v79++;
      v62 = **(int (***)())v61;
      if ( v62 == sub_2390E4 )
      {
        sub_259858("\n  feature = tdesc_create_feature (result, \"%s\");\n", *(_DWORD *)(v61 + 4));
        v63 = *(void (__fastcall *****)(_DWORD, void **))(v61 + 40);
        v64 = *(void (__fastcall *****)(_DWORD, void **))(v61 + 44);
        while ( v64 != v63 )
        {
          v65 = *v63++;
          (**v65)(v65, &v94);
        }
        v66 = *(_QWORD *)(v61 + 28);
        while ( HIDWORD(v66) != (_DWORD)v66 )
        {
          v68 = *(int (****)())v66;
          LODWORD(v66) = v66 + 4;
          v67 = v68;
          v69 = **v68;
          if ( v69 == sub_238B10 )
          {
            sub_259858("  tdesc_create_reg (feature, \"%s\", %ld, %d, ", (const char *)v67[1], v67[7], v67[8]);
            if ( v67[10] )
              sub_259858("\"%s\", ", (const char *)v67[9]);
            else
              sub_259858("NULL, ");
            sub_259858("%d, \"%s\");\n", v67[15], (const char *)v67[16]);
          }
          else
          {
            ((void (__fastcall *)(int (***)(), void **))v69)(v67, &v94);
          }
        }
      }
      else
      {
        ((void (__fastcall *)(int, void **))v62)(v61, &v94);
      }
    }
    while ( v81 != v79 );
  }
  sub_259858("\n  tdesc_%s = result;\n", (const char *)ptr);
  sub_259858("}\n");
LABEL_66:
  v94 = off_3E9B5C;
  if ( ptr )
    free(ptr);
  if ( v95 != v97 )
    sub_339E64(v95);
  if ( s1 != (char *)v84 )
    sub_339E64(s1);
}
