_DWORD *__fastcall sub_1FFCBC(_DWORD *a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  void *v5; // r0
  _DWORD *v6; // r5

  v2 = (_DWORD *)*a1;
  if ( (_DWORD *)*a1 != a1 )
  {
    do
    {
      v6 = (_DWORD *)*v2;
      if ( *((_BYTE *)v2 + 100) )
      {
        *((_BYTE *)v2 + 100) = 0;
        sub_16373C((regex_t *)(v2 + 17));
      }
      v3 = (_DWORD *)v2[11];
      if ( v3 != v2 + 13 )
        sub_339E64(v3);
      v4 = (_DWORD *)v2[4];
      if ( v4 != v2 + 6 )
        sub_339E64(v4);
      v5 = v2;
      v2 = v6;
      sub_339E64(v5);
    }
    while ( v6 != a1 );
  }
  return a1;
}
