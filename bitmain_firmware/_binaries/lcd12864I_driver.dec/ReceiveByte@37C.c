int ReceiveByte()
{
  int v0; // r5
  int v1; // r8
  unsigned int v2; // r4
  int v3; // r4
  int v4; // r5
  unsigned int v5; // r7
  unsigned int v6; // r0
  int v7; // r0

  v0 = 0;
  v1 = 0;
  set_sid_direction(0);
  do
  {
    set_sclk(0);
    arm_delay_ops[1](214748);
    set_sclk(1);
    arm_delay_ops[1](214748);
    set_sclk(0);
    v2 = *(_DWORD *)gpio_value_addr;
    __dsb(0xFu);
    v3 = (v2 >> 25) & 1 | (v1 << v0++);
    arm_delay_ops[1](214748);
    v1 = (unsigned __int8)v3;
  }
  while ( v0 != 8 );
  v4 = 0;
  v5 = 0;
  do
  {
    set_sclk(0);
    arm_delay_ops[1](214748);
    set_sclk(1);
    arm_delay_ops[1](214748);
    set_sclk(0);
    v6 = *(_DWORD *)gpio_value_addr;
    __dsb(0xFu);
    v7 = (v6 >> 25) & 1 | (v5 << v4++);
    v5 = (unsigned __int8)v7;
    arm_delay_ops[1](214748);
  }
  while ( v4 != 8 );
  set_sid_direction(1);
  return v3 & 0xF0 | (unsigned __int8)(v5 >> 4);
}
