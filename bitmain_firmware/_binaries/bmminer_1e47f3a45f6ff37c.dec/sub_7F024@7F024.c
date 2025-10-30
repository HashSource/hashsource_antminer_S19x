int sub_7F024()
{
  int result; // r0
  int v1; // [sp+Ch] [bp-8h]

  v1 = pthread_rwlock_rdlock(&stru_5BF628);
  if ( v1 )
    return sub_8CD10(2, "src/zlog.c", 948, "pthread_rwlock_wrlock fail, rc[%d]", v1);
  sub_8CD10(1, "src/zlog.c", 951, "------zlog_profile start------ ");
  sub_8CD10(1, "src/zlog.c", 952, "is init:[%d]", dword_5BF65C);
  sub_8CD10(1, "src/zlog.c", 953, "init version:[%d]", dword_5BF660);
  sub_803B0(dword_9CD9C0, 1);
  sub_83C04(dword_5BF650, 1);
  sub_7FF20(dword_5BF64C, 1);
  if ( dword_5BF654 )
  {
    sub_8CD10(1, "src/zlog.c", 958, "-default_category-");
    sub_7F53C(dword_5BF654, 1);
  }
  sub_8CD10(1, "src/zlog.c", 961, "------zlog_profile end------ ");
  result = pthread_rwlock_unlock(&stru_5BF628);
  if ( result )
    return sub_8CD10(2, "src/zlog.c", 964, "pthread_rwlock_unlock fail, rc=[%d]", result);
  return result;
}
