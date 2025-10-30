int __fastcall sub_EBD30(int a1, int a2)
{
  int v3; // r5
  int v4; // r0
  int v5; // r3
  int v6; // r6
  int v8; // r4
  const char *v9; // r0
  int v10; // r3

  v3 = a1;
  v4 = sub_171258(a1);
  v5 = **(char **)(v4 + 24);
  if ( v5 != 20 )
  {
    v6 = v4;
    if ( v5 != 8 )
      return 0;
LABEL_5:
    if ( v3 )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)(v3 + 24);
        v9 = *(const char **)(v8 + 8);
        if ( v9 )
        {
          if ( sub_EBBFC(v9) )
            break;
        }
        if ( *(_BYTE *)v8 != 23 )
          goto LABEL_12;
        if ( !*(_DWORD *)(v8 + 20) )
        {
          v3 = sub_171258(v3);
          goto LABEL_5;
        }
        v3 = *(_DWORD *)(v8 + 20);
      }
    }
    else
    {
LABEL_12:
      v10 = **(char **)(v6 + 24);
      if ( a2 == 115 )
      {
        if ( v10 != 8 || *(_DWORD *)(v6 + 20) != 1 )
          return 0;
      }
      else if ( v10 != 8 || *(_DWORD *)(v6 + 20) != 1 || (*(_DWORD *)(v6 + 16) & 0x40) != 0 )
      {
        return 0;
      }
    }
  }
  return 1;
}
