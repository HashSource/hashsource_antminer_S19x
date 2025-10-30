int __fastcall sub_D80E0(int *a1, unsigned int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r6
  const char *v7; // r7
  int v9; // r5
  int *v11; // r8
  int v12; // r4
  int v13; // r11
  int v14; // r3
  int *v15; // r0
  int v16; // r3
  int v17; // r2
  int v18; // r3
  int v19; // r1
  _DWORD *v20; // r3
  unsigned int v21; // r2
  int v22; // r0
  int v23; // r1
  int v24; // r8
  int v25; // r3
  unsigned int v26; // r7
  int *v27; // r0
  int v28; // r3
  int v29; // r2
  _DWORD *v30; // r4
  int v31; // r8
  int v32; // r0
  int v33; // r8
  int v34; // r0
  int v35; // r1
  int v36; // r0
  void *v37; // r10
  int v38; // r0
  int v39; // r8
  int v40; // r3
  int i; // r5
  int v42; // r0
  int v44; // r0
  int v45; // r3
  int v46; // r2
  int v47; // r3
  bool v48; // zf
  bool v49; // cc
  int v50; // r3
  unsigned int *v51; // r8
  int v52; // r3
  unsigned int *v53; // r3
  unsigned int v54; // r2
  unsigned int *v55; // r3
  unsigned int v56; // r2
  unsigned int v57; // r2
  unsigned int v58; // r3
  int v59; // r0
  unsigned int *v60; // r2
  __int64 v61; // kr00_8
  _DWORD *v62; // r8
  _DWORD *v63; // r0
  int v64; // r0
  int *v65; // [sp+1Ch] [bp-38h]
  const char *v66; // [sp+20h] [bp-34h]
  int v67; // [sp+24h] [bp-30h]
  int v68; // [sp+2Ch] [bp-28h] BYREF
  int v69; // [sp+30h] [bp-24h] BYREF
  int v70; // [sp+34h] [bp-20h]
  int v71; // [sp+38h] [bp-1Ch]
  _DWORD v72[6]; // [sp+3Ch] [bp-18h] BYREF
  int varg_r2; // [sp+78h] [bp+24h]
  int varg_r3; // [sp+7Ch] [bp+28h]

  v9 = dword_478348;
  v11 = &v68;
  varg_r2 = a3;
  varg_r3 = a4;
  v68 = 0;
  if ( dword_478348 )
  {
    v65 = &dword_478348;
    do
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(v9 + 16) == 1 )
        {
          v12 = *(_DWORD *)(v9 + 28);
          if ( v12 )
            break;
        }
LABEL_3:
        v9 = *(_DWORD *)(v9 + 8);
        if ( !v9 )
          goto LABEL_18;
      }
      v13 = 2;
      while ( *(_DWORD *)(v9 + 12) != 7 || *(_DWORD *)(v9 + 28) == v12 )
      {
        if ( *(_BYTE *)(v12 + 38) )
        {
          v6 = *(unsigned __int8 *)(v12 + 37);
          if ( !*(_BYTE *)(v12 + 37) )
          {
            v14 = *(_DWORD *)(v12 + 16);
            if ( !v14 )
            {
              ((void (*)(void))loc_15C68)();
              goto LABEL_124;
            }
            v7 = *(const char **)(*(_DWORD *)(v14 + 4) + 16);
            if ( ((int (__fastcall *)(int, int *, unsigned int, int))v7)(v12, a1, a2, a6) )
            {
              v15 = (int *)sub_9836C(0x20u);
              v16 = *(_DWORD *)(v12 + 8);
              *v15 = v6;
              v15[1] = v12;
              v17 = *(_DWORD *)(v12 + 16);
              v15[3] = v6;
              v15[4] = v6;
              v15[2] = v17;
              v15[5] = v6;
              v15[7] = v6;
              *(_DWORD *)(v12 + 8) = v16 + 1;
              *v11 = (int)v15;
              v11 = v15;
              *((_WORD *)v15 + 12) = 257;
              if ( *(_DWORD *)(v9 + 12) == 17 )
              {
                v18 = *(_DWORD *)(v9 + 108);
                if ( v18 != v9 )
                  *(_DWORD *)(v18 + 208) = 2;
              }
            }
          }
        }
        v12 = *(_DWORD *)v12;
        if ( !v12 )
          goto LABEL_3;
      }
      v9 = *(_DWORD *)(v9 + 8);
    }
    while ( v9 );
  }
