int __fastcall sub_29707C(int a1, int a2)
{
  bool v3; // zf

  sub_28D354();
  dword_490154 = 0;
  v3 = (dword_48AAA0 & 0x80000) == 0;
  dword_48AAA0 |= 0x400u;
  if ( v3 )
  {
    sub_2932FC(a2);
    return sub_296F70();
  }
  else
  {
    sub_296D48(0, a2);
    sub_28D3C4("(arg: %d) ", dword_46DEDC * dword_46DEE0);
    return 0;
  }
}
