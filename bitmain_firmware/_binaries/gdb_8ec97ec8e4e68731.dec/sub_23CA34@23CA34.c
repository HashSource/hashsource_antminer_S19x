void __fastcall sub_23CA34(unsigned int **a1)
{
  unsigned int *v1; // r3
  unsigned int v3; // r4

  v1 = *a1;
  if ( *a1 && *v1 )
  {
    v3 = 0;
    do
    {
      ++v3;
      if ( v1[6 * v3] )
      {
        free((void *)v1[6 * v3]);
        v1 = *a1;
      }
    }
    while ( v1 && v3 < *v1 );
  }
}
