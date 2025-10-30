int sub_296CF4()
{
  int result; // r0

  sub_28D3C4("(arg: %d) ", dword_46DEDC * dword_46DEE0);
  dword_48AAA0 |= 0x40u;
  result = sub_29334C();
  dword_48AAA0 &= ~0x40u;
  return result;
}
