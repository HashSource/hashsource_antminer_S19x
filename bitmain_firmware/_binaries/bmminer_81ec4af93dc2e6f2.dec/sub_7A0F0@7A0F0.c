int sub_7A0F0()
{
  int result; // r0
  _DWORD *v1; // [sp+8h] [bp-Ch]
  int v2; // [sp+Ch] [bp-8h]

  v2 = pthread_rwlock_rdlock(&stru_5BA76C);
  if ( v2 )
    return sub_89984(2, "src/zlog.c", 586, "pthread_rwlock_rdlock fail, rc[%d]", v2);
  if ( dword_5BA7A0 )
  {
    v1 = pthread_getspecific(dword_5BA78C);
    if ( v1 )
      sub_804C8(v1[1]);
    else
      sub_89984(2, "src/zlog.c", 597, "thread not found, maybe not use zlog_put_mdc before");
  }
  else
  {
    sub_89984(2, "src/zlog.c", 591, "never call zlog_init() or dzlog_init() before");
  }
  result = pthread_rwlock_unlock(&stru_5BA76C);
  if ( result )
    return sub_89984(2, "src/zlog.c", 606, "pthread_rwlock_unlock fail, rc=[%d]", result);
  return result;
}
