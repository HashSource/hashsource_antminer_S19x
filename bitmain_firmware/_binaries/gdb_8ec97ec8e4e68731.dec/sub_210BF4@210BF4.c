void __fastcall sub_210BF4(unsigned int **a1)
{
  unsigned int *v1; // r6
  unsigned int *v2; // r4
  unsigned int v3; // r5
  void *v4; // r0
  void *v5; // r0

  v1 = *a1;
  if ( *a1 )
  {
    if ( *v1 )
    {
      v2 = *a1;
      v3 = 0;
      do
      {
        v4 = (void *)v2[6];
        ++v3;
        if ( v4 )
          free(v4);
        v5 = (void *)v2[7];
        v2 += 6;
        if ( v5 )
          free(v5);
      }
      while ( v3 < *v1 );
    }
    free(v1);
  }
}
