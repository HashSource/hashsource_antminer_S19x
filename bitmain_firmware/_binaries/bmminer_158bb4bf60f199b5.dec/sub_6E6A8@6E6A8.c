int __fastcall sub_6E6A8(_DWORD *a1)
{
  unsigned int v2; // r1
  unsigned int i; // r4
  int v4; // r0
  int v5; // r3

  if ( !a1 || *a1 != 1 )
    return -1;
  v2 = a1[3];
  if ( v2 )
  {
    for ( i = 0; i < v2; ++i )
    {
      v4 = *(_DWORD *)(a1[4] + 4 * i);
      if ( v4 )
      {
        v5 = *(_DWORD *)(v4 + 4);
        if ( v5 != -1 )
        {
          *(_DWORD *)(v4 + 4) = v5 - 1;
          if ( v5 == 1 )
          {
            sub_6E5DC((void **)v4);
            v2 = a1[3];
          }
        }
      }
    }
  }
  a1[3] = 0;
  return 0;
}
