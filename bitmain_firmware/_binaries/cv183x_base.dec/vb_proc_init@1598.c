__int64 __fastcall vb_proc_init(__int64 a1, __int64 a2)
{
  __int64 v3; // x1
  __int64 result; // x0

  if ( proc_create_data("vb", 420, a1, &off_25B8, 0) )
  {
    result = 0;
  }
  else
  {
    printk(&unk_32B8, v3);
    result = 0xFFFFFFFFLL;
  }
  qword_41F8 = a2;
  return result;
}
