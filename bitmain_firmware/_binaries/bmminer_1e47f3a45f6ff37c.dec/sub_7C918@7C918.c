int __fastcall sub_7C918(const char *a1)
{
  int v4; // [sp+10h] [bp-Ch]
  int v5; // [sp+14h] [bp-8h]
  int v6; // [sp+14h] [bp-8h]
  int v7; // [sp+14h] [bp-8h]

  if ( !a1 )
  {
    sub_8CD10(2, "src/zlog.c", 334, "cname is null or 0");
    return 0;
  }
  sub_8CD10(0, "src/zlog.c", 335, "------zlog_get_category[%s] start------", a1);
  v5 = pthread_rwlock_wrlock(&stru_5BF628);
  if ( v5 )
  {
    sub_8CD10(2, "src/zlog.c", 338, "pthread_rwlock_wrlock fail, rc[%d]", v5);
    return 0;
  }
  if ( dword_5BF65C )
  {
    v4 = sub_802A4(dword_5BF64C, a1, *(_DWORD *)(dword_9CD9C0 + 9288));
    if ( v4 )
    {
      sub_8CD10(0, "src/zlog.c", 357, "------zlog_get_category[%s] success, end------ ", a1);
      v6 = pthread_rwlock_unlock(&stru_5BF628);
      if ( !v6 )
        return v4;
      sub_8CD10(2, "src/zlog.c", 360, "pthread_rwlock_unlock fail, rc=[%d]", v6);
      return 0;
    }
    sub_8CD10(2, "src/zlog.c", 353, "zlog_category_table_fetch_category[%s] fail", a1);
  }
  else
  {
    sub_8CD10(2, "src/zlog.c", 343, "never call zlog_init() or dzlog_init() before");
  }
  sub_8CD10(2, "src/zlog.c", 365, "------zlog_get_category[%s] fail, end------ ", a1);
  v7 = pthread_rwlock_unlock(&stru_5BF628);
  if ( v7 )
    sub_8CD10(2, "src/zlog.c", 368, "pthread_rwlock_unlock fail, rc=[%d]", v7);
  return 0;
}
