void *__fastcall sub_9E540(void *result, unsigned int *a2, unsigned int a3, int a4)
{
  unsigned int v4; // r12

  if ( *a2 < a3 )
  {
    v4 = 2 * *a2;
    if ( v4 < a3 )
      v4 = a3;
    *a2 = v4;
    return sub_9D470(result, a2, a4);
  }
  return result;
}
