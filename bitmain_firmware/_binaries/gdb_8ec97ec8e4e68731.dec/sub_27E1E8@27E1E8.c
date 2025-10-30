void __fastcall sub_27E1E8(int a1, void **ptr)
{
  void *v3; // r0

  if ( *ptr )
    free(*ptr);
  v3 = ptr[1];
  if ( v3 )
    free(v3);
  free(ptr);
}
