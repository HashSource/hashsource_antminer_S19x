int __fastcall sub_78F70(int a1)
{
  int v4; // [sp+18h] [bp-14h]
  int v5; // [sp+1Ch] [bp-10h]
  int v6; // [sp+1Ch] [bp-10h]
  int v7; // [sp+1Ch] [bp-10h]
  int v8; // [sp+1Ch] [bp-10h]
  int i; // [sp+24h] [bp-8h]

  sub_89984(0, "src/zlog.c", 219, "------zlog_reload start------");
  v5 = pthread_rwlock_wrlock(&stru_5BA76C);
  if ( v5 )
  {
    sub_89984(2, "src/zlog.c", 222, "pthread_rwlock_wrlock fail, rc[%d]", v5);
    return -1;
  }
  if ( !dword_5BA7A0 )
  {
    sub_89984(2, "src/zlog.c", 227, "never call zlog_init() or dzlog_init() before");
    goto LABEL_26;
  }
  if ( !a1 )
    a1 = dword_9C8B08;
  if ( a1 == -1 )
  {
    if ( *(_DWORD *)(dword_9C8B08 + 9276) >= (unsigned int)dword_5BA79C )
    {
LABEL_26:
      sub_89984(0, "src/zlog.c", 291, "------zlog_reload do nothing------");
      v8 = pthread_rwlock_unlock(&stru_5BA76C);
      if ( !v8 )
        return 0;
      sub_89984(2, "src/zlog.c", 294, "pthread_rwlock_unlock fail, rc=[%d]", v8);
      return -1;
    }
    a1 = dword_9C8B08;
  }
  dword_5BA79C = 0;
  v4 = sub_7D518(a1);
  if ( v4 )
  {
    for ( i = 0; i < *(_DWORD *)(*(_DWORD *)(v4 + 9288) + 4); ++i )
      sub_85DC4(*(_DWORD *)(**(_DWORD **)(v4 + 9288) + 4 * i), dword_5BA794);
    if ( !sub_7CCF8(dword_5BA790, *(_DWORD *)(v4 + 9288)) )
    {
      ++dword_5BA7A4;
      sub_7CDC0(dword_5BA790);
      sub_7D3E4(dword_9C8B08);
      dword_9C8B08 = v4;
      sub_89984(0, "src/zlog.c", 271, "------zlog_reload success, total init verison[%d] ------", dword_5BA7A4);
      v6 = pthread_rwlock_unlock(&stru_5BA76C);
      if ( !v6 )
        return 0;
      sub_89984(2, "src/zlog.c", 274, "pthread_rwlock_unlock fail, rc=[%d]", v6);
      return -1;
    }
    sub_89984(2, "src/zlog.c", 260, "zlog_category_table_update fail");
  }
  else
  {
    sub_89984(2, "src/zlog.c", 250, "zlog_conf_new fail");
  }
  sub_89984(1, "src/zlog.c", 280, "zlog_reload fail, use old conf file, still working");
  if ( v4 )
    sub_7D3E4(v4);
  sub_89984(2, "src/zlog.c", 283, "------zlog_reload fail, total init version[%d] ------", dword_5BA7A4);
  v7 = pthread_rwlock_unlock(&stru_5BA76C);
  if ( v7 )
    sub_89984(2, "src/zlog.c", 286, "pthread_rwlock_unlock fail, rc=[%d]", v7);
  return -1;
}
