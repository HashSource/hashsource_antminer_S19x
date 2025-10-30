int __fastcall sub_280288(int a1)
{
  unsigned int v1; // r0
  int *v2; // r3

  dword_48AAA0 |= 0x40u;
  v1 = sub_29334C(a1) - 97;
  dword_48AAA0 &= ~0x40u;
  if ( v1 > 0x19 )
  {
    sub_2945C8();
    return -1;
  }
  else
  {
    v2 = &dword_48AB10[v1];
    v2[1] = dword_4900D8;
    return 0;
  }
}
