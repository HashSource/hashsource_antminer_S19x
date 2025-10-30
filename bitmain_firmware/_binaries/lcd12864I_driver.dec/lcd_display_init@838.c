int lcd_display_init()
{
  int v0; // r4
  int v1; // r4
  int v2; // r4
  int v3; // r4
  int v4; // r4
  int result; // r0

  v0 = 11;
  SendCommad(48);
  while ( --v0 )
    arm_delay_ops[1](214748000);
  v1 = 11;
  printk(&unk_C06);
  SendCommad(48);
  while ( --v1 )
    arm_delay_ops[1](214748000);
  v2 = 11;
  printk(&unk_C06);
  SendCommad(12);
  while ( --v2 )
    arm_delay_ops[1](214748000);
  v3 = 11;
  printk(&unk_C2F);
  SendCommad(1);
  while ( --v3 )
    arm_delay_ops[1](214748000);
  v4 = 101;
  for ( result = printk(&unk_C42); --v4; result = ((int (__fastcall *)(int))arm_delay_ops[1])(214748000) )
    ;
  return result;
}
