int sub_EF454()
{
  char *v1; // r0
  const char *v2; // r7
  char *v3; // r5
  iconv_t v4; // r0
  char *v5; // r0
  const char *v6; // r7

  if ( dword_4789A0 )
    return dword_4789A0;
  v1 = sub_93140("UTF-%d%s", 32, "LE");
  v2 = off_46C0F8[0];
  v3 = v1;
  if ( !strcmp(off_46C0F8[0], "auto") )
    v2 = off_46C0F4[0];
  v4 = iconv_open(v3, v2);
  if ( v4 == (iconv_t)-1 )
  {
    if ( v3 )
      free(v3);
    v5 = sub_93140("UCS-%d%s", 4, "LE");
    v6 = off_46C0F8[0];
    v3 = v5;
    if ( !strcmp(off_46C0F8[0], "auto") )
      v6 = off_46C0F4[0];
    v4 = iconv_open(v3, v6);
    if ( v4 == (iconv_t)-1 )
    {
      if ( v3 )
        free(v3);
      sub_946E0("Unable to find a vaild charset for string conversions");
    }
  }
  iconv_close(v4);
  dword_4789A0 = (int)v3;
  return (int)v3;
}
