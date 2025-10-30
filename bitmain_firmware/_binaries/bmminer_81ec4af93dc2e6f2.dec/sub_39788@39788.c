int __fastcall sub_39788(unsigned int a1, unsigned int a2)
{
  bool v2; // cc

  v2 = a2 > 0xFF;
  if ( a2 <= 0xFF )
    v2 = a1 > 3;
  if ( v2 )
    return 0;
  else
    return dword_B42F8[256 * a1 + 4 + a2];
}
