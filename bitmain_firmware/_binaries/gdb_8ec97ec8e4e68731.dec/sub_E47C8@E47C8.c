void sub_E47C8()
{
  _DWORD *v0; // r7
  _DWORD *v1; // r4
  void *v2; // r0
  _DWORD *v3; // r5
  void *v4; // r0
  void *v5; // r0

  v0 = (_DWORD *)dword_4788DC;
  if ( dword_4788DC )
  {
    v1 = *(_DWORD **)(dword_4788DC + 4);
    if ( v1 )
    {
      do
      {
        v2 = (void *)v1[1];
        v3 = (_DWORD *)*v1;
        if ( v2 )
          free(v2);
        v4 = (void *)v1[2];
        if ( v4 )
          free(v4);
        free(v1);
        v1 = v3;
      }
      while ( v3 );
    }
    v5 = (void *)v0[3];
    if ( v5 )
      free(v5);
    free(v0);
    dword_4788DC = 0;
    dword_4788E0 = 0;
  }
}
