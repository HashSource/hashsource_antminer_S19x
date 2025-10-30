int __fastcall sub_2E0858(int a1, int a2)
{
  _DWORD *v3; // r2
  int v5; // r6
  int v7; // r3
  const char *v8; // r5
  char *v9; // r0
  char *v10; // r7
  int v11; // r0

  if ( *(_DWORD *)(a2 + 32) != -1 )
    return 1;
  v3 = *(_DWORD **)(a1 + 28);
  if ( (*(_BYTE *)(a2 + 49) & 3u) - 1 <= 1 && (unsigned int)*(unsigned __int8 *)(a2 + 12) - 1 > 1 )
  {
    *(_BYTE *)(a2 + 52) |= 8u;
    if ( !v3[13] )
      return 1;
  }
  v5 = v3[21];
  v7 = v3[19];
  *(_DWORD *)(a2 + 32) = v7;
  v3[19] = v7 + 1;
  if ( !v5 )
  {
    v5 = sub_2F00E8(a1);
    *(_DWORD *)(*(_DWORD *)(a1 + 28) + 84) = v5;
    if ( !v5 )
      return 0;
  }
  v8 = *(const char **)(a2 + 4);
  v9 = strchr(v8, 64);
  v10 = v9;
  if ( v9 )
  {
    *v9 = 0;
    v11 = sub_2F0184(v5, v8, 1);
    *v10 = 64;
  }
  else
  {
    v11 = sub_2F0184(v5, v8, 0);
  }
  if ( v11 == -1 )
    return 0;
  *(_DWORD *)(a2 + 56) = v11;
  return 1;
}
