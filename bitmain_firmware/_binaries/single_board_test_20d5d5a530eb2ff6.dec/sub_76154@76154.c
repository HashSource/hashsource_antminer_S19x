int __fastcall sub_76154(unsigned int a1, int a2)
{
  unsigned int v2; // r5
  unsigned __int8 *v3; // r3
  int v4; // r2
  int v5; // r4
  unsigned int v6; // r4
  int result; // r0

  if ( a1 > 0xF )
    return sub_76120(a1);
  v2 = byte_65E5D8[68 * a1];
  v3 = &byte_65E5D8[68 * a1];
  if ( *v3 )
  {
    if ( v3[4] == a2 )
      return 0;
    v4 = 1;
    while ( 1 )
    {
      v6 = (unsigned __int8)v4;
      result = v4++;
      if ( v2 <= v6 )
        break;
      v5 = v3[12];
      v3 += 8;
      if ( v5 == a2 )
        return result;
    }
  }
  return -2147482112;
}
