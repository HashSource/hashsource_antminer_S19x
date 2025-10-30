void __fastcall sub_31DAD0(void **a1)
{
  void *v2; // r0
  void **v3; // r4
  void *v4; // t1

  if ( a1 )
  {
    v2 = *a1;
    if ( *a1 )
    {
      v3 = a1;
      do
      {
        free(v2);
        v4 = v3[1];
        ++v3;
        v2 = v4;
      }
      while ( v4 );
    }
    free(a1);
  }
}
