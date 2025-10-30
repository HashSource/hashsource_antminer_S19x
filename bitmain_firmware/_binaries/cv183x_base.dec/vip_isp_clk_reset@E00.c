__int64 vip_isp_clk_reset()
{
  unsigned int *v0; // x20
  __int64 v1; // x22
  unsigned int v2; // w0

  v0 = (unsigned int *)_ioremap(50339888, 4, 0xE8000000000707LL);
  v1 = raw_spin_lock_irqsave(&unk_41E0);
  vip_set_reset(0x3003u);
  vip_set_isp_clk(0xFFFFFFFF);
  vip_set_isp_clk(0);
  vip_set_isp_clk(0x80000u);
  vip_set_reset(0x3002u);
  vip_set_isp_clk(0);
  vip_set_isp_clk(0x40000u);
  vip_set_reset(0x3000u);
  vip_set_isp_clk(0);
  vip_set_isp_clk(0x300000u);
  vip_set_reset(0);
  vip_set_isp_clk(0);
  vip_set_isp_clk(0xFFFFFFFF);
  v2 = *v0;
  __dsb(0xDu);
  __dsb(0xEu);
  *v0 = v2 & 0xFC1FFFFF;
  raw_spin_unlock_irqrestore(&unk_41E0, v1);
  return _iounmap(v0);
}
