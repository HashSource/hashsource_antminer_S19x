int sub_7BC4C()
{
  int result; // r0
  int v1; // [sp+Ch] [bp-8h]

  v1 = pthread_rwlock_rdlock(&stru_5BA76C);
  if ( v1 )
    return sub_89984(2, "src/zlog.c", 948, "pthread_rwlock_wrlock fail, rc[%d]", v1);
  sub_89984(1, "src/zlog.c", 951, "------zlog_profile start------ ");
  sub_89984(1, "src/zlog.c", 952, "is init:[%d]", dword_5BA7A0);
  sub_89984(1, "src/zlog.c", 953, "init version:[%d]", dword_5BA7A4);
  sub_7CFDC(dword_9C8B08, 1);
  sub_8084C(dword_5BA794, 1);
  sub_7CB4C(dword_5BA790, 1);
  if ( dword_5BA798 )
  {
    sub_89984(1, "src/zlog.c", 958, "-default_category-");
    sub_7C164(dword_5BA798, 1);
  }
  sub_89984(1, "src/zlog.c", 961, "------zlog_profile end------ ");
  result = pthread_rwlock_unlock(&stru_5BA76C);
  if ( result )
    return sub_89984(2, "src/zlog.c", 964, "pthread_rwlock_unlock fail, rc=[%d]", result);
  return result;
}
