void sub_3B6CC()
{
  void **v0; // [sp+0h] [bp-Ch]
  void **ptr; // [sp+4h] [bp-8h]

  ptr = (void **)dword_898B0;
  dword_898B0 = 0;
  while ( ptr )
  {
    v0 = (void **)ptr[1];
    free(*ptr);
    free(ptr);
    ptr = v0;
  }
}
