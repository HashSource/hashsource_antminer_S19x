void __fastcall sub_32840(int a1)
{
  int v1; // r9
  _DWORD *v3; // r5
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  int v6; // r2
  int v7; // r0
  void *v8; // r7
  int v9; // r4
  int v10; // r11
  int v11; // r4
  int v12; // r0
  unsigned int v13; // r3
  unsigned int v14; // r2
  int v15; // r0
  unsigned int v16; // r3
  unsigned int v17; // r2
  const char *v18; // r2
  char **v19; // r4
  const char *v20; // t1
  int v21; // r8
  int v22; // r0
  int v23; // r0
  char **v24; // r5
  char *v25; // r1
  int v26; // r0
  int v27; // r2
  int v28; // r4
  char *v29; // t1
  char *v30; // r1
  _UNKNOWN **v31; // r5
  char *v32; // t1
  int v33; // r2
  int v34; // r0
  int v35; // r4
  int v36; // r0
  int v37; // r4
  int v38; // r0
  int v39; // r0
  int v40; // r4
  int v41; // r6
  int v42; // r0
  int v43; // r0
  int v44; // r6
  int v45; // r0
  _DWORD *v46; // r3
  int v47; // r2
  int v48; // r7
  int v49; // r4
  int v50; // r0
  int v51; // r3
  int v52; // r2
  int v53; // r0
  int v54; // r4
  int v55; // r3
  int v56; // r0
  int v57; // r0
  int v58; // r0
  int v59; // r0
  int v60; // r4
  int v61; // r0
  int v62; // r0
  unsigned int v63; // r12
  int v64; // r2
  int v65; // r0
  int v66; // r4
  size_t n; // r9
  int v68; // r0
  int v69; // r0
  unsigned int v70; // r0
  unsigned int v71; // r4
  unsigned int v72; // r0
  __int64 v73; // r0
  int v74; // r0
  __int64 v75; // r0
  int v76; // r0
  int v77; // [sp+1Ch] [bp-10h] BYREF
  unsigned int v78; // [sp+20h] [bp-Ch] BYREF
  int v79; // [sp+24h] [bp-8h]

  v3 = (_DWORD *)sub_31060();
  if ( v3[10] )
  {
    sub_323B84();
    v3[10] = 0;
  }
  v4 = (_DWORD *)v3[11];
  if ( v4 )
  {
    do
    {
      v5 = (_DWORD *)*v4;
      sub_200A30(v4);
      v4 = v5;
    }
    while ( v5 );
  }
  v3[11] = 0;
  sub_3073C();
  if ( !sub_22EBBC() || !sub_2FD98() )
    return;
  v3[6] = 0;
  v3[5] = 0;
  v6 = dword_46DBA8;
  v3[8] = 0;
  v3[7] = 0;
  sub_201664(0, a1, v6);
  if ( *v3 )
  {
    if ( sub_319C4(v3) )
    {
      v37 = sub_31248();
      v38 = ((int (*)(void))sub_16F654)();
      v39 = sub_1780B4(v38);
      v40 = sub_FAA9C(*v3 + *(_DWORD *)(v37 + 12), *(_DWORD *)(v39 + 152));
      if ( v40 )
      {
        v41 = ((int (*)(void))sub_16F654)();
        v42 = ((int (*)(void))sub_16F654)();
        v43 = ((int (__fastcall *)(int, int, int *))loc_169ED8)(v42, v40, &dword_4899A0);
        v44 = ((int (__fastcall *)(int, int))loc_169FA0)(v41, v43);
        v45 = ((int (*)(void))loc_1B7C78)();
        if ( v45 )
        {
          v46 = *(_DWORD **)(v45 + 4);
          v47 = v46[38];
          v48 = v46[9];
          if ( v47 == -1 )
            goto LABEL_68;
          v49 = *(_DWORD *)(v46[36] + 4 * v47);
          v50 = sub_2AD7AC(v48, ".text");
          if ( v50 )
          {
            v51 = v49 + *(_DWORD *)(v50 + 28);
            v52 = *(_DWORD *)(v50 + 36) + v51;
            v3[5] = v51;
            v3[6] = v52;
          }
          v53 = sub_2AD7AC(v48, ".plt");
          if ( v53 )
          {
            v54 = v49 + *(_DWORD *)(v53 + 28);
            v55 = *(_DWORD *)(v53 + 36) + v54;
            v3[7] = v54;
            v3[8] = v55;
          }
          v56 = ((int (*)(void))sub_16F654)();
          sub_324D8(v56, v44);
          return;
        }
      }
    }
  }
  v7 = *(_DWORD *)(dword_487D2C + 8);
  if ( v7 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(v7 + 4) + 4) == 5 )
    {
      v65 = sub_2AD7AC(v7, ".interp");
      v66 = v65;
      if ( v65 )
      {
        n = *(_DWORD *)(v65 + 36);
        v8 = (void *)sub_93028(n);
        sub_2ADEDC(*(_DWORD *)(dword_487D2C + 8), v66, v8, dword_487D2C, 0, 0, n);
LABEL_13:
        v78 = 0;
        v9 = sub_92E28();
        sub_20091C(&v77, v8);
        v1 = v77;
        sub_92E40(v9);
        if ( v1 )
        {
          v10 = sub_C1E90(v1);
          v11 = sub_200A78();
          if ( v11 )
          {
            while ( !sub_316B8((const char *)v8, (const char *)(v11 + 8)) )
            {
              v11 = *(_DWORD *)v11;
              if ( !v11 )
                goto LABEL_53;
            }
            v78 = sub_312A8(v11, v1);
          }
          else
          {
LABEL_53:
            if ( sub_BC304(&dword_4899A0, 7, &v78) > 0 )
            {
              v69 = ((int (*)(void))sub_16F654)();
              v70 = ((int (__fastcall *)(int))loc_16666C)(v69);
              if ( v70 <= 0x1F )
              {
                v71 = 1 << v70;
                sub_31914((_DWORD *)(v1 + 116), v10);
                if ( v71 <= v78 )
                  goto LABEL_69;
                if ( v71 > v72 && v71 <= v72 + v78 )
                  v78 -= v71;
              }
            }
            else
            {
              v58 = ((int (*)(void))sub_16F654)();
              v59 = sub_1DDB0C(dword_4878EC, dword_4878F0, dword_4878F4, v58);
              v60 = sub_1DFB3C(v59);
              sub_31914((_DWORD *)(v1 + 116), v10);
              v78 = v60 - v61;
            }
            v62 = sub_327254(v8);
            v63 = v78;
            v3[3] = v62;
            v3[2] = v63;
            v64 = dword_46DBA8;
            v3[1] = 1;
            sub_201664(0, a1, v64);
          }
          v12 = sub_2AD7AC(v1, ".text");
          if ( v12 )
          {
            v13 = *(_DWORD *)(v12 + 28) + v78;
            v14 = *(_DWORD *)(v12 + 36) + v13;
            v3[5] = v13;
            v3[6] = v14;
          }
          v15 = sub_2AD7AC(v1, ".plt");
          if ( v15 )
          {
            v16 = *(_DWORD *)(v15 + 28) + v78;
            v17 = *(_DWORD *)(v15 + 36) + v16;
            v3[7] = v16;
            v3[8] = v17;
          }
          v18 = "r_debug_state";
          v19 = off_34C4B4;
          while ( 1 )
          {
            v21 = sub_202050(v1, sub_3059C, v18);
            if ( v21 )
              break;
            v20 = v19[1];
            ++v19;
            v18 = v20;
            if ( !v20 )
              goto LABEL_27;
          }
          v22 = ((int (*)(void))sub_16F654)();
          v21 = ((int (__fastcall *)(int, int, int))loc_169ED8)(v22, v21, v10);
LABEL_27:
          v23 = ((int (__fastcall *)(int))loc_231AD8)(v10);
          if ( v21 )
          {
            v68 = sub_16F654(v23);
            sub_324D8(v68, v21 + v78);
            free(v8);
            ((void (__fastcall *)(int))loc_1625A8)(v1);
            return;
          }
          free(v8);
          sub_946B0(
            "Unable to find dynamic linker breakpoint function.\n"
            "GDB will be unable to debug shared library initializers\n"
            "and track explicitly loaded dynamic code.");
          ((void (__fastcall *)(int))loc_1625A8)(v1);
        }
        else
        {
LABEL_52:
          free(v8);
          sub_946B0(
            "Unable to find dynamic linker breakpoint function.\n"
            "GDB will be unable to debug shared library initializers\n"
            "and track explicitly loaded dynamic code.");
        }
        goto LABEL_29;
      }
    }
  }
  v8 = sub_2FFC4(3, 0, 0, 0);
  if ( v8 )
    goto LABEL_13;
