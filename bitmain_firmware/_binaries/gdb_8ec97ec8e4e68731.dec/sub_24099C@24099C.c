int __fastcall sub_24099C(int a1, _BYTE *a2, int a3, int a4, int a5)
{
  int v9; // r9
  int v10; // r5
  int v11; // r4
  _BOOL4 v12; // r0
  int v13; // r1
  int v14; // r5
  _DWORD *v15; // r4
  char *v16; // r0
  int v17; // r0
  const char *v18; // r8
  bool v19; // zf
  _BYTE *v20; // r3
  int v21; // r2
  char *v22; // r0
  int v23; // r2
  int *v24; // r8
  int v25; // r0
  char *v26; // r2
  int v27; // r8
  int result; // r0
  bool v29; // zf
  _DWORD *v30; // r4
  int v31; // r3
  int v32; // r2
  char *v33; // r3
  int v34; // r2
  _BYTE *v35; // r3
  int v36; // r2
  int v37; // r0
  char *v38; // r0
  size_t v39; // r0
  int v40; // r0
  const char *v41; // [sp+8h] [bp-D4h]
  char *s; // [sp+14h] [bp-C8h]
  int v43; // [sp+1Ch] [bp-C0h]
  int v44; // [sp+20h] [bp-BCh]
  int v45; // [sp+30h] [bp-ACh]
  int v46; // [sp+34h] [bp-A8h]
  int v47; // [sp+38h] [bp-A4h]
  int v48; // [sp+3Ch] [bp-A0h]
  int v49; // [sp+40h] [bp-9Ch]
  void *v50; // [sp+54h] [bp-88h] BYREF
  int v51; // [sp+58h] [bp-84h]
  _DWORD v52[4]; // [sp+5Ch] [bp-80h] BYREF
  char *v53; // [sp+6Ch] [bp-70h] BYREF
  int v54; // [sp+70h] [bp-6Ch]
  _DWORD v55[4]; // [sp+74h] [bp-68h] BYREF
  void *v56; // [sp+84h] [bp-58h] BYREF
  int v57; // [sp+88h] [bp-54h]
  _DWORD v58[4]; // [sp+8Ch] [bp-50h] BYREF
  void *v59; // [sp+9Ch] [bp-40h] BYREF
  int v60; // [sp+A0h] [bp-3Ch]
  _DWORD v61[4]; // [sp+A4h] [bp-38h] BYREF
  void *ptr; // [sp+B4h] [bp-28h] BYREF
  _QWORD v63[4]; // [sp+B8h] [bp-24h] BYREF

  v9 = *(_DWORD *)(sub_183688() + 8);
  sub_240794();
  v44 = dword_4878EC;
  v47 = HIDWORD(qword_4878F0);
  v45 = qword_4878F0;
  v43 = sub_2573F0(a1);
  if ( v43 )
  {
    sub_2578AC(a1, 1);
    v49 = a1;
    v46 = 0;
    v48 = 0;
    ((void (__fastcall *)(void **))loc_23FF20)(&ptr);
  }
  else
  {
    v10 = dword_48A4D4;
    if ( !dword_48A4D4 )
      goto LABEL_146;
    v11 = 0;
    do
    {
      v12 = sub_23D9D8(a2, v9, a3, a4, v10);
      v10 = *(_DWORD *)(v10 + 4);
      if ( v12 )
        ++v11;
    }
    while ( v10 );
    if ( !v11 )
    {
LABEL_146:
      if ( a2 && *a2 )
        return sub_25738C(a1, "No threads match '%s'.\n", a2);
      else
        return sub_25738C(a1, "No threads.\n");
    }
    BYTE3(v63[1]) = 0;
    qmemcpy((char *)v63 + 4, "thread", 6);
    if ( a5 )
      v13 = 5;
    else
      v13 = 4;
    ptr = (char *)v63 + 4;
    BYTE2(v63[1]) = aRemoteServerDo[46];
    LODWORD(v63[0]) = 7;
    sub_25704C(a1, v13, v11, &ptr);
    if ( ptr != (char *)v63 + 4 )
      sub_339E64(ptr);
    ptr = (char *)v63 + 4;
    strcpy((char *)v61, "current");
    v59 = v61;
    v60 = 7;
    LODWORD(v63[0]) = 0;
    BYTE4(v63[0]) = 0;
    sub_2571B8(a1, 1, -1, &v59, &ptr);
    if ( ptr != (char *)v63 + 4 )
      sub_339E64(ptr);
    if ( v59 != v61 )
      sub_339E64(v59);
    v59 = v61;
    strcpy((char *)v61, "id-in-tg");
    v60 = 8;
    ptr = (char *)v63 + 4;
    strcpy((char *)v63 + 4, "Id");
    LODWORD(v63[0]) = 2;
    sub_2571B8(a1, 4, -1, &v59, &ptr);
    if ( ptr != (char *)v63 + 4 )
      sub_339E64(ptr);
    if ( v59 != v61 )
      sub_339E64(v59);
    if ( a5 )
    {
      strcpy((char *)v61, "id");
      WORD2(v63[0]) = *(_WORD *)"GId";
      v60 = 2;
      HIWORD(v63[0]) = (unsigned __int8)aGid[2];
      v59 = v61;
      ptr = (char *)v63 + 4;
      LODWORD(v63[0]) = 3;
      sub_2571B8(a1, 4, -1, &v59, &ptr);
      if ( ptr != (char *)v63 + 4 )
        sub_339E64(ptr);
      if ( v59 != v61 )
        sub_339E64(v59);
    }
    v59 = v61;
    strcpy((char *)v61, "target-id");
    ptr = (char *)v63 + 4;
    strcpy((char *)v63 + 4, "Target Id");
    v60 = 9;
    LODWORD(v63[0]) = 9;
    sub_2571B8(a1, 17, -1, &v59, &ptr);
    if ( ptr != (char *)v63 + 4 )
      sub_339E64(ptr);
    if ( v59 != v61 )
      sub_339E64(v59);
    v61[0] = *(_DWORD *)"frame";
    LOWORD(v61[1]) = (unsigned __int8)aSymbolSCannotB_1[60];
    v59 = v61;
    HIDWORD(v63[0]) = *(_DWORD *)"Frame";
    LOWORD(v63[1]) = (unsigned __int8)aFrame_0[4];
    ptr = (char *)v63 + 4;
    v60 = 5;
    LODWORD(v63[0]) = 5;
    sub_2571B8(a1, 1, -1, &v59, &ptr);
    if ( ptr != (char *)v63 + 4 )
      sub_339E64(ptr);
    if ( v59 != v61 )
      sub_339E64(v59);
    sub_25722C(a1);
    v46 = 1;
    v49 = 0;
    v48 = a1;
    ((void (__fastcall *)(void **))loc_23FF20)(&ptr);
  }
  v14 = dword_487918;
  if ( dword_487918 )
  {
    while ( 1 )
    {
      v15 = (_DWORD *)dword_48A4D4;
      if ( dword_48A4D4 )
        break;
LABEL_75:
      v14 = *(_DWORD *)(v14 + 4);
      if ( !v14 )
        goto LABEL_76;
    }
    while ( 1 )
    {
      while ( v15[7] != v14 || !sub_23D9D8(a2, v9, a3, a4, (int)v15) )
      {
        v15 = (_DWORD *)v15[1];
        if ( !v15 )
          goto LABEL_75;
      }
      sub_2578AC(a1, 0);
      if ( !sub_2573F0(a1) )
      {
        if ( v15[2] == v44 && v15[3] == v45 && v15[4] == v47 )
          sub_2575E8(a1, "current", "*");
        else
          sub_2575A4(a1, "current");
        v16 = sub_240128((int)v15);
        sub_2575E8(a1, "id-in-tg", v16);
      }
      if ( a5 || sub_2573F0(a1) )
        sub_257504(a1, "id", v15[5]);
      s = (char *)sub_23095C(v15[2], v15[3], v15[4]);
      v17 = off_489AB0(&dword_4899A0, v15);
      v18 = (const char *)v15[8];
      v41 = (const char *)v17;
      if ( !v18 )
        v18 = (const char *)sub_230990((int)v15);
      if ( sub_2573F0(a1) )
      {
        sub_2575E8(a1, "target-id", s);
        if ( v41 )
          sub_2575E8(a1, "details", v41);
        if ( v18 )
          sub_2575E8(a1, "name", v18);
        goto LABEL_66;
      }
      v51 = 0;
      LOBYTE(v52[0]) = 0;
      v19 = v41 == 0;
      if ( v41 )
        v19 = v18 == 0;
      v50 = v52;
      if ( !v19 )
      {
        sub_931D8(&v53, "%s \"%s\" (%s)", s, v18, v41);
        v33 = (char *)v50;
        if ( v53 == (char *)v55 )
        {
          sub_33B48C(&v50, &v53);
          v33 = v53;
        }
        else
        {
          if ( v50 == v52 )
          {
            v50 = v53;
            v51 = v54;
            v52[0] = v55[0];
          }
          else
          {
            v50 = v53;
            v51 = v54;
            v34 = v52[0];
            v52[0] = v55[0];
            if ( v33 )
            {
              v53 = v33;
              v55[0] = v34;
              goto LABEL_114;
            }
          }
          v53 = (char *)v55;
          v33 = (char *)v55;
        }
LABEL_114:
        v54 = 0;
        *v33 = 0;
        v22 = v53;
        if ( v53 != (char *)v55 )
          goto LABEL_63;
        goto LABEL_64;
      }
      if ( v41 )
      {
        sub_931D8((char **)&v56, "%s (%s)", s, v41);
        v20 = v50;
        if ( v56 == v58 )
        {
          sub_33B48C(&v50, &v56);
          v20 = v56;
        }
        else
        {
          if ( v50 == v52 )
          {
            v50 = v56;
            v51 = v57;
            v52[0] = v58[0];
          }
          else
          {
            v50 = v56;
            v51 = v57;
            v21 = v52[0];
            v52[0] = v58[0];
            if ( v20 )
            {
              v56 = v20;
              v58[0] = v21;
              goto LABEL_62;
            }
          }
          v56 = v58;
          v20 = v58;
        }
LABEL_62:
        v57 = 0;
        *v20 = 0;
        v22 = (char *)v56;
        if ( v56 == v58 )
          goto LABEL_64;
LABEL_63:
        sub_339E64(v22);
        goto LABEL_64;
      }
      if ( !v18 )
      {
        v39 = strlen(s);
        sub_33BC54((int)&v50, 0, 0, s, v39);
        goto LABEL_64;
      }
      sub_931D8((char **)&v59, "%s \"%s\"", s, v18);
      v35 = v50;
      if ( v59 == v61 )
      {
        sub_33B48C(&v50, &v59);
        v35 = v59;
      }
      else
      {
        if ( v50 == v52 )
        {
          v50 = v59;
          v51 = v60;
          v52[0] = v61[0];
        }
        else
        {
          v50 = v59;
          v51 = v60;
          v36 = v52[0];
          v52[0] = v61[0];
          if ( v35 )
          {
            v59 = v35;
            v61[0] = v36;
            goto LABEL_121;
          }
        }
        v59 = v61;
        v35 = v61;
      }
LABEL_121:
      v60 = 0;
      *v35 = 0;
      v22 = (char *)v59;
      if ( v59 != v61 )
        goto LABEL_63;
LABEL_64:
      sub_2575E8(a1, "target-id", v50);
      if ( v50 != v52 )
        sub_339E64(v50);
LABEL_66:
      if ( v15[11] == 1 )
      {
        sub_257380(a1, "(running)\n", v23, 1);
      }
      else
      {
        sub_23F9F0();
        v24 = (int *)sub_15F7E8(0);
        v25 = sub_2573F0(a1);
        sub_20E7E8(v24, v25, 0, 0);
      }
      if ( sub_2573F0(a1) )
      {
        v26 = "running";
        if ( v15[11] != 1 )
          v26 = "stopped";
        sub_2575E8(a1, "state", v26);
      }
      v27 = sub_23236C(v15[2], v15[3], v15[4]);
      if ( (sub_2573F0(a1) & (v27 != -1)) != 0 )
        sub_257504(a1, "core", v27);
      sub_25734C(a1, 0);
      v15 = (_DWORD *)v15[1];
      if ( !v15 )
        goto LABEL_75;
    }
  }
LABEL_76:
  result = ((int (__fastcall *)(void **))loc_23FC8C)(&ptr);
  if ( v46 )
    result = sub_257270(v48);
  if ( v43 )
    result = sub_25734C(v49, 1);
  v29 = a2 == 0;
  if ( !a2 )
    v29 = a4 == -1;
  if ( v29 )
  {
    LOWORD(v30) = (unsigned __int16)&dword_475848;
    result = sub_2573F0(a1);
    if ( result )
    {
      HIWORD(v30) = (unsigned int)&dword_475848 >> 16;
      result = qword_4878F0;
      if ( dword_4878EC == *v30 && __PAIR64__(v30[2], v30[1]) == qword_4878F0 )
      {
LABEL_139:
        if ( HIDWORD(qword_4878F0) == v30[2] )
        {
          if ( !dword_48A4D4 )
            return result;
          goto LABEL_141;
        }
LABEL_96:
        ptr = (void *)dword_4878EC;
        v63[0] = qword_4878F0;
        result = sub_23DA74(dword_4878EC, qword_4878F0, SHIDWORD(qword_4878F0), 2);
        if ( result )
        {
          v37 = ((int (*)(void))loc_23DBE4)();
          v38 = sub_240128(v37);
          return sub_25738C(a1, "\nThe current thread <Thread ID %s> has terminated.  See `help thread'.\n", v38);
        }
        if ( !dword_48A4D4 || dword_4878EC != *v30 || (_DWORD)qword_4878F0 != v30[1] )
          return result;
LABEL_141:
        if ( HIDWORD(qword_4878F0) == v30[2] )
          return sub_25738C(a1, "\nNo selected thread.  See `help thread'.\n");
        return result;
      }
      v31 = dword_48A4D4;
      if ( !dword_48A4D4 )
        goto LABEL_143;
      while ( dword_4878EC != *(_DWORD *)(v31 + 8) || *(_QWORD *)(v31 + 12) != qword_4878F0 )
      {
        v31 = *(_DWORD *)(v31 + 4);
        if ( !v31 )
          goto LABEL_143;
      }
      v32 = *(_DWORD *)(v31 + 20);
      if ( !v32 )
      {
LABEL_143:
        v40 = sub_94700(
                (int)"thread.c",
                1350,
                "%s: Assertion `%s' failed.",
                "void print_thread_info_1(ui_out*, const char*, int, int, int)",
                "num != 0");
        sub_338FFC(v40);
      }
      result = sub_257504(a1, "current-thread-id", v32);
    }
    else
    {
      HIWORD(v30) = (unsigned int)&dword_475848 >> 16;
    }
    if ( dword_4878EC != *v30 || (_DWORD)qword_4878F0 != v30[1] )
      goto LABEL_96;
    goto LABEL_139;
  }
  return result;
}
