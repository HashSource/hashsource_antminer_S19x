int __fastcall sub_AF748(int a1, int a2)
{
  int v3; // r5
  int v4; // r4
  int v6; // r6
  int v7; // r7
  int v8; // r3
  int v9; // r1
  int v10; // r0

  if ( a2 == a1 )
    return a2;
  v3 = a1;
  v4 = a1 + 8;
  if ( a2 == a1 + 8 )
    return a2;
  while ( *(_DWORD *)(v4 - 4) != *(_DWORD *)(v4 + 4) || strcmp(*(const char **)(v4 - 8), *(const char **)v4) )
  {
    v3 = v4;
    v4 += 8;
    if ( a2 == v4 )
      return a2;
  }
  if ( a2 == v3 )
    return a2;
  v6 = v4;
  v7 = v4 + a2 - (v3 + 16);
  while ( v6 != v7 )
  {
    if ( *(_DWORD *)(v3 + 4) != *(_DWORD *)(v6 + 12)
      || (v10 = strcmp(*(const char **)v3, *(const char **)(v6 + 8)), v8 = v6 + 8, v10) )
    {
      v8 = v6 + 8;
      v3 = v4;
      v9 = *(_DWORD *)(v6 + 12);
      *(_DWORD *)v4 = *(_DWORD *)(v6 + 8);
      *(_DWORD *)(v4 + 4) = v9;
      v4 += 8;
    }
    v6 = v8;
  }
  return v4;
}
