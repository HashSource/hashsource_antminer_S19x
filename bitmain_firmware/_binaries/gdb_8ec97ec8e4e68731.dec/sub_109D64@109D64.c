void __fastcall sub_109D64(_DWORD *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  _DWORD *v4; // r3
  bool v5; // zf
  _DWORD *v6; // r0
  _DWORD *v7; // r5
  _DWORD *v8; // r3
  bool v9; // zf

  sub_326C6C(*a1);
  v2 = (_DWORD *)a1[1];
  if ( v2 )
  {
    do
    {
      v3 = (_DWORD *)v2[1];
      free(v2);
      v4 = (_DWORD *)a1[1];
      v2 = v3;
      v5 = v3 == v4;
      if ( v3 != v4 )
        v5 = v4 == 0;
    }
    while ( !v5 );
  }
  v6 = (_DWORD *)a1[2];
  if ( v6 )
  {
    do
    {
      v7 = (_DWORD *)v6[1];
      free(v6);
      v8 = (_DWORD *)a1[2];
      v6 = v7;
      v9 = v7 == v8;
      if ( v7 != v8 )
        v9 = v8 == 0;
    }
    while ( !v9 );
  }
  free(a1);
}
