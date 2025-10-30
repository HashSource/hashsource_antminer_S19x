int __fastcall sub_2F117C(unsigned __int8 **a1, unsigned int a2, int *a3)
{
  unsigned __int8 *v3; // r4
  unsigned __int8 *i; // r3
  int v5; // lr
  char v7; // t1

  v3 = *a1;
  for ( i = *a1; ; ++i )
  {
    if ( a2 <= (unsigned int)i )
      return 0;
    *a1 = i + 1;
    v5 = *i;
    if ( (v5 & 0x80) == 0 )
      break;
  }
  *a3 = v5;
  if ( v3 < i )
  {
    do
    {
      v7 = *--i;
      v5 = v7 & 0x7F | (v5 << 7);
      *a3 = v5;
    }
    while ( v3 != i );
  }
  return 1;
}
