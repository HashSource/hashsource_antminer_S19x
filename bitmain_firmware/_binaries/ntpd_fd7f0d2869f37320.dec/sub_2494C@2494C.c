char *__fastcall sub_2494C(char *result, __int16 a2)
{
  char *v2; // r6
  int v3; // r5
  unsigned int v4; // r4
  struct tm *v5; // r0
  size_t v6; // r0
  const char *v7; // r0
  const char *v8; // r0
  const char *v9; // r0
  const char *v10; // r0
  const char *v11; // r0
  const char *v12; // r0
  int v13; // r0
  FILE *v14; // r0
  FILE *v15; // r5
  const char *v16; // r0
  size_t v17; // r0
  int *v18; // r0
  char *v19; // r0
  const char *v20; // r0
  int *v21; // r0
  char *v22; // r0
  const char *v23; // r0
  time_t timer; // [sp+8h] [bp-3A4h] BYREF
  _DWORD v25[2]; // [sp+Ch] [bp-3A0h] BYREF
  char v26[128]; // [sp+14h] [bp-398h] BYREF
  char s[128]; // [sp+94h] [bp-318h] BYREF
  unsigned __int8 v28[144]; // [sp+114h] [bp-298h] BYREF
  char v29[512]; // [sp+1A4h] [bp-208h] BYREF

  v2 = result;
  if ( (a2 & 0x100) != 0 )
  {
    sub_1F604((int)"%s", "saveconfig prohibited by restrict ... nomodify");
    result = (char *)sub_1EDD4(0);
    if ( (ntp_syslogmask & 1) != 0 )
    {
      v9 = (const char *)sub_6D2C0(v2 + 4);
      result = (char *)sub_65D40(5, "saveconfig from %s rejected due to nomodify restriction", v9);
    }
    ++sys_restricted;
  }
  else if ( saveconfigdir )
  {
    v3 = dword_BA408;
    v4 = dword_BA40C - dword_BA408;
    if ( dword_BA40C != dword_BA408 )
    {
      result = (char *)memchr((const void *)dword_BA408, 0, dword_BA40C - dword_BA408);
      if ( !result || (v4 = (unsigned int)&result[-v3], result != (char *)v3) )
      {
        if ( v4 > 0x7F )
        {
          sub_1F604((int)"saveconfig exceeded maximum raw name length (%u)", 128);
          sub_1EDD4(0);
          v8 = (const char *)sub_6D2C0(v2 + 4);
          return (char *)sub_65D40(5, "saveconfig exceeded maximum raw name length from %s", v8);
        }
        else
        {
          _memcpy_chk(v26, v3, v4, 128);
          v26[v4] = 0;
          time(&timer);
          v5 = localtime(&timer);
          if ( !strftime(s, 0x80u, v26, v5) )
            sub_6E4B4(s);
          if ( sub_23338(s) )
          {
            if ( strpbrk(s, "\\/") )
            {
              sub_6D00C(v29, 128, "saveconfig does not allow directory in filename");
              v6 = strlen(v29);
              v25[0] = v29;
              v25[1] = v6;
              sub_1F104((char *)v25, 1, 0);
              sub_1EDD4(0);
              v7 = (const char *)sub_6D2C0(v2 + 4);
              return (char *)sub_65D40(5, "saveconfig rejects unsafe file name from %s", v7);
            }
            else if ( (unsigned int)sub_6D00C(v29, 512, "%s%s", (const char *)saveconfigdir, s) < 0x200 )
            {
              v13 = open64(v29, 705);
              if ( v13 == -1 || (v14 = fdopen(v13, "w"), (v15 = v14) == 0) )
              {
                v18 = _errno_location();
                v19 = strerror(*v18);
                sub_1F604((int)"Unable to save configuration to file '%s': %s", s, v19);
                v20 = (const char *)sub_6D2C0(v2 + 4);
                sub_65D40(3, "saveconfig %s from %s failed", s, v20);
              }
              else
              {
                if ( sub_EE5C(v14, 1) == -1 )
                {
                  v21 = _errno_location();
                  v22 = strerror(*v21);
                  sub_1F604((int)"Unable to save configuration to file '%s': %s", s, v22);
                  v23 = (const char *)sub_6D2C0(v2 + 4);
                  sub_65D40(3, "saveconfig %s from %s failed", s, v23);
                }
                else
                {
                  sub_1F604((int)"Configuration saved to '%s'", s);
                  v16 = (const char *)sub_6D2C0(v2 + 4);
                  sub_65D40(5, "Configuration saved to '%s' (requested by %s)", v29, v16);
                  sub_6D00C(v28, 141, "%s%s", "savedconfig=", s);
                  v17 = strlen((const char *)v28);
                  sub_248E4(v28, v17 + 1, 1);
                }
                fclose(v15);
              }
              return (char *)sub_1EDD4(0);
            }
            else
            {
              sub_1F604((int)"saveconfig exceeded maximum path length (%u)", 512);
              sub_1EDD4(0);
              v12 = (const char *)sub_6D2C0(v2 + 4);
              return (char *)sub_65D40(5, "saveconfig exceeded maximum path length from %s", v12);
            }
          }
          else
          {
            sub_1F604((int)"saveconfig rejects unsafe file name '%s'", s);
            sub_1EDD4(0);
            v10 = (const char *)sub_6D2C0(v2 + 4);
            return (char *)sub_65D40(5, "saveconfig rejects unsafe file name from %s", v10);
          }
        }
      }
    }
  }
  else
  {
    sub_1F604((int)"%s", "saveconfig prohibited, no saveconfigdir configured");
    result = (char *)sub_1EDD4(0);
    if ( (ntp_syslogmask & 1) != 0 )
    {
      v11 = (const char *)sub_6D2C0(v2 + 4);
      return (char *)sub_65D40(5, "saveconfig from %s rejected, no saveconfigdir", v11);
    }
  }
  return result;
}
