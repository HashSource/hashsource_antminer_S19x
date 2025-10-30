_DWORD *sub_13ED4()
{
  _DWORD *result; // r0
  _DWORD *v1; // r4
  void *v2; // r5

  result = sub_13828((void *)0x14);
  v1 = result;
  if ( result )
  {
    *result = 1;
    result[1] = 1;
    result[3] = 0;
    result[2] = 8;
    v2 = sub_13828((void *)0x20);
    v1[4] = v2;
    result = v1;
    if ( !v2 )
    {
      sub_1383C(v1);
      return 0;
    }
  }
  return result;
}
