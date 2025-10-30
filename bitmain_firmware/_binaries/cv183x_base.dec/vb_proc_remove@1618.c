__int64 __fastcall vb_proc_remove(__int64 a1)
{
  remove_proc_entry("vb", a1);
  qword_41F8 = 0;
  return 0;
}
