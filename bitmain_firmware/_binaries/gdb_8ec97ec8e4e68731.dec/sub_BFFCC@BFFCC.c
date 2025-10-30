void __fastcall sub_BFFCC(char *s1, int a2, int a3)
{
  const char *v5; // r3
  int v6; // r0
  void *v7; // r4
  int v8; // r0
  _DWORD *v9; // r0
  int v10; // r0
  int v11; // r0
  void *v12; // r0
  char *v13; // [sp+Ch] [bp-18h] BYREF
  int v14; // [sp+10h] [bp-14h] BYREF
  void *ptr; // [sp+14h] [bp-10h] BYREF
  void *v16; // [sp+18h] [bp-Ch] BYREF
  void *v17; // [sp+1Ch] [bp-8h] BYREF

  v14 = 0;
  v5 = s1;
  if ( a2 )
  {
    v13 = s1;
  }
  else
  {
    if ( *s1 == 47 )
      v5 = (const char *)sub_24A130(s1, &v14, 47, s1);
    v13 = (char *)v5;
    if ( !strcmp(v5, "$_ret") )
    {
      v11 = sub_B894C(0);
      sub_BFF2C((int *)&ptr, a3, v11, v14);
      v7 = ptr;
      goto LABEL_10;
    }
  }
  v6 = sub_C2574(a3);
  sub_1C427C(&ptr, &v13, a3, v6, 0);
  if ( a2 )
  {
    if ( v14 )
    {
      sub_94700(
        (int)"ax-gdb.c",
        2605,
        "%s: Assertion `%s' failed.",
        "void agent_eval_command_one(const char*, int, CORE_ADDR)",
        "trace_string == 0");
      v12 = ptr;
      if ( ptr )
        free(ptr);
      sub_338FFC(v12);
    }
    sub_BFE84((int *)&v16, a3, (int)ptr);
    v7 = v16;
  }
  else
  {
    sub_BFDD4((int *)&v17, a3, (int)ptr, v14);
    v7 = v17;
  }
  if ( ptr )
    free(ptr);
LABEL_10:
  v8 = sub_C11E8(v7);
  v9 = (_DWORD *)sub_242F8C(v8);
  v10 = sub_C0E94(*v9, v7);
  sub_243C34(v10);
  if ( v7 )
  {
    sub_C0960(v7);
    sub_33AC04(v7);
  }
}
