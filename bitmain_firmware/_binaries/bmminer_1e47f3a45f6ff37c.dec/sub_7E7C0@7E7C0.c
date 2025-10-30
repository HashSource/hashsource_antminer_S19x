int sub_7E7C0(int result, const char *a2, int a3, int a4, int a5, int a6, int a7, int a8, ...)
{
  int v11; // [sp+2Ch] [bp-18h]
  int v12; // [sp+38h] [bp-Ch]
  int v13; // [sp+38h] [bp-Ch]
  _DWORD *pointer; // [sp+3Ch] [bp-8h]
  va_list va; // [sp+58h] [bp+14h] BYREF

  va_start(va, a8);
  v11 = result;
  if ( !result || (((int)*(unsigned __int8 *)(result + a7 / 8 + 1032) >> (7 - a7 % 8)) & 1) != 0 )
  {
    pthread_rwlock_rdlock(&stru_5BF628);
    if ( !dword_5BF65C )
    {
      sub_8CD10(2, "src/zlog.c", 850, "never call zlog_init() or dzlog_init() before");
      return pthread_rwlock_unlock(&stru_5BF628);
    }
    pointer = pthread_getspecific(dword_5BF648);
    if ( !pointer )
    {
      pointer = (_DWORD *)sub_8B358(
                            dword_5BF660,
                            *(_DWORD *)(dword_9CD9C0 + 1052),
                            *(_DWORD *)(dword_9CD9C0 + 1056),
                            *(_DWORD *)(dword_9CD9C0 + 9292));
      if ( !pointer )
      {
        sub_8CD10(2, "src/zlog.c", 854, "zlog_thread_new fail");
        return pthread_rwlock_unlock(&stru_5BF628);
      }
      v12 = pthread_setspecific(dword_5BF648, pointer);
      if ( v12 )
      {
        sub_8B204(pointer);
        sub_8CD10(2, "src/zlog.c", 854, "pthread_setspecific fail, rd[%d]", v12);
        return pthread_rwlock_unlock(&stru_5BF628);
      }
    }
    if ( *pointer != dword_5BF660 )
    {
      v13 = sub_8B5FC(pointer, *(_DWORD *)(dword_9CD9C0 + 1052), *(_DWORD *)(dword_9CD9C0 + 1056));
      if ( v13 || (v13 = sub_8B7A8(pointer, *(_DWORD *)(dword_9CD9C0 + 9292))) != 0 )
      {
        sub_8CD10(2, "src/zlog.c", 854, "zlog_thread_resize_msg_buf fail, rd[%d]", v13);
        return pthread_rwlock_unlock(&stru_5BF628);
      }
      *pointer = dword_5BF660;
    }
    sub_826A4(pointer[2], v11, *(_DWORD *)(v11 + 1028), a2, a3, a4, a5, a6, a7, a8, (char *)va);
    if ( sub_7FE7C(v11, pointer) )
    {
      sub_8CD10(2, "src/zlog.c", 861, "zlog_output fail, srcfile[%s], srcline[%ld]", a2, a6);
      return pthread_rwlock_unlock(&stru_5BF628);
    }
    if ( !*(_DWORD *)(dword_9CD9C0 + 9276) )
      return pthread_rwlock_unlock(&stru_5BF628);
    if ( (unsigned int)++dword_5BF658 <= *(_DWORD *)(dword_9CD9C0 + 9276) )
      return pthread_rwlock_unlock(&stru_5BF628);
    pthread_rwlock_unlock(&stru_5BF628);
    result = sub_7C370(-1);
    if ( result )
      return sub_8CD10(
               2,
               "src/zlog.c",
               880,
               "reach reload-conf-period but zlog_reload fail, zlog-chk-conf [file] see detail");
  }
  return result;
}
