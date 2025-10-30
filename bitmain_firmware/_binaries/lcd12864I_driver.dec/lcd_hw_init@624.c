int __fastcall lcd_hw_init(int a1)
{
  int v1; // r4
  int v2; // r4
  int v3; // r4
  int v4; // r4
  int v5; // r4
  int v6; // r4
  int v7; // r4
  int v8; // r4
  int v9; // r4
  int result; // r0

  v1 = 101;
  enable_gpios(a1);
  set_cs_direction(1);
  set_cs(0);
  set_sclk_direction(1);
  set_sclk(0);
  set_sid_direction(1);
  set_sid(0);
  set_reset_direction(1);
  set_reset(0);
  while ( --v1 )
    arm_delay_ops[1](214748000);
  v2 = 101;
  set_reset(1);
  while ( --v2 )
    arm_delay_ops[1](214748000);
  v3 = 11;
  SendCommad(48);
  while ( --v3 )
    arm_delay_ops[1](214748000);
  v4 = 11;
  printk(&unk_C06);
  SendCommad(6);
  while ( --v4 )
    arm_delay_ops[1](214748000);
  v5 = 11;
  printk(&unk_C1B);
  SendCommad(15);
  while ( --v5 )
    arm_delay_ops[1](214748000);
  v6 = 11;
  printk(&unk_C2F);
  SendCommad(1);
  while ( --v6 )
    arm_delay_ops[1](214748000);
  v7 = 11;
  printk(&unk_C42);
  SendCommad(2);
  while ( --v7 )
    arm_delay_ops[1](214748000);
  v8 = 11;
  printk(&unk_C54);
  SendCommad(128);
  while ( --v8 )
    arm_delay_ops[1](214748000);
  v9 = 101;
  for ( result = printk(&unk_C69); --v9; result = ((int (__fastcall *)(int))arm_delay_ops[1])(214748000) )
    ;
  return result;
}
