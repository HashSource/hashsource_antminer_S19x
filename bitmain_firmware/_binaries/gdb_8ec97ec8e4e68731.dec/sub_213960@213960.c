int __fastcall sub_213960(const char *a1, int a2)
{
  const char *v2; // r4
  int v4; // r10
  int v5; // r3
  const char **v6; // r5
  const char *v7; // r6
  int v8; // r11
  const char *v9; // t1
  const char *v10; // t1
  int v12; // [sp+Ch] [bp-10h]
  const char **v13; // [sp+14h] [bp-8h] BYREF

  v2 = a1;
  sub_243C34(a1);
  if ( !v2 )
    return ((int (__fastcall *)(int))loc_212444)(a2);
  v4 = 0;
  if ( a2 )
    v5 = 2;
  else
    v5 = 0;
  v13 = 0;
  v12 = v5;
  sub_25B0DC(&v13, v2);
  v6 = v13;
  if ( !v13 )
  {
    sub_94700((int)"utils.h", 203, "%s: Assertion `%s' failed.", "char* gdb_argv::operator[](int)", "m_argv != NULL");
LABEL_27:
    sub_946E0("Unrecognized argument \"%s\"", v2);
  }
  v2 = *v13;
  if ( !*v13 )
    goto LABEL_25;
  v7 = 0;
  v8 = 8;
  do
  {
    while ( 1 )
    {
      if ( v4 || *v2 != 45 )
      {
        if ( v7 )
          sub_946E0("Unrecognized argument \"%s\"", v2);
        v7 = v2;
        goto LABEL_10;
      }
      if ( strcmp(v2, "-readnow") )
        break;
      v8 |= 4u;
LABEL_10:
      v9 = v6[1];
      ++v6;
      v2 = v9;
      if ( !v9 )
        goto LABEL_19;
    }
    if ( !strcmp(v2, "-readnever") )
    {
      v8 |= 0x80u;
      goto LABEL_10;
    }
    if ( strcmp(v2, "--") )
      goto LABEL_27;
    v10 = v6[1];
    ++v6;
    v2 = v10;
    v4 = 1;
  }
  while ( v10 );
LABEL_19:
  if ( !v7 )
LABEL_25:
    sub_946E0("no symbol file name was specified");
  if ( (v8 & 0x84) == 0x84 )
    sub_946E0("-readnow and -readnever cannot be used simultaneously");
  sub_213910(v7, v12, v8);
  return sub_31DAD0(v13);
}
