int __fastcall sub_79F8C(int a1)
{
  int result; // r0
  _DWORD *v3; // [sp+10h] [bp-Ch]
  int v4; // [sp+14h] [bp-8h]

  if ( !a1 )
    return sub_89984(2, "src/zlog.c", 549, "key is null or 0");
  v4 = pthread_rwlock_rdlock(&stru_5BA76C);
  if ( v4 )
    return sub_89984(2, "src/zlog.c", 553, "pthread_rwlock_rdlock fail, rc[%d]", v4);
  if ( dword_5BA7A0 )
  {
    v3 = pthread_getspecific(dword_5BA78C);
    if ( v3 )
      sub_805D4(v3[1], a1);
    else
      sub_89984(2, "src/zlog.c", 564, "thread not found, maybe not use zlog_put_mdc before");
  }
  else
  {
    sub_89984(2, "src/zlog.c", 558, "never call zlog_init() or dzlog_init() before");
  }
  result = pthread_rwlock_unlock(&stru_5BA76C);
  if ( result )
    return sub_89984(2, "src/zlog.c", 573, "pthread_rwlock_unlock fail, rc=[%d]", result);
  return result;
}
