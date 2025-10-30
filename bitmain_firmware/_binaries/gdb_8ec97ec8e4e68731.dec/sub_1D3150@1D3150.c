int __fastcall sub_1D3150(char *a1)
{
  char *v1; // r0
  int v2; // r4
  char *v3; // r5
  int v4; // r6
  int v5; // t1
  int v6; // t1
  int v7; // t1
  int v8; // r4
  __int64 v9; // r0
  __int64 v10; // r8
  int v11; // r0
  char *v13; // r0
  int v14; // r3
  int v15; // r3
  __int64 v16; // r0
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
LABEL_15:
        sub_946E0("Missing modifier.");
      v4 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( isspace(v2) )
          {
LABEL_13:
            v1 = (char *)sub_9360C(v3);
            if ( *v1 != 47 )
              goto LABEL_21;
            v2 = (unsigned __int8)v1[1];
            v3 = v1 + 1;
            if ( !v1[1] )
              goto LABEL_15;
          }
          if ( v2 != 47 )
            break;
LABEL_12:
          v5 = (unsigned __int8)*++v3;
          v2 = v5;
          if ( !v5 )
            goto LABEL_13;
        }
        switch ( v2 )
        {
          case 'i':
            v4 |= 2u;
            goto LABEL_12;
          case 'l':
            v7 = (unsigned __int8)*++v3;
            v2 = v7;
            v4 |= 1u;
            if ( !v7 )
              goto LABEL_13;
            break;
          case 'c':
            v6 = (unsigned __int8)*++v3;
            v2 = v6;
            v4 |= 4u;
            if ( !v6 )
              goto LABEL_13;
            break;
          default:
            sub_946E0("Invalid modifier: %c.", v2);
        }
      }
    }
    v4 = 0;
LABEL_21:
    s1 = v1;
  }
  else
  {
    v4 = 0;
  }
  v8 = dword_46DAAC;
  if ( dword_46DAAC + 0x80000000 <= 0x7FFFFFFE )
  {
    sub_161BC();
    goto LABEL_46;
  }
  if ( dword_46DAAC == -1 )
    v8 = 0x7FFFFFFF;
  if ( !s1 || !*s1 || !strcmp(s1, "+") )
    return sub_232840(v8, v4);
  if ( strcmp(s1, (const char *)&word_3C1464) )
  {
    v9 = sub_1D2F44(&s1);
    v10 = v9;
    if ( *s1 != 44 )
    {
      if ( *s1 )
        sub_946E0("Junk after argument: %s.", s1);
      v11 = sub_232868(v9, HIDWORD(v9), v8, v4);
      return sub_243C34(v11);
    }
    v13 = (char *)sub_9360C(++s1);
    s1 = v13;
    v14 = (unsigned __int8)*v13;
    if ( v14 == 43 )
    {
      s1 = v13 + 1;
      LODWORD(v16) = sub_1D2EF4(&s1);
      HIDWORD(v16) = s1;
      if ( !*s1 )
      {
        v11 = sub_232868(v10, HIDWORD(v10), v16, v4);
        return sub_243C34(v11);
      }
    }
    else if ( v14 == 45 )
    {
      s1 = v13 + 1;
      LODWORD(v16) = sub_1D2EF4(&s1);
      HIDWORD(v16) = s1;
      if ( !*s1 )
      {
        v11 = sub_232868(v10, HIDWORD(v10), -(int)v16, v4);
        return sub_243C34(v11);
      }
    }
    else
    {
      v16 = sub_1D2F44(&s1);
      v15 = HIDWORD(v16);
      HIDWORD(v16) = s1;
      if ( !*s1 )
      {
        v11 = sub_23289C(v10, HIDWORD(v10), v16, v15, v4);
        return sub_243C34(v11);
      }
    }
LABEL_46:
    sub_946E0("Junk after argument: %s.", (const char *)HIDWORD(v16));
  }
  return sub_232840(-v8, v4);
}
