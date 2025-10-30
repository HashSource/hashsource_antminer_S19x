void sub_DE838()
{
  _DWORD *v0; // r4

  v0 = (_DWORD *)dword_478348;
  if ( dword_478348 )
  {
    do
    {
      if ( v0[3] == 30 )
        sub_DDBA8(v0);
      v0 = (_DWORD *)v0[2];
    }
    while ( v0 );
  }
}
