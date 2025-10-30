char *__fastcall sub_2F65EC(int a1, int a2, int a3)
{
  int v3; // r4
  const char *v5; // r8
  const char *v6; // r5

  if ( !a3 )
    return sub_2F6568(a1, a2);
  v3 = *(_DWORD *)(a3 + 12);
  if ( v3 )
  {
    v5 = *(const char **)(a2 + 24);
    do
    {
      v6 = *(const char **)v3;
      if ( !strcmp(*(const char **)v3, v5) || *(_DWORD *)(a2 + 28) && !strcmp(v6, *(const char **)(a2 + 28)) )
        break;
      if ( !strncmp(v6, ".gnu.linkonce.wi.", 0x11u) )
        break;
      v3 = *(_DWORD *)(v3 + 12);
    }
    while ( v3 );
  }
  return (char *)v3;
}
