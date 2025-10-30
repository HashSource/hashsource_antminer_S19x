void sub_63510()
{
  int v0; // r4
  void *v1; // r0
  int v2; // r0
  void *v3; // r5
  int v4; // r0

  v0 = dword_109D64;
  if ( (_UNKNOWN *)dword_109D64 != &key_listhead )
  {
    do
    {
      while ( 1 )
      {
        v3 = *(void **)(v0 + 8);
        if ( *(_DWORD *)(v0 + 24) < 0x10000u )
          break;
LABEL_6:
        v0 = (int)v3;
        if ( v3 == &key_listhead )
          return;
      }
      if ( (*(_WORD *)(v0 + 36) & 1) != 0 )
      {
        v1 = *(void **)(v0 + 12);
        if ( v1 )
        {
          memset(v1, 0, *(_DWORD *)(v0 + 32));
          free(*(void **)(v0 + 12));
          *(_DWORD *)(v0 + 12) = 0;
        }
        v2 = sub_62688(*(_DWORD **)(v0 + 16));
        *(_DWORD *)(v0 + 32) = 0;
        *(_DWORD *)(v0 + 20) = 0;
        *(_DWORD *)(v0 + 16) = v2;
        goto LABEL_6;
      }
      v4 = v0;
      v0 = *(_DWORD *)(v0 + 8);
      sub_626E4(v4);
    }
    while ( v3 != &key_listhead );
  }
}
