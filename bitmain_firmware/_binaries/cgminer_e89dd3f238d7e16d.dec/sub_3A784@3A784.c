void sub_3A784()
{
  void **v0; // [sp+0h] [bp-Ch]
  void **ptr; // [sp+4h] [bp-8h]

  ptr = (void **)dword_88718;
  dword_88718 = 0;
  while ( ptr )
  {
    v0 = (void **)ptr[1];
    free(*ptr);
    free(ptr);
    ptr = v0;
  }
}
