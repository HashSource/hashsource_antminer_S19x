int __fastcall sub_7D18C(const char *a1)
{
  _DWORD *v4; // [sp+14h] [bp-10h]
  int v5; // [sp+18h] [bp-Ch]
  int v6; // [sp+1Ch] [bp-8h]
  int v7; // [sp+1Ch] [bp-8h]
  int v8; // [sp+1Ch] [bp-8h]

  if ( !a1 )
  {
    sub_8CD10(2, "src/zlog.c", 504, "key is null or 0");
    return 0;
  }
  v6 = pthread_rwlock_rdlock(&stru_5BF628);
  if ( v6 )
  {
    sub_8CD10(2, "src/zlog.c", 508, "pthread_rwlock_rdlock fail, rc[%d]", v6);
    return 0;
  }
  if ( dword_5BF65C )
  {
    v4 = pthread_getspecific(dword_5BF648);
    if ( v4 )
    {
      v5 = sub_838AC(v4[1], a1);
      if ( v5 )
      {
        v7 = pthread_rwlock_unlock(&stru_5BF628);
        if ( !v7 )
          return v5;
        sub_8CD10(2, "src/zlog.c", 531, "pthread_rwlock_unlock fail, rc=[%d]", v7);
        return 0;
      }
      sub_8CD10(2, "src/zlog.c", 525, "key[%s] not found in mdc", a1);
    }
    else
    {
      sub_8CD10(2, "src/zlog.c", 519, "thread not found, maybe not use zlog_put_mdc before");
    }
  }
  else
  {
    sub_8CD10(2, "src/zlog.c", 513, "never call zlog_init() or dzlog_init() before");
  }
  v8 = pthread_rwlock_unlock(&stru_5BF628);
  if ( v8 )
    sub_8CD10(2, "src/zlog.c", 538, "pthread_rwlock_unlock fail, rc=[%d]", v8);
  return 0;
}
