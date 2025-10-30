int __fastcall sub_7AF80(int result, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // [sp+20h] [bp-1Ch]
  const char *v11; // [sp+2Ch] [bp-10h]
  int v12; // [sp+30h] [bp-Ch]
  int v13; // [sp+30h] [bp-Ch]
  _DWORD *pointer; // [sp+34h] [bp-8h]

  v11 = (const char *)result;
  v8 = a4;
  LOBYTE(a4) = a6 & 7;
  if ( a6 <= 0 )
    a4 = -(-a6 & 7);
  if ( (((int)*(unsigned __int8 *)(dword_5BA798 + a6 / 8 + 1032) >> (7 - a4)) & 1) != 0 )
  {
    pthread_rwlock_rdlock(&stru_5BA76C);
    if ( !dword_5BA7A0 )
    {
      sub_89984(2, "src/zlog.c", 795, "never call zlog_init() or dzlog_init() before");
      return pthread_rwlock_unlock(&stru_5BA76C);
    }
    if ( !dword_5BA798 )
    {
      sub_89984(
        2,
        "src/zlog.c",
        802,
        "zlog_default_category is null,dzlog_init() or dzlog_set_cateogry() is not called above");
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
        sub_89984(2, "src/zlog.c", 806, "zlog_thread_new fail");
        return pthread_rwlock_unlock(&stru_5BA76C);
      }
      v12 = pthread_setspecific(dword_5BA78C, pointer);
      if ( v12 )
      {
        sub_87E68(pointer);
        sub_89984(2, "src/zlog.c", 806, "pthread_setspecific fail, rd[%d]", v12);
        return pthread_rwlock_unlock(&stru_5BA76C);
      }
    }
    if ( *pointer != dword_5BA7A4 )
    {
      v13 = sub_88260(pointer, *(_DWORD *)(dword_9C8B08 + 1052), *(_DWORD *)(dword_9C8B08 + 1056));
      if ( v13 || (v13 = sub_8840C(pointer, *(_DWORD *)(dword_9C8B08 + 9292))) != 0 )
      {
        sub_89984(2, "src/zlog.c", 806, "zlog_thread_resize_msg_buf fail, rd[%d]", v13);
        return pthread_rwlock_unlock(&stru_5BA76C);
      }
      *pointer = dword_5BA7A4;
    }
    sub_7F3B8(pointer[2], dword_5BA798, *(_DWORD *)(dword_5BA798 + 1028), v11, a2, a3, v8, a5, a6, a7, a8);
    if ( sub_7CAA8(dword_5BA798, pointer) )
    {
      sub_89984(2, "src/zlog.c", 814, "zlog_output fail, srcfile[%s], srcline[%ld]", v11, a5);
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
               831,
               "reach reload-conf-period but zlog_reload fail, zlog-chk-conf [file] see detail");
  }
  return result;
}
