char *__fastcall sub_303E4(int a1, char a2)
{
  unsigned int v2; // r0
  int v4; // r0
  char v8[4]; // [sp+10h] [bp-824h] BYREF
  _DWORD *v9; // [sp+810h] [bp-24h]
  int v10; // [sp+814h] [bp-20h]
  char *s; // [sp+818h] [bp-1Ch]
  _DWORD *v12; // [sp+81Ch] [bp-18h]
  unsigned int k; // [sp+820h] [bp-14h]
  const char *v14; // [sp+824h] [bp-10h]
  char *j; // [sp+828h] [bp-Ch]
  char **i; // [sp+82Ch] [bp-8h]

  if ( a2 && !dword_871E4 )
    dword_871E4 = 1;
  for ( i = &off_85AF8; i[1] != (char *)16; i += 7 )
  {
    if ( ((unsigned int)i[1] & 8) != 0 )
      _assert_fail("!(opt->type & OPT_SUBTABLE)", "cgminer.c", 0x7E2u, "parse_config");
    if ( *i )
    {
      s = strdup(*i);
      for ( j = strtok(s, "|"); j; j = strtok(0, "|") )
      {
        v14 = 0;
        if ( j[1] == 45 )
        {
          v12 = (_DWORD *)sub_652F0(a1, j + 2);
          if ( v12 )
          {
            if ( ((unsigned int)i[1] & 6) != 0 && *v12 == 2 )
            {
              v10 = sub_66AE0(v12);
              v14 = (const char *)((int (__fastcall *)(int, char *))i[3])(v10, i[5]);
              if ( i[1] == (char *)4 )
                sub_5452C(v10, i[5]);
            }
            else if ( ((unsigned int)i[1] & 6) != 0 && *v12 == 1 )
            {
              for ( k = 0; ; ++k )
              {
                v2 = sub_65E3C(v12);
                if ( k >= v2 )
                  break;
                v9 = (_DWORD *)sub_65E88(v12, k);
                if ( !v9 )
                  break;
                if ( *v9 == 2 )
                {
                  v10 = sub_66AE0(v9);
                  v14 = (const char *)((int (__fastcall *)(int, char *))i[3])(v10, i[5]);
                  if ( i[1] == (char *)4 )
                    sub_5452C(v10, i[5]);
                }
                else if ( !*v9 )
                {
                  v14 = (const char *)sub_303E4(v9, 0);
                }
                if ( v14 )
                  break;
              }
            }
            else if ( *v12 == 5 || *v12 == 6 )
            {
              if ( ((unsigned int)i[1] & 1) != 0 )
              {
                v14 = (const char *)((int (__fastcall *)(char *))i[2])(i[5]);
              }
              else if ( *v12 == 5 )
              {
                sub_54370(i[5]);
              }
              else
              {
                sub_543A0(i[5]);
              }
            }
            else
            {
              v14 = "Invalid value";
            }
            if ( v14 )
            {
              if ( !a2 )
              {
                snprintf(byte_88738, 0xC8u, "Parsing JSON option %s: %s", j, v14);
                return byte_88738;
              }
              if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
              {
                snprintf(v8, 0x800u, "Invalid config option %s: %s", j, v14);
                sub_1DB6C(3, v8, 0);
              }
              dword_871E4 = -1;
            }
          }
        }
      }
      free(s);
    }
  }
  v12 = (_DWORD *)sub_652F0(a1, "include");
  if ( !v12 || *v12 != 2 )
    return 0;
  v4 = sub_66AE0(v12);
  return (char *)sub_30900(v4, 0);
}
