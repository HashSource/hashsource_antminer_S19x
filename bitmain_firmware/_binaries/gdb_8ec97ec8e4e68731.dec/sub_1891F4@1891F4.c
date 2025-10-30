void __fastcall sub_1891F4(_DWORD *ptr)
{
  _DWORD *v2; // r5
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0

  v2 = (_DWORD *)ptr[9];
  if ( v2 )
  {
    v3 = (void *)v2[2];
    if ( v3 )
      free(v3);
    v4 = (void *)v2[3];
    if ( v4 )
      free(v4);
    sub_33AC04(v2);
  }
  v5 = (void *)ptr[11];
  if ( v5 )
    free(v5);
  free(ptr);
}
