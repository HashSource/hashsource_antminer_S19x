__int64 vip_get_reset()
{
  int v0; // w0
  char v1; // w1

  v0 = *(_DWORD *)qword_41D8;
  __dsb(0xDu);
  v1 = *(_DWORD *)(qword_41D8 + 4);
  __dsb(0xDu);
  return ((v1 & 3) << 12) | v0 & 0xCFFFu;
}
