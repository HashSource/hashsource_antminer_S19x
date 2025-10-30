void sub_CFDC0()
{
  _DWORD *v0; // r3
  int v1; // r0
  _DWORD *v2; // r2

  v0 = (_DWORD *)dword_478348;
  if ( dword_478348 )
  {
    v1 = dword_487D2C;
    do
    {
      v2 = (_DWORD *)v0[2];
      if ( v0[3] == 20 && *(_DWORD *)(v0[7] + 48) == v1 )
        v0[5] = 1;
      v0 = v2;
    }
    while ( v2 );
  }
}
