_DWORD *__fastcall sub_6FA58(_DWORD *ptr)
{
  void *v2; // r0
  _DWORD *v3; // r4
  _DWORD *v4; // r6
  void *v5; // r0
  void *v6; // r0
  void *v7; // r3
  _DWORD *v8; // r0
  _DWORD *v9; // r0

  v2 = (void *)ptr[18];
  *ptr = &off_35DF34;
  if ( v2 )
    sub_339E64(v2);
  v3 = (_DWORD *)ptr[15];
  v4 = (_DWORD *)ptr[16];
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
    v4 = (_DWORD *)ptr[15];
  }
  if ( v4 )
    sub_339E64(v4);
  v8 = (_DWORD *)ptr[7];
  *ptr = &unk_35D3DC;
  if ( v8 != ptr + 9 )
    sub_339E64(v8);
  v9 = (_DWORD *)ptr[1];
  if ( v9 != ptr + 3 )
    sub_339E64(v9);
  sub_33AC04(ptr);
  return ptr;
}
