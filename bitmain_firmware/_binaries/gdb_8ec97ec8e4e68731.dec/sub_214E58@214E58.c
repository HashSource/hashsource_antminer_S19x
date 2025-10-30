void __fastcall sub_214E58(_DWORD *ptr)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0

  v2 = (void *)ptr[1];
  if ( v2 )
    free(v2);
  v3 = (void *)ptr[2];
  if ( v3 )
    free(v3);
  v4 = (void *)ptr[3];
  if ( v4 )
    free(v4);
  free(ptr);
}
