int __fastcall sub_7F1EC(int a1, int a2)
{
  int v6; // [sp+18h] [bp-14h]
  int v7; // [sp+1Ch] [bp-10h]
  int v8; // [sp+1Ch] [bp-10h]
  int i; // [sp+20h] [bp-Ch]
  int v10; // [sp+24h] [bp-8h]

  v10 = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      v7 = pthread_rwlock_wrlock(&stru_5BF628);
      if ( v7 )
      {
        sub_8CD10(2, "src/zlog.c", 983, "pthread_rwlock_rdlock fail, rd[%d]", v7);
        return -1;
      }
      else
      {
        if ( dword_5BF65C )
        {
          v6 = sub_83AB8(a1, a2);
          if ( v6 )
          {
            v10 = sub_8C558(dword_5BF650, v6, v6);
            if ( v10 )
            {
              sub_83A44(v6);
              sub_8CD10(2, "src/zlog.c", 1002, "zc_hashtable_put fail");
            }
            else
            {
              for ( i = 0; *(_DWORD *)(*(_DWORD *)(dword_9CD9C0 + 9288) + 4) > i; ++i )
                sub_8917C(*(_DWORD *)(**(_DWORD **)(dword_9CD9C0 + 9288) + 4 * i), dword_5BF650);
            }
          }
          else
          {
            v10 = -1;
            sub_8CD10(2, "src/zlog.c", 995, "zlog_record_new fail");
          }
        }
        else
        {
          sub_8CD10(2, "src/zlog.c", 988, "never call zlog_init() or dzlog_init() before");
        }
        v8 = pthread_rwlock_unlock(&stru_5BF628);
        if ( v8 )
        {
          sub_8CD10(2, "src/zlog.c", 1013, "pthread_rwlock_unlock fail, rd=[%d]", v8);
          return -1;
        }
        else
        {
          return v10;
        }
      }
    }
    else
    {
      sub_8CD10(2, "src/zlog.c", 979, "record_output is null or 0");
      return -1;
    }
  }
  else
  {
    sub_8CD10(2, "src/zlog.c", 978, "rname is null or 0");
    return -1;
  }
}
