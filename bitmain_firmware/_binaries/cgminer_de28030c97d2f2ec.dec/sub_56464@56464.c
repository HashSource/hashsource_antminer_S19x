int __fastcall sub_56464(_DWORD *a1, const char **a2, _DWORD *a3, void (*a4)(const char *, ...))
{
  size_t v5; // r0
  size_t v6; // r0
  size_t n; // [sp+18h] [bp-24h] BYREF
  int v13; // [sp+1Ch] [bp-20h] BYREF
  void *ptr; // [sp+20h] [bp-1Ch]
  const char *v15; // [sp+24h] [bp-18h]
  char *s2; // [sp+28h] [bp-14h]
  int i; // [sp+2Ch] [bp-10h]

  v15 = 0;
  if ( getenv("POSIXLY_CORRECT") )
  {
    i = 1;
  }
  else
  {
    for ( i = 1; a2[i] && *a2[i] != 45; ++i )
      ;
  }
  if ( !a2[i] || *a2[i] != 45 )
    return 0;
  if ( !strcmp(a2[i], "--") )
  {
    sub_563EC(a1, (int)a2, i);
    return 0;
  }
  else
  {
    if ( a2[i][1] == 45 )
    {
      if ( *a3 )
        _assert_fail("*offset == 0", "ccan/opt/parse.c", 0x3Bu, "parse_one");
      for ( s2 = sub_55AB4(&v13, &n); s2; s2 = sub_55B40((int)s2, &v13, &n) )
      {
        if ( !strncmp(a2[i] + 2, s2, n) )
        {
          if ( a2[i][n + 2] == 61 )
          {
            v15 = &a2[i][n + 3];
            break;
          }
          if ( !a2[i][n + 2] )
            break;
        }
      }
      if ( !s2 )
      {
        v5 = strlen(a2[i]);
        return sub_5639C(a4, *a2, a2[i], v5, "unrecognized option");
      }
      s2 -= 2;
      n += 2;
    }
    else
    {
      for ( s2 = sub_55BD4(&v13); s2; s2 = sub_55C4C((int)s2, &v13) )
      {
        if ( a2[i][*a3 + 1] == *s2 )
        {
          ++*a3;
          break;
        }
      }
      if ( !s2 )
      {
        v6 = strlen(a2[i]);
        return sub_5639C(a4, *a2, a2[i], v6, "unrecognized option");
      }
      --s2;
      n = 2;
    }
    if ( *(_DWORD *)(dword_954BC + 28 * v13 + 4) == 1 )
    {
      if ( v15 )
        return sub_5639C(a4, *a2, s2, n, "doesn't allow an argument");
      ptr = (void *)(*(int (__fastcall **)(_DWORD))(dword_954BC + 28 * v13 + 8))(*(_DWORD *)(dword_954BC + 28 * v13 + 20));
    }
    else
    {
      if ( !v15 )
      {
        if ( *a3 && a2[i][*a3 + 1] )
        {
          v15 = &a2[i][*a3 + 1];
          *a3 = 0;
        }
        else
        {
          v15 = a2[i + 1];
        }
      }
      if ( !v15 )
        return sub_5639C(a4, *a2, s2, n, "requires an argument");
      if ( *(_DWORD *)(dword_954BC + 28 * v13 + 4) == 4 )
        sub_551C4((int)v15, *(_DWORD **)(dword_954BC + 28 * v13 + 20));
      ptr = (void *)(*(int (__fastcall **)(const char *, _DWORD))(dword_954BC + 28 * v13 + 12))(
                      v15,
                      *(_DWORD *)(dword_954BC + 28 * v13 + 20));
    }
    if ( ptr )
    {
      sub_5639C(a4, *a2, s2, n, (const char *)ptr);
      free(ptr);
      return -1;
    }
    else
    {
      if ( *a3 && !a2[i][*a3 + 1] )
        *a3 = 0;
      if ( !*a3 )
      {
        sub_563EC(a1, (int)a2, i);
        if ( v15 )
        {
          if ( a2[i] == v15 )
            sub_563EC(a1, (int)a2, i);
        }
      }
      return 1;
    }
  }
}
