int __fastcall sub_16E48C(int a1, unsigned __int8 *src, unsigned int a3)
{
  unsigned int v3; // r7
  unsigned __int8 *v5; // r8
  unsigned __int8 *v6; // r5
  unsigned int i; // r4

  v3 = a3;
  v5 = src;
  if ( a3 >= 0x10000000 )
  {
    v6 = src;
    for ( i = a3; i >= 0x10000000; i -= 0x10000000 )
    {
      sub_16E208(a1, v6, 0x80000000);
      v6 += 0x10000000;
    }
    a3 = v3 & 0xFFFFFFF;
    v5 += ((v3 - 0x10000000) & 0xF0000000) + 0x10000000;
  }
  if ( a3 )
    sub_16E208(a1, v5, 8 * a3);
  return 1;
}
