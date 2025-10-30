int __fastcall sub_6E91C(_DWORD *a1, _DWORD *a2)
{
  _BOOL4 v3; // r3
  int v4; // r8
  int v6; // r0
  int v8; // r0
  char *v9; // r4
  int v10; // r12

  if ( !a1 )
    return -1;
  v3 = a2 == 0;
  if ( *a1 )
    v3 = 1;
  if ( v3 || *a2 )
    return -1;
  v4 = (int)(a2 + 2);
  v6 = sub_6BD80((int)(a2 + 2));
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = sub_6BE20(v6);
      v9 = (char *)v8;
      if ( !v8 )
        break;
      v10 = sub_6BE30(v8 - 16);
      if ( !v10 )
        break;
      if ( *(_DWORD *)(v10 + 4) != -1 )
        ++*(_DWORD *)(v10 + 4);
      if ( sub_6E894(a1, v9, v10) )
        return -1;
      if ( !*a2 )
      {
        v6 = sub_6BE08(v4, (int)(v9 - 16));
        if ( v6 )
          continue;
      }
      return 0;
    }
  }
  return 0;
}
