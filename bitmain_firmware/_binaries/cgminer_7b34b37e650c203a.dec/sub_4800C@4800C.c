_DWORD *__fastcall sub_4800C(_BYTE *a1, size_t a2, int a3)
{
  _BYTE *v3; // r5
  _DWORD *result; // r0

  v3 = a1;
  if ( !a1 )
    return 0;
  if ( !a3 )
  {
    v3 = sub_4777C(a1, a2);
    if ( !v3 )
      return 0;
  }
  result = sub_4774C((void *)0x10);
  if ( result )
  {
    result[2] = v3;
    result[3] = a2;
    *result = 2;
    result[1] = 1;
  }
  else
  {
    sub_47764(v3);
    return 0;
  }
  return result;
}
