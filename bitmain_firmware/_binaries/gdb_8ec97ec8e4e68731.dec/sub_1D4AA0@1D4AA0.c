void sub_1D4AA0()
{
  _DWORD *v0; // r4

  v0 = (_DWORD *)dword_48A4D4;
  if ( dword_48A4D4 )
  {
    do
    {
      if ( v0[11] != 2 )
        sub_1D4A70(v0);
      v0 = (_DWORD *)v0[1];
    }
    while ( v0 );
  }
}
