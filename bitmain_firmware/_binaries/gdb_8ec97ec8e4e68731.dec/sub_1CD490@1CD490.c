int __fastcall sub_1CD490(char **a1)
{
  int v1; // r5
  __int64 v3; // r0
  char **v4; // r2
  int v5; // r1
  int v6; // r2
  int v7; // r0
  int v8; // r0
  int result; // r0
  char **v10; // r3
  __int64 v11; // r0
  int v12; // r0

  if ( !a1 )
  {
    sub_94700(
      (int)"progspace.c",
      221,
      "%s: Assertion `%s' failed.",
      "void delete_program_space(program_space*)",
      "pspace != NULL");
LABEL_17:
    v11 = sub_94700(
            (int)"progspace.c",
            222,
            "%s: Assertion `%s' failed.",
            "void delete_program_space(program_space*)",
            "pspace != current_program_space");
    v12 = ((int (__fastcall *)(int, _DWORD))loc_1CD290)(v1, HIDWORD(v11));
    sub_338FFC(v12);
  }
  HIDWORD(v3) = &unk_487D20;
  v1 = dword_487D2C;
  if ( (char **)dword_487D2C == a1 )
    goto LABEL_17;
  v4 = (char **)dword_487D28;
  if ( dword_487D28 )
  {
    if ( a1 == (char **)dword_487D28 )
    {
      while ( 1 )
      {
        v10 = (char **)(HIDWORD(v3) + 8);
LABEL_13:
        *v10 = *v4;
        v1 = *(_DWORD *)(HIDWORD(v3) + 12);
        if ( a1 != (char **)v1 )
          break;
        v3 = sub_94700(
               (int)"progspace.c",
               147,
               "%s: Assertion `%s' failed.",
               "void release_program_space(program_space*)",
               "pspace != current_program_space");
      }
    }
    else
    {
      while ( *v4 )
      {
        if ( a1 == (char **)*v4 )
        {
          v10 = v4;
          v4 = a1;
          goto LABEL_13;
        }
        v4 = (char **)*v4;
      }
    }
  }
  ((void (__fastcall *)(char **))loc_1CD290)(a1);
  sub_DC33C((int)a1, v5, v6);
  sub_201A40(0, 0);
  sub_94C5C();
  v7 = ((int (*)(void))loc_1B7810)();
  v8 = sub_16F654(v7);
  if ( !((int (__fastcall *)(int))loc_16D974)(v8) )
    sub_1CCC04(a1[5]);
  sub_9489C((int)(a1 + 10));
  sub_1CD460((int)a1);
  ((void (__fastcall *)(void *, int (__fastcall *)(int (__fastcall *)(int, int), int, int), char **, char **))loc_1E0C7C)(
    &unk_487D30,
    sub_1CCBEC,
    a1,
    a1 + 16);
  free(a1);
  result = v1;
  if ( dword_487D2C != v1 )
  {
    if ( !v1 )
    {
      sub_94700(
        (int)"progspace.c",
        195,
        "%s: Assertion `%s' failed.",
        "void set_current_program_space(program_space*)",
        "pspace != NULL");
      JUMPOUT(0x1CD2E4);
    }
    dword_487D2C = v1;
    return sub_15D778();
  }
  return result;
}