LABEL_18:
  if ( !off_4899F8(&dword_4899A0) || !off_489A00(&dword_4899A0) )
  {
    v25 = dword_478860;
    if ( dword_478860 )
    {
      if ( *(_DWORD *)dword_478860 )
      {
        v26 = 0;
        v6 = 1;
        do
        {
          v30 = *(_DWORD **)(v25 + 4 * (v26 + 2));
          if ( sub_CF3F0(v30, (int)a1, a2) && sub_C92DC(v30 + 3) )
          {
            v27 = (int *)sub_9836C(0x20u);
            v28 = v30[2];
            *v27 = 0;
            v27[1] = (int)v30;
            v29 = v30[4];
            v27[3] = 0;
            v27[4] = 0;
            v27[2] = v29;
            v27[5] = 0;
            v30[2] = v28 + 1;
            *v11 = (int)v27;
            v11 = v27;
            *((_WORD *)v27 + 12) = 0;
            v27[7] = 1;
          }
          v25 = dword_478860;
          ++v26;
        }
        while ( dword_478860 && v26 < *(_DWORD *)dword_478860 );
      }
    }
  }
  v12 = v68;
  if ( !v68 )
    return v12;
  v20 = (_DWORD *)v68;
  while ( 1 )
  {
    v21 = v20[2];
    if ( v21 )
    {
      v21 = *(_DWORD *)(v21 + 12);
      if ( v21 == 20 )
        break;
    }
    v20 = (_DWORD *)*v20;
    if ( !v20 )
      goto LABEL_25;
  }
  sub_201E88();
