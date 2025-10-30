int __fastcall sub_78A8C(const char *a1)
{
  int v4; // [sp+1Ch] [bp-8h]
  int v5; // [sp+1Ch] [bp-8h]
  int v6; // [sp+1Ch] [bp-8h]

  sub_89984(0, "src/zlog.c", 119, "------zlog_init start------");
  sub_89984(0, "src/zlog.c", 120, "------compile time[%s %s], version[%s]------", "Feb  5 2025", "17:19:30", "1.2.12");
  v4 = pthread_rwlock_wrlock(&stru_5BA76C);
  if ( v4 )
  {
    sub_89984(2, "src/zlog.c", 124, "pthread_rwlock_wrlock fail, rc[%d]", v4);
    return -1;
  }
  if ( dword_5BA7A0 )
  {
    sub_89984(2, "src/zlog.c", 129, "already init, use zlog_reload pls");
  }
  else
  {
    if ( !sub_788B4(a1) )
    {
      dword_5BA7A0 = 1;
      ++dword_5BA7A4;
      sub_89984(0, "src/zlog.c", 142, "------zlog_init success end------");
      v5 = pthread_rwlock_unlock(&stru_5BA76C);
      if ( !v5 )
        return 0;
      sub_89984(2, "src/zlog.c", 145, "pthread_rwlock_unlock fail, rc=[%d]", v5);
      return -1;
    }
    sub_89984(2, "src/zlog.c", 135, "zlog_init_inner[%s] fail", a1);
  }
  sub_89984(2, "src/zlog.c", 150, "------zlog_init fail end------");
  v6 = pthread_rwlock_unlock(&stru_5BA76C);
  if ( v6 )
    sub_89984(2, "src/zlog.c", 153, "pthread_rwlock_unlock fail, rc=[%d]", v6);
  return -1;
}
