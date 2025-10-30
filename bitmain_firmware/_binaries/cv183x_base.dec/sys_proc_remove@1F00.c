__int64 __fastcall sys_proc_remove(__int64 a1)
{
  remove_proc_entry("sys", a1);
  qword_4208 = 0;
  return 0;
}
