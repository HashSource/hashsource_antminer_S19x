int __fastcall sub_1D60CC(int a1, int *a2, int *a3, _DWORD *a4, int a5)
{
  int v5; // r6
  int v7; // r5
  int v8; // r0
  int v9; // r1
  int v10; // r2
  void *v11; // r7
  int v12; // r8
  int *v13; // r0
  int *v14; // r9
  int v15; // r5
  int v16; // r0
  int v17; // r10
  int *v18; // r2
  int v19; // r0
  int v20; // r11
  int v21; // r3
  int v22; // r12
  int v23; // r1
  bool v24; // r3
  int v26; // r8
  int v27; // r0
  int v28; // r2
  int v29; // r3
  int *v30; // r5
  int v31; // r0
  int v32; // r2
  int v33; // r3
  int v34; // r0
  int v36; // r5
  int v37; // r7
  int v38; // r0
  int v39; // r0
  int v41; // [sp+20h] [bp-10Ch]
  int v42; // [sp+24h] [bp-108h]
  int v43; // [sp+28h] [bp-104h]
  void *v45; // [sp+34h] [bp-F8h]
  _DWORD v46[3]; // [sp+38h] [bp-F4h] BYREF
  int v47; // [sp+44h] [bp-E8h] BYREF
  int v48; // [sp+48h] [bp-E4h]
  int v49; // [sp+4Ch] [bp-E0h]
  int v50[40]; // [sp+50h] [bp-DCh] BYREF
  _DWORD v51[3]; // [sp+F0h] [bp-3Ch] BYREF
  char v52; // [sp+FCh] [bp-30h] BYREF
  _DWORD v53[3]; // [sp+10Ch] [bp-20h] BYREF
  char v54; // [sp+118h] [bp-14h] BYREF

  v5 = a1;
  if ( dword_487D4C )
  {
    v36 = *(_DWORD *)sub_242FC8(a1);
    v37 = sub_E1770(a3);
    v38 = sub_E1770(a4);
    a1 = sub_2594B0(v36, "[record-btrace] itrace (0x%x): [%u; %u)\n", a5, v37, v38);
  }
  v7 = sub_16F654(a1);
  v45 = (void *)sub_257974(v5, "asm_insns");
  sub_10BABC(v50, v7, (int)v51, (int)sub_10B840);
  sub_256760(v51);
  v51[0] = &off_3F2924;
  v51[1] = &v52;
  v51[2] = 0;
  v52 = 0;
  sub_256760(v53);
  v8 = *a3;
  v9 = a3[1];
  v10 = a3[2];
  v11 = 0;
  v12 = 0;
  v53[2] = 0;
  v54 = 0;
  v46[0] = v8;
  v46[1] = v9;
  v46[2] = v10;
  v43 = 0;
  v42 = 0;
  v53[0] = &off_3F2924;
  v53[1] = &v54;
  while ( sub_E1A3C(v46, a4) )
  {
    v13 = (int *)((int (__fastcall *)(_DWORD *))loc_E16AC)(v46);
    v14 = v13;
    if ( !v13 )
      goto LABEL_42;
    if ( (a5 & 0x20) == 0 )
      goto LABEL_35;
    v15 = *v13;
    v16 = sub_21E23C(*v13);
    v17 = v16;
    if ( !v16 || (v18 = *(int **)(v16 + 8)) == 0 || (v19 = *v18, *v18 <= 0) || v19 == 1 )
    {
LABEL_39:
      if ( v11 )
        goto LABEL_35;
      v11 = (void *)sub_257934(v5, "src_and_asm_line");
      sub_257974(v5, "line_asm_insn");
      if ( v11 )
        goto LABEL_35;
      goto LABEL_41;
    }
    v20 = 0;
    v21 = 1;
    v22 = 0;
    do
    {
      while ( 1 )
      {
        if ( v15 != v18[2 * v21] )
          goto LABEL_12;
        v23 = v18[2 * v21 - 1];
        if ( !v23 )
          goto LABEL_12;
        if ( v20 > v22 )
          break;
        v20 = v23 + 1;
        v22 = v18[2 * v21 - 1];
LABEL_12:
        if ( ++v21 == v19 )
          goto LABEL_22;
      }
      if ( v23 < v22 )
      {
        v22 = v18[2 * v21 - 1];
        goto LABEL_12;
      }
      ++v21;
      if ( v20 < v23 )
        v20 = v23;
    }
    while ( v21 != v19 );
LABEL_22:
    v41 = v22;
    if ( v22 >= v20 )
      goto LABEL_39;
    v24 = v42 <= v22;
    if ( v43 < v20 )
      v24 = 0;
    if ( v12 == v17 && v24 )
      goto LABEL_39;
    v26 = v22;
    do
    {
      if ( v11 )
        sub_92620(v11);
      v11 = (void *)sub_257934(v5, "src_and_asm_line");
      sub_2053D0(v17, v26, v26 + 1, (a5 >> 2) & 2);
      sub_257974(v5, "line_asm_insn");
      ++v26;
    }
    while ( v20 != v26 );
    v43 = v20;
    v12 = v17;
    v42 = v41;
    if ( v11 )
    {
LABEL_35:
      v48 = 0;
      v47 = 0;
      v49 = 0;
      v27 = sub_E1770(v46);
      v28 = v14[3];
      v29 = *v14;
      v48 = v27;
      v47 = v29;
      if ( (v28 & 1) != 0 )
        LOBYTE(v49) = v49 | 1;
      sub_10BBCC(v50, v5, (int)&v47, a5 | 0x40);
      goto LABEL_38;
    }
LABEL_41:
    sub_94700(
      (int)"record-btrace.c",
      704,
      "%s: Assertion `%s' failed.",
      "void btrace_insn_history(ui_out*, const btrace_thread_info*, const btrace_insn_iterator*, const btrace_insn_iterat"
      "or*, gdb_disassembly_flags)",
      "ui_item_chain != NULL");
LABEL_42:
    v30 = (int *)sub_E1324(a2);
    if ( !v30 )
    {
      sub_94700(
        (int)"record-btrace.c",
        671,
        "%s: Assertion `%s' failed.",
        "void btrace_insn_history(ui_out*, const btrace_thread_info*, const btrace_insn_iterator*, const btrace_insn_iter"
        "ator*, gdb_disassembly_flags)",
        "conf != NULL");
      v39 = sub_256478(v51);
      sub_338FFC(v39);
    }
    v31 = sub_E1770(v46);
    sub_257694(v5, "insn-number", "%u", v31);
    sub_257380(v5, "\t", v32, v33);
    v34 = sub_E1758(v46);
    sub_1D57B0(v5, v34, *v30);
LABEL_38:
    ((void (__fastcall *)(_DWORD *, int))loc_E1808)(v46, 1);
  }
  sub_92620(v45);
  sub_256478(v53);
  return sub_256478(v51);
}
