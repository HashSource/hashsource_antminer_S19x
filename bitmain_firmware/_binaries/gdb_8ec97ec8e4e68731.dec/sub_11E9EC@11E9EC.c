void sub_11E9EC()
{
  int v0; // r4
  int v1; // r2
  int v2; // r3
  int v3; // r12
  int v4; // r3
  bool v5; // cc
  char v6; // r3
  int v7; // r2
  char v8; // r3
  int v9; // lr
  int i; // r4
  _DWORD *v11; // r5
  int v12; // r0

  v0 = *(_DWORD *)(dword_4872D8 + 396);
  if ( v0 )
  {
    v1 = *(_DWORD *)(dword_4872D8 + 396);
    do
    {
      v2 = *(_DWORD *)(v1 + 16);
      v1 = *(_DWORD *)(v2 + 132);
      *(_BYTE *)(v2 + 192) &= ~1u;
    }
    while ( v1 );
    do
    {
      while ( 1 )
      {
        v3 = *(_DWORD *)(v0 + 16);
        v4 = *(_DWORD *)(v3 + 140) + 1;
        v5 = v4 <= dword_46D450;
        *(_DWORD *)(v3 + 140) = v4;
        if ( v5 )
        {
          v6 = *(_BYTE *)(v3 + 192);
          v7 = v6 & 1;
          v8 = v6 | 1;
          if ( !v7 )
          {
            v9 = *(_DWORD *)(v3 + 152);
            *(_BYTE *)(v3 + 192) = v8;
            if ( v9 )
              break;
          }
        }
        v0 = *(_DWORD *)(v3 + 132);
        if ( !v0 )
          goto LABEL_11;
      }
      sub_324184(v9, sub_11DBE4, v7);
      v0 = *(_DWORD *)(*(_DWORD *)(v0 + 16) + 132);
    }
    while ( v0 );
LABEL_11:
    v11 = (_DWORD *)(dword_4872D8 + 396);
    for ( i = *(_DWORD *)(dword_4872D8 + 396); i; v11 = (_DWORD *)(v12 + 132) )
    {
      while ( 1 )
      {
        v12 = *(_DWORD *)(i + 16);
        i = *(_DWORD *)(v12 + 132);
        if ( (*(_BYTE *)(v12 + 192) & 1) != 0 )
          break;
        ((void (*)(void))loc_11E87C)();
        *v11 = i;
        if ( !i )
          return;
      }
    }
  }
}
