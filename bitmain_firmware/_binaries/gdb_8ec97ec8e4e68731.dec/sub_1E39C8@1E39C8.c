_DWORD *__fastcall sub_1E39C8(int a1, const void *a2, size_t a3, int a4)
{
  _DWORD *v4; // r4
  int v8; // r0
  _BOOL4 v9; // r3
  const void *v10; // r1
  int v11; // r2

  v4 = (_DWORD *)dword_48A4D4;
  if ( !dword_48A4D4 )
    return 0;
  while ( 1 )
  {
    if ( v4[11] != 2 )
    {
      v8 = ((int (__fastcall *)(_DWORD *))loc_1E38EC)(v4);
      v9 = v4[7] == a4;
      if ( !v8 )
        v9 = 0;
      if ( v9 )
      {
        v10 = *(const void **)(v8 + 56);
        v11 = *(_DWORD *)(v8 + 60) - (_DWORD)v10;
        if ( a3 != v11 )
          sub_946E0("Thread handle size mismatch: %d vs %zu (from remote)", a3, v11);
        if ( !memcmp(a2, v10, a3) )
          break;
      }
    }
    v4 = (_DWORD *)v4[1];
    if ( !v4 )
      return 0;
  }
  return v4;
}
