int __fastcall sub_32607C(const char *a1)
{
  const char *v1; // r5
  size_t v2; // r0
  int v3; // r11
  const char *v5; // r4
  const char *v6; // r1
  int v7; // t1
  unsigned int v8; // r0
  _BYTE *v9; // r2
  int v10; // r1
  _BYTE *v11; // r2
  int v12; // r0
  int v13; // t1
  _DWORD v14[4]; // [sp+10h] [bp-14h] BYREF
  _BYTE v15[4]; // [sp+20h] [bp-4h] BYREF

  v1 = a1;
  if ( !a1 )
    return 0;
  v2 = strlen(a1);
  if ( v2 <= 0x13 )
    return 0;
  v5 = &v1[v2 - 19];
  v3 = strncmp(v5, "::h", 3u);
  if ( v3 )
    return 0;
  memset(v14, 0, sizeof(v14));
  if ( v5 + 19 <= v5 + 3 )
  {
    v10 = 0;
  }
  else
  {
    v6 = v5 + 2;
    do
    {
      v7 = *(unsigned __int8 *)++v6;
      v8 = v7 - 97;
      v9 = &v15[v7];
      if ( (unsigned int)(v7 - 48) > 9 )
      {
        if ( v8 > 5 )
          return 0;
        *(v9 - 103) = 1;
      }
      else
      {
        *(v9 - 64) = 1;
      }
    }
    while ( v5 + 18 != v6 );
    v10 = LOBYTE(v14[0]);
  }
  v11 = (char *)v14 + 1;
  v12 = 0;
  while ( 1 )
  {
    if ( v10 )
      ++v12;
    if ( v15 == v11 )
      break;
    v13 = (unsigned __int8)*v11++;
    v10 = v13;
  }
  if ( (unsigned int)(v12 - 5) > 0xA )
    return 0;
  if ( v5 > v1 )
  {
    while ( 2 )
    {
      switch ( *v1 )
      {
        case '$':
          if ( !strncmp(v1, "$C$", 3u) )
          {
            v1 += 3;
            goto LABEL_24;
          }
          if ( !strncmp(v1, "$SP$", 4u)
            || !strncmp(v1, "$BP$", 4u)
            || !strncmp(v1, "$RF$", 4u)
            || !strncmp(v1, "$LT$", 4u)
            || !strncmp(v1, "$GT$", 4u)
            || !strncmp(v1, "$LP$", 4u)
            || !strncmp(v1, "$RP$", 4u) )
          {
            v1 += 4;
            goto LABEL_24;
          }
          if ( !strncmp(v1, "$u20$", 5u)
            || !strncmp(v1, "$u22$", 5u)
            || !strncmp(v1, "$u27$", 5u)
            || !strncmp(v1, "$u2b$", 5u)
            || !strncmp(v1, "$u3b$", 5u)
            || !strncmp(v1, "$u5b$", 5u)
            || !strncmp(v1, "$u5d$", 5u)
            || !strncmp(v1, "$u7b$", 5u)
            || !strncmp(v1, "$u7d$", 5u)
            || !strncmp(v1, "$u7e$", 5u) )
          {
            v1 += 5;
            goto LABEL_24;
          }
          return 0;
        case '.':
          if ( !strncmp(v1, "...", 3u) )
            return 0;
          goto LABEL_23;
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
        case '_':
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
LABEL_23:
          ++v1;
LABEL_24:
          if ( v5 <= v1 )
            return 1;
          continue;
        default:
          return v3;
      }
    }
  }
  return 1;
}
