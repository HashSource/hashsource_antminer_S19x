int __fastcall sub_1D9910(int a1)
{
  int v1; // r4
  int v2; // r0
  int v3; // r8
  int v4; // r0
  int v5; // r7
  void *v6; // r0
  int i; // r2
  int v8; // r2
  int v9; // r1
  int v10; // r0
  int v11; // r0
  const char **v12; // r7
  int v13; // r3
  _BYTE *v14; // r0
  int v15; // r4
  int v16; // r11
  unsigned int n; // r8
  unsigned __int16 *v18; // r0
  unsigned int v19; // r3
  const char **v20; // r10
  void *v21; // r2
  int v22; // r0
  const char **v23; // r5
  int v24; // r2
  const char **v25; // r5
  int v26; // r4
  int v27; // r8
  unsigned __int16 v28; // r0
  int v29; // r3
  unsigned int v30; // r3
  void *v31; // r2
  int v32; // r0
  _DWORD *v33; // r0
  int v34; // r0
  int v35; // r0
  __int64 v36; // r0
  int v37; // r0
  unsigned __int16 *v39; // r5
  const char **v40; // r11
  int v41; // r3
  int v42; // r3
  int v43; // r12
  _BYTE *v44; // r0
  unsigned int v45; // r3
  bool v46; // zf
  int *v47; // r0
  int v48; // r8
  int v49; // r0
  void *v50; // r0
  void *v51; // r0
  int v52; // r3
  int *v53; // r0
  int v54; // r8
  int v55; // r0
  int v56; // r0
  _DWORD *v57; // r0
  unsigned int v58; // r2
  unsigned int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  _DWORD *v63; // r0
  _DWORD *v64; // r0
  _DWORD *v65; // r0
  int v66; // r8
  int v67; // r3
  char *v68; // r0
  int v69; // r0
  const char *v70; // r4
  int v71; // r0
  const char *v72; // r0
  unsigned int v73; // [sp+14h] [bp-50h]
  int v74; // [sp+18h] [bp-4Ch]
  const char **v75; // [sp+1Ch] [bp-48h]
  int v76; // [sp+1Ch] [bp-48h]
  const char **v77; // [sp+1Ch] [bp-48h]
  int v78; // [sp+20h] [bp-44h]
  _DWORD *v79; // [sp+34h] [bp-30h]
  char v80; // [sp+3Bh] [bp-29h] BYREF
  unsigned int dest; // [sp+3Ch] [bp-28h] BYREF
  unsigned int v82; // [sp+40h] [bp-24h] BYREF
  unsigned int v83; // [sp+44h] [bp-20h] BYREF
  unsigned int v84; // [sp+48h] [bp-1Ch] BYREF
  unsigned int v85; // [sp+4Ch] [bp-18h] BYREF
  __int64 v86; // [sp+50h] [bp-14h] BYREF
  __int64 v87; // [sp+58h] [bp-Ch] BYREF

  if ( dword_487D4C )
  {
    v57 = (_DWORD *)sub_242FC8(a1);
    sub_2594B0(*v57, "Process record: record_full_open\n");
  }
  sub_1D3754();
  v1 = 0;
  v2 = 0;
  qword_4880D8 = 0;
  off_46DAB8 = &dword_4880B8;
  dword_4880E0 = 0;
  dword_4880BC = 0;
  if ( !dword_47ACB8 )
  {
    if ( dword_487D4C )
    {
      v65 = (_DWORD *)sub_242FC8(0);
      v2 = sub_2594B0(*v65, "Process record: record_full_open_1\n");
    }
    v34 = sub_22EBBC(v2);
    if ( !v34 )
      sub_946E0("Process record: the program is not being run.");
    if ( dword_487950 )
      sub_946E0("Process record target can't debug inferior in non-stop mode (non-stop).");
    v35 = sub_16F654(v34);
    if ( ((int (__fastcall *)(int))loc_16C63C)(v35) )
    {
      sub_231B78(&unk_4883DC);
      goto LABEL_55;
    }
LABEL_100:
    sub_946E0("Process record: the current architecture doesn't support record function.", HIDWORD(v36));
  }
  v3 = sub_1DDBBC(0);
  v4 = sub_1DD58C(v3);
  v5 = ((int (__fastcall *)(int))loc_166E9C)(v4);
  sub_2322B4(v3, -1);
  v6 = sub_93028(v5 << 6);
  dword_4880B0 = (int)v6;
  if ( v5 > 0 )
  {
    for ( i = (int)v6; ; i = dword_4880B0 )
    {
      v8 = i + (v1 << 6);
      v9 = v1++;
      ((void (__fastcall *)(int, int, int))loc_1DEBAC)(v3, v9, v8);
      if ( v5 == v1 )
        break;
    }
  }
  if ( sub_948C4(dword_47ACB8, (void **)&dword_4883D0, &dword_4883D4) )
  {
    v69 = dword_4880B0;
    if ( dword_4880B0 )
      free((void *)dword_4880B0);
    dword_4880B0 = 0;
    v70 = *(const char **)dword_47ACB8;
    v71 = sub_2A6910(v69);
    v72 = (const char *)sub_2A6920(v71);
    sub_946E0("\"%s\": Can't find sections: %s", v70, v72);
  }
  sub_231B78(&unk_4880EC);
  v10 = dword_47ACB8;
  if ( !dword_47ACB8 )
    goto LABEL_55;
  if ( dword_4880BC )
  {
    v36 = sub_94700(
            (int)"record-full.c",
            2337,
            "%s: Assertion `%s' failed.",
            "void record_full_restore()",
            "record_full_first.next == NULL");
    goto LABEL_100;
  }
  if ( dword_487D4C )
  {
    v64 = (_DWORD *)sub_242FC8(dword_47ACB8);
    sub_2594B0(*v64, "Restoring recording from core file.\n");
    v10 = dword_47ACB8;
  }
  v11 = sub_2AD7AC(v10, "null0");
  v74 = v11;
  if ( dword_487D4C )
  {
    v61 = *(_DWORD *)sub_242FC8(v11);
    if ( !v74 )
    {
      sub_2594B0(v61, "Find precord section %s.\n", "failed");
      goto LABEL_55;
    }
    v62 = sub_2594B0(v61, "Find precord section %s.\n", "succeeded");
    v73 = *(_DWORD *)(v74 + 36);
    if ( dword_487D4C )
    {
      v63 = (_DWORD *)sub_242FC8(v62);
      sub_2594B0(*v63, "%s", *(const char **)v74);
    }
  }
  else
  {
    if ( !v11 )
      goto LABEL_55;
    v73 = *(_DWORD *)(v11 + 36);
  }
  v12 = (const char **)dword_47ACB8;
  if ( !sub_2ADEDC(dword_47ACB8, v74, &dest, 0, 0, 0, 4u) )
    sub_16258(v12, 4);
  v14 = sub_15C34C(&v87, 4, 0, v13, 0x20091016u, 0);
  if ( (_DWORD)v87 != dest )
    sub_946E0("Version mis-match or file format error in core file %s.", *(const char **)dword_47ACB8);
  if ( dword_487D4C )
  {
    v66 = *(_DWORD *)sub_242FC8(v14);
    sub_15C34C(&v87, 4, 0, dest, dest, 0);
    v68 = sub_989F0(v87, 0, 4, v67);
    sub_2594B0(v66, "  Reading 4-byte magic cookie RECORD_FULL_FILE_MAGIC (0x%s)\n", v68);
  }
  dword_4880A4 = 0;
  dword_4880A0 = 0;
  dword_4880E0 = 0;
  v79 = sub_9253C((int)sub_1D9470, 0);
  v78 = sub_1DDBBC(v79);
  if ( v73 > 4 )
  {
    v15 = 4;
    while ( 1 )
    {
      v23 = (const char **)dword_47ACB8;
      if ( !sub_2ADEDC(dword_47ACB8, v74, &v80, v15 >> 31, v15, v15 >> 31, 1u) )
        sub_16258(v23, 1);
      v24 = v15 + 1;
      if ( v80 == 1 )
      {
        v25 = (const char **)dword_47ACB8;
        if ( !sub_2ADEDC(dword_47ACB8, v74, &v82, v24 >> 31, v24, v24 >> 31, 4u) )
          sub_16258(v25, 4);
        v26 = v15 + 5;
        sub_15C34C(&v87, 4, 0, v82, v82, 0);
        v27 = v87;
        v82 = v87;
        v16 = sub_1DD58C(v78);
        v39 = (unsigned __int16 *)sub_93094(1u, 0x20u);
        v39[8] = v27;
        *((_DWORD *)v39 + 2) = 1;
        v28 = ((int (__fastcall *)(int, int))loc_1DD420)(v16, v27);
        n = v28;
        v39[9] = v28;
        if ( v28 > 8u )
        {
          v51 = sub_93028(v28);
          v52 = *((_DWORD *)v39 + 2);
          v31 = v51;
          *((_DWORD *)v39 + 5) = v51;
          v20 = (const char **)dword_47ACB8;
          if ( v52 == 1 )
          {
            v30 = v39[9];
            n = v30;
            if ( v30 <= 8 )
              goto LABEL_73;
          }
          else
          {
            if ( v52 != 2 )
              goto LABEL_87;
            n = v39[9];
LABEL_43:
            v30 = *((_DWORD *)v39 + 5);
            if ( v30 <= 4 )
              v31 = v39 + 14;
            else
              v31 = (void *)*((_DWORD *)v39 + 7);
          }
        }
        else
        {
          v29 = *((_DWORD *)v39 + 2);
          v20 = (const char **)dword_47ACB8;
          if ( v29 != 1 )
          {
            if ( v29 != 2 )
              goto LABEL_87;
            goto LABEL_43;
          }
          v30 = v39[9];
LABEL_73:
          n = v30;
          v31 = v39 + 10;
        }
        v32 = sub_2ADEDC((int)v20, v74, v31, v30, v26, v26 >> 31, n);
        if ( !v32 )
LABEL_85:
          sub_16258(v20, n);
        v15 = n + v26;
        if ( dword_487D4C )
        {
          v33 = (_DWORD *)sub_242FC8(v32);
          sub_2594B0(*v33, "  Reading register %d (1 plus %lu plus %d bytes)\n", v39[8], 4, v39[9]);
        }
        goto LABEL_36;
      }
      if ( v80 )
        break;
      v39 = (unsigned __int16 *)sub_93094(1u, 0x20u);
      v40 = (const char **)dword_47ACB8;
      v41 = dword_4880E0;
      *((_DWORD *)v39 + 2) = 0;
      dword_4880E0 = v41 + 1;
      if ( !sub_2ADEDC((int)v40, v74, &v84, v41 + 1, v15 + 1, (v15 + 1) >> 31, 4u) )
        sub_16258(v40, 4);
      sub_15C34C(&v87, 4, 0, v84, v84, 0);
      v42 = v87;
      v43 = dword_47ACB8;
      *((_DWORD *)v39 + 4) = v87;
      v77 = (const char **)v43;
      v84 = v42;
      if ( !sub_2ADEDC(v43, v74, &v85, v42, v15 + 5, (v15 + 5) >> 31, 4u) )
        sub_16258(v77, 4);
      v15 += 9;
      v44 = sub_15C34C(&v87, 4, 0, v85, v85, 0);
      v45 = v87;
      v46 = dword_487D4C == 0;
      *((_DWORD *)v39 + 7) = 0;
      v85 = v45;
      HIDWORD(qword_4880D8) = 0;
      *((_DWORD *)v39 + 6) = v45;
      LODWORD(qword_4880D8) = v45 + 1;
      if ( !v46 )
      {
        v47 = (int *)sub_242FC8(v44);
        v48 = *v47;
        v49 = sub_B894C((int)v47);
        sub_25AC8C(v49, v15);
        sub_2594B0(v48, "  Reading record_full_end (1 + %lu + %lu bytes), offset == %s\n", 4);
      }
LABEL_36:
      sub_1D8780((int)v39);
      if ( v73 <= v15 )
        goto LABEL_74;
    }
    if ( v80 != 2 )
      sub_946E0("Bad entry type in core file %s.", *(const char **)dword_47ACB8);
    v39 = (unsigned __int16 *)dword_47ACB8;
    v16 = 4;
    if ( !sub_2ADEDC(dword_47ACB8, v74, &v83, v24 >> 31, v24, v24 >> 31, 4u) )
      goto LABEL_88;
    sub_15C34C(&v87, 4, 0, v83, v83, 0);
    v75 = (const char **)dword_47ACB8;
    v83 = v87;
    if ( !sub_2ADEDC((int)v75, v74, &v86, (int)v75, v15 + 5, (v15 + 5) >> 31, 8u) )
      sub_16258(v75, 8);
    v76 = v15 + 13;
    sub_15C34C(&v87, 8, 0, v15 + 13, v86, HIDWORD(v86));
    v16 = v87;
    n = v83;
    v86 = v87;
    v18 = (unsigned __int16 *)sub_93094(1u, 0x20u);
    *((_DWORD *)v18 + 2) = 2;
    v39 = v18;
    *((_DWORD *)v18 + 4) = v16;
    *((_DWORD *)v18 + 5) = n;
    if ( n > 4 )
    {
      v50 = sub_93028(n);
      v19 = *((_DWORD *)v39 + 2);
      *((_DWORD *)v39 + 7) = v50;
      v20 = (const char **)dword_47ACB8;
      if ( v19 == 1 )
      {
        v19 = v39[9];
        if ( v19 <= 8 )
        {
          v21 = v39 + 10;
          n = *((_DWORD *)v39 + 5);
        }
        else
        {
          v21 = (void *)*((_DWORD *)v39 + 5);
        }
        if ( v19 > 8 )
          n = (unsigned int)v21;
        goto LABEL_33;
      }
      if ( v19 != 2 )
      {
LABEL_87:
        ((void (*)(void))loc_161F0)();
LABEL_88:
        sub_16258((const char **)v39, v16);
      }
    }
    else
    {
      v20 = (const char **)dword_47ACB8;
    }
    n = *((_DWORD *)v39 + 5);
    if ( n <= 4 )
      v21 = v39 + 14;
    else
      v21 = (void *)*((_DWORD *)v39 + 7);
LABEL_33:
    v22 = sub_2ADEDC((int)v20, v74, v21, v19, v76, v76 >> 31, n);
    if ( !v22 )
      goto LABEL_85;
    v15 = n + v76;
    if ( dword_487D4C )
    {
      v53 = (int *)sub_242FC8(v22);
      v54 = *v53;
      v55 = sub_B894C((int)v53);
      v56 = sub_25AC8C(v55, *((_DWORD *)v39 + 4));
      sub_2594B0(v54, "  Reading memory %s (1 plus %lu plus %lu plus %d bytes)\n", v56, 8, 4, *((_DWORD *)v39 + 5));
    }
    goto LABEL_36;
  }
LABEL_74:
  sub_92640(v79);
  dword_4880BC = dword_4880A4;
  v58 = dword_4880E0;
  *(_DWORD *)dword_4880A4 = &dword_4880B8;
  off_46DAB8 = &dword_4880B8;
  v59 = dword_46DABC;
  *(_DWORD *)(dword_4880A0 + 4) = 0;
  if ( v58 > v59 )
  {
    dword_46DABC = v58;
    sub_946B0("Auto increase record/replay buffer limit to %u.", v58);
  }
  sub_259F10("Restored records from core file %s.\n", *(const char **)dword_47ACB8);
  v60 = sub_15F7E8(0);
  sub_20E7E8(v60, 1, 1);
LABEL_55:
  dword_4880E8 = (int)sub_153270((int)sub_1D8848, 0);
  if ( dword_488098 )
    free((void *)dword_488098);
  dword_488098 = 0;
  sub_CDA80((int)&loc_1D91B0);
  v37 = sub_183688();
  return sub_1B9450(v37, 1, (int)"full", 0);
}
