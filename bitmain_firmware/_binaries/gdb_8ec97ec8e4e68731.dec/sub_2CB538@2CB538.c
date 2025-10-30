bool __fastcall sub_2CB538(int a1, char *s1)
{
  const char *v2; // r4

  v2 = s1;
  if ( *(_BYTE *)(a1 + 24) )
  {
    if ( *s1 != *(_BYTE *)(a1 + 24) )
      return 0;
    v2 = s1 + 1;
  }
  return !strcmp(v2, "__GOTT_BASE__") || strcmp(v2, "__GOTT_INDEX__") == 0;
}
