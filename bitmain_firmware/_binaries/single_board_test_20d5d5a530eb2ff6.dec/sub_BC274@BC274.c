int __fastcall sub_BC274(int s2, _DWORD *a2)
{
  int v2; // r7
  const char *v3; // r6
  int v5; // r4
  int v6; // r5
  const char *v7; // r0

  if ( s2 )
  {
    v2 = dword_6DF3EC;
    if ( dword_6DF3EC )
    {
      v3 = (const char *)s2;
      v5 = dword_6DF3E8 + 12;
      v6 = 0;
      while ( 1 )
      {
        v7 = *(const char **)(v5 - 12);
        v5 += 12;
        if ( !strcmp(v7, v3) )
          break;
        if ( ++v6 == v2 )
          return 0;
      }
      *a2 = v6;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return s2;
}
