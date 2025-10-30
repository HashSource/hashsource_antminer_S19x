bool __fastcall sub_19E8AC(int a1)
{
  int v1; // r3
  int v2; // r4
  int v4; // r5

  v1 = *(_DWORD *)(a1 + 24);
  if ( *(_BYTE *)v1 != 3 )
    return 0;
  if ( *(_WORD *)(v1 + 4) != 2 )
    return 0;
  v4 = *(_DWORD *)(v1 + 24);
  v2 = strcmp(*(const char **)(v4 + 16), "_m2_contents");
  if ( v2 )
    return 0;
  if ( !strcmp(*(const char **)(v4 + 40), "_m2_high") )
    return **(_BYTE **)(*(_DWORD *)(v4 + 12) + 24) == 1;
  return v2;
}
