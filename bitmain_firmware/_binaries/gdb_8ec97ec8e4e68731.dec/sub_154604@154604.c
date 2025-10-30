_DWORD *sub_154604()
{
  int v0; // r0
  int v1; // r0
  _DWORD *result; // r0

  v0 = sub_152E00();
  dword_487698 = sub_1FD590(v0);
  signal(2, (__sighandler_t)sub_1539F4);
  dword_487680 = (int)sub_153128((int)sub_1536A0, 0);
  signal(15, (__sighandler_t)sub_153A1C);
  dword_487688 = (int)sub_153128((int)sub_1539E8, 0);
  signal(5, 0);
  signal(3, (__sighandler_t)sub_153890);
  dword_487678 = (int)sub_153128((int)nullsub_52, 0);
  if ( signal(1, (__sighandler_t)sub_153864) == (__sighandler_t)1 )
    LOWORD(v1) = 13612;
  else
    LOWORD(v1) = 14568;
  HIWORD(v1) = 21;
  dword_487674 = (int)sub_153128(v1, 0);
  signal(8, (__sighandler_t)sub_153838);
  dword_487670 = (int)sub_153128((int)sub_153828, 0);
  result = sub_153128((int)sub_1537B4, 0);
  dword_48767C = (int)result;
  return result;
}
