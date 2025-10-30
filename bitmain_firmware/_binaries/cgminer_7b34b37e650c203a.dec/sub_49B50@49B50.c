int __fastcall sub_49B50(int result, unsigned int a2)
{
  int v2; // r12
  unsigned int v3; // r3

  if ( !a2 )
    JUMPOUT(0x4A1A8);
  v2 = result ^ a2;
  if ( (a2 & 0x80000000) != 0 )
    a2 = -a2;
  if ( a2 == 1 )
  {
    if ( (v2 ^ result) < 0 )
      return -result;
  }
  else
  {
    v3 = result;
    if ( result < 0 )
      v3 = -result;
    if ( v3 <= a2 )
    {
      if ( v3 < a2 )
        result = 0;
      if ( v3 == a2 )
        return (v2 >> 31) | 1;
    }
    else if ( (a2 & (a2 - 1)) != 0 )
    {
      return ((int (__fastcall *)(_DWORD))((char *)&loc_49B98 + 16 * (31 - (__clz(a2) - __clz(v3)))))(0);
    }
    else
    {
      result = v3 >> (31 - __clz(a2));
      if ( v2 < 0 )
        return -result;
    }
  }
  return result;
}
