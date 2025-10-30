const char *__fastcall sub_9D510(int a1, int a2)
{
  char *v2; // r12
  char *v3; // r2
  int v4; // r3
  const char *result; // r0
  const char *v6; // r1

  v2 = *(char **)(a2 + 24);
  v3 = *(char **)(a1 + 24);
  v4 = *v2;
  if ( v4 != *v3 || (((_BYTE)v4 - 3) & 0xFD) != 0 )
    return 0;
  result = (const char *)*((_DWORD *)v3 + 2);
  if ( result || (result = (const char *)*((_DWORD *)v3 + 3)) != 0 )
  {
    v6 = (const char *)*((_DWORD *)v2 + 2);
    if ( v6 )
      return (const char *)(strcmp(result, v6) == 0);
    v6 = (const char *)*((_DWORD *)v2 + 3);
    if ( v6 )
      return (const char *)(strcmp(result, v6) == 0);
    return 0;
  }
  return result;
}
