int sub_56CF4()
{
  const char *v0; // r5
  const char *v1; // r0

  if ( dword_4747F4 )
  {
    sub_259858("Currently logging to \"%s\".\n", (const char *)dword_4747F4);
    v0 = (const char *)dword_4747F0;
    if ( dword_4747F4 && !strcmp((const char *)dword_4747F0, (const char *)dword_4747F4) )
      goto LABEL_4;
  }
  else
  {
    v0 = (const char *)dword_4747F0;
  }
  sub_259858("Future logs will be written to %s.\n", v0);
LABEL_4:
  if ( dword_4747F8 )
    LOWORD(v1) = 32128;
  else
    LOWORD(v1) = 32164;
  HIWORD(v1) = 53;
  sub_259858(v1);
  if ( dword_4747FC )
    return sub_259858("Output will be sent only to the log file.\n");
  else
    return sub_259858("Output will be logged and displayed.\n");
}
