int __fastcall sub_A924(char *s, int a2, int a3)
{
  const char *v3; // r7
  _BOOL4 v5; // r3
  char *v6; // r0
  const char *v7; // r0
  int v8; // r2

  v3 = s;
  v5 = ntp_syslogmask == -1;
  if ( !a2 )
    v5 = 0;
  if ( v5 )
    ntp_syslogmask = a2;
  v6 = strrchr(s, 47);
  if ( v6 )
    v3 = v6 + 1;
  v7 = (const char *)sub_97E0(v3);
  progname = (int)v7;
  if ( a3 )
  {
    v8 = 24;
    dword_33314 = 1;
  }
  else
  {
    v8 = dword_33314;
    if ( dword_33314 )
      v8 = 24;
  }
  openlog(v7, 9, v8);
  return setlogmask(255);
}
