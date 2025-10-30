char *__fastcall sub_25034(const char *a1)
{
  int v2; // r4
  size_t v3; // r6
  int v4; // r5

  v2 = dword_BA8D8;
  v3 = strlen(a1);
  if ( (*(_WORD *)(dword_BA8D8 + 2) & 0x80) != 0 )
    return 0;
  while ( 1 )
  {
    v4 = *(_DWORD *)(v2 + 4);
    if ( v4 && !memcmp(a1, *(const void **)(v2 + 4), v3) )
    {
      if ( *(_BYTE *)(v4 + v3) == 61 )
        return (char *)(v4 + v3 + 1);
      if ( !*(_BYTE *)(v4 + v3) )
        break;
    }
    v2 += 8;
    if ( (*(_WORD *)(v2 + 2) & 0x80) != 0 )
      return 0;
  }
  return byte_99528;
}
