int __fastcall sub_20C94C(_DWORD *a1)
{
  int v2; // r5
  int v3; // r1
  char *v4; // r3
  bool v5; // zf
  int v6; // r0
  int v7; // r1
  char *v8; // r3
  bool v9; // zf
  int v10; // r2
  int v11; // r3
  const char *v12; // r2
  int v14; // r0
  int v15; // r1
  void *v16; // r6
  char **v17; // r7
  unsigned int v18; // r12
  int v19; // r0
  int v20; // r0
  _DWORD v21[3]; // [sp+10h] [bp-68h] BYREF
  char v22; // [sp+1Ch] [bp-5Ch] BYREF
  _BYTE v23[52]; // [sp+2Ch] [bp-4Ch] BYREF
  int v24; // [sp+60h] [bp-18h]
  int v25; // [sp+6Ch] [bp-Ch]
  unsigned int v26; // [sp+70h] [bp-8h]

  v2 = *(_DWORD *)sub_242FDC(a1);
  sub_256760(v21);
  v3 = a1[1];
  v21[1] = &v22;
  v21[2] = 0;
  v21[0] = &off_3F2924;
  v22 = 0;
  if ( v3 && a1[2] )
  {
    sub_94700(
      (int)"stack.c",
      232,
      "%s: Assertion `%s' failed.",
      "void print_frame_arg(const frame_arg*)",
      "!arg->val || !arg->error");
    sub_B7B28();
    v20 = sub_256478(v21);
    sub_338FFC(v20);
  }
  v4 = (char *)a1[3];
  v5 = v4 == "only";
  if ( v4 != "only" )
    v5 = v4 == "no";
  if ( !v5 && (sub_2573F0(v2) || (char *)a1[3] != "compact") )
  {
    sub_94700(
      (int)"stack.c",
      236,
      "%s: Assertion `%s' failed.",
      "void print_frame_arg(const frame_arg*)",
      "arg->entry_kind == print_entry_values_no || arg->entry_kind == print_entry_values_only || (!uiout->is_mi_like_p ()"
      " && arg->entry_kind == print_entry_values_compact)");
LABEL_21:
    sub_2564E4(v21, "@entry", 6);
    goto LABEL_14;
  }
  sub_B7AA8();
  sub_2578AC(v2, 0);
  v6 = *a1;
  if ( dword_46D448 )
  {
    v7 = sub_21B3C4(v6);
    v6 = *a1;
  }
  else
  {
    v7 = *(_DWORD *)v6;
  }
  sub_25A850(v21, v7, *(_BYTE *)(v6 + 20) & 0x1F, 3);
  v8 = (char *)a1[3];
  if ( v8 == "compact" )
  {
    sub_2564E4(v21, &word_3FDE24, 1);
    v14 = *a1;
    if ( dword_46D448 )
    {
      v15 = sub_21B3C4(v14);
      v14 = *a1;
    }
    else
    {
      v15 = *(_DWORD *)v14;
    }
    sub_25A850(v21, v15, *(_BYTE *)(v14 + 20) & 0x1F, 3);
    v8 = (char *)a1[3];
  }
  v9 = v8 == "only";
  if ( v8 != "only" )
    v9 = v8 == "compact";
  if ( v9 )
    goto LABEL_21;
LABEL_14:
  sub_25765C(v2, "name", v21);
  sub_B7AC8();
  sub_257380(v2, &word_3FDE24, v10, v11);
  v12 = (const char *)a1[2];
  if ( !a1[1] )
  {
    if ( !v12 )
    {
      sub_257380(v2, "...", 0, 0);
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  if ( v12 )
  {
LABEL_16:
    sub_25678C(v21, "<error reading variable: %s>", v12);
    goto LABEL_17;
  }
  v16 = sub_92E28();
  sub_26BC70(a1[1]);
  sub_B7AE8();
  if ( dword_487A04 )
    v17 = off_46D5A4[0];
  else
    v17 = sub_194438(*(_BYTE *)(*a1 + 20) & 0x1F);
  sub_266608(v23);
  v25 = dword_489670;
  v24 = 1;
  v18 = __clz(strcmp(off_46DB8C[0], "scalars"));
  v19 = a1[1];
  v26 = v18 >> 5;
  sub_266BC4(v19, v21, 2, v23, v17);
  sub_92E40((int)v16);
LABEL_17:
  sub_25765C(v2, "value", v21);
  sub_25734C(v2, 0);
  sub_B7B28();
  return sub_256478(v21);
}