LABEL_29:
  v24 = off_34C4B4;
  v25 = "r_debug_state";
  do
  {
    v26 = sub_1B141C((int)&v78, v25);
    if ( v78 )
    {
      v27 = *(__int16 *)(v78 + 22);
      if ( v27 == -1 )
      {
        v73 = sub_94700("solib-svr4.c", 2487, "Section index is uninitialized");
        if ( HIDWORD(v73) != 1 )
        {
          v74 = sub_339E78(v73);
          sub_92E60(v74);
        }
        v57 = sub_339E78(v73);
        sub_339EF8(v57);
        goto LABEL_52;
      }
      v28 = *(_DWORD *)(v78 + 8) + *(_DWORD *)(*(_DWORD *)(v79 + 144) + 4 * v27);
      if ( v28 )
      {
LABEL_41:
        v34 = sub_16F654(v26);
        v35 = ((int (__fastcall *)(int, int, int *))loc_169ED8)(v34, v28, &dword_4899A0);
        v36 = sub_16F654(v35);
        sub_324D8(v36, v35);
        return;
      }
    }
    v29 = v24[1];
    ++v24;
    v25 = v29;
  }
  while ( v29 );
  if ( v8 && !*(_BYTE *)(sub_183688(v26) + 120) )
  {
    v30 = "_start";
    v31 = &off_34C4D0;
    do
    {
      v26 = sub_1B141C((int)&v78, v30);
      if ( v78 )
      {
        v33 = *(__int16 *)(v78 + 22);
        if ( v33 == -1 )
        {
          sub_94700("solib-svr4.c", 2504, "Section index is uninitialized");
LABEL_68:
          sub_94700("solib-svr4.c", 2283, "sect_index_text not initialized");
LABEL_69:
          v75 = sub_94700(
                  "solib-svr4.c",
                  2382,
                  "%s: Assertion `%s' failed.",
                  "int enable_break(svr4_info*, int)",
                  "load_addr < space_size");
          v76 = ((int (__fastcall *)(int, _DWORD))loc_1625A8)(v1, HIDWORD(v75));
          sub_338FFC(v76);
        }
        v28 = *(_DWORD *)(v78 + 8) + *(_DWORD *)(*(_DWORD *)(v79 + 144) + 4 * v33);
        if ( v28 )
          goto LABEL_41;
      }
      v32 = (char *)v31[1];
      ++v31;
      v30 = v32;
    }
    while ( v32 );
  }
}
