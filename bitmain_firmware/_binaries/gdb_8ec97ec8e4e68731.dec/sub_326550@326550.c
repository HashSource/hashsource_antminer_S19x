const char *__fastcall sub_326550(const char *result)
{
  const char *v1; // r4
  const char *v2; // r5
  const char *v3; // r3
  const char *v4; // r1
  char *v5; // r2
  int v6; // r2
  char *v7; // r3
  char *v8; // r3
  char *v9; // r3
  const char *v10; // [sp+0h] [bp-8h] BYREF
  const char *v11; // [sp+4h] [bp-4h] BYREF

  v1 = result;
  if ( result )
  {
    v10 = result;
    v11 = result;
    result = (const char *)(strlen(result) - 19);
    v2 = &result[(_DWORD)v1];
    v3 = v1;
    while ( 2 )
    {
      if ( v2 > v3 )
      {
        switch ( *v3 )
        {
          case '$':
            result = (const char *)sub_32601C(&v10, (_BYTE **)&v11, "$C$", 44);
            if ( !result )
            {
              result = (const char *)sub_32601C(&v10, (_BYTE **)&v11, "$SP$", 64);
              if ( !result )
              {
                result = (const char *)sub_32601C(&v10, (_BYTE **)&v11, "$BP$", 42);
                if ( !result )
                {
                  result = (const char *)sub_32601C(&v10, (_BYTE **)&v11, "$RF$", 38);
                  if ( !result )
                  {
                    result = (const char *)sub_32601C(&v10, (_BYTE **)&v11, "$LT$", 60);
                    if ( !result )
                    {
                      result = (const char *)sub_32601C(&v10, (_BYTE **)&v11, "$GT$", 62);
                      if ( !result )
                      {
                        result = (const char *)sub_32601C(&v10, (_BYTE **)&v11, "$LP$", 40);
                        if ( !result )
                        {
                          result = (const char *)sub_32601C(&v10, (_BYTE **)&v11, "$RP$", 41);
                          if ( !result )
                          {
                            result = (const char *)sub_32601C(&v10, (_BYTE **)&v11, "$u20$", 32);
                            if ( !result )
                            {
                              result = (const char *)sub_32601C(&v10, (_BYTE **)&v11, "$u22$", 34);
                              if ( !result )
                              {
                                result = (const char *)sub_32601C(&v10, (_BYTE **)&v11, "$u27$", 39);
                                if ( !result )
                                {
                                  result = (const char *)sub_32601C(&v10, (_BYTE **)&v11, "$u2b$", 43);
                                  if ( !result )
                                  {
                                    result = (const char *)sub_32601C(&v10, (_BYTE **)&v11, "$u3b$", 59);
                                    if ( !result )
                                    {
                                      result = (const char *)sub_32601C(&v10, (_BYTE **)&v11, "$u5b$", 91);
                                      if ( !result )
                                      {
                                        result = (const char *)sub_32601C(&v10, (_BYTE **)&v11, "$u5d$", 93);
                                        if ( !result )
                                        {
                                          result = (const char *)sub_32601C(&v10, (_BYTE **)&v11, "$u7b$", 123);
                                          if ( !result )
                                          {
                                            result = (const char *)sub_32601C(&v10, (_BYTE **)&v11, "$u7d$", 125);
                                            if ( !result )
                                            {
                                              result = (const char *)sub_32601C(&v10, (_BYTE **)&v11, "$u7e$", 126);
                                              if ( !result )
                                                goto LABEL_31;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            goto LABEL_10;
          case '.':
            v6 = *((unsigned __int8 *)v3 + 1);
            v7 = (char *)v11++;
            if ( v6 == 46 )
            {
              *v7 = 58;
              v9 = (char *)v11++;
              *v9 = 58;
              v3 = v10 + 2;
              v10 += 2;
            }
            else
            {
              *v7 = 45;
              v3 = ++v10;
            }
            continue;
          case '0':
          case '1':
          case '2':
          case '3':
          case '4':
          case '5':
          case '6':
          case '7':
          case '8':
          case '9':
          case ':':
          case 'A':
          case 'B':
          case 'C':
          case 'D':
          case 'E':
          case 'F':
          case 'G':
          case 'H':
          case 'I':
          case 'J':
          case 'K':
          case 'L':
          case 'M':
          case 'N':
          case 'O':
          case 'P':
          case 'Q':
          case 'R':
          case 'S':
          case 'T':
          case 'U':
          case 'V':
          case 'W':
          case 'X':
          case 'Y':
          case 'Z':
          case 'a':
          case 'b':
          case 'c':
          case 'd':
          case 'e':
          case 'f':
          case 'g':
          case 'h':
          case 'i':
          case 'j':
          case 'k':
          case 'l':
          case 'm':
          case 'n':
          case 'o':
          case 'p':
          case 'q':
          case 'r':
          case 's':
          case 't':
          case 'u':
          case 'v':
          case 'w':
          case 'x':
          case 'y':
          case 'z':
            v5 = (char *)v11;
            v4 = v3 + 1;
            goto LABEL_9;
          case '_':
            v4 = v3 + 1;
            if ( (v1 == v3 || *(v3 - 1) == 58) && v3[1] == 36 )
            {
              v10 = ++v3;
            }
            else
            {
              v5 = (char *)v11;
LABEL_9:
              v10 = v4;
              v11 = v5 + 1;
              *v5 = *v3;
LABEL_10:
              v3 = v10;
            }
            continue;
          default:
LABEL_31:
            v8 = (char *)v11++;
            *v8 = 63;
            goto LABEL_32;
        }
      }
      break;
    }
LABEL_32:
    *v11 = 0;
  }
  return result;
}
