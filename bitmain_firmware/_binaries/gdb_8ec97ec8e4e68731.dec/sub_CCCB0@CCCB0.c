int __fastcall sub_CCCB0(int result)
{
  int v1; // r4
  int v2; // r11
  _DWORD *v3; // r6
  int v4; // r3
  int v5; // r9
  int v6; // r2
  bool v7; // zf
  void *v8; // r0
  _DWORD *v9; // r5
  int v10; // r0
  int v11; // r1
  int v12; // r8
  int v13; // r7
  int v14; // r0
  int v15; // r0
  int v16; // r7
  void *v17; // r2
  int v18; // r7
  __int64 v19; // r2
  int v20; // r0
  int v21; // r3
  int v22; // r1
  int v23; // r3
  _DWORD *v24; // r8
  int v25; // r3
  _DWORD *i; // r0
  int v27; // r7
  int v28; // r2
  int v29; // r3
  char *v30; // r0
  int v31; // r2
  int v32; // r3
  int v33; // r0
  _DWORD *v34; // r7
  int v35; // r3
  int v36; // r3
  _DWORD *v37; // r3
  __int64 v38; // kr00_8
  _DWORD *v39; // r5
  _DWORD *v40; // r0
  _DWORD *v41; // r5
  int v42; // r8
  int v43; // r0
  int v44; // [sp+14h] [bp-10h]
  int v45; // [sp+18h] [bp-Ch] BYREF
  int v46; // [sp+1Ch] [bp-8h] BYREF

  v3 = *(_DWORD **)(result + 8);
  v4 = v3[3];
  if ( (unsigned int)(v4 - 6) > 3 )
    goto LABEL_61;
  v5 = *(_DWORD *)(result + 4);
  v1 = result;
  if ( !v5 )
  {
    sub_94700(
      (int)"breakpoint.c",
      5030,
      "%s: Assertion `%s' failed.",
      "void bpstat_check_watchpoint(bpstat)",
      "bl != NULL");
LABEL_61:
    sub_94700(
      (int)"breakpoint.c",
      10220,
      "%s: Assertion `%s' failed.",
      "void check_status_watchpoint(bpstat)",
      "is_watchpoint (bs->breakpoint_at)");
LABEL_62:
    v38 = sub_94700(
            (int)"breakpoint.c",
            4866,
            "%s: Assertion `%s' failed.",
            "wp_check_result watchpoint_check(bpstat)",
            "bs->breakpoint_at != NULL");
    sub_92E40(v2);
    if ( HIDWORD(v38) != 1 )
    {
      sub_339E78(v38);
      sub_92E60();
    }
    v39 = (_DWORD *)sub_339E78(v38);
    v40 = (_DWORD *)sub_242FB4(v39);
    sub_154B88(*v40, *v39, v39[1], v39[2], "Error evaluating expression for watchpoint %d\n", v3[6]);
    v41 = (_DWORD *)dword_48769C;
    v42 = dword_487668;
    do
    {
      dword_487668 = (int)v41;
      if ( !v41 )
        break;
      sub_259F10("Watchpoint %d deleted.\n", v3[6]);
      v41 = (_DWORD *)*v41;
    }
    while ( v41 );
    dword_487668 = v42;
    v43 = ((int (__fastcall *)(_DWORD *))loc_C9340)(v3);
    result = sub_339EF8(v43);
    goto LABEL_46;
  }
  if ( v4 != 6 )
  {
    v6 = v3[52];
    if ( v6 != 2 )
    {
      v7 = v6 == 1;
      if ( v6 == 1 )
        v7 = v4 == 7;
      if ( !v7 )
        goto LABEL_8;
    }
  }
  v8 = sub_92E28();
  v9 = *(_DWORD **)(v1 + 8);
  v2 = (int)v8;
  if ( !v9 )
    goto LABEL_62;
  v10 = sub_C7798(*(_DWORD *)(v1 + 8));
  if ( !v10 )
    goto LABEL_33;
  if ( !v9[37] )
    goto LABEL_18;
  v12 = sub_15F70C(v10, v11);
  v13 = sub_15ECB4(v12);
  v14 = sub_15DDFC(v12);
  if ( ((int (__fastcall *)(int, int))loc_16A5F0)(v13, v14) )
  {
LABEL_33:
    result = sub_92E40(v2);
LABEL_8:
    *(_DWORD *)(v1 + 28) = 1;
    *(_BYTE *)(v1 + 25) = 0;
    return result;
  }
  v15 = sub_15FE8C(v9[44], v9[45], v9[46], v9[47], v9[48]);
  v16 = v15;
  if ( !v15 || (v15 = sub_C3410(v15)) == 0 || (v15 = sub_C2360(v9[37], *(_DWORD *)(v15 + 8))) == 0 )
  {
    v24 = (_DWORD *)dword_48769C;
    v25 = dword_487668;
    dword_487668 = dword_48769C;
    v44 = v25;
    if ( dword_48769C )
    {
      for ( i = (_DWORD *)sub_242FDC(v15); ; i = (_DWORD *)sub_242FDC(v33) )
      {
        v27 = *i;
        if ( sub_2573F0(*i) )
        {
          v30 = sub_9835C(6);
          sub_2575E8(v27, "reason", v30);
        }
        sub_257380(v27, "\nWatchpoint ", v28, v29);
        sub_257504(v27, "wpnum", v9[6]);
        v33 = sub_257380(
                v27,
                " deleted because the program has left the block in\nwhich its expression is valid.\n",
                v31,
                v32);
        v24 = (_DWORD *)*v24;
        if ( !v24 )
          break;
        dword_487668 = (int)v24;
      }
    }
    v34 = (_DWORD *)v9[12];
    v9[11] = 0;
    v9[12] = 0;
    dword_487668 = v44;
    if ( v34 )
    {
      v35 = v34[1];
      v34[1] = v35 - 1;
      if ( v35 == 1 )
      {
        (*(void (__fastcall **)(_DWORD *))(*v34 + 8))(v34);
        v36 = v34[2];
        v34[2] = v36 - 1;
        if ( v36 == 1 )
          (*(void (__fastcall **)(_DWORD *))(*v34 + 12))(v34);
      }
    }
    ((void (__fastcall *)(_DWORD *))loc_C9340)(v9);
    result = sub_92E40(v2);
LABEL_46:
    *(_DWORD *)(v1 + 28) = 2;
    return result;
  }
  v10 = sub_15E10C(v16);
LABEL_18:
  v17 = (void *)v9[1];
  v45 = 0;
  if ( v17 == &unk_478374 )
  {
    result = sub_92E40(v2);
  }
  else
  {
    v18 = sub_26C1E0(v10);
    sub_14CDB8(v9[36], &v45, &v46, 0, 0, 0);
    LODWORD(v19) = v46;
    if ( v9[43] )
    {
      LODWORD(v19) = sub_C965C(v9 + 42, v9 + 43, v46);
      v46 = v19;
    }
    v20 = v9[40];
    v21 = v19;
    if ( (_DWORD)v19 )
      v21 = 1;
    v22 = v9[40];
    if ( v20 )
      v22 = 1;
    if ( v22 == v21 )
    {
      if ( !v20 || sub_25DC80(v20, v19) )
      {
        sub_26C300(v18);
        result = sub_92E40(v2);
        if ( (unsigned int)(v3[3] - 6) <= 1 )
          goto LABEL_8;
        return result;
      }
      LODWORD(v19) = v46;
    }
    if ( (_DWORD)v19 )
    {
      sub_26C3B8(v19);
      sub_26C300(v18);
      LODWORD(v19) = v46;
    }
    HIDWORD(v19) = 1;
    *(_DWORD *)(v1 + 20) = v9[40];
    *((_QWORD *)v9 + 20) = v19;
    result = sub_92E40(v2);
  }
  if ( v3[3] == 8 )
  {
    v23 = *(_DWORD *)(v5 + 60);
    if ( v23 == 1 )
    {
      v37 = (_DWORD *)dword_478348;
      if ( dword_478348 )
      {
        while ( ((v37[3] - 7) & 0xFFFFFFFD) != 0 || v37[52] != 2 )
        {
          v37 = (_DWORD *)v37[2];
          if ( !v37 )
            return result;
        }
        goto LABEL_8;
      }
    }
    else if ( v23 == 2 )
    {
      goto LABEL_8;
    }
  }
  return result;
}
