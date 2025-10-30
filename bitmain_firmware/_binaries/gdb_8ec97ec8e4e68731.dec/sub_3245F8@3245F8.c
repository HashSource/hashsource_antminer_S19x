void __fastcall sub_3245F8(void **ptr)
{
  void *v2; // r0
  void **v3; // r4
  void *v4; // t1

  v2 = *ptr;
  if ( v2 )
  {
    v3 = ptr;
    do
    {
      free(v2);
      v4 = v3[1];
      ++v3;
      v2 = v4;
    }
    while ( v4 );
  }
  free(ptr);
}
