_DWORD *__fastcall sub_6FB18(_DWORD *a1)
{
  void *v2; // r0
  _DWORD *v3; // r4
  _DWORD *v4; // r6
  void *v5; // r0
  void *v6; // r0
  void *v7; // r3
  _DWORD *v8; // r0
  _DWORD *v9; // r0

  v2 = (void *)a1[18];
  *a1 = &off_35DF34;
  if ( v2 )
    sub_339E64(v2);
  v3 = (_DWORD *)a1[15];
  v4 = (_DWORD *)a1[16];
  if ( v3 != v4 )
  {
    do
    {
      v5 = (void *)v3[7];
      if ( v5 )
        free(v5);
      v6 = (void *)v3[1];
      v7 = v3 + 3;
      v3 += 8;
      if ( v6 != v7 )
        sub_339E64(v6);
    }
    while ( v4 != v3 );
    v4 = (_DWORD *)a1[15];
  }
  if ( v4 )
    sub_339E64(v4);
  v8 = (_DWORD *)a1[7];
  *a1 = &unk_35D3DC;
  if ( v8 != a1 + 9 )
    sub_339E64(v8);
  v9 = (_DWORD *)a1[1];
  if ( v9 != a1 + 3 )
    sub_339E64(v9);
  return a1;
}
