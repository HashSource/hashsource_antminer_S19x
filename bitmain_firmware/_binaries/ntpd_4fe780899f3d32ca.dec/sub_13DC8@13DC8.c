int __fastcall sub_13DC8(_DWORD *s2)
{
  int v1; // r4
  int v3; // r5
  char *v4; // r6

  v1 = remoteaddr_list;
  if ( remoteaddr_list )
  {
    v4 = (char *)(s2 + 2);
    v3 = *(unsigned __int16 *)s2;
    while ( 1 )
    {
      if ( *(unsigned __int16 *)(v1 + 4) != v3 )
        goto LABEL_3;
      if ( v3 == 2 )
      {
        if ( *(_DWORD *)(v1 + 8) == s2[1] )
          return *(_DWORD *)(v1 + 32);
        v1 = *(_DWORD *)v1;
        if ( !v1 )
          return v1;
      }
      else
      {
        if ( !memcmp((const void *)(v1 + 12), v4, 0x10u) && *(_DWORD *)(v1 + 28) == s2[6] )
          return *(_DWORD *)(v1 + 32);
LABEL_3:
        v1 = *(_DWORD *)v1;
        if ( !v1 )
          return v1;
      }
    }
  }
  return v1;
}