LABEL_25:
  v7 = "silent";
  v13 = 0;
  v66 = "Error in testing breakpoint condition:\n";
  v65 = 0;
  do
  {
    if ( !*(_BYTE *)(v12 + 25) )
      goto LABEL_27;
    v9 = *(_DWORD *)(v12 + 8);
    (*(void (__fastcall **)(int))(*(_DWORD *)(v9 + 4) + 20))(v12);
    if ( !*(_BYTE *)(v12 + 25) )
      goto LABEL_26;
    a2 = *(_DWORD *)(v12 + 4);
    a1 = &v69;
    v69 = varg_r2;
    v70 = varg_r3;
    v71 = a5;
    if ( !a2 )
    {
LABEL_124:
      sub_94700(
        (int)"breakpoint.c",
        5207,
        "%s: Assertion `%s' failed.",
        "void bpstat_check_breakpoint_conditions(bpstat, ptid_t)",
        "bl != NULL");
LABEL_125:
      v61 = sub_94700(
              (int)"breakpoint.c",
              5209,
              "%s: Assertion `%s' failed.",
              "void bpstat_check_breakpoint_conditions(bpstat, ptid_t)",
              "b != NULL");
      sub_92E40(a2);
      if ( HIDWORD(v61) != 1 )
      {
        sub_339E78(v61);
        sub_92E60();
      }
      v62 = (_DWORD *)sub_339E78(v61);
      v63 = (_DWORD *)sub_242FB4(v62);
      v64 = sub_154B88(*v63, *v62, v62[1], v62[2], v66);
      sub_339EF8(v64);
      goto LABEL_80;
    }
    v6 = *(_DWORD *)(v12 + 8);
    if ( !v6 )
      goto LABEL_125;
    v22 = sub_15CD58(
            *(_DWORD *)(v6 + 52),
            *(_DWORD *)(v6 + 56),
            *(_DWORD *)(v6 + 60),
            *(_DWORD *)(v6 + 64),
            *(_DWORD *)(v6 + 68));
    if ( v22 )
    {
      v44 = sub_15F70C(v22, v23);
      sub_15F9BC(v72, v44);
      if ( !sub_15D0C4(
              *(_DWORD *)(v6 + 52),
              *(_DWORD *)(v6 + 56),
              *(_DWORD *)(v6 + 60),
              *(_DWORD *)(v6 + 64),
              *(_DWORD *)(v6 + 68),
              v72[0],
              v72[1],
              v72[2],
              v72[3],
              v72[4]) )
      {
        *(_BYTE *)(v12 + 25) = 0;
        goto LABEL_26;
      }
    }
    v24 = *(_DWORD *)(v6 + 112);
    if ( v24 != -1 && v24 != sub_23E578(v69, v70, v71)
      || (v31 = *(_DWORD *)(v6 + 116)) != 0 && v31 != ((int (__fastcall *)(int, int, int))loc_AFCBC)(v69, v70, v71) )
    {
      *(_BYTE *)(v12 + 25) = 0;
LABEL_26:
      *(_DWORD *)(v12 + 28) = 1;
      goto LABEL_27;
    }
    v32 = ((int (__fastcall *)(int))loc_157FD4)(v6);
    *(_BYTE *)(v12 + 25) = v32;
    if ( (unsigned int)(*(_DWORD *)(v6 + 12) - 6) <= 3 )
      v33 = *(_DWORD *)(v6 + 152);
    else
      v33 = *(_DWORD *)(a2 + 20);
    if ( v33 && *(_DWORD *)(v6 + 20) != 1 )
    {
      v34 = sub_26C1E0(v32);
      a1 = (int *)v34;
      if ( (unsigned int)(*(_DWORD *)(v6 + 12) - 6) > 3 || (v34 = *(_DWORD *)(v6 + 156)) == 0 )
      {
        v59 = sub_15F70C(v34, v35);
        sub_15E10C(v59);
LABEL_57:
        v37 = sub_92E28();
        v67 = sub_26C1E0(v37);
        v38 = sub_14CD3C(v33);
        v39 = sub_194324(v38);
        sub_26C300(v67);
        sub_92E40((int)v37);
        sub_26C300(a1);
        if ( !v39 )
        {
          *(_BYTE *)(v12 + 25) = 0;
          goto LABEL_26;
        }
        goto LABEL_81;
      }
      v36 = sub_C37D4(v34);
      if ( v36 )
      {
        sub_15E10C(v36);
        goto LABEL_57;
      }
      sub_946B0("Watchpoint condition cannot be tested in the current scope");
LABEL_80:
      sub_26C300(a1);
    }
LABEL_81:
    v45 = *(_DWORD *)(v6 + 36);
    if ( v45 > 0 )
    {
      *(_DWORD *)(v6 + 36) = v45 - 1;
      *(_BYTE *)(v12 + 25) = 0;
      ++*(_DWORD *)(v6 + 120);
      sub_1B9D50(v6);
    }
    if ( !*(_BYTE *)(v12 + 25) )
      goto LABEL_26;
    ++*(_DWORD *)(v9 + 120);
    sub_1B9D50(v9);
    if ( *(_DWORD *)(v9 + 20) == 2 )
    {
      v47 = *(_DWORD *)(v9 + 40) - 1;
      v48 = *(_DWORD *)(v9 + 40) == 1;
      v49 = v47 <= 0;
      *(_DWORD *)(v9 + 40) = v47;
      if ( v47 < 0 || v48 )
      {
        v46 = 1;
        v50 = 0;
      }
      else
      {
        v50 = 1;
      }
      if ( v49 )
      {
        v65 = (int *)v46;
        *(_DWORD *)(v9 + 16) = v50;
      }
      else
      {
        v65 = (int *)v50;
      }
    }
    v51 = *(unsigned int **)(v12 + 16);
    if ( *(_BYTE *)(v9 + 32) )
      *(_BYTE *)(v12 + 24) = 0;
    v6 = *(_DWORD *)(v9 + 48);
    v52 = *(_DWORD *)(v9 + 44);
    *(_DWORD *)(v12 + 12) = v52;
    if ( (unsigned int *)v6 == v51 )
      goto LABEL_104;
    if ( v6 )
    {
      if ( !v13 )
      {
        ++*(_DWORD *)(v6 + 4);
        if ( !v51 )
          goto LABEL_103;
LABEL_112:
        v57 = v51[1];
        v51[1] = v57 - 1;
        if ( v57 != 1 )
          goto LABEL_103;
        (*(void (__fastcall **)(unsigned int *))(*v51 + 8))(v51);
        v58 = v51[2];
        v51[2] = v58 - 1;
LABEL_114:
        if ( v58 == 1 )
          (*(void (__fastcall **)(unsigned int *))(*v51 + 12))(v51);
        goto LABEL_102;
      }
      v53 = (unsigned int *)(v6 + 4);
      __dmb(0xBu);
      do
        v54 = __ldrex(v53);
      while ( __strex(v54 + 1, v53) );
      __dmb(0xBu);
      v51 = *(unsigned int **)(v12 + 16);
      if ( !v51 )
        goto LABEL_102;
    }
    else
    {
      if ( !v51 )
        goto LABEL_103;
      if ( !v13 )
        goto LABEL_112;
    }
    v55 = v51 + 1;
    __dmb(0xBu);
    do
      v56 = __ldrex(v55);
    while ( __strex(v56 - 1, v55) );
    __dmb(0xBu);
    if ( v56 == 1 )
    {
      (*(void (__fastcall **)(unsigned int *))(*v51 + 8))(v51);
      __dmb(0xBu);
      v60 = v51 + 2;
      do
        v58 = __ldrex(v60);
      while ( __strex(v58 - 1, v60) );
      __dmb(0xBu);
      goto LABEL_114;
    }
LABEL_102:
    v52 = *(_DWORD *)(v12 + 12);
LABEL_103:
    *(_DWORD *)(v12 + 16) = v6;
LABEL_104:
    if ( v52 && !strcmp(v7, *(const char **)(v52 + 4)) )
      *(_BYTE *)(v12 + 24) = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)(v9 + 4) + 68))(v12);
    if ( !*(_BYTE *)(v12 + 25) || !*(_BYTE *)(v12 + 24) )
      goto LABEL_26;
