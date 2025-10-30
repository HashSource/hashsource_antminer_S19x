int __fastcall sub_504F0(int a1, int a2, int a3)
{
  int v6; // r6
  int v7; // r5
  const char *v8; // r11
  const char *v9; // t1
  size_t v10; // r2
  __int64 v12; // r0

  *(_DWORD *)a1 = a1 + 8;
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 8) = 0;
  if ( !a2 )
    goto LABEL_14;
  if ( a3 < 0 || a3 > sub_31E100(a2) )
  {
    sub_94700(
      "cli/cli-cmds.c",
      1336,
      "%s: Assertion `%s' failed.",
      "std::__cxx11::string argv_to_string(char**, int)",
      "n >= 0 && n <= countargv (argv)");
LABEL_14:
    v12 = sub_94700(
            "cli/cli-cmds.c",
            1335,
            "%s: Assertion `%s' failed.",
            "std::__cxx11::string argv_to_string(char**, int)",
            "argv != NULL");
    return sub_50638(v12, HIDWORD(v12));
  }
  if ( a3 > 0 )
  {
    v6 = a2 - 4;
    v7 = 0;
    while ( 1 )
    {
      v9 = *(const char **)(v6 + 4);
      v6 += 4;
      v8 = v9;
      v10 = strlen(v9);
      if ( v10 > 0x7FFFFFFF - *(_DWORD *)(a1 + 4) )
        sub_33D184("basic_string::append");
      sub_33C320(a1, v8, v10);
      if ( a3 == ++v7 )
        break;
      if ( *(_DWORD *)(a1 + 4) == 0x7FFFFFFF )
        sub_33D184("basic_string::append");
      sub_33C320(a1, &word_3E1F84, 1);
    }
  }
  return a1;
}
