void __fastcall sub_149088(int a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  _DWORD *v4; // r5

  v2 = a2;
  if ( a2 )
  {
    do
    {
      sub_149088(a1, v2[3]);
      v4 = (_DWORD *)v2[2];
      sub_339E64(v2);
      v2 = v4;
    }
    while ( v4 );
  }
}
