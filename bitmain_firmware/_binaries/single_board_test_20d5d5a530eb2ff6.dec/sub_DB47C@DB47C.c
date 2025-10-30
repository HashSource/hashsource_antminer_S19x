int __fastcall sub_DB47C(unsigned int a1, int a2, int a3)
{
  unsigned int v3; // r4

  if ( a1 <= 0x11 )
    return (int)*(&off_21FAE4 + a1);
  if ( dword_6E1948 )
  {
    v3 = a1 - 18;
    if ( a1 - 18 < sub_10C010(dword_6E1948, a2, a3) )
      return sub_10C01C(dword_6E1948, v3);
  }
  return 0;
}
