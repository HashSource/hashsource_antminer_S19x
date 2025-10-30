_DWORD *__fastcall sub_13D28(_BYTE *a1, size_t a2, int a3)
{
  _BYTE *v4; // r5
  _DWORD *result; // r0

  v4 = a1;
  if ( !a1 )
    return 0;
  if ( !a3 )
  {
    v4 = sub_1384C(a1, a2);
    if ( !v4 )
      return 0;
  }
  result = sub_13828((void *)0x10);
  if ( result )
  {
    result[2] = v4;
    result[3] = a2;
    *result = 2;
    result[1] = 1;
  }
  else
  {
    sub_1383C(v4);
    return 0;
  }
  return result;
}
