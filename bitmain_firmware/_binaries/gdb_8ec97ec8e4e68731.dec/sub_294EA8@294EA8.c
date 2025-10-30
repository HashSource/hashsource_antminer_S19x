int __fastcall sub_294EA8(int a1)
{
  int v2; // r0
  int v3; // r3
  unsigned __int8 v4; // r6

  dword_48AAA0 |= 0x40u;
  v2 = sub_29334C();
  v3 = dword_48AAA0;
  v4 = v2;
  dword_48AAA0 &= ~0x40u;
  if ( v2 < 0 )
    return -1;
  if ( (v3 & 0x80000) == 0 )
    sub_28470C();
  if ( a1 <= 0 )
    return 0;
  else
    return sub_294B58(a1, v4);
}
