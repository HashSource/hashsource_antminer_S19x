int __fastcall sub_6E724(_DWORD *a1, unsigned int a2)
{
  unsigned int v3; // r2
  int v5; // r6
  int v6; // r0
  int v7; // r3
  int v8; // r3
  int v9; // r3

  if ( !a1 )
    return -1;
  if ( *a1 != 1 )
    return -1;
  v3 = a1[3];
  if ( v3 <= a2 )
    return -1;
  v5 = 4 * a2;
  v6 = *(_DWORD *)(a1[4] + 4 * a2);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 4);
    if ( v7 != -1 )
    {
      v8 = v7 - 1;
      *(_DWORD *)(v6 + 4) = v8;
      if ( !v8 )
      {
        sub_6E5DC((void **)v6);
        v3 = a1[3];
      }
    }
  }
  v9 = v3 - 1;
  if ( v3 - 1 > a2 )
  {
    memmove((void *)(a1[4] + v5), (const void *)(a1[4] + v5 + 4), 4 * (~a2 + v3));
    v9 = a1[3] - 1;
  }
  a1[3] = v9;
  return 0;
}
