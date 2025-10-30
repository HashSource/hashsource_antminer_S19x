int __fastcall sub_7C370(int a1)
{
  int v4; // [sp+18h] [bp-14h]
  int v5; // [sp+1Ch] [bp-10h]
  int v6; // [sp+1Ch] [bp-10h]
  int v7; // [sp+1Ch] [bp-10h]
  int v8; // [sp+1Ch] [bp-10h]
  int i; // [sp+24h] [bp-8h]

  sub_8CD10(0, "src/zlog.c", 219, "------zlog_reload start------");
  v5 = pthread_rwlock_wrlock(&stru_5BF628);
  if ( v5 )
  {
    sub_8CD10(2, "src/zlog.c", 222, "pthread_rwlock_wrlock fail, rc[%d]", v5);
    return -1;
  }
  if ( !dword_5BF65C )
  {
    sub_8CD10(2, "src/zlog.c", 227, "never call zlog_init() or dzlog_init() before");
    goto LABEL_27;
  }
  if ( !a1 )
    a1 = dword_9CD9C0;
  if ( a1 == -1 )
  {
    if ( *(_DWORD *)(dword_9CD9C0 + 9276) >= (unsigned int)dword_5BF658 )
    {
LABEL_27:
      sub_8CD10(0, "src/zlog.c", 291, "------zlog_reload do nothing------");
      v8 = pthread_rwlock_unlock(&stru_5BF628);
      if ( !v8 )
        return 0;
      sub_8CD10(2, "src/zlog.c", 294, "pthread_rwlock_unlock fail, rc=[%d]", v8);
      return -1;
    }
    a1 = dword_9CD9C0;
  }
  dword_5BF658 = 0;
  v4 = sub_808EC(a1);
  if ( v4 )
  {
    for ( i = 0; *(_DWORD *)(*(_DWORD *)(v4 + 9288) + 4) > i; ++i )
      sub_8917C(*(_DWORD *)(**(_DWORD **)(v4 + 9288) + 4 * i), dword_5BF650);
    if ( !sub_800CC(dword_5BF64C, *(_DWORD *)(v4 + 9288)) )
    {
      ++dword_5BF660;
      sub_80194(dword_5BF64C);
      sub_807B8(dword_9CD9C0);
      dword_9CD9C0 = v4;
      sub_8CD10(0, "src/zlog.c", 271, "------zlog_reload success, total init verison[%d] ------", dword_5BF660);
      v6 = pthread_rwlock_unlock(&stru_5BF628);
      if ( !v6 )
        return 0;
      sub_8CD10(2, "src/zlog.c", 274, "pthread_rwlock_unlock fail, rc=[%d]", v6);
      return -1;
    }
    sub_8CD10(2, "src/zlog.c", 260, "zlog_category_table_update fail");
  }
  else
  {
    sub_8CD10(2, "src/zlog.c", 250, "zlog_conf_new fail");
  }
  sub_8CD10(1, "src/zlog.c", 280, "zlog_reload fail, use old conf file, still working");
  if ( v4 )
    sub_807B8(v4);
  sub_8CD10(2, "src/zlog.c", 283, "------zlog_reload fail, total init version[%d] ------", dword_5BF660);
  v7 = pthread_rwlock_unlock(&stru_5BF628);
  if ( v7 )
    sub_8CD10(2, "src/zlog.c", 286, "pthread_rwlock_unlock fail, rc=[%d]", v7);
  return -1;
}
