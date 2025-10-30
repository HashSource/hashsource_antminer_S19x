bool __fastcall sub_1F92E0(int a1)
{
  const char *v2; // r4

  if ( *(_BYTE *)a1 != 3 )
    return 0;
  v2 = *(const char **)(a1 + 12);
  if ( !v2 )
    return 0;
  if ( !strncmp(*(const char **)(a1 + 12), "&[", 2u) )
    return 1;
  return strcmp(v2, "&str") == 0;
}
