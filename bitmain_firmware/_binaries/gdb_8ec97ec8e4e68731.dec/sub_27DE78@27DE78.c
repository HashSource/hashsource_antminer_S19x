int __fastcall sub_27DE78(int a1)
{
  const char *v2; // r10
  size_t v3; // r0
  int v4; // r8
  int v5; // r6
  int v6; // r9
  _DWORD *v7; // r5
  int v8; // r0
  void *v9; // r0
  int v10; // r1
  __int64 v11; // r2
  void *v12; // r7
  int v13; // r4
  int v14; // r10
  int v15; // r4
  _DWORD *v16; // r0
  int *v17; // r0
  int v18; // r1
  int v19; // r8
  int v20; // r2
  int *v21; // r0
  int v22; // r3
  int *v23; // r0
  int v24; // r2
  int v25; // r3
  int result; // r0
  __int64 v27; // kr00_8
  int *v28; // r4
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int *v32; // [sp+8h] [bp-2Ch] BYREF
  int *v33; // [sp+Ch] [bp-28h] BYREF

  v2 = (const char *)sub_1B87A8(*(_DWORD *)a1);
  v33 = 0;
  v3 = strlen(v2);
  v4 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 12);
  v6 = *(_DWORD *)a1;
  v7 = sub_93028(v3 + 32);
  v8 = *(_DWORD *)(a1 + 4);
  *v7 = &v33;
  v7[1] = sub_327254(v8);
  strcpy((char *)v7 + 28, v2);
  v9 = *(void **)(a1 + 4);
  v10 = *(_DWORD *)(a1 + 24);
  *((_QWORD *)v7 + 1) = *(_QWORD *)(a1 + 16);
  v11 = *(_QWORD *)(a1 + 28);
  v7[4] = v10;
  *(_QWORD *)(v7 + 5) = v11;
  if ( v9 )
    free(v9);
  free((void *)a1);
  v12 = sub_92E28();
  v13 = *(_DWORD *)(v4 + 24);
  v14 = sub_1761FC(v6);
  v15 = ((int (__fastcall *)(int, int, int))loc_176248)(v6, v13, v14);
  sub_323B84(v14);
  if ( **(_BYTE **)(v15 + 24) != 7 )
  {
LABEL_15:
    v27 = sub_94700(
            (int)"compile/compile-object-run.c",
            153,
            "%s: Assertion `%s' failed.",
            "void compile_object_run(compile_module*)",
            "TYPE_CODE (func_type) == TYPE_CODE_FUNC");
    sub_92E40((int)v12);
    if ( HIDWORD(v27) == 1 )
    {
      v28 = (int *)sub_339E78(v27);
      v29 = sub_10D7E4((int)sub_27DD8C, (int)v7);
      if ( v33 )
      {
        if ( v29 )
        {
          v30 = sub_94700(
                  (int)"compile/compile-object-run.c",
                  184,
                  "%s: Assertion `%s' failed.",
                  "void compile_object_run(compile_module*)",
                  "!(dtor_found && executed)");
          v31 = sub_339EF8(v30);
          sub_338FFC(v31);
        }
      }
      else
      {
        *v7 = 0;
        if ( !v29 )
          sub_27DD8C(v7);
      }
      sub_92F1C(*v28, v28[1], v28[2]);
    }
    sub_339E78(v27);
    sub_92E60();
  }
  v16 = sub_1700C0((_DWORD *)v15);
  v17 = sub_26DC9C(v16);
  v18 = *(_DWORD *)(v15 + 24);
  v19 = (int)v17;
  v20 = *(__int16 *)(v18 + 4);
  if ( v20 <= 0 )
  {
    v25 = 0;
  }
  else
  {
    if ( !v5 )
      goto LABEL_22;
    v21 = sub_26DC9C(*(_DWORD **)(*(_DWORD *)(v18 + 24) + 12));
    v22 = *(_DWORD *)(v15 + 24);
    v32 = v21;
    v20 = *(__int16 *)(v22 + 4);
    if ( v20 <= 1 )
      goto LABEL_23;
    if ( !v7[5] )
      goto LABEL_21;
    v23 = sub_26DC9C(*(_DWORD **)(*(_DWORD *)(v22 + 24) + 36));
    v24 = *(_DWORD *)(v15 + 24);
    v25 = 2;
    v33 = v23;
    v20 = *(__int16 *)(v24 + 4);
  }
  while ( v20 != v25 )
  {
    sub_94700(
      (int)"compile/compile-object-run.c",
      172,
      "%s: Assertion `%s' failed.",
      "void compile_object_run(compile_module*)",
      "current_arg == TYPE_NFIELDS (func_type)");
LABEL_21:
    sub_94700(
      (int)"compile/compile-object-run.c",
      167,
      "%s: Assertion `%s' failed.",
      "void compile_object_run(compile_module*)",
      "data->out_value_addr != 0");
LABEL_22:
    sub_94700(
      (int)"compile/compile-object-run.c",
      160,
      "%s: Assertion `%s' failed.",
      "void compile_object_run(compile_module*)",
      "regs_addr != 0");
LABEL_23:
    v25 = 1;
  }
  sub_17D5F0(v19, 0, v20, (char *)&v32, (int)sub_27DD8C, (int)v7);
  sub_92E40((int)v12);
  result = sub_10D7E4((int)sub_27DD8C, (int)v7);
  if ( result || !v33 )
  {
    sub_94700(
      (int)"compile/compile-object-run.c",
      192,
      "%s: Assertion `%s' failed.",
      "void compile_object_run(compile_module*)",
      "!dtor_found && executed");
    goto LABEL_15;
  }
  return result;
}
