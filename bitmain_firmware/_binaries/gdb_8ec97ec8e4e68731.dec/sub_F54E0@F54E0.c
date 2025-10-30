bool __fastcall sub_F54E0(int a1, const char *a2)
{
  const char *v4; // r5
  size_t v5; // r0

  if ( !*(_BYTE *)(a1 + 104) )
    return 0;
  v4 = *(const char **)(a1 + 100);
  v5 = strlen(v4);
  return !sub_25BD08(a2, v4, v5) && a2[strlen(a2) - 1] == 32;
}
