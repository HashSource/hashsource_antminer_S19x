void **__fastcall sub_2971BC(void **result)
{
  void **v1; // r4
  void *v2; // r0
  void *v3; // r0

  v1 = result;
  if ( result )
  {
    v2 = *result;
    if ( *v1 )
      free(v2);
    v3 = v1[1];
    if ( v3 )
      free(v3);
    return (void **)sub_297758(v1);
  }
  return result;
}
