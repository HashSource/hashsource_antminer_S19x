int __fastcall sub_11B2C0(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  int v4; // r5
  _DWORD *v5; // r6
  int v6; // r11
  int v10; // r6
  __int64 v11; // r0
  int v12; // r10
  int v13; // r7
  int v14; // r0
  int v15; // r4
  int v16; // r1
  const char *v17; // r4
  int v18; // r0
  char *v19; // r1
  char *v20; // r1
  const char *v21; // r0
  int v22; // r12
  int i; // r2
  int v24; // r0
  int v25; // r3
  const char **v27; // r4
  const char *v28; // r5
  const char *v29; // r3
  const char **v30; // r7
  const char **v31; // r8
  const char *v32; // r7
  const char *v33; // r9
  const char *v34; // r4
  const char *v35; // r0
  const char **v36; // r4
  const char *v37; // r5
  const char *v38; // r3
  int v39; // r0
  const char **v40; // r4
  int v41; // r7
  int v42; // r0
  int v43; // r1
  const char *v44; // r6
  const char *v45; // r5
  const char *v46; // r4
  int v47; // r0
  int v49; // [sp+10h] [bp-3Ch] BYREF
  int v50; // [sp+14h] [bp-38h] BYREF
  const char **v51; // [sp+18h] [bp-34h] BYREF
  char v52; // [sp+1Ch] [bp-30h]
  void *ptr; // [sp+20h] [bp-2Ch] BYREF
  char *v54; // [sp+24h] [bp-28h]
  char *v55; // [sp+28h] [bp-24h]
  _DWORD v56[6]; // [sp+2Ch] [bp-20h] BYREF
  int v57; // [sp+44h] [bp-8h] BYREF

  while ( sub_15DA8C(a1) == 2 )
  {
    a1 = ((int (__fastcall *)(int))loc_15FA88)(a1);
    if ( !a1 )
    {
      sub_94700(
        (int)"dwarf2loc.c",
        1225,
        "%s: Assertion `%s' failed.",
        "call_site_parameter* dwarf_expr_reg_to_entry_parameter(frame_info*, call_site_parameter_kind, call_site_paramete"
        "r_u, dwarf2_per_cu_data**)",
        "frame != NULL");
LABEL_36:
      sub_1B240C(v5, v6);
      v27 = (const char **)v56[0];
      v28 = (const char *)sub_25AC8C(v4, v6);
      if ( !v27 )
        goto LABEL_41;
      if ( dword_46D448 )
        v29 = (const char *)sub_21B3C4(v27);
      else
        v29 = *v27;
      while ( 1 )
      {
        sub_92F64(11, "Cannot find matching parameter at DW_TAG_call_site %s at %s", v28, v29);
LABEL_41:
        v29 = "???";
      }
    }
  }
  v10 = sub_15E058(a1);
  v11 = sub_15ECB4(a1);
  v4 = v11;
  v12 = ((int (__fastcall *)(int, _DWORD))loc_15FA88)(a1, HIDWORD(v11));
  if ( v4 != sub_15DB40(a1) )
  {
    sub_1B240C(v56, v10);
    v39 = a1;
    v40 = (const char **)v56[0];
    v41 = sub_15DB40(v39);
    v42 = ((int (__fastcall *)(int))loc_163EB0)(v4);
    v43 = v10;
    v44 = *(const char **)(v42 + 24);
    v45 = (const char *)sub_25AC8C(v4, v43);
    if ( !v40 )
      goto LABEL_65;
    if ( dword_46D448 )
      v46 = (const char *)sub_21B3C4(v40);
    else
      v46 = *v40;
    while ( 1 )
    {
      v47 = ((int (__fastcall *)(int))loc_163EB0)(v41);
      sub_92F64(
        11,
        "DW_OP_entry_value resolving callee gdbarch %s (of %s (%s)) does not match caller gdbarch %s",
        v44,
        v45,
        v46,
        *(const char **)(v47 + 24));
LABEL_65:
      v46 = "???";
    }
  }
  if ( !v12 )
  {
    sub_1B240C(v56, v10);
    v36 = (const char **)v56[0];
    v37 = (const char *)sub_25AC8C(v4, v10);
    if ( !v36 )
      goto LABEL_59;
    if ( dword_46D448 )
      v38 = (const char *)sub_21B3C4(v36);
    else
      v38 = *v36;
    while ( 1 )
    {
      sub_92F64(11, "DW_OP_entry_value resolving requires caller of %s (%s)", v37, v38);
LABEL_59:
      v38 = "???";
    }
  }
  v6 = sub_15DDFC(v12);
  v13 = sub_C2474(v4, v6);
  v14 = sub_117F3C(__SPAIR64__(v13, v4), v12);
  v15 = v14;
  if ( v10 != v14 )
  {
    sub_1B240C(v56, v14);
    v30 = (const char **)v56[0];
    sub_1B240C(v56, v10);
    v31 = (const char **)v56[0];
    if ( v30 )
    {
      if ( dword_46D448 )
        v32 = (const char *)sub_21B3C4(v30);
      else
        v32 = *v30;
    }
    else
    {
      v32 = "???";
    }
    v33 = (const char *)sub_25AC8C(v4, v15);
    if ( !v31 )
      goto LABEL_52;
    if ( dword_46D448 )
      v34 = (const char *)sub_21B3C4(v31);
    else
      v34 = *v31;
    while ( 1 )
    {
      v35 = (const char *)sub_25AC8C(v4, v10);
      sub_92F64(
        11,
        "DW_OP_entry_value resolving expects callee %s at %s but the called frame is for %s at %s",
        v32,
        v33,
        v34,
        v35);
LABEL_52:
      v34 = "???";
    }
  }
  v49 = v10;
  ptr = 0;
  v54 = 0;
  v55 = 0;
  v56[2] = 0;
  v56[3] = 0;
  v56[5] = 0;
  v57 = 0;
  v56[4] = 1065353216;
  v56[0] = &v57;
  v56[1] = 1;
  sub_19BF4((int *)&ptr, 0, &v49);
  v5 = v56;
LABEL_8:
  while ( ptr != v54 )
  {
    v16 = *((_DWORD *)v54 - 1);
    v54 -= 4;
    v17 = *(const char **)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(((int (__fastcall *)(int, int))loc_1156B4)(v4, v16) + 24)
                                                 + 24)
                                     + 28)
                         + 4);
    if ( v17 )
    {
      while ( 1 )
      {
        v18 = sub_117F3C(__SPAIR64__((unsigned int)v17, v4), 0);
        v50 = v18;
        if ( v18 == v49 )
          break;
        sub_11A8D8((int)&v51, v56, &v50);
        if ( v52 )
        {
          v19 = v54;
          if ( v54 != v55 )
          {
            v20 = v54 + 4;
            if ( v54 )
              *(_DWORD *)v54 = v50;
            v54 = v20;
            goto LABEL_11;
          }
          goto LABEL_23;
        }
LABEL_11:
        v17 = (const char *)*((_DWORD *)v17 + 1);
        if ( !v17 )
          goto LABEL_8;
      }
      sub_1B240C(&v51, v18);
      if ( v51 )
      {
        if ( dword_46D448 )
          v17 = (const char *)sub_21B3C4(v51);
        else
          v17 = *v51;
      }
      else
      {
        v17 = "???";
      }
      v21 = (const char *)sub_25AC8C(v4, v49);
      sub_92F64(
        11,
        "DW_OP_entry_value resolving has found function \"%s\" at %s can call itself via tail calls",
        v17,
        v21);
LABEL_23:
      sub_19BF4((int *)&ptr, v19, &v50);
      goto LABEL_11;
    }
  }
  sub_11BE1C(v56);
  if ( ptr )
    sub_339E64(ptr);
  v22 = *(_DWORD *)(v13 + 24);
  if ( !v22 )
    goto LABEL_36;
  for ( i = 0; i != v22; ++i )
  {
    v24 = i;
    v25 = v13 + 24 * i;
    if ( (*(_BYTE *)(v25 + 32) & 3) == a2 && a2 <= 2 && *(_DWORD *)(v25 + 36) == a3 )
      break;
  }
  if ( i == v22 )
    goto LABEL_36;
  *a4 = *(_DWORD *)(v13 + 28);
  return v13 + 24 * v24 + 32;
}
