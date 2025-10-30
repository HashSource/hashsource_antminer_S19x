void __fastcall sub_1A0544(char *a1)
{
  char *v1; // r4
  int v2; // r7
  _BYTE *v3; // r6
  size_t v4; // r5
  void *v5; // r4
  int *v6; // r0
  int v7; // r5
  int v8; // r0
  char *v9; // r0
  int v10; // r0
  _DWORD *v11; // r0
  int v12; // r0
  int *v13; // r0
  int *v14; // [sp+4h] [bp-18h] BYREF
  char *v15; // [sp+8h] [bp-14h] BYREF
  const char **v16; // [sp+Ch] [bp-10h] BYREF
  int v17[2]; // [sp+10h] [bp-Ch] BYREF

  v1 = a1;
  v2 = 0;
  v14 = 0;
  if ( !a1 )
  {
LABEL_19:
    v15 = v1;
    goto LABEL_20;
  }
  if ( *a1 != 45 )
  {
LABEL_15:
    v15 = v1;
    goto LABEL_7;
  }
  while ( 1 )
  {
    v3 = sub_93610((unsigned __int8 *)v1);
    v4 = v3 - v1;
    if ( strncmp(v1, "-a", v3 - v1) )
    {
      if ( strncmp(v1, "-all", v4) )
        break;
    }
    v9 = (char *)sub_9360C(v3);
    v1 = v9;
    if ( !v9 )
      goto LABEL_19;
    v2 = 1;
    if ( *v9 != 45 )
      goto LABEL_15;
  }
  if ( strncmp(v1, "--", v4) )
    sub_946E0("Unrecognized option '%.*s' to info macro command.  Try \"help info macro\".", v4, v1);
  v1 = (char *)sub_9360C(v3);
  v15 = v1;
  if ( !v1 )
LABEL_20:
    sub_946E0("You must follow the `info macro' command with the name of the macro\nwhose definition you want to see.");
LABEL_7:
  if ( !*v1 )
    goto LABEL_20;
  v14 = (int *)sub_1A2BB4();
  v5 = sub_9253C((int)sub_2589B8, (int)&v14);
  if ( v14 )
  {
    v6 = (int *)*v14;
    if ( v2 )
    {
      v10 = *v6;
      v16 = (const char **)&v15;
      v17[0] = (int)&v16;
      v17[1] = (int)sub_1A03E4;
      sub_1A3600(v10, &v16, sub_1A03E4);
      sub_92620(v5);
    }
    else
    {
      v7 = sub_1A3D54(v6, v14[1], v15);
      if ( v7 )
      {
        v8 = sub_1A35CC(*v14, v14[1], v15, v17);
        sub_1A0288(v15, v7, v8, v17[0]);
      }
      else
      {
        v11 = (_DWORD *)sub_242F8C(0);
        v12 = sub_25A418(*v11, "The symbol `%s' has no definition as a C/C++ preprocessor macro\nat ", v15);
        v13 = (int *)sub_242F8C(v12);
        sub_1A01EC(*v13, *v14, v14[1]);
      }
      sub_92620(v5);
    }
  }
  else
  {
    sub_259B34("GDB has no preprocessor macro information for that code.\n");
    sub_92620(v5);
  }
}