LABEL_27:
    v12 = *(_DWORD *)v12;
  }
  while ( v12 );
  v12 = v68;
  if ( !v68 )
    goto LABEL_74;
  v19 = *(unsigned __int8 *)(v68 + 25);
  if ( *(_BYTE *)(v68 + 25) )
    goto LABEL_74;
  v40 = v68;
  while ( 1 )
  {
    v40 = *(_DWORD *)v40;
    if ( !v40 )
      break;
    v21 = *(unsigned __int8 *)(v40 + 25);
    if ( *(_BYTE *)(v40 + 25) )
      goto LABEL_74;
  }
  for ( i = v68; ; v19 = *(unsigned __int8 *)(i + 25) )
  {
    if ( !v19 )
    {
      v42 = *(_DWORD *)(i + 8);
      if ( v42 )
      {
        v21 = *(_DWORD *)(v42 + 12) - 7;
        if ( v21 <= 2 )
        {
          sub_C96DC(v42, 0);
          v40 = 1;
        }
      }
    }
    i = *(_DWORD *)i;
    if ( !i )
      break;
  }
  if ( v40 )
  {
    sub_D72EC(1, v19, v21);
  }
  else
  {
LABEL_74:
    if ( v65 )
      sub_D72EC(0, v19, v21);
  }
  return v12;
}
