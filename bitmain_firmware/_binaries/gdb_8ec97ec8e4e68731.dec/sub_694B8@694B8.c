_DWORD *__fastcall sub_694B8(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0

  v2 = (void *)a1[1];
  if ( v2 )
    free(v2);
  v3 = (void *)a1[2];
  if ( v3 )
    free(v3);
  v4 = (void *)a1[5];
  if ( v4 )
    free(v4);
  sub_31DAD0(a1[6]);
  return a1;
}
