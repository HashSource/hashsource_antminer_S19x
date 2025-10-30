int __fastcall sub_8B5FC(int a1, int a2, int a3)
{
  int v8; // [sp+10h] [bp-Ch]
  int v9; // [sp+14h] [bp-8h]

  if ( a1 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 28) + 16) == a2 && *(_DWORD *)(*(_DWORD *)(a1 + 28) + 20) == a3 )
    {
      sub_8CD10(0, "src/thread.c", 135, "buf size not changed, no need rebuild");
      return 0;
    }
    else
    {
      v8 = sub_8D738(a2, a3, "...\n");
      if ( v8 )
      {
        v9 = sub_8D738(a2, a3, "...\n");
        if ( v9 )
        {
          sub_8D6D0(*(_DWORD *)(a1 + 24));
          *(_DWORD *)(a1 + 24) = v8;
          sub_8D6D0(*(_DWORD *)(a1 + 28));
          *(_DWORD *)(a1 + 28) = v9;
          return 0;
        }
        sub_8CD10(2, "src/thread.c", 147, "zlog_buf_new fail");
      }
      else
      {
        sub_8CD10(2, "src/thread.c", 141, "zlog_buf_new fail");
      }
      if ( v8 )
        sub_8D6D0(v8);
      return -1;
    }
  }
  else
  {
    sub_8CD10(2, "src/thread.c", 131, "a_thread is null or 0");
    return -1;
  }
}
