int __fastcall sub_A0870(int a1)
{
  int v1; // r4
  int v2; // r3
  int v3; // r5
  int v5; // r0
  int v6; // r2
  const char *v7; // r0
  char *v8; // r0

  v1 = a1;
  if ( !a1 )
    return 0;
  v2 = *(_DWORD *)(a1 + 24);
  if ( *(_BYTE *)v2 != 23 )
    goto LABEL_7;
  do
  {
    do
      v2 = *(_DWORD *)(*(_DWORD *)(v2 + 20) + 24);
    while ( *(_BYTE *)v2 == 23 );
    if ( sub_A0B30() )
      break;
LABEL_7:
    v5 = sub_171258(v1);
    v3 = v5;
    if ( !v5 )
      return 0;
    v6 = *(_DWORD *)(v5 + 24);
    if ( (*(_WORD *)v6 & 0x4FF) != 0x405 )
      return v3;
    v7 = *(const char **)(v6 + 12);
    if ( !v7 )
      return v3;
    v8 = sub_9D20C(v7);
    if ( !v8 )
      return v3;
    v1 = *((_DWORD *)v8 + 6);
    if ( !v1 )
      return v3;
    v2 = *(_DWORD *)(v1 + 24);
  }
  while ( *(_BYTE *)v2 == 23 );
  return v1;
}
