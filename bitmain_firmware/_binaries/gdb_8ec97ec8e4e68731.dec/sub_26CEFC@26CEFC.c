int __fastcall sub_26CEFC(int a1)
{
  int v2; // r0
  _DWORD *v3; // r8
  int v4; // r7
  _DWORD *v5; // r4
  int v6; // r0
  int v7; // t1
  _DWORD *v8; // r4
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r3

  v2 = sub_1761FC(a1);
  v3 = (_DWORD *)dword_48AA08;
  v4 = v2;
  if ( dword_48AA08 )
  {
    do
    {
      v5 = v3;
      do
      {
        v7 = v5[1];
        ++v5;
        v6 = v7;
        if ( v7 )
          sub_26CE90(v6, a1);
      }
      while ( v3 + 60 != v5 );
      v3 = (_DWORD *)*v3;
    }
    while ( v3 );
  }
  v8 = (_DWORD *)dword_48AA0C;
  if ( dword_48AA0C )
  {
    do
    {
      while ( 1 )
      {
        v12 = v8[2];
        if ( v12 != 1 )
          break;
        sub_26CE90(v8[4], a1);
        v8 = (_DWORD *)*v8;
        if ( !v8 )
          goto LABEL_18;
      }
      if ( v12 == 4 )
      {
        v9 = v8[4];
        if ( v9 )
        {
          v10 = *(_DWORD *)(v9 + 24);
          v11 = *(_BYTE *)(v10 + 2) & 0x10;
          if ( (*(_BYTE *)(v10 + 2) & 0x10) != 0 )
            v11 = *(_DWORD *)(v10 + 16);
          if ( a1 == v11 )
            v8[4] = ((int (__fastcall *)(int, int, int))loc_176248)(a1, v9, v4);
        }
      }
      v8 = (_DWORD *)*v8;
    }
    while ( v8 );
  }
LABEL_18:
  sub_157F00();
  return sub_323B84(v4);
}
