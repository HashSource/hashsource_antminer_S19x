int __fastcall sub_1CA4B0(int a1, int a2, _DWORD *a3, int a4)
{
  int v7; // r8
  int v8; // r0
  int v9; // r9
  int v10; // r4
  int v11; // r0
  int v12; // r8
  int v14; // r0
  char *v15; // r0
  _DWORD v16[3]; // [sp+8h] [bp-Ch] BYREF

  v7 = *(_DWORD *)(a2 + 16);
  v8 = sub_15F7E8(0);
  if ( a4 < -1 )
  {
    sub_94700(
      (int)"probe.c",
      850,
      "%s: Assertion `%s' failed.",
      "void compile_probe_arg(internalvar*, agent_expr*, axs_value*, void*)",
      "sel >= -1");
LABEL_8:
    v15 = sub_98E1C(v7);
    sub_946E0("No probe at PC %s", v15);
  }
  v9 = v8;
  sub_1CA3F8(v16, v7);
  v10 = v16[0];
  if ( !v16[0] )
    goto LABEL_8;
  v11 = (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)v16[0] + 12))(v16[0], v9);
  v12 = v11;
  if ( a4 == -1 )
  {
    *a3 = 0;
    sub_1780B4();
    a3[1] = *(_DWORD *)(v14 + 12);
    return sub_C0B5C((char *)a2, v12);
  }
  else
  {
    if ( a4 >= v11 )
      sub_946E0("Invalid probe argument %d -- probe has %d arguments available", a4, v11);
    return (*(int (__fastcall **)(int, int, _DWORD *, int))(*(_DWORD *)v10 + 24))(v10, a2, a3, a4);
  }
}
