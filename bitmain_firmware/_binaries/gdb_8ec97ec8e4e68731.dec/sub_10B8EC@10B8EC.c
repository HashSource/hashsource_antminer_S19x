int __fastcall sub_10B8EC(int a1)
{
  int v2; // r4
  const char **v3; // r0
  const char *v4; // r2
  int result; // r0
  const char ***v6; // r7
  const char **v7; // r8
  const char *v8; // r11
  const char *v9; // r4
  size_t v10; // r6
  size_t v11; // r0
  const char *v12; // t1
  size_t v13; // r6
  const char *v14; // r11
  size_t v15; // r0
  const char *v16; // r2
  int v17; // r4

  v2 = sub_B894C(a1);
  v3 = (const char **)((int (*)(void))loc_16EAC8)();
  if ( v3 )
  {
    v4 = *v3;
    if ( !*v3 )
      v4 = "";
  }
  else
  {
    v4 = "";
  }
  sub_25A418(a1, "The current disassembler options are '%s'\n", v4);
  result = ((int (__fastcall *)(int))loc_16EB40)(v2);
  v6 = (const char ***)result;
  if ( result )
  {
    result = sub_25A418(
               a1,
               "\n"
               "The following disassembler options are supported for use with the\n"
               "'set disassembler-options <option>[,<option>...]' command:\n");
    if ( v6[1] )
    {
      v7 = *v6;
      v8 = **v6;
      if ( v8 )
      {
        v9 = **v6;
        v10 = 0;
        do
        {
          v11 = strlen(v9);
          v12 = v7[1];
          ++v7;
          v9 = v12;
          if ( v10 < v11 )
            v10 = v11;
        }
        while ( v9 );
        v13 = v10 + 1;
        do
        {
          sub_25A418(a1, "  %s", v8);
          v14 = *(const char **)&v9[(_DWORD)v6[1]];
          if ( v14 )
          {
            v15 = strlen(*(const char **)&v9[(_DWORD)*v6]);
            sub_25A418(a1, "%*c %s", v13 - v15, 32, v14);
          }
          result = sub_25A418(a1, (const char *)&word_356638);
          v9 += 4;
          v8 = *(const char **)&v9[(_DWORD)*v6];
        }
        while ( v8 );
      }
    }
    else
    {
      sub_25A418(a1, "  ");
      v16 = **v6;
      if ( v16 )
      {
        v17 = 1;
        do
        {
          sub_25A418(a1, "%s", v16);
          if ( (*v6)[v17] )
            sub_25A418(a1, ", ");
          sub_259B58("  ");
          v16 = (*v6)[v17++];
        }
        while ( v16 );
      }
      return sub_25A418(a1, (const char *)&word_356638);
    }
  }
  return result;
}
