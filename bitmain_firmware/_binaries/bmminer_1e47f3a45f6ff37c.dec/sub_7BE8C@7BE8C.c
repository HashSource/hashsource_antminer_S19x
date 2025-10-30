int __fastcall sub_7BE8C(const char *a1)
{
  int v4; // [sp+1Ch] [bp-8h]
  int v5; // [sp+1Ch] [bp-8h]
  int v6; // [sp+1Ch] [bp-8h]

  sub_8CD10(0, "src/zlog.c", 119, "------zlog_init start------");
  sub_8CD10(0, "src/zlog.c", 120, "------compile time[%s %s], version[%s]------", "Feb  5 2025", "17:05:29", "1.2.12");
  v4 = pthread_rwlock_wrlock(&stru_5BF628);
  if ( v4 )
  {
    sub_8CD10(2, "src/zlog.c", 124, "pthread_rwlock_wrlock fail, rc[%d]", v4);
    return -1;
  }
  if ( dword_5BF65C )
  {
    sub_8CD10(2, "src/zlog.c", 129, "already init, use zlog_reload pls");
  }
  else
  {
    if ( !sub_7BCB4(a1) )
    {
      dword_5BF65C = 1;
      ++dword_5BF660;
      sub_8CD10(0, "src/zlog.c", 142, "------zlog_init success end------");
      v5 = pthread_rwlock_unlock(&stru_5BF628);
      if ( !v5 )
        return 0;
      sub_8CD10(2, "src/zlog.c", 145, "pthread_rwlock_unlock fail, rc=[%d]", v5);
      return -1;
    }
    sub_8CD10(2, "src/zlog.c", 135, "zlog_init_inner[%s] fail", a1);
  }
  sub_8CD10(2, "src/zlog.c", 150, "------zlog_init fail end------");
  v6 = pthread_rwlock_unlock(&stru_5BF628);
  if ( v6 )
    sub_8CD10(2, "src/zlog.c", 153, "pthread_rwlock_unlock fail, rc=[%d]", v6);
  return -1;
}
