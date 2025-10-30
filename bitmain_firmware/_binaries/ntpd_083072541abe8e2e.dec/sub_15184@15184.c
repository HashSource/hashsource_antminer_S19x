int __fastcall sub_15184(_DWORD *s2)
{
  int v1; // r4
  int v3; // r5
  char *v4; // r6
  int result; // r0

  v1 = remoteaddr_list;
  if ( remoteaddr_list )
  {
    v4 = (char *)(s2 + 2);
    v3 = *(unsigned __int16 *)s2;
    do
    {
      if ( *(unsigned __int16 *)(v1 + 4) == v3 )
      {
        if ( v3 == 2 )
        {
          if ( *(_DWORD *)(v1 + 8) == s2[1] )
          {
            result = *(_DWORD *)(v1 + 32);
            if ( (*(_DWORD *)(result + 144) & 0x40) != 0 )
              return result;
          }
        }
        else if ( !memcmp((const void *)(v1 + 12), v4, 0x10u) && *(_DWORD *)(v1 + 28) == s2[6] )
        {
          result = *(_DWORD *)(v1 + 32);
          if ( (*(_DWORD *)(result + 144) & 0x40) != 0 )
            return result;
        }
      }
      v1 = *(_DWORD *)v1;
    }
    while ( v1 );
  }
  return v1;
}
