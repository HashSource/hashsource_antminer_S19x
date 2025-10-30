int __fastcall sub_290930(int a1)
{
  int result; // r0

  dword_48AAA0 |= 0x8000u;
  result = sub_293E98();
  if ( (unsigned int)off_48AF34 > 1 )
    result = off_48AF34(a1);
  dword_48AAA0 &= ~0x8000u;
  return result;
}
