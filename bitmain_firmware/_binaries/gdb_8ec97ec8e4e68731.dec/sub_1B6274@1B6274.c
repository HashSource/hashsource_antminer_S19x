void __fastcall sub_1B6274(int a1, void **ptr)
{
  if ( *ptr )
    free(*ptr);
  free(ptr);
}
