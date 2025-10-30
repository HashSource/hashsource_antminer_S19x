int *__fastcall sub_16EFFC(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int *p_varg_r0; // r5
  int v8; // r0
  int v9; // r3
  int *v10; // r6
  int v11; // r4
  int v12; // r2
  int *v14; // r0
  int v15; // r3
  _DWORD *v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r1
  int v20; // r0
  int v21; // r3
  int *v22; // r0
  _DWORD *v23; // r2
  int v24; // r0
  int v25; // r2
  int v26; // r0
  int v27; // r0
  const char *v28; // r3
  int v29; // r0
  int v30; // r7
  const char *v31; // r0
  int v32; // r0
  int v33; // r4
  char *v34; // r0
  int v35; // r0
  int v36; // r4
  char *v37; // r0
  _DWORD *v38; // r0
  char *v39; // r0
  int v40; // r7
  char *v41; // r0
  _DWORD *v42; // r0
  int **v43; // r3
  _DWORD *v44; // r2
  int v45; // r0
  int (**v46)(); // [sp+14h] [bp-20h] BYREF
  char *v47; // [sp+18h] [bp-1Ch]
  int v48; // [sp+1Ch] [bp-18h]
  char v49; // [sp+20h] [bp-14h] BYREF
  int varg_r0; // [sp+48h] [bp+14h] BYREF
  int varg_r1; // [sp+4Ch] [bp+18h]
  int varg_r2; // [sp+50h] [bp+1Ch]
  int varg_r3; // [sp+54h] [bp+20h]

  p_varg_r0 = &varg_r0;
  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  v8 = ((int (__fastcall *)(int *))loc_B8694)(&varg_r0);
  v9 = varg_r0;
  if ( !varg_r0 )
  {
    sub_94700(
      (int)"gdbarch.c",
      5343,
      "%s: Assertion `%s' failed.",
      "gdbarch* gdbarch_find_by_info(gdbarch_info)",
      "info.bfd_arch_info != NULL");
    goto LABEL_78;
  }
  v10 = &dword_487780;
  if ( dword_4877EC )
    goto LABEL_59;
  v11 = dword_4877F0;
  if ( !dword_4877F0 )
    return 0;
  while ( 1 )
  {
    v12 = *(_DWORD *)(v9 + 12);
    if ( v12 != *(_DWORD *)v11 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)(v11 + 16);
        if ( !v11 )
          break;
        if ( *(_DWORD *)v11 == v12 )
          goto LABEL_11;
      }
LABEL_8:
      if ( v10[27] )
      {
        v42 = (_DWORD *)sub_242FC8(v8);
        p_varg_r0 = 0;
        sub_2594B0(*v42, "gdbarch_find_by_info: No matching architecture\n");
        return p_varg_r0;
      }
      return 0;
    }
