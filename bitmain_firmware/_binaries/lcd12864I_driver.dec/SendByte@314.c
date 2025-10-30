int __fastcall SendByte(int a1)
{
  int v2; // r4
  unsigned int v3; // r0
  int result; // r0

  v2 = 0;
  do
  {
    set_sclk(0);
    v3 = a1 << v2++;
    set_sid((v3 >> 7) & 1);
    arm_delay_ops[1](214748);
    set_sclk(1);
    arm_delay_ops[1](214748);
    result = set_sclk(0);
  }
  while ( v2 != 8 );
  return result;
}
