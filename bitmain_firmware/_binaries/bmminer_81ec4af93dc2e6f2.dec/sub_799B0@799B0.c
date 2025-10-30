int __fastcall sub_799B0(const char *a1, const char *a2)
{
  int v6; // [sp+14h] [bp-10h]
  int v7; // [sp+14h] [bp-10h]
  int v8; // [sp+18h] [bp-Ch]
  int v9; // [sp+18h] [bp-Ch]
  int v10; // [sp+18h] [bp-Ch]
  _DWORD *pointer; // [sp+1Ch] [bp-8h]

  if ( !a1 )
  {
    sub_89984(2, "src/zlog.c", 462, "key is null or 0");
    return -1;
  }
  if ( !a2 )
  {
    sub_89984(2, "src/zlog.c", 463, "value is null or 0");
    return -1;
  }
  v8 = pthread_rwlock_rdlock(&stru_5BA76C);
  if ( v8 )
  {
    sub_89984(2, "src/zlog.c", 467, "pthread_rwlock_wrlock fail, rc[%d]", v8);
    return -1;
  }
  if ( dword_5BA7A0 )
  {
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
        sub_89984(2, "src/zlog.c", 476, "zlog_thread_new fail");
        goto LABEL_24;
      }
      v6 = pthread_setspecific(dword_5BA78C, pointer);
      if ( v6 )
      {
        sub_87E68(pointer);
        sub_89984(2, "src/zlog.c", 476, "pthread_setspecific fail, rd[%d]", v6);
        goto LABEL_24;
      }
    }
    if ( *pointer != dword_5BA7A4 )
    {
      v7 = sub_88260(pointer, *(_DWORD *)(dword_9C8B08 + 1052), *(_DWORD *)(dword_9C8B08 + 1056));
      if ( v7 || (v7 = sub_8840C(pointer, *(_DWORD *)(dword_9C8B08 + 9292))) != 0 )
      {
        sub_89984(2, "src/zlog.c", 476, "zlog_thread_resize_msg_buf fail, rd[%d]", v7);
        goto LABEL_24;
      }
      *pointer = dword_5BA7A4;
    }
    if ( !sub_80410(pointer[1], a1, a2) )
    {
      v9 = pthread_rwlock_unlock(&stru_5BA76C);
      if ( !v9 )
        return 0;
      sub_89984(2, "src/zlog.c", 485, "pthread_rwlock_unlock fail, rc=[%d]", v9);
      return -1;
    }
    sub_89984(2, "src/zlog.c", 479, "zlog_mdc_put fail, key[%s], value[%s]", a1, a2);
  }
  else
  {
    sub_89984(2, "src/zlog.c", 472, "never call zlog_init() or dzlog_init() before");
  }
LABEL_24:
  v10 = pthread_rwlock_unlock(&stru_5BA76C);
  if ( v10 )
    sub_89984(2, "src/zlog.c", 492, "pthread_rwlock_unlock fail, rc=[%d]", v10);
  return -1;
}
