void *__fastcall sub_27B48(_DWORD *a1)
{
  void *v2; // r0
  void *result; // r0

  v2 = (void *)a1[3];
  if ( v2 )
    free(v2);
  result = (void *)a1[5];
  if ( result )
    free(result);
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  return result;
}
