int sub_3FFBC()
{
  word_BCB50 = -1;
  word_BCB84 = -1;
  dword_BCB44 = restrictlist4;
  restrictlist4 = (int)&dword_BCB44;
  dword_BCB3C = 2;
  dword_BCB78 = restrictlist6;
  restrictlist6 = (int)&dword_BCB78;
  return _stack_chk_guard;
}
