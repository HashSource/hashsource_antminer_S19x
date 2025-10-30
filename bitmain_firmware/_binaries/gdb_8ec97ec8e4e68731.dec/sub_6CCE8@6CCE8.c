int __fastcall sub_6CCE8(const char **a1)
{
  int v1; // r6
  int v3; // r5
  int v4; // r3
  bool v5; // zf
  const char *v6; // r1
  bool v7; // zf
  const char *v8; // r1
  int v9; // t1
  int result; // r0
  int v11; // r0
  int v12; // r0
  unsigned __int8 *v13; // r3
  const char *v14; // r0
  int v15; // r3
  int v16; // r8
  char *v17; // r6
  const char *v18; // r0
  int v19; // r7
  int v20; // r0
  int v21; // r1
  int v22; // r0
  const char *v23; // r5
  const char **v24; // r2
  const char *v25; // r7
  const char **v26; // r2
  int v27; // r0
  int v28; // r1
  char *s; // [sp+Ch] [bp-Ch] BYREF
  char *endptr; // [sp+10h] [bp-8h] BYREF
  char *v31; // [sp+14h] [bp-4h] BYREF

  if ( !((int (__fastcall *)(const char *))loc_16D248)(a1[6]) )
  {
    sub_94700(
      "stap-probe.c",
      992,
      "%s: Assertion `%s' failed.",
      "void stap_parse_argument_conditionally(stap_parse_info*)",
      "gdbarch_stap_is_single_operand_p (p->gdbarch)");
    goto LABEL_54;
  }
  v3 = (int)a1[6];
  v4 = *(unsigned __int8 *)*a1;
  v5 = (((_BYTE)v4 - 43) & 0xFD) == 0;
  if ( (((_BYTE)v4 - 43) & 0xFD) != 0 )
    v5 = v4 == 126;
  if ( !v5 && (unsigned int)(v4 - 48) > 9 )
  {
    if ( !((int (__fastcall *)(const char *))loc_16D294)(a1[6]) )
    {
      if ( **a1 != 40 )
        sub_946E0("Cannot parse expression `%s'.", a1[4]);
      v11 = (int)(*a1 + 1);
      *a1 = (const char *)v11;
      v12 = sub_9360C(v11);
      v13 = (unsigned __int8 *)a1[7];
      *a1 = (const char *)v12;
      a1[7] = (const char *)(v13 + 1);
      ((void (__fastcall *)(const char **, _DWORD, _DWORD))loc_6D158)(a1, 0, 0);
      v14 = *a1;
      v15 = (int)(a1[7] - 1);
      a1[7] = (const char *)v15;
      if ( *v14 != 41 )
        sub_946E0("Missign close-paren on expression `%s'.", a1[4]);
      result = (int)(v14 + 1);
      *a1 = (const char *)result;
      if ( v15 )
      {
        result = sub_9360C(result);
        *a1 = (const char *)result;
      }
      return result;
    }
    v3 = (int)a1[6];
  }
  s = 0;
  if ( ((int (__fastcall *)(int))loc_16D350)(v3) )
  {
    result = ((int (__fastcall *)(int, const char **))loc_16D39C)(v3, a1);
    if ( result )
      return result;
  }
  v6 = *a1;
  v1 = *(unsigned __int8 *)*a1;
  v7 = (((_BYTE)v1 - 43) & 0xFD) == 0;
  if ( (((_BYTE)v1 - 43) & 0xFD) != 0 )
    v7 = v1 == 126;
  if ( !v7 )
  {
    if ( (unsigned int)(v1 - 48) > 9 )
    {
      if ( !sub_6C614(v3, v6, (const char **)&s) )
      {
        v25 = *a1;
        v26 = (const char **)((int (__fastcall *)(int))loc_16CF78)(v3);
        if ( v26 && !sub_6C6BC(v25, 0, v26) && !sub_6C72C(v3, *a1, 0) )
          sub_946E0("Operator `%c' not recognized on expression `%s'.", *(unsigned __int8 *)*a1, a1[4]);
        return sub_6C898((char **)a1);
      }
      v18 = &(*a1)[strlen(s)];
      *a1 = v18;
      v19 = strtol(v18, &endptr, 10);
      *a1 = endptr;
      sub_1C37BC(a1 + 1, 38);
      v20 = sub_1780B4(v3);
      sub_1C38F4(a1 + 1, *(_DWORD *)(v20 + 16));
      sub_1C3898(a1 + 1, v21, v19, v19 >> 31);
      sub_1C37BC(a1 + 1, 38);
      v22 = v3;
      v23 = *a1;
      v24 = (const char **)((int (__fastcall *)(int))loc_16CF00)(v22);
      if ( v24 )
      {
        if ( !sub_6C6BC(v23, (const char **)&v31, v24) )
          goto LABEL_52;
LABEL_41:
        result = strlen(v31);
LABEL_42:
        *a1 += result;
        return result;
      }
    }
    else
    {
      v16 = strtol(*a1, &endptr, 10);
      v17 = endptr;
      if ( a1[7] )
        v17 = (char *)sub_9360C(endptr);
      if ( !sub_6C614(v3, *a1, 0) || sub_6C72C(v3, v17, 0) )
      {
        if ( !sub_6C72C(v3, v17, 0) )
          sub_946E0("Unknown numeric token on expression `%s'.", a1[4]);
        return sub_6C898((char **)a1);
      }
      sub_1C37BC(a1 + 1, 38);
      v27 = sub_1780B4(v3);
      sub_1C38F4(a1 + 1, *(_DWORD *)(v27 + 16));
      sub_1C3898(a1 + 1, v28, v16, v16 >> 31);
      sub_1C37BC(a1 + 1, 38);
      *a1 = v17;
      v24 = (const char **)((int (__fastcall *)(int))loc_16CF00)(v3);
      if ( v24 )
      {
        if ( !sub_6C6BC(v17, (const char **)&v31, v24) )
LABEL_52:
          sub_946E0("Invalid constant suffix on expression `%s'.", a1[4]);
        goto LABEL_41;
      }
    }
    result = (int)v24;
    goto LABEL_42;
  }
  v8 = v6 + 1;
  if ( a1[7] )
  {
    v8 = (const char *)sub_9360C(v8);
    if ( (unsigned int)*(unsigned __int8 *)v8 - 48 > 9 )
      goto LABEL_18;
  }
  else if ( (unsigned int)*(unsigned __int8 *)v8 - 48 > 9 )
  {
    goto LABEL_18;
  }
  do
    v9 = *(unsigned __int8 *)++v8;
  while ( (unsigned int)(v9 - 48) <= 9 );
  if ( sub_6C72C(v3, v8, 0) )
  {
    if ( v1 != 126 )
      return sub_6C898((char **)a1);
LABEL_54:
    sub_946E0("Invalid operator `%c' for register displacement on expression `%s'.", v1, a1[4]);
  }
LABEL_18:
  ++*a1;
  result = sub_6CCE8(a1);
  if ( v1 == 45 )
    return sub_1C37BC(a1 + 1, 58);
  if ( v1 == 126 )
    return sub_1C37BC(a1 + 1, 60);
  return result;
}
