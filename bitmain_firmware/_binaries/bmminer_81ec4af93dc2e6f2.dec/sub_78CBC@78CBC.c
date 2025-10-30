int __fastcall sub_78CBC(const char *a1, const char *a2)
{
  int v6; // [sp+1Ch] [bp-8h]
  int v7; // [sp+1Ch] [bp-8h]
  int v8; // [sp+1Ch] [bp-8h]

  sub_89984(0, "src/zlog.c", 162, "------dzlog_init start------");
  sub_89984(0, "src/zlog.c", 164, "------compile time[%s %s], version[%s]------", "Feb  5 2025", "17:19:30", "1.2.12");
  v6 = pthread_rwlock_wrlock(&stru_5BA76C);
  if ( v6 )
  {
    sub_89984(2, "src/zlog.c", 168, "pthread_rwlock_wrlock fail, rc[%d]", v6);
    return -1;
  }
  if ( dword_5BA7A0 )
  {
    sub_89984(2, "src/zlog.c", 173, "already init, use zlog_reload pls");
  }
  else if ( sub_788B4(a1) )
  {
    sub_89984(2, "src/zlog.c", 178, "zlog_init_inner[%s] fail", a1);
  }
  else
  {
    dword_5BA798 = sub_7CED0(dword_5BA790, a2, *(_DWORD *)(dword_9C8B08 + 9288));
    if ( dword_5BA798 )
    {
      dword_5BA7A0 = 1;
      ++dword_5BA7A4;
      sub_89984(0, "src/zlog.c", 194, "------dzlog_init success end------");
      v7 = pthread_rwlock_unlock(&stru_5BA76C);
      if ( !v7 )
        return 0;
      sub_89984(2, "src/zlog.c", 197, "pthread_rwlock_unlock fail, rc=[%d]", v7);
      return -1;
    }
    sub_89984(2, "src/zlog.c", 187, "zlog_category_table_fetch_category[%s] fail", a2);
  }
  sub_89984(2, "src/zlog.c", 202, "------dzlog_init fail end------");
  v8 = pthread_rwlock_unlock(&stru_5BA76C);
  if ( v8 )
    sub_89984(2, "src/zlog.c", 205, "pthread_rwlock_unlock fail, rc=[%d]", v8);
  return -1;
}
