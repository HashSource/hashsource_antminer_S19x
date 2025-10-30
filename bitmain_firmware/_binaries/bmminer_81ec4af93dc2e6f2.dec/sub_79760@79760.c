int __fastcall sub_79760(const char *a1)
{
  int v4; // [sp+14h] [bp-8h]
  int v5; // [sp+14h] [bp-8h]
  int v6; // [sp+14h] [bp-8h]

  if ( !a1 )
  {
    sub_89984(2, "src/zlog.c", 377, "cname is null or 0");
    return -1;
  }
  sub_89984(0, "src/zlog.c", 379, "------dzlog_set_category[%s] start------", a1);
  v4 = pthread_rwlock_wrlock(&stru_5BA76C);
  if ( v4 )
  {
    sub_89984(2, "src/zlog.c", 382, "pthread_rwlock_wrlock fail, rc[%d]", v4);
    return -1;
  }
  if ( dword_5BA7A0 )
  {
    dword_5BA798 = sub_7CED0(dword_5BA790, a1, *(_DWORD *)(dword_9C8B08 + 9288));
    if ( dword_5BA798 )
    {
      sub_89984(0, "src/zlog.c", 400, "------dzlog_set_category[%s] end, success------ ", a1);
      v5 = pthread_rwlock_unlock(&stru_5BA76C);
      if ( !v5 )
        return 0;
      sub_89984(2, "src/zlog.c", 403, "pthread_rwlock_unlock fail, rc=[%d]", v5);
      return -1;
    }
    sub_89984(2, "src/zlog.c", 396, "zlog_category_table_fetch_category[%s] fail", a1);
  }
  else
  {
    sub_89984(2, "src/zlog.c", 387, "never call zlog_init() or dzlog_init() before");
  }
  sub_89984(2, "src/zlog.c", 408, "------dzlog_set_category[%s] end, fail------ ", a1);
  v6 = pthread_rwlock_unlock(&stru_5BA76C);
  if ( v6 )
    sub_89984(2, "src/zlog.c", 411, "pthread_rwlock_unlock fail, rc=[%d]", v6);
  return -1;
}
