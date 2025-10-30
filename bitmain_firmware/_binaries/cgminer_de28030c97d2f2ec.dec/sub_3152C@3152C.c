char *__fastcall sub_3152C(int a1, char a2)
{
  unsigned int v2; // r0
  int v4; // r0
  char v8[4]; // [sp+10h] [bp-824h] BYREF
  _DWORD *v9; // [sp+810h] [bp-24h]
  int v10; // [sp+814h] [bp-20h]
  _DWORD *v11; // [sp+818h] [bp-1Ch]
  char *s; // [sp+81Ch] [bp-18h]
  unsigned int k; // [sp+820h] [bp-14h]
  const char *v14; // [sp+824h] [bp-10h]
  char *j; // [sp+828h] [bp-Ch]
  char **i; // [sp+82Ch] [bp-8h]

  if ( a2 && !dword_8837C )
    dword_8837C = 1;
  for ( i = &off_86C90; i[1] != (char *)16; i += 7 )
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
          v11 = (_DWORD *)sub_65FEC(a1, j + 2);
          if ( v11 )
          {
            if ( ((unsigned int)i[1] & 6) != 0 && *v11 == 2 )
            {
              v10 = sub_677D0(v11);
              v14 = (const char *)((int (__fastcall *)(int, char *))i[3])(v10, i[5]);
              if ( i[1] == (char *)4 )
                sub_551C4(v10, i[5]);
            }
            else if ( ((unsigned int)i[1] & 6) != 0 && *v11 == 1 )
            {
              for ( k = 0; ; ++k )
              {
                v2 = sub_66B34(v11);
                if ( v2 <= k )
                  break;
                v9 = (_DWORD *)sub_66B80(v11, k);
                if ( !v9 )
                  break;
                if ( *v9 == 2 )
                {
                  v10 = sub_677D0(v9);
                  v14 = (const char *)((int (__fastcall *)(int, char *))i[3])(v10, i[5]);
                  if ( i[1] == (char *)4 )
                    sub_551C4(v10, i[5]);
                }
                else if ( !*v9 )
                {
                  v14 = (const char *)sub_3152C(v9, 0);
                }
                if ( v14 )
                  break;
              }
            }
            else if ( *v11 == 5 || *v11 == 6 )
            {
              if ( ((unsigned int)i[1] & 1) != 0 )
              {
                v14 = (const char *)((int (__fastcall *)(char *))i[2])(i[5]);
              }
              else if ( *v11 == 5 )
              {
                sub_55008(i[5]);
              }
              else
              {
                sub_55038(i[5]);
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
                snprintf(byte_898D0, 0xC8u, "Parsing JSON option %s: %s", j, v14);
                return byte_898D0;
              }
              if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
              {
                snprintf(v8, 0x800u, "Invalid config option %s: %s", j, v14);
                sub_1E4EC(3, v8, 0);
              }
              dword_8837C = -1;
            }
          }
        }
      }
      free(s);
    }
  }
  v11 = (_DWORD *)sub_65FEC(a1, "include");
  if ( !v11 || *v11 != 2 )
    return 0;
  v4 = sub_677D0(v11);
  return (char *)sub_31A40(v4, 0);
}
