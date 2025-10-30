void __fastcall sub_17E844(void **ptr)
{
  void *v2; // r0

  v2 = *ptr;
  if ( v2 )
    free(v2);
  free(ptr);
}
