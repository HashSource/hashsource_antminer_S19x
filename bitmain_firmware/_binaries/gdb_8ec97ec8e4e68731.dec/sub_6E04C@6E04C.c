_DWORD *__fastcall sub_6E04C(_DWORD *a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r6
  void *v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r0

  v2 = (_DWORD *)a1[18];
  v3 = (_DWORD *)a1[19];
  *a1 = &off_35D454;
  if ( v2 != v3 )
  {
    do
    {
      v4 = (void *)v2[2];
      v2 += 3;
      if ( v4 )
        free(v4);
    }
    while ( v3 != v2 );
    v3 = (_DWORD *)a1[18];
  }
  if ( v3 )
    sub_339E64(v3);
  v5 = (_DWORD *)a1[7];
  *a1 = &unk_35D3DC;
  if ( v5 != a1 + 9 )
    sub_339E64(v5);
  v6 = (_DWORD *)a1[1];
  if ( v6 != a1 + 3 )
    sub_339E64(v6);
  return a1;
}
