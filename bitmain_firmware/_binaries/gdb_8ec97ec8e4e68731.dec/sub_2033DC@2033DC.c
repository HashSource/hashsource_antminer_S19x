void sub_2033DC()
{
  _DWORD *v0; // r5
  _DWORD *i; // r4

  v0 = (_DWORD *)dword_487D28;
  if ( dword_487D28 )
  {
    do
    {
      for ( i = (_DWORD *)v0[9]; i; i = (_DWORD *)*i )
        sub_203358((int)i);
      v0 = (_DWORD *)*v0;
    }
    while ( v0 );
  }
  dword_489408 = 0;
}
