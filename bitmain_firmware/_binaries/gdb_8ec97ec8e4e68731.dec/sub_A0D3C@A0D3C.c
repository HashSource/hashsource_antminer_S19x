int __fastcall sub_A0D3C(int a1, char *s2)
{
  int v2; // r2
  char *v4; // r0
  int v5; // r4
  int v8; // r5
  const char *v9; // r3
  bool v10; // zf
  int v11; // r0

  v2 = *(_DWORD *)(a1 + 24);
  if ( (*(_WORD *)(v2 + 2) & 0x380) == 0x100 )
  {
    if ( dword_477CAC )
      return 0;
    while ( 2 )
    {
      v5 = **(_DWORD **)(v2 + 28);
      if ( v5 )
      {
        do
        {
          v8 = *(_DWORD *)(v5 + 24);
          v9 = *(const char **)(v8 + 8);
          if ( !v9 )
          {
            v9 = *(const char **)(v8 + 12);
            if ( !v9 )
            {
              v5 = 0;
              sub_946B0("unexpected null name on descriptive type", s2);
              return v5;
            }
          }
          v10 = strcmp(v9, s2) == 0;
          v11 = v5;
          if ( v10 )
            return v5;
          if ( (*(_WORD *)(v8 + 2) & 0x380) != 0x100 )
            break;
          v5 = **(_DWORD **)(v8 + 28);
        }
        while ( v5 );
        v2 = *(_DWORD *)(sub_171258(v11) + 24);
        if ( (*(_WORD *)(v2 + 2) & 0x380) == 0x100 )
          continue;
      }
      break;
    }
    if ( !sub_A0CFC(a1) )
      return 0;
  }
  v4 = sub_9D20C(s2);
  if ( !v4 )
    return 0;
  return *((_DWORD *)v4 + 6);
}
