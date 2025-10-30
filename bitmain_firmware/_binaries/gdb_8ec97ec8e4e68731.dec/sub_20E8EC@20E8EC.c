int __fastcall sub_20E8EC(_BYTE *a1, int a2)
{
  int v4; // r7
  int v5; // r4
  int v6; // r8
  int v7; // r0
  int v8; // r5
  _DWORD *v9; // r0
  int v10; // r10
  int v11; // r6
  const char *v12; // r7
  int v13; // r8
  const char *v14; // r2
  __int64 v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r7
  _DWORD *v19; // r0
  int v20; // r4
  _DWORD *v21; // r8
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int result; // r0
  int *v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  void *ptr; // [sp+Ch] [bp-4h] BYREF

  v4 = sub_15F7E8((_BOOL4)"No selected frame.");
  v5 = sub_C3410(v4);
  v6 = sub_15ECB4(v4);
  v7 = sub_15F70C(v6);
  if ( sub_15DA8C(v7) == 2 )
    sub_946E0("Can not force return from an inlined function.");
  if ( a1 )
  {
    sub_1C42A8((char **)&ptr, a1);
    v8 = sub_14CD3C((int *)ptr);
    if ( !v5 || (v9 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(v5 + 24) + 24) + 20)) == 0 )
    {
      if ( (unsigned int)(*((_DWORD *)ptr + 4) - 52) > 1 )
        sub_946E0(
          "Return value type not available for selected stack frame.\n"
          "Please use an explicit cast of the value to return.");
      v9 = (_DWORD *)sub_26BC70(v8);
    }
    v10 = sub_171258(v9);
    v11 = sub_2647C8(v10, v8);
    if ( sub_26BF4C(v11) )
      ((void (__fastcall *)(int))loc_26E00C)(v11);
    if ( v5 )
    {
      a1 = (_BYTE *)((int (__fastcall *)(int, _DWORD, int))loc_15B3A0)(v5, 0, v4);
      if ( **(_BYTE **)(v10 + 24) == 10 )
      {
        v12 = "";
        v11 = 0;
        v13 = 0;
      }
      else
      {
        v12 = "";
        v13 = sub_26DF84(v6, a1, v10);
        if ( (unsigned int)(v13 - 1) <= 1 )
        {
          v11 = 0;
          v12 = "The location at which to store the function's return value is unknown.\n"
                "If you continue, the return value that you specified will be ignored.\n";
        }
      }
    }
    else
    {
      v12 = "";
      a1 = 0;
      v13 = 0;
      if ( **(_BYTE **)(v10 + 24) == 10 )
        v11 = 0;
    }
    if ( ptr )
      free(ptr);
    if ( !a2 )
    {
LABEL_23:
      v16 = sub_15F7E8(0);
      sub_1601BC(v16);
      if ( !v11 )
        goto LABEL_26;
      v18 = sub_26BC70(v11);
      v19 = sub_1DDBBC();
      v20 = sub_1DD58C((int)v19);
      if ( (unsigned int)(v13 - 1) > 1 )
      {
        v21 = sub_1DDBBC();
        v22 = sub_26E978(v11);
        v17 = ((int (__fastcall *)(int, _BYTE *, int, _DWORD *, _DWORD, int))loc_168BA4)(v20, a1, v18, v21, 0, v22);
LABEL_26:
        v23 = sub_15F70C(v17);
        v24 = sub_15DA8C(v23);
        if ( v24 != 1 )
          goto LABEL_27;
        goto LABEL_37;
      }
      v15 = sub_94700(
              (int)"stack.c",
              2475,
              "%s: Assertion `%s' failed.",
              "void return_command(const char*, int)",
              "rv_conv != RETURN_VALUE_STRUCT_CONVENTION && rv_conv != RETURN_VALUE_ABI_RETURNS_ADDRESS");
LABEL_43:
      sub_946E0("Not confirmed", HIDWORD(v15));
    }
    if ( !v5 )
      goto LABEL_36;
    goto LABEL_16;
  }
  if ( a2 )
  {
    v12 = "";
    v11 = 0;
    v13 = 1;
    if ( !v5 )
    {
LABEL_36:
      LODWORD(v15) = sub_25A3E4("%sMake selected stack frame return now? ", v12);
      goto LABEL_22;
    }
LABEL_16:
    if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 24) + 24) + 28) + 1) & 1) != 0 )
      sub_946B0("Function does not return normally to caller.");
    if ( dword_46D448 )
      v14 = (const char *)sub_21B3C4(v5);
    else
      v14 = *(const char **)v5;
    LODWORD(v15) = sub_25A3E4("%sMake %s return now? ", v12, v14);
LABEL_22:
    if ( !(_DWORD)v15 )
      goto LABEL_43;
    goto LABEL_23;
  }
  v29 = sub_15F7E8(0);
  sub_1601BC(v29);
  v31 = sub_15F70C(v30);
  v24 = sub_15DA8C(v31);
  if ( v24 != 1 )
  {
    v32 = sub_15F70C(v24);
    return sub_15E10C(v32);
  }
LABEL_37:
  v28 = sub_15F70C(v24);
  sub_1601BC(v28);
LABEL_27:
  v25 = sub_15F70C(v24);
  result = sub_15E10C(v25);
  if ( a2 )
  {
    v27 = (int *)sub_15F7E8(0);
    return sub_20E7E8(v27, 1, 1u, 1);
  }
  return result;
}
