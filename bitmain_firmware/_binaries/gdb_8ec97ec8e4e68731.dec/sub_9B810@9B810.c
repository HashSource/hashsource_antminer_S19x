void __fastcall sub_9B810(int a1, struct obstack **ptr)
{
  struct obstack *v3; // r4

  v3 = *ptr;
  if ( *ptr )
  {
    obstack_free(*ptr, 0);
    free(v3);
  }
  free(ptr);
}
