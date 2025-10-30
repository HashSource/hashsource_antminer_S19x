bool __fastcall sub_A23E8(int a1)
{
  char *v1; // r2
  int v2; // r3
  const char *v3; // r4

  v1 = *(char **)(a1 + 24);
  v2 = *v1;
  if ( v2 == 20 )
    return 1;
  v3 = (const char *)*((_DWORD *)v1 + 2);
  if ( !v3 )
  {
    v3 = (const char *)*((_DWORD *)v1 + 3);
    if ( !v3 )
      return 0;
  }
  if ( (v2 & 0xFFFFFFFB) != 8 )
    return 0;
  if ( !strcmp(v3, "character") || !strcmp(v3, "wide_character") || !strcmp(v3, "wide_wide_character") )
    return 1;
  return strcmp(v3, "unsigned char") == 0;
}
