void **__fastcall sub_297B08(void **a1)
{
  void **v1; // r4
  void *v2; // r0
  void *v3; // r0
  void **v4; // r0

  v1 = a1;
  if ( a1 )
  {
    v2 = *a1;
    if ( *v1 )
      free(v2);
    v3 = v1[1];
    if ( v3 )
      free(v3);
    v4 = v1;
    v1 = (void **)v1[2];
    sub_297758(v4);
  }
  return v1;
}
