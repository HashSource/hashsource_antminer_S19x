ssize_t __fastcall sub_551D0(ssize_t result, char *s)
{
  int v2; // r5
  int v3; // r6
  size_t v5; // r8

  v2 = *(_DWORD *)(result + 84);
  v3 = result;
  if ( (*(_BYTE *)(v2 + 768) & 1) == 0 )
  {
    v5 = strlen(s);
    sub_55098(v3, (int)"Send '%s'\n", s);
    result = write(*(_DWORD *)(v2 + 28), s, v5);
    if ( result == v5 )
      ++*(_DWORD *)(v2 + 776);
    else
      return sub_39C88(v3, 3);
  }
  return result;
}
