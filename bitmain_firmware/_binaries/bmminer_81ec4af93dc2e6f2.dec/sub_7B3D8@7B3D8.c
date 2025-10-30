int sub_7B3D8(int result, const char *a2, int a3, int a4, int a5, int a6, int a7, int a8, ...)
{
  int v8; // r3
  int v12; // [sp+2Ch] [bp-18h]
  int v13; // [sp+38h] [bp-Ch]
  int v14; // [sp+38h] [bp-Ch]
  _DWORD *pointer; // [sp+3Ch] [bp-8h]
  va_list va; // [sp+58h] [bp+14h] BYREF

  va_start(va, a8);
  v12 = result;
  if ( !result )
    goto LABEL_5;
  LOBYTE(v8) = a7 & 7;
  if ( a7 <= 0 )
    v8 = -(-a7 & 7);
  if ( (((int)*(unsigned __int8 *)(result + a7 / 8 + 1032) >> (7 - v8)) & 1) != 0 )
  {
LABEL_5:
    pthread_rwlock_rdlock(&stru_5BA76C);
    if ( !dword_5BA7A0 )
    {
      sub_89984(2, "src/zlog.c", 850, "never call zlog_init() or dzlog_init() before");
      return pthread_rwlock_unlock(&stru_5BA76C);
    }
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
        sub_89984(2, "src/zlog.c", 854, "zlog_thread_new fail");
        return pthread_rwlock_unlock(&stru_5BA76C);
      }
      v13 = pthread_setspecific(dword_5BA78C, pointer);
      if ( v13 )
      {
        sub_87E68(pointer);
        sub_89984(2, "src/zlog.c", 854, "pthread_setspecific fail, rd[%d]", v13);
        return pthread_rwlock_unlock(&stru_5BA76C);
      }
    }
    if ( *pointer != dword_5BA7A4 )
    {
      v14 = sub_88260(pointer, *(_DWORD *)(dword_9C8B08 + 1052), *(_DWORD *)(dword_9C8B08 + 1056));
      if ( v14 || (v14 = sub_8840C(pointer, *(_DWORD *)(dword_9C8B08 + 9292))) != 0 )
      {
        sub_89984(2, "src/zlog.c", 854, "zlog_thread_resize_msg_buf fail, rd[%d]", v14);
        return pthread_rwlock_unlock(&stru_5BA76C);
      }
      *pointer = dword_5BA7A4;
    }
    sub_7F2EC(pointer[2], v12, *(_DWORD *)(v12 + 1028), a2, a3, a4, a5, a6, a7, a8, (char *)va);
    if ( sub_7CAA8(v12, pointer) )
    {
      sub_89984(2, "src/zlog.c", 861, "zlog_output fail, srcfile[%s], srcline[%ld]", a2, a6);
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
               880,
               "reach reload-conf-period but zlog_reload fail, zlog-chk-conf [file] see detail");
  }
  return result;
}
