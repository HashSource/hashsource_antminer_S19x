__int64 __fastcall vip_toggle_reset(int a1)
{
  __int64 v2; // x22
  int reset; // w20

  v2 = raw_spin_lock_irqsave(&unk_41E0);
  reset = vip_get_reset();
  vip_set_reset(a1 | reset);
  _const_udelay(85900);
  vip_set_reset(reset & ~a1);
  return raw_spin_unlock_irqrestore(&unk_41E0, v2);
}
