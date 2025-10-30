_DWORD *__fastcall sub_11BC5C(_DWORD *ptr)
{
  void *v2; // r0
  void *v3; // r0

  v2 = (void *)ptr[16];
  *ptr = &unk_39C084;
  if ( v2 )
    sub_339E64(v2);
  v3 = (void *)ptr[1];
  if ( v3 )
    sub_339E64(v3);
  sub_33AC04(ptr);
  return ptr;
}
