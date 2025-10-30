char *__fastcall sub_197488(char *s1, int a2)
{
  int v2; // r2
  int v3; // r5
  int v5; // r1
  int v6; // r3
  char *v7; // r4
  bool v8; // zf
  bool v9; // zf
  int v11; // t1
  bool v12; // zf
  int v13; // r2
  int v14; // r8
  char *v15; // r9
  int v16; // t1

  v2 = (unsigned __int8)*s1;
  if ( !*s1 )
    return (char *)v2;
  v3 = 0;
  v5 = 0;
  while ( v5 )
  {
    v7 = s1 + 1;
    v6 = (unsigned __int8)s1[1];
    if ( v2 == v5 )
    {
LABEL_9:
      if ( v6 )
        goto LABEL_10;
      return (char *)v6;
    }
    if ( v2 == 92 )
    {
      if ( !s1[1] )
        return (char *)v6;
      v11 = (unsigned __int8)s1[2];
      s1 += 2;
      v2 = v11;
    }
    else
    {
      ++s1;
      v2 = v6;
    }
LABEL_6:
    if ( !v2 )
      return (char *)v2;
  }
  v7 = s1;
  v6 = v2;
  while ( 1 )
  {
LABEL_10:
    v8 = v3 == 0;
    if ( !v3 )
      v8 = a2 == v6;
    if ( v8 )
      return v7;
    if ( v6 == 34 || v6 == 39 )
    {
      v5 = v6;
      s1 = v7 + 1;
      v2 = (unsigned __int8)v7[1];
      goto LABEL_6;
    }
    v9 = v6 == 40;
    if ( v6 != 40 )
      v9 = v6 == 60;
    if ( v9 )
    {
      v6 = (unsigned __int8)v7[1];
      ++v3;
      ++v7;
      if ( !v6 )
        return (char *)v6;
    }
    else
    {
      v12 = v6 == 62;
      if ( v6 != 62 )
        v12 = v6 == 41;
      v13 = v12;
      if ( !v3 )
        v13 = 0;
      if ( v13 )
      {
        v6 = (unsigned __int8)v7[1];
        --v3;
        ++v7;
        if ( !v6 )
          return (char *)v6;
      }
      else
      {
        if ( v6 != 111 || v3 || strncmp(v7, "operator", 8u) )
        {
          v6 = (unsigned __int8)*++v7;
          goto LABEL_9;
        }
        v14 = (unsigned __int8)v7[8];
        v15 = v7 + 8;
        if ( v14 == a2 )
          return v15;
        while ( 1 )
        {
          v3 = isspace(v14);
          if ( !v3 )
            break;
          v16 = (unsigned __int8)*++v15;
          v14 = v16;
          if ( v16 == a2 )
            return v15;
        }
        if ( !v14 )
          return 0;
        v7 = v15 + 1;
        v6 = (unsigned __int8)v15[1];
        if ( v14 == 60 )
        {
          if ( v6 != 60 )
            goto LABEL_9;
          if ( a2 == 60 )
            return v7;
        }
        else
        {
          if ( v14 != 62 || v6 != 62 )
            goto LABEL_9;
          if ( a2 == 62 )
            return v7;
        }
        v6 = (unsigned __int8)v15[2];
        v7 = v15 + 2;
        if ( !v15[2] )
          return (char *)v6;
      }
    }
  }
}
