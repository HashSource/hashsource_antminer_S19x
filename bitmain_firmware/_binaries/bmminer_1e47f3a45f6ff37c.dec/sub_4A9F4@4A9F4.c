void sub_4A9F4()
{
  int v0; // r0
  _DWORD *v1; // r2
  int v2; // r6
  int v3; // r5
  int v4; // r3
  int v5; // r4
  void *v6; // r0

  if ( dword_535D90 )
  {
    v0 = sub_26A44();
    v1 = (_DWORD *)dword_535D90;
    v2 = v0;
    if ( v0 )
    {
      v3 = 0;
      do
      {
        v4 = v3 + 2107946;
        ++v3;
        v5 = 4 * v4;
        v6 = (void *)v1[v4 + 1];
        if ( v6 )
        {
          free(v6);
          v1 = (_DWORD *)dword_535D90;
          *(_DWORD *)(dword_535D90 + v5 + 4) = 0;
        }
      }
      while ( v2 != v3 );
    }
    free(v1);
    dword_535D90 = 0;
  }
}
