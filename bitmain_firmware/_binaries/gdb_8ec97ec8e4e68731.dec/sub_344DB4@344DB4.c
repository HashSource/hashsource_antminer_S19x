_DWORD *__fastcall sub_344DB4(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r4
  _BOOL4 v3; // r0
  _DWORD *result; // r0

  if ( a1 > 0x3FFFFFFC )
    sub_33D184("basic_string::_S_create");
  v2 = a1;
  if ( a1 > a2 )
  {
    if ( a1 < 2 * a2 )
      v2 = 2 * a2;
    v3 = v2 + 29 > 0x1000;
    if ( a2 >= v2 )
      v3 = 0;
    if ( v3 )
    {
      v2 = v2 + 4096 - (((_WORD)v2 + 29) & 0xFFF);
      if ( v2 >= 0x3FFFFFFC )
        v2 = 1073741820;
    }
  }
  result = sub_9836C(v2 + 13);
  result[1] = v2;
  result[2] = 0;
  return result;
}
