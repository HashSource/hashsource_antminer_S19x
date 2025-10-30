int __fastcall sub_336BB8(unsigned __int8 *a1, int a2)
{
  unsigned int v2; // r3
  unsigned __int8 *v3; // r2
  bool v4; // cc
  int result; // r0
  unsigned int v6; // t1
  unsigned int v7; // t1

  v2 = *a1;
  v3 = a1;
  if ( !*a1 )
    return *a1;
  v4 = v2 > 0x5B;
  result = 0;
  if ( v2 == 91 )
    goto LABEL_10;
  while ( 1 )
  {
    if ( !v4 )
    {
      if ( v2 != 42 && v2 != 63 )
        goto LABEL_8;
      return 1;
    }
    if ( v2 != 92 )
    {
      if ( v2 != 93 || (result & 4) == 0 )
        goto LABEL_8;
      return 1;
    }
    v2 = v3[1];
    if ( !a2 )
      break;
    result |= 2u;
    if ( !v3[1] )
      return result;
    v7 = v3[2];
    v3 += 2;
    v2 = v7;
    if ( !v7 )
      return result;
LABEL_9:
    while ( 1 )
    {
      v4 = v2 > 0x5B;
      if ( v2 != 91 )
        break;
LABEL_10:
      result |= 4u;
LABEL_8:
      v6 = *++v3;
      v2 = v6;
      if ( !v6 )
        return result;
    }
  }
  ++v3;
  if ( v2 )
    goto LABEL_9;
  return result;
}
