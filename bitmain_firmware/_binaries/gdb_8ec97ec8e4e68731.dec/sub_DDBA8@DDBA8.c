void __fastcall sub_DDBA8(_DWORD *a1)
{
  unsigned __int8 *v1; // r3
  unsigned __int8 *v3; // r0
  __int64 v4; // r0
  const char *v5; // r6
  const char *v6; // r5
  char *v7; // r5
  _DWORD *v8; // r0
  __int64 v9; // r0
  _DWORD *v10; // [sp+8h] [bp-20h] BYREF
  _DWORD *v11; // [sp+Ch] [bp-1Ch] BYREF

  v1 = (unsigned __int8 *)a1[26];
  if ( v1 )
  {
    v3 = sub_935D0(v1);
    if ( *v3 == 44 )
      ++v3;
    v5 = sub_935D0(v3);
    if ( *v5 != 34 )
      goto LABEL_22;
    v6 = off_46C094;
    if ( strcmp(off_46C094, "gdb") )
    {
      if ( !strcmp(v6, "call") )
      {
        HIDWORD(v9) = dword_4788B8;
        if ( dword_4788B8 )
        {
          if ( dword_4788BC && *(_BYTE *)dword_4788BC )
            v7 = sub_93140("call (void) %s (%s,%s)", (const char *)dword_4788B8, (const char *)dword_4788BC, v5);
          else
            v7 = sub_93140("call (void) %s (%s)", (const char *)dword_4788B8, v5);
          goto LABEL_10;
        }
      }
      else
      {
        if ( !strcmp(v6, "agent") )
        {
          if ( off_489B64() )
          {
            v7 = sub_93140("agent-printf %s", v5);
          }
          else
          {
            sub_946B0("Target cannot run dprintf commands, falling back to GDB printf");
            v7 = sub_93140("printf %s", v5);
          }
          goto LABEL_10;
        }
        v9 = sub_94700((int)"breakpoint.c", 8815, "Invalid dprintf style.");
      }
      sub_946E0("No function supplied for dprintf call", HIDWORD(v9));
    }
    v7 = sub_93140("printf %s", v5);
LABEL_10:
    if ( v7 )
    {
      v8 = sub_93028(0x1Cu);
      v10 = v8;
      v8[1] = v7;
      v8[2] = 0;
      v8[5] = 0;
      v8[6] = 0;
      *v8 = 0;
      sub_DD974(a1, (int *)&v10);
      if ( v10 )
      {
        v11 = v10;
        sub_57E18(&v11);
      }
      return;
    }
    v4 = sub_94700(
           (int)"breakpoint.c",
           8818,
           "%s: Assertion `%s' failed.",
           "void update_dprintf_command_list(breakpoint*)",
           "printf_line != NULL");
LABEL_22:
    sub_946E0("Bad format string, missing '\"'.", HIDWORD(v4));
  }
}
