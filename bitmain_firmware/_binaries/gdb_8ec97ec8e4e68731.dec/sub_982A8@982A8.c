void __fastcall sub_982A8(unsigned int *a1)
{
  unsigned int v2; // r2
  _DWORD *v3; // r5
  unsigned int v4; // r4
  void *v5; // t1
  void *v6; // r0

  if ( a1 )
  {
    v2 = *a1;
    if ( *a1 )
    {
      v3 = a1 + 1;
      v4 = 0;
      do
      {
        v5 = (void *)v3[1];
        ++v3;
        ++v4;
        v6 = v5;
        if ( v5 )
        {
          free(v6);
          v2 = *a1;
        }
      }
      while ( v4 < v2 );
    }
    free(a1);
  }
}
