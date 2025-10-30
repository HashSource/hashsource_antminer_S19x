__int16 *__fastcall sub_53E04(__int16 *result, char *s)
{
  int v2; // r5
  __int16 *v3; // r6
  size_t v5; // r8

  v2 = *((_DWORD *)result + 21);
  if ( (*(_BYTE *)(v2 + 768) & 1) == 0 )
  {
    v3 = result;
    v5 = strlen(s);
    sub_53CC4((int)v3, (int)"Send '%s'\n", s);
    result = (__int16 *)write(*(_DWORD *)(v2 + 28), s, v5);
    if ( result == (__int16 *)v5 )
      ++*(_DWORD *)(v2 + 776);
    else
      return sub_394A0(v3, 3);
  }
  return result;
}
