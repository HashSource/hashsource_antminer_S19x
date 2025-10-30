int __fastcall sub_A2CAC(int a1, int a2)
{
  int v2; // r3
  int v3; // r4
  const char *v4; // r3
  int result; // r0
  int v7; // r4
  const char *v8; // r0

  if ( a2 < 0 )
    return 1;
  v2 = *(_DWORD *)(a1 + 24);
  if ( *(__int16 *)(v2 + 4) < a2 )
    return 1;
  v3 = 24 * a2;
  v4 = *(const char **)(*(_DWORD *)(v2 + 24) + 24 * a2 + 16);
  if ( !v4 || *v4 == 95 && strncmp(v4, "_parent", 7u) )
    return 1;
  result = sub_A2974(a1, "_tag", 1, 1);
  if ( !result )
    return result;
  v7 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + v3 + 12) + 24);
  if ( *(_BYTE *)v7 == 1 )
  {
    v8 = *(const char **)(*(_DWORD *)(*(_DWORD *)(v7 + 20) + 24) + 8);
    if ( v8 )
    {
      if ( !strcmp(v8, "ada__tags__dispatch_table") )
        return 1;
    }
  }
  result = *(_DWORD *)(v7 + 8);
  if ( result )
    return strcmp((const char *)result, "ada__tags__interface_tag") == 0;
  return result;
}
