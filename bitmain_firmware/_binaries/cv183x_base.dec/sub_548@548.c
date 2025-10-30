__int64 __fastcall sub_548(__int64 a1)
{
  __int64 v1; // x20
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  unsigned int v7; // w22
  char v8; // w1
  __int64 v10; // x1

  v1 = a1 + 16;
  if ( (word_3DBA & 4) != 0 )
    _dynamic_pr_debug(off_3D98, "base_probe start\n");
  v2 = devm_kmalloc(v1, 104, 37781696);
  if ( v2 && (v3 = kmalloc_order_trace(655360, 37781696, 8), (*(_QWORD *)(v2 + 88) = v3) != 0) )
  {
    qword_41C8 = proc_mkdir("cvitek", 0);
    if ( (vb_proc_init() & 0x80000000) != 0 )
      printk(&unk_2CB8, v4);
    if ( (log_proc_init(qword_41C8, *(_QWORD *)(v2 + 88)) & 0x80000000) != 0 )
      printk(&unk_2CD0, v5);
    if ( (sys_proc_init(qword_41C8, *(_QWORD *)(v2 + 88)) & 0x80000000) != 0 )
      printk(&unk_2CE8, v6);
    *(_QWORD *)(v2 + 16) = "cvi-base";
    *(_DWORD *)(v2 + 8) = 255;
    *(_QWORD *)v2 = v1;
    *(_QWORD *)(v2 + 24) = &off_22D0;
    v7 = misc_register(v2 + 8);
    if ( v7 && (dev_err(*(_QWORD *)v2, "cvi_base: failed to register misc device.\n"), (v7 & 0x80000000) != 0) )
    {
      printk(&unk_2D40, v10);
    }
    else
    {
      v8 = word_3DE2;
      *(_QWORD *)(v1 + 184) = v2;
      v7 = 0;
      if ( (v8 & 4) != 0 )
        _dynamic_pr_debug(off_3DC0, "%s DONE\n", "base_probe");
    }
  }
  else
  {
    return (unsigned int)-12;
  }
  return v7;
}
