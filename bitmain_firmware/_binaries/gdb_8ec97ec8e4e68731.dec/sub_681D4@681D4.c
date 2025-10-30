_DWORD **__fastcall sub_681D4(_DWORD **a1)
{
  _DWORD *v2; // r4
  void *v3; // r0
  void *v4; // r0

  v2 = *a1;
  if ( *a1 )
  {
    v3 = (void *)v2[2];
    if ( v3 )
      free(v3);
    v4 = (void *)v2[3];
    if ( v4 )
      free(v4);
    sub_33AC04(v2);
  }
  return a1;
}
