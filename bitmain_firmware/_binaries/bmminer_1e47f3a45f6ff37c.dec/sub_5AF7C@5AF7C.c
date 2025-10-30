void **__fastcall sub_5AF7C(const void *a1, size_t a2)
{
  void **ptr; // [sp+Ch] [bp-8h]

  ptr = (void **)malloc(8u);
  if ( !ptr )
    return 0;
  ptr[1] = (void *)a2;
  *ptr = malloc(a2);
  if ( *ptr )
  {
    memcpy(*ptr, a1, a2);
    return ptr;
  }
  else
  {
    free(ptr);
    return 0;
  }
}
