int __fastcall sub_8B7A8(int a1, size_t a2)
{
  void *v5; // [sp+Ch] [bp-8h]

  if ( a1 )
  {
    v5 = sub_82488(a2);
    if ( v5 )
    {
      sub_823F4(*(void ***)(a1 + 8));
      *(_DWORD *)(a1 + 8) = v5;
      return 0;
    }
    else
    {
      sub_8CD10(2, "src/thread.c", 171, "zlog_event_new fail");
      return -1;
    }
  }
  else
  {
    sub_8CD10(2, "src/thread.c", 167, "a_thread is null or 0", a2);
    return -1;
  }
}
