void __fastcall sub_211F8C(unsigned int *ptr)
{
  unsigned int v1; // r2
  unsigned int *v3; // r5
  unsigned int v4; // r4
  void *v5; // r3

  v1 = *ptr;
  if ( *ptr )
  {
    v3 = ptr;
    v4 = 0;
    do
    {
      v5 = (void *)v3[2];
      ++v4;
      v3 += 3;
      if ( v5 )
      {
        free(v5);
        v1 = *ptr;
      }
    }
    while ( v1 > v4 );
  }
  free(ptr);
}
