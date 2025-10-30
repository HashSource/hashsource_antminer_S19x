int sub_793EC()
{
  int result; // r0
  int v1; // [sp+Ch] [bp-8h]

  sub_89984(0, "src/zlog.c", 304, "------zlog_fini start------");
  v1 = pthread_rwlock_wrlock(&stru_5BA76C);
  if ( v1 )
    return sub_89984(2, "src/zlog.c", 307, "pthread_rwlock_wrlock fail, rc[%d]", v1);
  if ( dword_5BA7A0 )
  {
    sub_787A0();
    dword_5BA7A0 = 0;
  }
  else
  {
    sub_89984(2, "src/zlog.c", 312, "before finish, must zlog_init() or dzlog_init() fisrt");
  }
  sub_89984(0, "src/zlog.c", 320, "------zlog_fini end------");
  result = pthread_rwlock_unlock(&stru_5BA76C);
  if ( result )
    return sub_89984(2, "src/zlog.c", 323, "pthread_rwlock_unlock fail, rc=[%d]", result);
  return result;
}
