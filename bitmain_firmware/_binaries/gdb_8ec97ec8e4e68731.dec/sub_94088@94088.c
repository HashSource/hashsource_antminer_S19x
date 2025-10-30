void __fastcall sub_94088(int a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  _DWORD *v4; // r0
  _DWORD *v5; // r5

  v2 = a2;
  if ( a2 )
  {
    do
    {
      sub_94088(a1, v2[3]);
      v4 = (_DWORD *)v2[4];
      v5 = (_DWORD *)v2[2];
      if ( v4 != v2 + 6 )
        sub_339E64(v4);
      sub_339E64(v2);
      v2 = v5;
    }
    while ( v5 );
  }
}
