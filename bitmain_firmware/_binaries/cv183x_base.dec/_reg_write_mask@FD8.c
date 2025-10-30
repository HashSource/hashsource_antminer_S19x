__int64 __fastcall reg_write_mask(int *a1, int a2, int a3)
{
  __int64 v6; // x0
  int v7; // w2

  v6 = raw_spin_lock_irqsave(&unk_3D30);
  v7 = *a1;
  __dsb(0xEu);
  *a1 = (a3 ^ v7) & a2 ^ v7;
  return raw_spin_unlock_irqrestore(&unk_3D30, v6);
}
