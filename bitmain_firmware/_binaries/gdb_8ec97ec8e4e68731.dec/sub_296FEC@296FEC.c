int sub_296FEC()
{
  int result; // r0
  bool v1; // zf

  sub_28D354();
  result = 0;
  dword_490154 = 0;
  v1 = (dword_48AAA0 & 0x80000) == 0;
  dword_46DEDC *= 4;
  dword_48AAA0 |= 0x400u;
  if ( v1 )
    return sub_296F70();
  return result;
}
