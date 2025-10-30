int __fastcall sub_5D458(int a1, int a2, int a3, int a4)
{
  int v4; // r9
  int *v9; // r0
  int v10; // r2
  int v11; // r8
  char *v12; // r0
  int result; // r0
  unsigned int v14; // r5
  int v15; // r5
  const char **v16; // r0
  const char *v17; // r11
  size_t v18; // r0
  int v19; // r0
  const char *v20; // r2
  char *v21; // r2
  int v22; // r0
  int v23; // r9
  __int64 v24; // r10
  int v25; // r0
  bool v26; // zf
  int v27; // r5
  const char **v28; // r3
  int v29; // r4
  int v30; // r0
  __int64 v31; // kr00_8
  int v32; // r0
  int v33; // r0
  const char *v34; // [sp+Ch] [bp-70h]
  _DWORD v35[3]; // [sp+10h] [bp-6Ch] BYREF
  char v36; // [sp+1Ch] [bp-60h] BYREF
  _BYTE v37[52]; // [sp+2Ch] [bp-50h] BYREF
  int v38; // [sp+60h] [bp-1Ch]

  v9 = (int *)sub_242FDC(a1);
  v10 = *(_DWORD *)(a1 + 4);
  v11 = *v9;
  if ( !v10 )
  {
    if ( a3 )
      goto LABEL_4;
    if ( !*(_DWORD *)(a1 + 8) )
    {
      if ( *(char **)(a1 + 12) == "no" )
        goto LABEL_12;
LABEL_42:
      v19 = sub_94700(
              "mi/mi-cmd-stack.c",
              491,
              "%s: Assertion `%s' failed.",
              "void list_arg_or_local(const frame_arg*, what_to_list, print_values, int)",
              "arg->entry_kind == print_entry_values_no || (arg->entry_kind == print_entry_values_only && (arg->val || arg->error))");
      goto LABEL_43;
    }
LABEL_56:
    sub_94700(
      "mi/mi-cmd-stack.c",
      488,
      "%s: Assertion `%s' failed.",
      "void list_arg_or_local(const frame_arg*, what_to_list, print_values, int)",
      "(values == PRINT_NO_VALUES && arg->val == NULL && arg->error == NULL) || values == PRINT_SIMPLE_VALUES || (values "
      "== PRINT_ALL_VALUES && (arg->val != NULL || arg->error != NULL))");
LABEL_57:
    v31 = sub_94700(
            "mi/mi-cmd-stack.c",
            483,
            "%s: Assertion `%s' failed.",
            "void list_arg_or_local(const frame_arg*, what_to_list, print_values, int)",
            "!arg->val || !arg->error");
    sub_92E40(a2);
    if ( HIDWORD(v31) != 1 )
    {
      v33 = sub_339E78(v31);
      sub_92E60(v33);
    }
    v32 = sub_339E78(v31);
    v34 = *(const char **)(v32 + 8);
    sub_339EF8(v32);
    v20 = v34;
    if ( !v34 )
      goto LABEL_29;
    goto LABEL_28;
  }
  if ( *(_DWORD *)(a1 + 8) )
    goto LABEL_57;
  if ( !a3 )
    goto LABEL_56;
LABEL_4:
  if ( a3 == 2 )
    goto LABEL_5;
  if ( a3 != 1 )
    goto LABEL_56;
  if ( !v10 )
  {
    if ( *(_DWORD *)(a1 + 8) )
    {
      v21 = *(char **)(a1 + 12);
      if ( v21 != "no" && v21 != "only" )
        goto LABEL_42;
LABEL_37:
      v15 = a2 == 2;
      goto LABEL_38;
    }
    goto LABEL_56;
  }
LABEL_5:
  v12 = *(char **)(a1 + 12);
  if ( v12 == "no" )
  {
    v26 = a4 == 0;
    if ( a4 )
      v26 = v10 == 0;
    if ( !v26 )
      goto LABEL_9;
    goto LABEL_37;
  }
  if ( v12 != "only" )
    goto LABEL_42;
  if ( !v10 )
  {
    if ( *(_DWORD *)(a1 + 8) )
      goto LABEL_12;
    goto LABEL_42;
  }
  if ( !a4 )
    goto LABEL_12;
LABEL_9:
  result = sub_26E708(*(_DWORD *)(a1 + 4));
  a4 = result;
  if ( !result )
  {
    v22 = sub_26BC70(*(_DWORD *)(a1 + 4));
    if ( !sub_266648(v22)
      || (v23 = *(_DWORD *)(a1 + 4),
          v24 = sub_26BFE0(v23),
          v25 = sub_26BC70(*(_DWORD *)(a1 + 4)),
          (result = sub_26B3A4(v23, *(_DWORD *)(v25 + 20), v24, HIDWORD(v24), *(_DWORD *)(v25 + 20), 0)) != 0) )
    {
LABEL_12:
      v14 = __clz(a2 - 2);
      if ( a3 )
        a4 = 1;
      v15 = v14 >> 5;
      if ( !a3 )
        a4 = v15;
      if ( !a4 )
      {
        v15 = 0;
        v4 = 0;
        goto LABEL_19;
      }
LABEL_38:
      a4 = 1;
      v4 = v11;
      sub_2578AC(v11, 0);
LABEL_19:
      sub_256760(v35);
      v16 = *(const char ***)a1;
      v35[1] = &v36;
      v36 = 0;
      v35[0] = &off_3F2924;
      v35[2] = 0;
      if ( dword_46D448 )
        v17 = (const char *)sub_21B3C4(v16);
      else
        v17 = *v16;
      v18 = strlen(v17);
      sub_2564E4(v35, v17, v18);
      if ( *(char **)(a1 + 12) == "only" )
        sub_2564E4(v35, "@entry", 6);
      v19 = sub_25765C(v11, "name", v35);
      if ( !v15 )
      {
LABEL_25:
        if ( a3 == 2 )
        {
          sub_171258(*(_DWORD *)(*(_DWORD *)a1 + 24));
          sub_255DB0(*(_DWORD *)(*(_DWORD *)a1 + 24), "", v35, -1);
        }
        v20 = *(const char **)(a1 + 8);
        if ( *(_DWORD *)(a1 + 4) )
        {
          if ( !v20 )
          {
            v27 = sub_92E28(v19);
            sub_266608(v37);
            v28 = *(const char ***)a1;
            v29 = *(_DWORD *)(a1 + 4);
            v38 = 1;
            v30 = sub_194438((_BYTE)v28[5] & 0x1F);
            sub_266BC4(v29, v35, 0, v37, v30);
            sub_92E40(v27);
            goto LABEL_29;
          }
        }
        else if ( !v20 )
        {
LABEL_30:
          result = sub_256478(v35);
          if ( a4 )
            return sub_25734C(v4, 0);
          return result;
        }
LABEL_28:
        sub_25678C(v35, "<error reading variable: %s>", v20);
LABEL_29:
        sub_25765C(v11, "value", v35);
        goto LABEL_30;
      }
LABEL_43:
      if ( (*(_BYTE *)(*(_DWORD *)a1 + 33) & 2) != 0 )
        v19 = sub_257504(v11, "arg", 1);
      goto LABEL_25;
    }
  }
  return result;
}
