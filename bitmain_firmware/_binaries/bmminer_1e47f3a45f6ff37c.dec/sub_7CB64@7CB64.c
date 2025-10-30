int __fastcall sub_7CB64(const char *a1)
{
  int v4; // [sp+14h] [bp-8h]
  int v5; // [sp+14h] [bp-8h]
  int v6; // [sp+14h] [bp-8h]

  if ( !a1 )
  {
    sub_8CD10(2, "src/zlog.c", 377, "cname is null or 0");
    return -1;
  }
  sub_8CD10(0, "src/zlog.c", 379, "------dzlog_set_category[%s] start------", a1);
  v4 = pthread_rwlock_wrlock(&stru_5BF628);
  if ( v4 )
  {
    sub_8CD10(2, "src/zlog.c", 382, "pthread_rwlock_wrlock fail, rc[%d]", v4);
    return -1;
  }
  if ( dword_5BF65C )
  {
    dword_5BF654 = sub_802A4(dword_5BF64C, a1, *(_DWORD *)(dword_9CD9C0 + 9288));
    if ( dword_5BF654 )
    {
      sub_8CD10(0, "src/zlog.c", 400, "------dzlog_set_category[%s] end, success------ ", a1);
      v5 = pthread_rwlock_unlock(&stru_5BF628);
      if ( !v5 )
        return 0;
      sub_8CD10(2, "src/zlog.c", 403, "pthread_rwlock_unlock fail, rc=[%d]", v5);
      return -1;
    }
    sub_8CD10(2, "src/zlog.c", 396, "zlog_category_table_fetch_category[%s] fail", a1);
  }
  else
  {
    sub_8CD10(2, "src/zlog.c", 387, "never call zlog_init() or dzlog_init() before");
  }
  sub_8CD10(2, "src/zlog.c", 408, "------dzlog_set_category[%s] end, fail------ ", a1);
  v6 = pthread_rwlock_unlock(&stru_5BF628);
  if ( v6 )
    sub_8CD10(2, "src/zlog.c", 411, "pthread_rwlock_unlock fail, rc=[%d]", v6);
  return -1;
}
