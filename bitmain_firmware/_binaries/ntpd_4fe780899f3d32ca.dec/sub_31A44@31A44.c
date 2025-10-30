int __fastcall sub_31A44(unsigned __int16 *a1, const char *a2, int *a3, int a4, char a5, _DWORD *a6)
{
  int v9; // r6
  int v10; // r4
  const char *v11; // r0
  int v12; // r3
  bool v13; // zf
  int v15; // r3
  int v16; // r3

  if ( !a2 )
  {
    if ( a3 )
      v10 = a3[1];
    else
      v10 = peer_hash[sub_6C568(a1) & 0x7F];
    if ( v10 )
    {
      while ( 1 )
      {
        if ( a6 )
        {
          v15 = *(unsigned __int16 *)(v10 + 16);
          if ( v15 == *a1 )
          {
            if ( v15 == 2 )
            {
              if ( *((_DWORD *)a1 + 1) == *(_DWORD *)(v10 + 20) )
                ++*a6;
            }
            else if ( !memcmp(a1 + 4, (const void *)(v10 + 24), 0x10u) && *((_DWORD *)a1 + 6) == *(_DWORD *)(v10 + 40) )
            {
              ++*a6;
            }
          }
        }
        if ( (a4 == -1 || a4 == *(unsigned __int8 *)(v10 + 63) || (*(_BYTE *)(v10 + 72) & 0x20) != 0 && (a5 & 0x20) != 0)
          && a1[1] == *(unsigned __int16 *)(v10 + 18) )
        {
          v16 = *(unsigned __int16 *)(v10 + 16);
          if ( v16 == *a1 )
          {
            if ( v16 == 2 )
            {
              if ( *((_DWORD *)a1 + 1) == *(_DWORD *)(v10 + 20) )
                return v10;
            }
            else if ( !memcmp(a1 + 4, (const void *)(v10 + 24), 0x10u) && *((_DWORD *)a1 + 6) == *(_DWORD *)(v10 + 40) )
            {
              return v10;
            }
          }
        }
        v10 = *(_DWORD *)(v10 + 4);
        if ( !v10 )
          return 0;
      }
    }
    return 0;
  }
  v9 = *a1;
  if ( a3 )
    v10 = *a3;
  else
    v10 = peer_list;
  if ( !v10 )
    return 0;
  while ( 1 )
  {
    v11 = *(const char **)(v10 + 44);
    if ( v11 && (a4 == -1 || a4 == *(unsigned __int8 *)(v10 + 63)) )
    {
      if ( !v9 )
        goto LABEL_49;
      v12 = *(unsigned __int16 *)(v10 + 16);
      v13 = v12 == 0;
      if ( *(_WORD *)(v10 + 16) )
        v13 = v9 == v12;
      if ( v13 )
      {
LABEL_49:
        if ( !strcasecmp(v11, a2) )
          return v10;
      }
    }
    v10 = *(_DWORD *)v10;
    if ( !v10 )
      return 0;
  }
}