LABEL_11:
    v14 = (int *)(*(int (__fastcall **)(int, int, int, int, int, int, int, _DWORD))(v11 + 4))(
                   *p_varg_r0,
                   p_varg_r0[1],
                   p_varg_r0[2],
                   p_varg_r0[3],
                   a5,
                   a6,
                   a7,
                   *(_DWORD *)(v11 + 12));
    p_varg_r0 = v14;
    if ( !v14 )
    {
      if ( v10[27] )
      {
        v38 = (_DWORD *)sub_242FC8(0);
        sub_2594B0(*v38, "gdbarch_find_by_info: Target rejected architecture\n");
        return p_varg_r0;
      }
      return 0;
    }
    v15 = v10[27];
    if ( !*v14 )
    {
      if ( v15 )
      {
        v40 = *(_DWORD *)sub_242FC8(v14);
        v41 = sub_98EEC((int)p_varg_r0);
        sub_2594B0(
          v40,
          "gdbarch_find_by_info: New architecture %s (%s) selected\n",
          v41,
          *(const char **)(p_varg_r0[2] + 24));
      }
      v16 = sub_93028(8u);
      v17 = *(_DWORD *)(v11 + 12);
      v18 = *(_DWORD *)(v11 + 8);
      *v16 = p_varg_r0;
      v16[1] = v17;
      *(_DWORD *)(v11 + 12) = v16;
      p_varg_r0[8] = v18;
      sub_256760(&v46);
      v49 = 0;
      v19 = p_varg_r0[3];
      v48 = 0;
      v46 = &off_3F2924;
      v47 = &v49;
      if ( v19 == 2 )
        sub_2564E4(&v46, "\n\tbyte-order", 12);
      if ( !p_varg_r0[2] )
        sub_2564E4(&v46, "\n\tbfd_arch_info", 15);
      if ( !p_varg_r0[18] )
        p_varg_r0[18] = (int)&off_46D510;
      if ( !p_varg_r0[20] )
        p_varg_r0[20] = (int)&off_46D508;
      if ( !p_varg_r0[22] )
        p_varg_r0[22] = (int)&off_46D500;
      if ( !p_varg_r0[24] )
        p_varg_r0[24] = (int)&off_46D500;
      if ( p_varg_r0[26] == -1 )
        p_varg_r0[26] = 1;
      if ( !p_varg_r0[29] )
        p_varg_r0[29] = ((int (__fastcall *)(int *))loc_1665F4)(p_varg_r0);
      if ( !p_varg_r0[30] )
        p_varg_r0[30] = ((int (__fastcall *)(int *))loc_1665F4)(p_varg_r0) / 8;
      if ( p_varg_r0[31] == -1 )
        p_varg_r0[31] = 1;
      if ( p_varg_r0[38] == -1 )
        sub_2564E4(&v46, "\n\tnum_regs", 10);
      if ( !p_varg_r0[51] )
        sub_2564E4(&v46, "\n\tregister_name", 15);
      if ( !p_varg_r0[76] )
        sub_2564E4(&v46, "\n\tskip_prologue", 15);
      if ( !p_varg_r0[79] )
        sub_2564E4(&v46, "\n\tinner_than", 12);
      if ( !p_varg_r0[81] )
        sub_2564E4(&v46, "\n\tbreakpoint_kind_from_pc", 25);
      if ( (p_varg_r0[139] == 0) != (p_varg_r0[136] == 0) )
        sub_2564E4(&v46, "\n\tdisplaced_step_location", 25);
      if ( !v48 )
      {
        v20 = sub_256478(&v46);
        v21 = v10[27];
        *p_varg_r0 = 1;
        if ( v21 )
        {
          v22 = (int *)sub_242FC8(v20);
          sub_163F20((int)p_varg_r0, *v22);
        }
        return p_varg_r0;
      }
LABEL_78:
      sub_94700((int)"gdbarch.c", 716, "verify_gdbarch: the following are invalid ...%s", v47);
      v45 = sub_256478(&v46);
      sub_338FFC(v45);
    }
    if ( v15 )
    {
      v10 = *(int **)sub_242FC8(v14);
      v39 = sub_98EEC((int)p_varg_r0);
      sub_2594B0(
        v10,
        "gdbarch_find_by_info: Previous architecture %s (%s) selected\n",
        v39,
        *(const char **)(p_varg_r0[2] + 24));
    }
    v23 = *(_DWORD **)(v11 + 12);
    if ( v23 )
      break;
LABEL_58:
    v8 = sub_94700(
           (int)"gdbarch.c",
           5413,
           "%s: Assertion `%s' failed.",
           "gdbarch* gdbarch_find_by_info(gdbarch_info)",
           "(*list) != NULL && (*list)->gdbarch == new_gdbarch");
LABEL_59:
    v24 = *(_DWORD *)sub_242FC8(v8);
    if ( varg_r0 )
      v25 = *(_DWORD *)(varg_r0 + 24);
    else
      v25 = 19344;
    if ( !varg_r0 )
      HIWORD(v25) = 54;
    v26 = sub_2594B0(v24, "gdbarch_find_by_info: info.bfd_arch_info %s\n", v25);
    v27 = *(_DWORD *)sub_242FC8(v26);
    if ( varg_r1 )
    {
      v28 = "default";
      if ( varg_r1 == 1 )
        v28 = "little";
    }
    else
    {
      v28 = "big";
    }
    v29 = sub_2594B0(v27, "gdbarch_find_by_info: info.byte_order %d (%s)\n", varg_r1, v28);
    v30 = *(_DWORD *)sub_242FC8(v29);
    v31 = (const char *)sub_1BD890(a6);
    v32 = sub_2594B0(v30, "gdbarch_find_by_info: info.osabi %d (%s)\n", a6, v31);
    v33 = *(_DWORD *)sub_242FC8(v32);
    v34 = sub_98EEC(varg_r3);
    v35 = sub_2594B0(v33, "gdbarch_find_by_info: info.abfd %s\n", v34);
    v36 = *(_DWORD *)sub_242FC8(v35);
    v37 = sub_98EEC(a5);
    v8 = sub_2594B0(v36, "gdbarch_find_by_info: info.tdep_info %s\n", v37);
    v11 = v10[28];
    if ( !v11 )
      goto LABEL_8;
    v9 = varg_r0;
  }
  if ( p_varg_r0 == (int *)*v23 )
  {
    v43 = *(int ***)(v11 + 12);
    v44 = (_DWORD *)(v11 + 12);
  }
  else
  {
    while ( 1 )
    {
      v43 = (int **)v23[1];
      if ( !v43 )
        goto LABEL_58;
      if ( *v43 == p_varg_r0 )
        break;
      v23 = (_DWORD *)v23[1];
    }
    v44 = v23 + 1;
  }
  *v44 = v43[1];
  v43[1] = *(int **)(v11 + 12);
  *(_DWORD *)(v11 + 12) = v43;
  return p_varg_r0;
}
