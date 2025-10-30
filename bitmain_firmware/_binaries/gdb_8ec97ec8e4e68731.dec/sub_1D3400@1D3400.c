int __fastcall sub_1D3400(char *a1)
{
  char *v1; // r0
  int v2; // r4
  char *v3; // r5
  int v4; // r6
  int v5; // t1
  int v6; // r4
  __int64 v7; // r0
  __int64 v8; // r8
  int v9; // r0
  char *v11; // r0
  int v12; // r3
  int v13; // r3
  __int64 v14; // r0
  char *s1; // [sp+Ch] [bp-4h] BYREF

  s1 = a1;
  sub_1D2E50();
  v1 = s1;
  if ( s1 )
  {
    if ( *s1 == 47 )
    {
      v2 = (unsigned __int8)s1[1];
      v3 = s1 + 1;
      if ( !s1[1] )
LABEL_12:
        sub_946E0("Missing modifier.");
      v4 = 0;
      while ( 1 )
      {
        do
        {
          if ( isspace(v2) )
            break;
          if ( v2 != 47 )
          {
            switch ( v2 )
            {
              case 'f':
                v4 |= 4u;
                break;
              case 'm':
              case 's':
                v4 |= 0x28u;
                break;
              case 'p':
                v4 |= 0x10u;
                break;
              case 'r':
                v4 |= 2u;
                break;
              default:
                sub_946E0("Invalid modifier: %c.", v2);
            }
          }
          v5 = (unsigned __int8)*++v3;
          v2 = v5;
        }
        while ( v5 );
        v1 = (char *)sub_9360C(v3);
        if ( *v1 != 47 )
          break;
        v2 = (unsigned __int8)v1[1];
        v3 = v1 + 1;
        if ( !v1[1] )
          goto LABEL_12;
      }
    }
    else
    {
      v4 = 0;
    }
    s1 = v1;
  }
  else
  {
    v4 = 0;
  }
  v6 = dword_46DAB0;
  if ( dword_46DAB0 + 0x80000000 <= 0x7FFFFFFE )
  {
    sub_161BC();
    goto LABEL_43;
  }
  if ( dword_46DAB0 == -1 )
    v6 = 0x7FFFFFFF;
  if ( !s1 || !*s1 || !strcmp(s1, "+") )
    return sub_2327AC(v6, v4);
  if ( strcmp(s1, (const char *)&word_3C1464) )
  {
    v7 = sub_1D2F44(&s1);
    v8 = v7;
    if ( *s1 != 44 )
    {
      if ( *s1 )
        sub_946E0("Junk after argument: %s.", s1);
      v9 = sub_2327D4(v7, HIDWORD(v7), v6, v4);
      return sub_243C34(v9);
    }
    v11 = (char *)sub_9360C(++s1);
    s1 = v11;
    v12 = (unsigned __int8)*v11;
    if ( v12 == 43 )
    {
      s1 = v11 + 1;
      LODWORD(v14) = sub_1D2EF4(&s1);
      HIDWORD(v14) = s1;
      if ( !*s1 )
      {
        v9 = sub_2327D4(v8, HIDWORD(v8), v14, v4);
        return sub_243C34(v9);
      }
    }
    else if ( v12 == 45 )
    {
      s1 = v11 + 1;
      LODWORD(v14) = sub_1D2EF4(&s1);
      HIDWORD(v14) = s1;
      if ( !*s1 )
      {
        v9 = sub_2327D4(v8, HIDWORD(v8), -(int)v14, v4);
        return sub_243C34(v9);
      }
    }
    else
    {
      v14 = sub_1D2F44(&s1);
      v13 = HIDWORD(v14);
      HIDWORD(v14) = s1;
      if ( !*s1 )
      {
        v9 = sub_232808(v8, HIDWORD(v8), v14, v13, v4);
        return sub_243C34(v9);
      }
    }
LABEL_43:
    sub_946E0("Junk after argument: %s.", (const char *)HIDWORD(v14));
  }
  return sub_2327AC(-v6, v4);
}
