void __fastcall sub_277AB4(int a1, _BYTE *a2, int *a3, int a4)
{
  int v5; // r9
  int *v6; // r8
  int v7; // r0
  int (*v8)(void); // r3
  int **v9; // r5
  _BYTE *v10; // r2
  int **v11; // r4
  size_t v12; // r0
  int v13; // r3
  int v14; // r3
  int v15; // r0
  int v16; // r0
  unsigned int v17; // r0
  int v18; // r0
  unsigned __int8 *v19; // r6
  _BYTE *v20; // r0
  const char **v21; // r8
  int v22; // r3
  int v23; // r0
  const char *v24; // r6
  int *v25; // r0
  int i; // r6
  int *v27; // r0
  const char *v28; // r6
  int v29; // r3
  int v30; // r0
  int *v31; // r0
  const char *v32; // r4
  const char *v33; // r5
  void **v34; // r8
  void *v35; // r9
  int *v36; // r3
  void **v37; // r6
  void *v38; // t1
  void *v39; // t1
  unsigned int v40; // r0
  char *v41; // r6
  const char *v42; // r0
  _DWORD *v43; // r7
  int v44; // r2
  int v45; // r0
  int v46; // r1
  int v47; // r2
  int v48; // r12
  int *v49; // lr
  bool v50; // zf
  int v51; // r3
  size_t v52; // r2
  int v53; // r0
  int v54; // r1
  int v55; // r2
  int **v56; // r12
  int *v57; // r3
  int *v58; // lr
  bool v59; // zf
  _BYTE *v60; // r3
  int v61; // r2
  int v62; // r3
  int *v63; // r0
  char *v64; // r0
  int *v65; // r0
  int v69; // [sp+18h] [bp-FCh]
  void *v70; // [sp+1Ch] [bp-F8h]
  int v71; // [sp+24h] [bp-F0h] BYREF
  int v72; // [sp+28h] [bp-ECh] BYREF
  const char **v73; // [sp+2Ch] [bp-E8h] BYREF
  int v74; // [sp+30h] [bp-E4h] BYREF
  int *v75; // [sp+34h] [bp-E0h] BYREF
  int v76; // [sp+38h] [bp-DCh] BYREF
  void **v77; // [sp+3Ch] [bp-D8h] BYREF
  char v78[20]; // [sp+40h] [bp-D4h] BYREF
  void *v79; // [sp+54h] [bp-C0h] BYREF
  int *v80; // [sp+58h] [bp-BCh]
  _DWORD v81[4]; // [sp+5Ch] [bp-B8h] BYREF
  char *s; // [sp+6Ch] [bp-A8h] BYREF
  char v83; // [sp+74h] [bp-A0h] BYREF
  void *ptr; // [sp+84h] [bp-90h] BYREF
  int v85; // [sp+88h] [bp-8Ch]
  _BYTE v86[16]; // [sp+8Ch] [bp-88h] BYREF
  int (**v87)(); // [sp+9Ch] [bp-78h] BYREF
  _BYTE *v88; // [sp+A0h] [bp-74h]
  int v89; // [sp+A4h] [bp-70h]
  _BYTE v90[16]; // [sp+A8h] [bp-6Ch] BYREF
  FILE *stream; // [sp+B8h] [bp-5Ch] BYREF
  int v92; // [sp+BCh] [bp-58h]
  _DWORD v93[8]; // [sp+C0h] [bp-54h] BYREF
  void *v94; // [sp+E0h] [bp-34h] BYREF
  int *v95; // [sp+E4h] [bp-30h]
  _DWORD v96[4]; // [sp+E8h] [bp-2Ch] BYREF
  void *v97; // [sp+F8h] [bp-1Ch] BYREF
  _BYTE v98[16]; // [sp+100h] [bp-14h] BYREF

  v5 = sub_B894C(a1);
  v79 = v81;
  v80 = 0;
  LOBYTE(v81[0]) = 0;
  if ( !sub_22EBBC() )
    sub_946E0("The program must be running for the compile command to work.");
  v6 = sub_20F388((unsigned int *)&v71);
  if ( v6 || (sub_203210(&stream), v92) && (v6 = *(int **)(*(_DWORD *)(*(_DWORD *)(v92 + 4) + 32) + 12)) != 0 )
    v71 = *v6;
  v7 = sub_15F7E8(0);
  v69 = sub_15DE14(v7);
  v8 = (int (*)(void))off_46D5A4[0][40];
  if ( !v8 )
    sub_946E0("No compiler support for language %s.", *(const char **)off_46D5A4[0]);
  v9 = (int **)v8();
  v70 = sub_9253C(2586520, (int)v9);
  (*(void (__fastcall **)(int *, void (__fastcall *)(int, _BYTE *), _DWORD))(**v9 + 12))(*v9, sub_2777AC, 0);
  v9[1] = a3;
  v9[2] = v6;
  sub_256760(&v87);
  v10 = v90;
  v88 = v90;
  v87 = &off_3F2924;
  v89 = 0;
  v90[0] = 0;
  if ( a1 )
  {
    v11 = **(int ****)(a1 + 24);
    if ( v11 )
    {
      do
      {
        v12 = strlen((const char *)v11[1]);
        sub_2564E4((int)&v87, (int)v11[1], v12);
        sub_2564E4((int)&v87, (int)&word_356638, 1u);
        v11 = (int **)*v11;
      }
      while ( v11 );
      v10 = v88;
    }
  }
  else
  {
    if ( !a2 )
      sub_946E0("Neither a simple expression, or a multi-line specified.");
    v10 = a2;
  }
  (*((void (__fastcall **)(char **, int **, _BYTE *, int, int *, int))off_46D5A4[0] + 41))(&s, v9, v10, v5, v6, v69);
  if ( dword_48AA50 )
  {
    v63 = (int *)sub_242FC8();
    sub_2594B0(*v63, "debug output:\n\n%s", s);
  }
  v13 = **v9;
  if ( *(_DWORD *)v13 )
  {
    (*(void (**)(void))(v13 + 24))();
    if ( *(_BYTE *)dword_48AA54 )
    {
      v14 = **v9;
      if ( *(_DWORD *)v14 )
      {
        (*(void (**)(void))(v14 + 40))();
        goto LABEL_15;
      }
LABEL_122:
      sub_946E0("Command 'set compile-gcc' requires GCC version 6 or higher (libcc1 interface version 1 or higher)");
    }
  }
  else if ( *(_BYTE *)dword_48AA54 )
  {
    goto LABEL_122;
  }
  v40 = ((int (__fastcall *)(int))loc_165C98)(v5);
  v41 = sub_1BD8AC(v40);
  v42 = (const char *)((int (__fastcall *)(int))loc_16E960)(v5);
  v43 = v42;
  ptr = v86;
  if ( v42 )
    v44 = (int)&v42[strlen(v42)];
  else
    v44 = -1;
  sub_277950(&ptr, v43, v44);
  if ( (unsigned int)(0x7FFFFFFF - v85) <= 9 )
    sub_33D184("basic_string::append");
  v45 = sub_33C320(&ptr, "(-[^-]*)?-", 10);
  stream = (FILE *)v93;
  v48 = v45;
  v49 = (int *)(v45 + 8);
  v50 = *(_DWORD *)v45 == v45 + 8;
  if ( *(_DWORD *)v45 == v45 + 8 )
  {
    v45 = *v49;
    v43 = v93;
    v46 = v49[1];
    v47 = v49[2];
    v51 = v49[3];
  }
  else
  {
    stream = *(FILE **)v45;
    v51 = *(_DWORD *)(v45 + 8);
  }
  if ( v50 )
  {
    *v43 = v45;
    v43[1] = v46;
    v43[2] = v47;
    v43[3] = v51;
    v43 += 4;
  }
  else
  {
    v93[0] = v51;
  }
  v92 = *(_DWORD *)(v48 + 4);
  *(_DWORD *)(v48 + 4) = 0;
  *(_BYTE *)(v48 + 8) = 0;
  *(_DWORD *)v48 = v49;
  v52 = strlen(v41);
  if ( 0x7FFFFFFF - v92 < v52 )
LABEL_124:
    sub_33D184("basic_string::append");
  v53 = sub_33C320(&stream, v41, v52);
  v94 = v96;
  v56 = (int **)v53;
  v58 = (int *)(v53 + 8);
  v57 = *(int **)v53;
  v59 = *(_DWORD *)v53 == v53 + 8;
  if ( *(_DWORD *)v53 == v53 + 8 )
  {
    v43 = v96;
    v54 = *(_DWORD *)(v53 + 12);
    v55 = *(_DWORD *)(v53 + 16);
    v57 = *(int **)(v53 + 20);
    v53 = *v58;
  }
  else
  {
    v94 = *(void **)v53;
  }
  if ( v59 )
  {
    *v43 = v53;
    v43[1] = v54;
    v43[2] = v55;
    v43[3] = v57;
  }
  else
  {
    v57 = v56[2];
  }
  if ( !v59 )
    v96[0] = v57;
  v95 = v56[1];
  *v56 = v58;
  v56[1] = 0;
  *((_BYTE *)v56 + 8) = 0;
  v60 = v79;
  if ( v94 == v96 )
  {
    sub_33B48C(&v79, &v94);
    v60 = v94;
    goto LABEL_96;
  }
  if ( v79 == v81 )
  {
    v79 = v94;
    v80 = v95;
    v81[0] = v96[0];
    goto LABEL_108;
  }
  v79 = v94;
  v80 = v95;
  v61 = v81[0];
  v81[0] = v96[0];
  if ( !v60 )
  {
LABEL_108:
    v94 = v96;
    v60 = v96;
    goto LABEL_96;
  }
  v94 = v60;
  v96[0] = v61;
LABEL_96:
  v95 = 0;
  *v60 = 0;
  if ( v94 != v96 )
    sub_339E64(v94);
  if ( stream != (FILE *)v93 )
    sub_339E64(stream);
  if ( ptr != v86 )
    sub_339E64(ptr);
  v62 = **v9;
  if ( *(_DWORD *)v62 )
    (*(void (**)(void))(v62 + 36))();
LABEL_15:
  v15 = ((int (__fastcall *)(int))loc_16E8AC)(v5);
  sub_2777C8(v15, &v72, (int *)&v73);
  v16 = sub_15F7E8(0);
  v17 = sub_15DDFC(v16);
  v18 = sub_21DDAC(v17);
  if ( v18 )
  {
    v19 = *(unsigned __int8 **)(v18 + 24);
    if ( v19 )
    {
      if ( !strncmp(*(const char **)(v18 + 24), "GNU ", 4u) )
      {
        while ( *v19 )
        {
          if ( *v19 == 45 )
          {
            sub_2777C8((int)v19, &v76, (int *)&v77);
            v34 = v77;
            v35 = *v77;
            if ( *v77 )
            {
              v37 = v77;
              do
              {
                while ( !strcmp((const char *)v35, "-fpreprocessed") )
                {
                  free(v35);
                  v39 = v37[1];
                  ++v37;
                  v35 = v39;
                  --v76;
                  if ( !v39 )
                    goto LABEL_63;
                }
                *v34++ = v35;
                v38 = v37[1];
                ++v37;
                v35 = v38;
              }
              while ( v38 );
LABEL_63:
              v36 = (int *)v77;
            }
            else
            {
              v36 = (int *)v77;
            }
            *v34 = 0;
            sub_277854(&v72, (void **)&v73, v76, v36);
            sub_31DAD0(v77);
            break;
          }
          v20 = sub_93610(v19);
          v19 = (unsigned __int8 *)sub_9360C(v20);
        }
      }
    }
  }
  sub_2777C8((int)v9[3], &v74, (int *)&v75);
  sub_277854(&v72, (void **)&v73, v74, v75);
  sub_31DAD0(v75);
  sub_277854(&v72, (void **)&v73, dword_48AA48, (int *)dword_48AA44);
  v21 = v73;
  v22 = **v9;
  if ( *(_DWORD *)v22 )
    v23 = (*(int (**)(void))(v22 + 32))();
  else
    v23 = (*(int (__fastcall **)(int *, void *, int, const char **))(v22 + 4))(*v9, v79, v72, v73);
  v24 = (const char *)v23;
  if ( v23 )
  {
    sub_9253C((int)sub_2777A0, v23);
    sub_946E0("%s", v24);
  }
  if ( dword_48AA50 )
  {
    v25 = (int *)sub_242FC8();
    sub_2594B0(*v25, "Passing %d compiler options:\n", v72);
    if ( v72 > 0 )
    {
      for ( i = 0; i < v72; ++i )
      {
        v27 = (int *)sub_242FC8();
        sub_2594B0(*v27, "Compiler option %d: <%s>\n", i, v73[i]);
      }
    }
  }
  v28 = (const char *)dword_48AA58;
  if ( !dword_48AA58 )
  {
    strcpy(v78, "/tmp/gdbobj-XXXXXX");
    v64 = mkdtemp(v78);
    dword_48AA58 = (int)v64;
    if ( !v64 )
      sub_258B04("Could not make temporary directory");
    dword_48AA58 = sub_327254(v64);
    sub_925CC(2587136, dword_48AA58);
    v28 = (const char *)dword_48AA58;
  }
  sub_931D8((char **)&ptr, "%s%sout%d.c", v28, (const char *)&word_398974, ++dword_48AA5C);
  sub_931D8((char **)&stream, "%s%sout%d.o", v28, (const char *)&word_398974, dword_48AA5C);
  v94 = v96;
  sub_277950(&v94, ptr, (int)ptr + v85);
  v97 = v98;
  sub_277950(&v97, stream, (int)stream + v92);
  if ( stream != (FILE *)v93 )
    sub_339E64(stream);
  if ( ptr != v86 )
    sub_339E64(ptr);
  sub_967F0(&stream, (int)v94, "w");
  if ( !stream )
    sub_258B04("Could not open source file for writing");
  if ( fputs(s, stream) == -1 )
    sub_258B04("Could not write to source file");
  if ( stream )
    fclose(stream);
  if ( dword_48AA50 )
  {
    v65 = (int *)sub_242FC8();
    sub_2594B0(*v65, "source file produced: %s\n\n", (const char *)v94);
  }
  (*(void (__fastcall **)(int *, void *))(**v9 + 8))(*v9, v94);
  v29 = **v9;
  if ( *(_DWORD *)v29 )
    v30 = (*(int (**)(void))(v29 + 28))();
  else
    v30 = (*(int (**)(void))(v29 + 16))();
  if ( !v30 )
    sub_946E0("Compilation failed.");
  if ( dword_48AA50 )
  {
    v31 = (int *)sub_242FC8();
    sub_2594B0(*v31, "object file produced: %s\n\n", (const char *)v97);
  }
  sub_92620(v70);
  sub_31DAD0(v21);
  if ( s != &v83 )
    sub_339E64(s);
  sub_256478(&v87);
  if ( v79 != v81 )
    sub_339E64(v79);
  v32 = (const char *)v97;
  v33 = (const char *)v94;
  if ( sub_27D03C(&v94, a3, a4) )
  {
    sub_27DE78();
    goto LABEL_51;
  }
  if ( a3 != (int *)3 )
  {
    sub_94700(
      (int)"compile/compile.c",
      636,
      "%s: Assertion `%s' failed.",
      "void eval_compile_command(command_line*, const char*, compile_i_scope_types, void*)",
      "scope == COMPILE_I_PRINT_ADDRESS_SCOPE");
    goto LABEL_124;
  }
  sub_277AB4(a1, a2, 4, a4);
  if ( v33 )
    unlink(v33);
  if ( v32 )
    unlink(v32);
LABEL_51:
  if ( v97 != v98 )
    sub_339E64(v97);
  if ( v94 != v96 )
    sub_339E64(v94);
}
