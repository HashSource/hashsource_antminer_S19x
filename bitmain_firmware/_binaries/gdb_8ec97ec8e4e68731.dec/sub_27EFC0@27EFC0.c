int __fastcall sub_27EFC0(char *s)
{
  size_t v2; // r0
  char *v3; // r0
  char *v4; // r0
  char *v5; // r2

  if ( dword_48AAA4 )
    free((void *)dword_48AAA4);
  if ( s )
  {
    v2 = strlen(s);
    v3 = (char *)sub_93028(v2 + 1);
    v4 = strcpy(v3, s);
    v5 = v4;
    dword_48AAA4 = (int)v4;
  }
  else
  {
    v5 = "";
    dword_48AAA4 = 0;
    v4 = 0;
  }
  dword_48AE3C = (int)v5;
  dword_48AAA8 = sub_28C950(v4);
  return 0;
}
