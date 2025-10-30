size_t __fastcall sub_FE758(char *s, int a2)
{
  int v4; // r3
  int v5; // r0
  int v6; // r4
  unsigned int v8; // r3
  char *v9; // r2
  unsigned int v10; // t1
  int v11; // r4
  int v12; // r3
  int v13; // r2
  int v14; // r4
  int v15; // r3

  v4 = (unsigned __int8)*s;
  v5 = 1;
  v6 = 0;
  while ( 2 )
  {
    switch ( v4 )
    {
      case 0:
        return v6;
      case 32:
      case 38:
      case 42:
      case 44:
      case 46:
        goto LABEL_3;
      case 40:
        v14 = v6 + 1;
        while ( 2 )
        {
          v6 = v14 + sub_FE758(&s[v14]);
          v15 = (unsigned __int8)s[v6];
          if ( v15 == 41 )
            goto LABEL_3;
          if ( v15 == 58 )
          {
            v14 = v6 + 2;
            continue;
          }
          goto LABEL_25;
        }
      case 41:
      case 62:
        if ( a2 )
          return v6;
        goto LABEL_25;
      case 58:
        v13 = v6 + 1;
        v4 = (unsigned __int8)s[v6 + 1];
        if ( v4 != 58 )
          goto LABEL_20;
        return v6;
      case 60:
        v11 = v6 + 1;
LABEL_16:
        v6 = v11 + sub_FE758(&s[v11]);
        v12 = (unsigned __int8)s[v6];
        if ( v12 == 62 )
        {
LABEL_3:
          ++v6;
          v5 = 1;
          v4 = (unsigned __int8)s[v6];
          continue;
        }
        if ( v12 == 58 )
        {
          v11 = v6 + 2;
          goto LABEL_16;
        }
LABEL_25:
        if ( dword_47AC88 > 0 )
          sub_F43B4(&off_46D334, "unexpected demangled name '%s'", s);
        return strlen(s);
      case 111:
        if ( !v5 )
          goto LABEL_29;
        v5 = strncmp(&s[v6], "operator", 8u);
        if ( v5 )
        {
LABEL_28:
          ++v6;
          v5 = 0;
          v4 = (unsigned __int8)s[v6];
        }
        else
        {
          v6 += 8;
          v8 = (unsigned __int8)s[v6];
          v9 = &s[v6];
          if ( (word_438898[v8] & 0x40) != 0 )
          {
            do
            {
              v10 = (unsigned __int8)*++v9;
              v8 = v10;
              ++v6;
            }
            while ( (word_438898[v10] & 0x40) != 0 );
          }
          if ( v8 == 45 )
          {
LABEL_32:
            v13 = v6 + 1;
            v4 = (unsigned __int8)s[v6 + 1];
            if ( v4 == 62 )
              goto LABEL_14;
LABEL_20:
            v6 = v13;
            continue;
          }
          if ( v8 <= 0x2D )
          {
            if ( !v8 )
              return v6;
            if ( v8 == 40 )
            {
LABEL_14:
              v6 += 2;
              v4 = (unsigned __int8)s[v6];
              continue;
            }
            goto LABEL_29;
          }
          if ( v8 == 60 )
          {
            v13 = v6 + 1;
            v4 = (unsigned __int8)s[v6 + 1];
            if ( v4 == 60 )
              goto LABEL_14;
            goto LABEL_20;
          }
          if ( v8 == 62 )
            goto LABEL_32;
LABEL_29:
          v4 = (unsigned __int8)s[++v6];
        }
        continue;
      default:
        goto LABEL_28;
    }
  }
}
