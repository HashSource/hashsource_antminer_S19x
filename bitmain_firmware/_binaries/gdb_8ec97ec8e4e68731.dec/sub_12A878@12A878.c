int __fastcall sub_12A878(int a1)
{
  int i; // r4
  int v3; // r0
  int v4; // r0
  char *v5; // r6
  _DWORD *v6; // r0
  _DWORD *v7; // r4
  char *v8; // r0
  void *v9; // r0

  for ( i = *(_DWORD *)(a1 + 396); i; *(_DWORD *)(a1 + 396) = i )
  {
    i = *(_DWORD *)(*(_DWORD *)(i + 16) + 132);
    ((void (*)(void))loc_11E87C)();
  }
  v3 = *(_DWORD *)(a1 + 428);
  if ( v3 )
    sub_323B84(v3);
  v4 = *(_DWORD *)(a1 + 444);
  if ( v4 )
    sub_323B84(v4);
  if ( *(_BYTE *)(a1 + 452) )
  {
    *(_BYTE *)(a1 + 452) = 0;
    sub_15A060(a1 + 448);
  }
  v5 = *(char **)(a1 + 424);
  if ( v5 )
  {
    v6 = (_DWORD *)*((_DWORD *)v5 + 20);
    *(_DWORD *)v5 = off_39EA2C;
    if ( v6 )
    {
      do
      {
        v7 = (_DWORD *)*v6;
        sub_12430C(v6);
        v6 = v7;
      }
      while ( v7 );
    }
    memset(*((void **)v5 + 18), 0, 4 * *((_DWORD *)v5 + 19));
    v8 = (char *)*((_DWORD *)v5 + 18);
    *((_DWORD *)v5 + 21) = 0;
    *((_DWORD *)v5 + 20) = 0;
    if ( v8 != v5 + 96 )
      sub_339E64(v8);
    v9 = (void *)*((_DWORD *)v5 + 1);
    *(_DWORD *)v5 = &off_39EA04;
    if ( v9 )
      sub_339E64(v9);
    sub_33AC04(v5);
  }
  return a1;
}
