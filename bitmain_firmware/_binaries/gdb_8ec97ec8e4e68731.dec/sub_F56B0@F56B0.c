_DWORD *__fastcall sub_F56B0(_DWORD *a1)
{
  void *v2; // r0
  void **v3; // r4
  void **v4; // r6
  void *v5; // r0
  void *v6; // t1
  _DWORD *v7; // r0
  void *v8; // r0
  _DWORD *v9; // r0

  v2 = (void *)a1[25];
  if ( v2 )
    free(v2);
  sub_323B84(a1[20]);
  v3 = (void **)a1[17];
  v4 = (void **)a1[18];
  if ( v3 != v4 )
  {
    do
    {
      v6 = *v3++;
      v5 = v6;
      if ( v6 )
        free(v5);
    }
    while ( v4 != v3 );
    v4 = (void **)a1[17];
  }
  if ( v4 )
    sub_339E64(v4);
  v7 = (_DWORD *)a1[11];
  if ( v7 != a1 + 13 )
    sub_339E64(v7);
  v8 = (void *)a1[8];
  if ( v8 )
    sub_339E64(v8);
  v9 = (_DWORD *)a1[1];
  if ( v9 != a1 + 3 )
    sub_339E64(v9);
  return a1;
}
