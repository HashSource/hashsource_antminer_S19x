int sub_40D88()
{
  word_BDB64 = -1;
  word_BDB98 = -1;
  dword_BDB58 = restrictlist4;
  restrictlist4 = (int)&dword_BDB58;
  dword_BDB54 = 2;
  dword_BDB8C = restrictlist6;
  restrictlist6 = (int)&dword_BDB8C;
  return _stack_chk_guard;
}
