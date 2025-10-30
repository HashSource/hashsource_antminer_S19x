int sub_7B7EC(const char *a1, int a2, int a3, int a4, int a5, int a6, int a7, ...)
{
  int v7; // r3
  int result; // r0
  int v13; // [sp+38h] [bp-Ch]
  int v14; // [sp+38h] [bp-Ch]
  _DWORD *pointer; // [sp+3Ch] [bp-8h]
  va_list va; // [sp+54h] [bp+10h] BYREF

  va_start(va, a7);
  pthread_rwlock_rdlock(&stru_5BA76C);
  if ( !dword_5BA7A0 )
  {
    sub_89984(2, "src/zlog.c", 896, "never call zlog_init() or dzlog_init() before");
    return pthread_rwlock_unlock(&stru_5BA76C);
  }
  if ( !dword_5BA798 )
  {
    sub_89984(
      2,
      "src/zlog.c",
      903,
      "zlog_default_category is null,dzlog_init() or dzlog_set_cateogry() is not called above");
    return pthread_rwlock_unlock(&stru_5BA76C);
  }
  LOBYTE(v7) = a6 & 7;
  if ( a6 <= 0 )
    v7 = -(-a6 & 7);
  if ( (((int)*(unsigned __int8 *)(dword_5BA798 + a6 / 8 + 1032) >> (7 - v7)) & 1) == 0 )
    return pthread_rwlock_unlock(&stru_5BA76C);
  pointer = pthread_getspecific(dword_5BA78C);
  if ( !pointer )
  {
    pointer = (_DWORD *)sub_87FBC(
                          dword_5BA7A4,
                          *(_DWORD *)(dword_9C8B08 + 1052),
                          *(_DWORD *)(dword_9C8B08 + 1056),
                          *(_DWORD *)(dword_9C8B08 + 9292));
    if ( !pointer )
    {
      sub_89984(2, "src/zlog.c", 909, "zlog_thread_new fail");
      return pthread_rwlock_unlock(&stru_5BA76C);
    }
    v13 = pthread_setspecific(dword_5BA78C, pointer);
    if ( v13 )
    {
      sub_87E68(pointer);
      sub_89984(2, "src/zlog.c", 909, "pthread_setspecific fail, rd[%d]", v13);
      return pthread_rwlock_unlock(&stru_5BA76C);
    }
  }
  if ( *pointer != dword_5BA7A4 )
  {
    v14 = sub_88260(pointer, *(_DWORD *)(dword_9C8B08 + 1052), *(_DWORD *)(dword_9C8B08 + 1056));
    if ( v14 || (v14 = sub_8840C(pointer, *(_DWORD *)(dword_9C8B08 + 9292))) != 0 )
    {
      sub_89984(2, "src/zlog.c", 909, "zlog_thread_resize_msg_buf fail, rd[%d]", v14);
      return pthread_rwlock_unlock(&stru_5BA76C);
    }
    *pointer = dword_5BA7A4;
  }
  sub_7F2EC(pointer[2], dword_5BA798, *(_DWORD *)(dword_5BA798 + 1028), a1, a2, a3, a4, a5, a6, a7, (char *)va);
  if ( sub_7CAA8(dword_5BA798, pointer) )
  {
    sub_89984(2, "src/zlog.c", 918, "zlog_output fail, srcfile[%s], srcline[%ld]", a1, a5);
    return pthread_rwlock_unlock(&stru_5BA76C);
  }
  if ( !*(_DWORD *)(dword_9C8B08 + 9276) )
    return pthread_rwlock_unlock(&stru_5BA76C);
  if ( (unsigned int)++dword_5BA79C <= *(_DWORD *)(dword_9C8B08 + 9276) )
    return pthread_rwlock_unlock(&stru_5BA76C);
  pthread_rwlock_unlock(&stru_5BA76C);
  result = sub_78F70(-1);
  if ( result )
    return sub_89984(
             2,
             "src/zlog.c",
             937,
             "reach reload-conf-period but zlog_reload fail, zlog-chk-conf [file] see detail");
  return result;
}
