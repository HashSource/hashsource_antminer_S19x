int __fastcall sub_571C0(int a1, _BYTE *a2)
{
  _DWORD *v4; // r4
  __int64 v6; // r0

  if ( a2 )
  {
    if ( *a2 || (unsigned int)(a1 - 3) > 1 )
    {
      v4 = (_DWORD *)sub_93028(28);
      *v4 = 0;
      v4[5] = 1;
      v4[2] = a1;
      v4[6] = sub_93094(1, 4u);
      v4[1] = sub_327254(a2);
      return (int)v4;
    }
LABEL_6:
    sub_946E0("if/while commands require arguments.");
  }
  if ( (unsigned int)(a1 - 3) <= 1 )
    goto LABEL_6;
  v6 = sub_94700(
         "cli/cli-script.c",
         153,
         "%s: Assertion `%s' failed.",
         "command_line* build_command_line(command_control_type, const char*)",
         "args != NULL");
  return sub_57278(v6, HIDWORD(v6));
}
