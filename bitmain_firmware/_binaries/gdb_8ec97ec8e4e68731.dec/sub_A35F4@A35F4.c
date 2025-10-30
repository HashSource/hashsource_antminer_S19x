int __fastcall sub_A35F4(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v10; // r0
  int v11; // r0
  int v12; // r0
  const char **v13; // r3
  const char *v14; // r5
  char *v15; // r0
  char *v16; // r4
  _DWORD *v17; // r4
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int result; // r0
  char **v23; // r5
  int v24; // r4
  __int64 v25; // r0
  int v26; // [sp+0h] [bp-7Ch]
  int v27; // [sp+4h] [bp-78h]
  int v28; // [sp+8h] [bp-74h]
  int v29; // [sp+Ch] [bp-70h]
  int v31; // [sp+40h] [bp-3Ch]
  int *v32; // [sp+44h] [bp-38h]
  _DWORD *v33; // [sp+4Ch] [bp-30h] BYREF
  _DWORD v34[10]; // [sp+50h] [bp-2Ch] BYREF

  v10 = sub_183688(a1);
  v11 = sub_9D338(v10);
  if ( !*(_DWORD *)(v11 + 4) )
  {
    v23 = off_3742E8;
    v24 = v11;
    v11 = sub_9D268((const char **)off_3742E8);
    if ( !v11 )
    {
      v23 = off_3742FC;
      v11 = sub_9D268((const char **)off_3742FC);
      if ( !v11 )
      {
        sub_1B141C((int)v34, "adainit");
        if ( v34[0] )
        {
          if ( !ps_getpid_0((int)&dword_4878EC) )
            sub_946E0("Unable to insert catchpoint. Try to start the program first.");
          sub_946E0("Cannot insert Ada exception catchpoints in this configuration.");
        }
        sub_946E0("Unable to insert catchpoint.  Is this an Ada main program?");
      }
    }
    *(_DWORD *)(v24 + 4) = v23;
  }
  v12 = sub_183688(v11);
  v13 = *(const char ***)(sub_9D338(v12) + 4);
  if ( v13 )
  {
    switch ( a2 )
    {
      case 0:
        v14 = *v13;
        goto LABEL_5;
      case 1:
        v14 = v13[1];
        goto LABEL_5;
      case 2:
        v14 = v13[2];
        goto LABEL_5;
      case 3:
        v14 = v13[3];
LABEL_5:
        v15 = sub_9D190(v14, 0, (char *)1);
        v16 = v15;
        if ( !v15 )
          goto LABEL_29;
        if ( *((_DWORD *)off_46DBB8 + 4 * ((unsigned __int8)v15[32] >> 3)) != 10 )
          goto LABEL_30;
        v31 = sub_327254(v14);
        switch ( a2 )
        {
          case 0:
            v32 = &dword_477CB8;
            goto LABEL_12;
          case 1:
            v32 = &dword_477D00;
            goto LABEL_12;
          case 2:
            v32 = &dword_477D48;
            goto LABEL_12;
          case 3:
            v32 = &dword_477D90;
LABEL_12:
            sub_21EC18(v34, v16, 1);
            v17 = sub_9836C(0x8Cu);
            memset(v17, 0, 0x8Cu);
            v17[4] = 1;
            *((_BYTE *)v17 + 32) = 0;
            *((_BYTE *)v17 + 33) = 0;
            v17[13] = 0;
            v17[14] = 0;
            v17[15] = 0;
            v17[16] = 0;
            v26 = v34[2];
            v27 = v34[3];
            v28 = v34[4];
            v29 = v34[5];
            v18 = v34[6];
            v19 = v34[7];
            v20 = v34[8];
            v21 = v34[9];
            v17[17] = 0;
            v17[28] = -1;
            *v17 = off_374020;
            sub_D0CF4(v17, a1, v34[0], v34[1], v26, v27, v28, v29, v18, v19, v20, v21, v31, v32, a5, a6, a7);
            v17[34] = a3;
            sub_9B924((int)v17, a2);
            if ( a4 )
              sub_CD40C(v17, a4, a7);
            v33 = v17;
            sub_D9044(0, &v33, 1);
            result = (int)v33;
            if ( v33 )
              return (*(int (__fastcall **)(_DWORD *))(*v33 + 4))(v33);
            return result;
          default:
            goto LABEL_31;
        }
      default:
        sub_94700((int)"ada-lang.c", 13236, "unexpected catchpoint kind (%d)", a2);
        goto LABEL_28;
    }
  }
  else
  {
LABEL_28:
    sub_94700(
      (int)"ada-lang.c",
      13219,
      "%s: Assertion `%s' failed.",
      "const char* ada_exception_sym_name(ada_exception_catchpoint_kind)",
      "data->exception_info != NULL");
LABEL_29:
    sub_94700(
      (int)"ada-lang.c",
      13364,
      "%s: Assertion `%s' failed.",
      "symtab_and_line ada_exception_sal(ada_exception_catchpoint_kind, char*, const char**, const breakpoint_ops**)",
      "sym != NULL");
LABEL_30:
    sub_94700(
      (int)"ada-lang.c",
      13365,
      "%s: Assertion `%s' failed.",
      "symtab_and_line ada_exception_sal(ada_exception_catchpoint_kind, char*, const char**, const breakpoint_ops**)",
      "SYMBOL_CLASS (sym) == LOC_BLOCK");
  }
LABEL_31:
  v25 = sub_94700((int)"ada-lang.c", 13262, "unexpected catchpoint kind (%d)", a2);
  LODWORD(v25) = v33;
  if ( v33 )
    LODWORD(v25) = (*(int (__fastcall **)(_DWORD *, _DWORD))(*v33 + 4))(v33, HIDWORD(v25));
  sub_338FFC(v25);
}
