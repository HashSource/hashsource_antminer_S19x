bool __fastcall sub_17C4C8(_DWORD *a1)
{
  int v1; // r0
  int v2; // r3
  int v4; // r3
  int v5; // r4
  _DWORD *v6; // r6
  int v7; // r5
  int v8; // r0
  int v9; // r6
  int v10; // r7
  int v11; // r5
  const char *v12; // r0
  int v13; // r8
  int v14; // r0
  int v15; // r3

  v1 = sub_171258(a1);
  v2 = *(_DWORD *)(v1 + 24);
  if ( *(_WORD *)(v2 + 4) != 2 )
    return 0;
  v4 = *(_DWORD *)(v2 + 24);
  v5 = v1;
  v6 = *(_DWORD **)(v4 + 36);
  v7 = sub_171258(*(_DWORD **)(v4 + 12));
  v8 = sub_171258(v6);
  v9 = *(_DWORD *)(v7 + 24);
  v10 = v8;
  v11 = *(_DWORD *)(v5 + 24);
  if ( *(_BYTE *)v9 == 1 )
  {
    v13 = *(_DWORD *)(v11 + 24);
    if ( !strcmp(*(const char **)(v13 + 16), "__data")
      && **(_BYTE **)(v10 + 24) == 8
      && !strcmp(*(const char **)(v13 + 40), "__length") )
    {
      v14 = sub_171258(*(_DWORD **)(v9 + 20));
      v15 = *(_DWORD *)(v14 + 24);
      if ( *(_BYTE *)v15 == 8 && *(_DWORD *)(v14 + 20) == 1 && !strcmp(*(const char **)(v15 + 8), "uint8") )
        return 1;
      v11 = *(_DWORD *)(v5 + 24);
    }
  }
  if ( *(_WORD *)(v11 + 4) != 2 )
    return 0;
  v12 = *(const char **)(v11 + 12);
  if ( !v12 )
    return 0;
  return strcmp(v12, "string") == 0;
}
