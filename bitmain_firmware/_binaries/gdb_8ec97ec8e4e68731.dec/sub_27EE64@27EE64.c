int __fastcall sub_27EE64(int a1)
{
  int result; // r0

  if ( a1 == 27 )
  {
    dword_48AAA0 |= 0x50u;
    result = sub_29334C();
    dword_48AAA0 &= 0xFFFFFFAF;
  }
  else
  {
    dword_48AAA0 |= 0x40u;
    result = sub_29334C();
    dword_48AAA0 &= ~0x40u;
  }
  return result;
}
