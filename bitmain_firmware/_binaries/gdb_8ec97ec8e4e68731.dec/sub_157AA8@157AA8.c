int __fastcall sub_157AA8(int a1)
{
  int *v1; // r3
  int v2; // r2
  int v3; // r2
  int (__fastcall *v4)(int *, int); // r2

  v1 = &dword_35C954;
  v2 = *(_DWORD *)(a1 + 8);
  if ( v2 != 6 )
  {
    v1 = &dword_35CC48;
    if ( v2 != 8 )
      a1 = sub_94700(
             (int)"extension.c",
             373,
             "%s: %s",
             "void eval_ext_lang_from_control_command(command_line*)",
             "unknown extension language in command_line");
  }
  v3 = v1[7];
  if ( !v3 || (v4 = *(int (__fastcall **)(int *, int))(v3 + 8)) == 0 )
    sub_157924((int)v1);
  return v4(v1, a1);
}
