int __fastcall sub_313C18(unsigned __int8 **a1)
{
  unsigned __int8 *v1; // r1
  int v2; // lr
  int v3; // r9
  signed int v4; // r3
  int v5; // r12
  int v6; // r6

  v1 = *a1;
  v2 = **a1;
  if ( v2 != 110 )
  {
    if ( (unsigned int)(v2 - 48) <= 9 )
    {
      v3 = 0;
      goto LABEL_4;
    }
    return 0;
  }
  *a1 = v1 + 1;
  v2 = v1[1];
  if ( (unsigned int)(v2 - 48) > 9 )
    return 0;
  ++v1;
  v3 = 1;
LABEL_4:
  v4 = 0;
  while ( 1 )
  {
    *a1 = ++v1;
    v5 = *v1;
    v6 = v2 + 10 * v4;
    v4 = v6 - 48;
    v2 = v5;
    if ( (unsigned __int8)(v5 - 48) > 9u )
      break;
    if ( v4 > (int)((-2147483601 - v5) / 0xAu) )
      return -1;
  }
  if ( v3 )
    return 48 - v6;
  return v4;
}
