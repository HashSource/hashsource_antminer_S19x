char *__fastcall sub_1FC14(const char *a1, int a2)
{
  char *v6; // [sp+Ch] [bp-10h]
  size_t n; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  *(_DWORD *)(a2 + 184) = 0;
  for ( i = 0; (&off_85A0C)[2 * i]; ++i )
  {
    n = strlen((&off_85A0C)[2 * i]);
    if ( !strncmp(a1, (&off_85A0C)[2 * i], n) )
    {
      v6 = strchr(a1, 124);
      if ( !v6 )
        return (char *)a1;
      *v6 = 0;
      *(_DWORD *)(a2 + 184) = sub_1F934(v6 - a1 - n + 1, "util.c", "get_proxy", 748);
      strcpy(*(char **)(a2 + 184), &a1[n]);
      sub_21EF8(*(_DWORD *)(a2 + 184), a2 + 604, a2 + 608);
      *(_DWORD *)(a2 + 180) = (&off_85A0C)[2 * i + 1];
      return v6 + 1;
    }
  }
  return (char *)a1;
}
