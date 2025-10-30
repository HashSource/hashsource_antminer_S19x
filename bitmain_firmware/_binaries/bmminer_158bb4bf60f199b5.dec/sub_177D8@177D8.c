void sub_177D8()
{
  void *v0; // r8
  _DWORD *v1; // r4
  int v2; // r5
  void *v3; // r0
  void *v4; // t1

  v0 = (void *)dword_A05EC;
  if ( dword_A05EC )
  {
    v1 = (_DWORD *)(dword_A05EC - 4);
    v2 = dword_A05EC + 60;
    do
    {
      v4 = (void *)v1[1];
      ++v1;
      v3 = v4;
      if ( v4 )
      {
        free(v3);
        *v1 = 0;
      }
    }
    while ( v1 != (_DWORD *)v2 );
    free(v0);
    dword_A05EC = 0;
  }
}
