int __fastcall sub_6E9E4(_DWORD *a1, _DWORD *a2)
{
  _BOOL4 v3; // r3
  int v4; // r8
  int v6; // r0
  char *i; // r5
  int v8; // r0
  int v9; // r10

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
    for ( i = (char *)sub_6BE20(v6); i; i = (char *)sub_6BE20(v8) )
    {
      v9 = sub_6BE30((int)(i - 16));
      if ( !v9 )
        break;
      if ( !*a1 && sub_6BBAC((int)(a1 + 2), i) )
      {
        if ( *(_DWORD *)(v9 + 4) != -1 )
          ++*(_DWORD *)(v9 + 4);
        sub_6E894(a1, i, v9);
      }
      if ( *a2 )
        break;
      v8 = sub_6BE08(v4, (int)(i - 16));
      if ( !v8 )
        break;
    }
  }
  return 0;
}
