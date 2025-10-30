void __fastcall sub_1A60D4(char *a1, int a2)
{
  __int64 v4; // r0
  int i; // r4

  if ( sub_59B4C(a1) < 0 )
LABEL_9:
    sub_946E0("Bad value for 'mt set per-command no'.", HIDWORD(v4));
  for ( i = dword_487A90; i; i = *(_DWORD *)i )
  {
    if ( (*(_BYTE *)(i + 13) & 0x1E) == 0 )
    {
      if ( (*(_WORD *)(i + 12) & 0x180) != 0x80 )
      {
        v4 = sub_94700(
               (int)"maint.c",
               922,
               "%s: Assertion `%s' failed.",
               "void set_per_command_cmd(const char*, int)",
               "list->type == set_cmd");
        goto LABEL_9;
      }
      sub_59B84(a1, a2, i);
    }
  }
}
