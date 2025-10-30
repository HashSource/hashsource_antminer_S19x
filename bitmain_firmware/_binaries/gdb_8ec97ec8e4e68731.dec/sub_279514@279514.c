void __fastcall sub_279514(_DWORD *ptr)
{
  void *v2; // r0

  v2 = (void *)ptr[1];
  if ( v2 )
    free(v2);
  free(ptr);
}
