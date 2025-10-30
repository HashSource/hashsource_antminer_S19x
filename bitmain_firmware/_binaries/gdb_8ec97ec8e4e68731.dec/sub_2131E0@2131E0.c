char *__fastcall sub_2131E0(int a1, const char *a2, unsigned int a3, _DWORD *a4, int a5, int a6)
{
  unsigned int v9; // r5
  unsigned int v10; // r6
  int v11; // r8
  int v12; // r4
  bool v13; // zf
  char *v14; // r4
  int v15; // r0
  void *v16; // r11
  int v17; // r0
  int v18; // r3
  _DWORD *v19; // r0
  int v20; // r0
  _BOOL4 v22; // r1
  bool v23; // zf
  int v24; // r0
  _DWORD *v25; // r0
  int v26; // r0
  int v27; // r1
  size_t v28; // r9
  int v29; // r3
  char v30; // r2
  void *v31; // r12
  void *v32; // r3
  int v33; // r0
  bool v34; // zf
  int v35; // r3
  int v36; // r0
  _DWORD *v37; // r0
  int v38; // [sp+Ch] [bp-10h]
  _DWORD *v39; // [sp+Ch] [bp-10h]
  void *ptr; // [sp+10h] [bp-Ch]

  v38 = a3 & 2;
  v9 = dword_4896C8;
  v10 = a3;
  v11 = a5;
  v12 = a3 & 4;
  if ( ((a3 & 2) != 0 || dword_48A514)
    && ((a3 & 4) != 0 ? (v22 = off_46DB94[0] != "off") : (v22 = off_46DB94[0] == "full"), v22) )
  {
    if ( dword_4896C8 )
    {
      v9 = 1;
      goto LABEL_6;
    }
    v9 = ((a3 ^ 0x10) >> 4) & 1;
  }
  else if ( dword_4896C8 )
  {
    v9 = 0;
LABEL_6:
    v10 = a3 & 0xFFFFFFEF;
    v11 = a5 | 4;
    goto LABEL_7;
  }
  if ( !dword_4896CC && (!a6 || (*(_DWORD *)(a6 + 12) & 0x80) == 0) )
  {
LABEL_7:
    if ( sub_1B7B9C() )
      goto LABEL_8;
LABEL_45:
    if ( sub_1B7B24() )
    {
      v23 = v12 == 0;
      if ( v12 )
        v23 = v38 == 0;
      if ( !v23 )
        goto LABEL_49;
    }
LABEL_12:
    if ( !v12 )
      goto LABEL_13;
    goto LABEL_50;
  }
  v10 = a3 | 0x10;
  v11 = a5 | 0x80;
  if ( !sub_1B7B9C() )
    goto LABEL_45;
LABEL_8:
  v13 = v12 == 0;
  if ( v12 )
    v13 = v38 == 0;
  if ( v13 )
    goto LABEL_12;
LABEL_49:
  if ( !sub_25A3E4("Load new symbol table from \"%s\"? ", a2) )
    sub_946E0("Not confirmed.");
LABEL_50:
  v11 |= 0x20u;
LABEL_13:
  v14 = (char *)sub_9836C(0xD8u);
  ((void (__fastcall *)(char *, int, const char *, int))loc_1B6EDC)(v14, a1, a2, v11);
  if ( a6 )
    ((void (__fastcall *)(char *, int))loc_1B7498)(v14, a6);
  if ( v9 )
  {
    if ( !off_4896D0 )
      goto LABEL_75;
    ((void (__fastcall *)(const char *))off_4896D0)(a2);
  }
  while ( 1 )
  {
    a2 = (const char *)(v10 & 4);
    v15 = sub_211A54(*(_DWORD *)(*((_DWORD *)v14 + 9) + 4));
    ((void (__fastcall *)(char *, int))loc_21775C)(v14, v15);
    if ( !*((_DWORD *)v14 + 33) )
      break;
    v39 = sub_9253C((int)nullsub_39, 0);
    if ( a4 )
    {
      v16 = 0;
    }
    else
    {
      a4 = sub_93028(0x10u);
      *a4 = 0;
      a4[1] = 0;
      a4[2] = 0;
      a4[3] = 0;
      sub_9253C((int)sub_210BE8, (int)a4);
      v16 = a4;
    }
    if ( (v10 & 4) == 0 )
      goto LABEL_23;
    sub_9253C((int)sub_2131D8, 0);
    if ( !*(_DWORD *)(dword_487D2C + 32)
      || (ptr = *(void **)(dword_487D2C + 32),
          ((void (__fastcall *)(void *))loc_1B7600)(ptr),
          sub_33AC04(ptr),
          !*(_DWORD *)(dword_487D2C + 32)) )
    {
      (**((void (__fastcall ***)(void *))v14 + 33))(v14);
LABEL_23:
      if ( *a4 )
        ((void (__fastcall *)(_DWORD *, _DWORD))loc_212028)(a4, *((_DWORD *)v14 + 9));
      (*(void (__fastcall **)(char *))(*((_DWORD *)v14 + 33) + 4))(v14);
      sub_F441C(&off_46D334, 1, v10 & 2);
      (*(void (__fastcall **)(char *, _DWORD *))(*((_DWORD *)v14 + 33) + 20))(v14, a4);
      sub_2137D8(v14, v10);
      sub_92640(v39);
      if ( v16 )
        free(v16);
      goto LABEL_27;
    }
    sub_94700(
      (int)"symfile.c",
      1021,
      "%s: Assertion `%s' failed.",
      "void syms_from_objfile_1(objfile*, section_addr_info*, symfile_add_flags)",
      "symfile_objfile == NULL");
LABEL_75:
    sub_259858("Reading symbols from %s...", a2);
    v36 = sub_259B58("");
    v37 = (_DWORD *)sub_242F8C(v36);
    sub_25680C(*v37);
  }
  v26 = sub_16304C(*((_DWORD *)v14 + 9));
  v27 = *((_DWORD *)v14 + 16);
  v28 = 4 * v26;
  v29 = *((_DWORD *)v14 + 15);
  *((_DWORD *)v14 + 37) = v26;
  v30 = v27 - v29;
  if ( 4 * v26 > (unsigned int)(v27 - v29) )
  {
    obstack_newchunk((struct obstack *)(v14 + 48), 4 * v26);
    v29 = *((_DWORD *)v14 + 15);
    v27 = *((_DWORD *)v14 + 16);
  }
  v31 = (void *)*((_DWORD *)v14 + 14);
  v32 = (void *)(v29 + v28);
  v33 = *((_DWORD *)v14 + 18);
  *((_DWORD *)v14 + 15) = v32;
  v34 = v32 == v31;
  *((_DWORD *)v14 + 36) = v31;
  if ( v32 == v31 )
    v30 = v14[88];
  v35 = ((unsigned int)v32 + v33) & ~v33;
  *((_DWORD *)v14 + 15) = v35;
  if ( v34 )
    v14[88] = v30 | 2;
  if ( v35 - *((_DWORD *)v14 + 13) > (unsigned int)(v27 - *((_DWORD *)v14 + 13)) )
  {
    v35 = v27;
    *((_DWORD *)v14 + 15) = v27;
  }
  *((_DWORD *)v14 + 14) = v35;
  memset(v31, 0, v28);
LABEL_27:
  v17 = sub_210DCC((int)v14);
  if ( (v11 & 4) == 0 )
  {
LABEL_31:
    if ( !v9 )
      goto LABEL_32;
    goto LABEL_58;
  }
  if ( !v9 )
  {
    v18 = *((_DWORD *)v14 + 33);
    if ( !v18 )
      goto LABEL_32;
    goto LABEL_30;
  }
  sub_259858("expanding to full symbols...");
  v24 = sub_259B58("");
  v25 = (_DWORD *)sub_242F8C(v24);
  sub_25680C(*v25);
  v18 = *((_DWORD *)v14 + 33);
  if ( v18 )
  {
LABEL_30:
    v17 = (*(int (__fastcall **)(char *))(*(_DWORD *)(v18 + 40) + 36))(v14);
    goto LABEL_31;
  }
LABEL_58:
  if ( !sub_1B7AA4(v14) )
  {
    sub_259B58("");
    sub_259858("(no debugging symbols found)...");
    sub_259B58("");
  }
  if ( off_4896D4 )
    v17 = ((int (*)(void))off_4896D4)();
  else
    v17 = sub_259858("done.\n");
LABEL_32:
  v19 = (_DWORD *)sub_242F8C(v17);
  sub_25680C(*v19);
  if ( *((_DWORD *)v14 + 33) )
  {
    if ( (v10 & 4) != 0 )
    {
      *(_DWORD *)(dword_487D2C + 32) = v14;
      sub_213188(v10);
    }
    else if ( (v10 & 8) == 0 )
    {
      sub_DC424();
    }
    sub_F441C(&off_46D334, 0, v10 & 2);
    v20 = sub_1B968C((int)v14);
    sub_2A8F64(v20);
    return v14;
  }
  else
  {
    sub_1B968C((int)v14);
    return v14;
  }
}
