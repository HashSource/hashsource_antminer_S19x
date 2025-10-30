void sub_193C70()
{
  const char *v0; // r5
  int v1; // r0
  __int64 v2; // r0

  v0 = (const char *)dword_4879F8;
  v1 = strcmp((const char *)dword_4879F8, "on");
  if ( !v1 )
  {
    dword_4879F4 = 0;
    dword_4879F0 = 1;
    goto LABEL_3;
  }
  if ( !strcmp(v0, "off") )
  {
    dword_4879F4 = 1;
    v1 = 1;
    dword_4879F0 = 1;
LABEL_3:
    if ( off_46D5A4[0][4] != (char *)v1 )
      sub_946B0("the current case sensitivity setting does not match the language.\n");
    return;
  }
  if ( !strcmp(v0, "auto") )
  {
    dword_4879F0 = 0;
    sub_193C2C();
  }
  else
  {
    v2 = sub_94700((int)"language.c", 351, "Unrecognized case-sensitive setting: \"%s\"", v0);
    sub_193D38(v2, HIDWORD(v2));
  }
}
