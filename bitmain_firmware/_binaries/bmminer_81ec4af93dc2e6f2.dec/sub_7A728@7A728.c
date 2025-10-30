int __fastcall sub_7A728(int result, const char *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // [sp+20h] [bp-1Ch]
  int v12; // [sp+2Ch] [bp-10h]
  int v13; // [sp+30h] [bp-Ch]
  int v14; // [sp+30h] [bp-Ch]
  _DWORD *pointer; // [sp+34h] [bp-8h]

  v12 = result;
  v9 = a4;
  LOBYTE(a4) = a7 & 7;
  if ( a7 <= 0 )
    a4 = -(-a7 & 7);
  if ( (((int)*(unsigned __int8 *)(result + a7 / 8 + 1032) >> (7 - a4)) & 1) != 0 )
  {
    pthread_rwlock_rdlock(&stru_5BA76C);
    if ( !dword_5BA7A0 )
    {
      sub_89984(2, "src/zlog.c", 694, "never call zlog_init() or dzlog_init() before");
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
        sub_89984(2, "src/zlog.c", 698, "zlog_thread_new fail");
        return pthread_rwlock_unlock(&stru_5BA76C);
      }
      v13 = pthread_setspecific(dword_5BA78C, pointer);
      if ( v13 )
      {
        sub_87E68(pointer);
        sub_89984(2, "src/zlog.c", 698, "pthread_setspecific fail, rd[%d]", v13);
        return pthread_rwlock_unlock(&stru_5BA76C);
      }
    }
    if ( *pointer != dword_5BA7A4 )
    {
      v14 = sub_88260(pointer, *(_DWORD *)(dword_9C8B08 + 1052), *(_DWORD *)(dword_9C8B08 + 1056));
      if ( v14 || (v14 = sub_8840C(pointer, *(_DWORD *)(dword_9C8B08 + 9292))) != 0 )
      {
        sub_89984(2, "src/zlog.c", 698, "zlog_thread_resize_msg_buf fail, rd[%d]", v14);
        return pthread_rwlock_unlock(&stru_5BA76C);
      }
      *pointer = dword_5BA7A4;
    }
    sub_7F3B8(pointer[2], v12, *(_DWORD *)(v12 + 1028), a2, a3, v9, a5, a6, a7, a8, a9);
    if ( sub_7CAA8(v12, pointer) )
    {
      sub_89984(2, "src/zlog.c", 706, "zlog_output fail, srcfile[%s], srcline[%ld]", a2, a6);
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
               723,
               "reach reload-conf-period but zlog_reload fail, zlog-chk-conf [file] see detail");
  }
  return result;
}
