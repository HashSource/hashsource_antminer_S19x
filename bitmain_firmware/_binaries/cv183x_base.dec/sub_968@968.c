__int64 __fastcall sub_968(__int64 a1)
{
  __int64 v2; // x21

  v2 = *(_QWORD *)(a1 + 200);
  vb_proc_remove(qword_41C8);
  log_proc_remove(qword_41C8);
  sys_proc_remove(qword_41C8);
  proc_remove(qword_41C8);
  qword_41C8 = 0;
  kfree(*(_QWORD *)(v2 + 88));
  *(_QWORD *)(v2 + 88) = 0;
  misc_deregister(v2 + 8);
  *(_QWORD *)(a1 + 200) = 0;
  if ( (word_3E32 & 4) != 0 )
    _dynamic_pr_debug(off_3E10, "%s DONE\n", "base_remove");
  return 0;
}
