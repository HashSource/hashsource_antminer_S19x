_DWORD *__fastcall sub_58220(char *a1, int a2)
{
  int *v4; // r0
  int v5; // r1
  int **v6; // r7
  int v7; // r0
  int v8; // r5
  char *v9; // r4
  int v10; // r3
  bool v11; // zf
  int v12; // r0
  int v13; // r11
  int v14; // r8
  int v15; // r6
  int *v16; // r1
  int v17; // r0
  char *v18; // r4
  int v19; // r3
  _DWORD *result; // r0
  _DWORD *v21; // r3
  int v22; // r0
  char *s1; // [sp+Ch] [bp-98h] BYREF
  char *v24; // [sp+14h] [bp-90h] BYREF
  _DWORD *v25; // [sp+18h] [bp-8Ch] BYREF
  _DWORD *v26; // [sp+1Ch] [bp-88h] BYREF
  _BYTE v27[128]; // [sp+20h] [bp-84h] BYREF

  s1 = a1;
  v4 = sub_57328((const char **)&s1);
  v5 = *v4;
  v6 = (int **)v4;
  v24 = s1;
  v7 = sub_544C8((unsigned __int8 **)&v24, v5, "", -1, 1);
  v8 = v7;
  v9 = s1;
  if ( v7 )
  {
    if ( !strcmp(s1, *(const char **)(v7 + 4)) )
    {
      v10 = *(_DWORD *)(v8 + 8);
      v11 = v10 == 8;
      if ( v10 != 8 )
        v11 = v10 == 14;
      if ( v11 )
        LOWORD(v12) = -32032;
      else
        LOWORD(v12) = -32008;
      HIWORD(v12) = 53;
      if ( !sub_25A3E4(v12) )
        sub_946E0("Command \"%s\" not redefined.", *(const char **)(v8 + 4));
      v9 = s1;
    }
    else
    {
      v8 = 0;
    }
  }
  if ( !strncmp(v9, "hook-", 5u) )
  {
    v13 = 5;
    v14 = 1;
  }
  else
  {
    if ( strncmp(v9, "hookpost-", 9u) )
    {
      v14 = 0;
      v15 = 0;
      goto LABEL_19;
    }
    v13 = 9;
    v14 = 2;
  }
  v16 = *v6;
  v24 = &v9[v13];
  v17 = sub_544C8((unsigned __int8 **)&v24, (int)v16, "", -1, 0);
  v15 = v17;
  if ( !v17 || (v9 = s1, strcmp(&s1[v13], *(const char **)(v17 + 4))) )
  {
    sub_946B0("Your new `%s' command does not hook any existing command.", a1);
    if ( !sub_25A3E4("Proceed? ") )
      sub_946E0("Not confirmed.");
    v9 = s1;
    v15 = 0;
  }
LABEL_19:
  s1 = (char *)sub_327254(v9);
  sub_93170(v27, 128, "Type commands for definition of \"%s\".", a1);
  sub_5807C(&v25, (int)v27, a2, 1, 0, 0);
  if ( !v8 || *(_DWORD *)(v8 + 8) != 14 )
  {
    v18 = s1;
LABEL_22:
    v19 = sub_327254("User-defined.");
    goto LABEL_23;
  }
  sub_57E18((_DWORD **)(v8 + 84));
  v18 = s1;
  if ( *(_DWORD *)(v8 + 8) != 14 )
    goto LABEL_22;
  v19 = *(_DWORD *)(v8 + 28);
LABEL_23:
  result = (_DWORD *)sub_53274(v18, 14, (int)nullsub_43, v19, v6);
  v21 = v25;
  v25 = 0;
  result[21] = v21;
  if ( v15 )
  {
    if ( v14 == 1 )
    {
      *(_DWORD *)(v15 + 44) = result;
      result[22] = v15;
    }
    else
    {
      if ( v14 != 2 )
      {
        v22 = sub_94700("cli/cli-script.c", 1524, "bad switch");
        if ( v25 )
        {
          v26 = v25;
          sub_57E18(&v26);
        }
        sub_338FFC(v22);
      }
      *(_DWORD *)(v15 + 48) = result;
      result[23] = v15;
    }
  }
  return result;
}
