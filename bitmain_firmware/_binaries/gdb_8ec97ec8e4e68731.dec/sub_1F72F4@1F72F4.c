void sub_1F72F4()
{
  _DWORD *v0; // r2
  int v1; // r4
  int v2; // r3

  v0 = (_DWORD *)dword_48934C;
  if ( dword_489350 )
  {
    v1 = 0;
    do
    {
      v2 = v0[v1++];
      if ( v2 >= 0 )
      {
        close(v2);
        v0 = (_DWORD *)dword_48934C;
      }
    }
    while ( dword_489350 != v1 );
  }
  if ( v0 )
  {
    free(v0);
    dword_48934C = 0;
    dword_489350 = 0;
  }
}
