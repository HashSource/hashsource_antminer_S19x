void *sub_30C68()
{
  mon_enabled = 0;
  dword_108314 = (int)&mon_mru_list;
  dword_108310 = (int)&mon_mru_list;
  return &_stack_chk_guard;
}
