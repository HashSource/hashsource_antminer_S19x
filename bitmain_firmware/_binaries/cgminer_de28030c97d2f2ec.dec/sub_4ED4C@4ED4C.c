int __fastcall sub_4ED4C(const char *a1)
{
  size_t v1; // r0
  char v4[32]; // [sp+10h] [bp-984h] BYREF
  char v5[20]; // [sp+30h] [bp-964h] BYREF
  char command[64]; // [sp+830h] [bp-164h] BYREF
  char s[256]; // [sp+870h] [bp-124h] BYREF
  int v8; // [sp+970h] [bp-24h]
  size_t n; // [sp+974h] [bp-20h]
  FILE *stream; // [sp+978h] [bp-1Ch]
  size_t i; // [sp+97Ch] [bp-18h]
  size_t v12; // [sp+980h] [bp-14h]
  int v13; // [sp+984h] [bp-10h]

  memset(s, 0, sizeof(s));
  v13 = 0;
  memset(command, 0, sizeof(command));
  snprintf(command, 0x40u, "pidof %s", a1);
  stream = popen(command, "r");
  if ( stream )
  {
    while ( fgets(s, 256, stream) )
    {
      if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        snprintf(v5, 0x800u, "pidof %s command result is: %s\n", a1, s);
        sub_1E4EC(7, v5, 0);
      }
      if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        v1 = strlen(s);
        snprintf(v5, 0x800u, "strlen is: %d\n", v1);
        sub_1E4EC(7, v5, 0);
      }
    }
    pclose(stream);
    stream = 0;
    v12 = 0;
    for ( i = 1; i <= strlen(s); ++i )
    {
      memset(v4, 0, sizeof(v4));
      if ( ((*_ctype_b_loc())[(unsigned __int8)s[i - 1]] & 0x2000) != 0 )
      {
        n = i - v12 - 1;
        strncpy(v4, &s[v12], n);
        v12 = i;
        v8 = atoi(v4);
        if ( v8 > 0 )
        {
          ++v13;
          if ( byte_87768 )
          {
            if ( byte_91F58 || byte_87769 || dword_8697C > 6 )
            {
              snprintf(v5, 0x800u, "Parsed proc id is: %d\n", v8);
              sub_1E4EC(7, v5, 0);
            }
          }
        }
      }
    }
  }
  else if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    snprintf(v5, 0x800u, " app-service:%s Not Found!!!", a1);
    sub_1E4EC(7, v5, 0);
  }
  if ( v13 > 0 && (byte_91F58 || byte_87769 || dword_8697C > 2) )
  {
    snprintf(v5, 0x800u, " %d instance of %s is  already Running on this machine", v13, a1);
    sub_1E4EC(3, v5, 0);
  }
  return v13;
}
