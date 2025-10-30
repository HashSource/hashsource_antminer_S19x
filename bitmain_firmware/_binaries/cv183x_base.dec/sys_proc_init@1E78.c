__int64 __fastcall sys_proc_init(__int64 a1, __int64 a2)
{
  __int64 v3; // x1
  __int64 result; // x0

  if ( proc_create_data("sys", 420, a1, &off_29B8, 0) )
  {
    result = 0;
  }
  else
  {
    printk(&unk_37F0, v3);
    result = 0xFFFFFFFFLL;
  }
  qword_4208 = a2;
  return result;
}
