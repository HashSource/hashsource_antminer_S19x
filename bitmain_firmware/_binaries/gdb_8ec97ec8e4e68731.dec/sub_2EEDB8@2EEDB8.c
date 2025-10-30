const char **__fastcall sub_2EEDB8(int a1, int a2, int a3)
{
  int v3; // r4
  const char **result; // r0
  char *v7; // r1

  v3 = *(_DWORD *)(*(_DWORD *)(a2 + 140) + 112);
  if ( v3 )
    return (const char **)v3;
  v7 = sub_2DF24C(a1, *(const char **)a2, a3);
  if ( !v7 )
    return (const char **)v3;
  result = sub_2AD864(a1, v7);
  if ( result )
    *(_DWORD *)(*(_DWORD *)(a2 + 140) + 112) = result;
  return result;
}
