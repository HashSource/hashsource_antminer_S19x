bool __fastcall sub_A1938(int a1, int a2)
{
  const char *v2; // r4

  v2 = *(const char **)(*(_DWORD *)(*(_DWORD *)(sub_A0870(a1) + 24) + 24) + 24 * a2 + 16);
  if ( !v2 )
    return 0;
  if ( !strncmp(v2, "PARENT", 6u) )
    return 1;
  return strncmp(v2, "_parent", 7u) == 0;
}
