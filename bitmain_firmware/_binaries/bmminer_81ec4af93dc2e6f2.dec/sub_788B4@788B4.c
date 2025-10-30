int __fastcall sub_788B4(const char *a1)
{
  int v4; // [sp+14h] [bp-8h]
  int v5; // [sp+14h] [bp-8h]

  if ( !dword_5BA7A4 )
  {
    v4 = pthread_key_create((pthread_key_t *)&dword_5BA78C, (void (*)(void *))sub_87E68);
    if ( v4 )
    {
      sub_89984(2, "src/zlog.c", 76, "pthread_key_create fail, rc[%d]", v4);
LABEL_14:
      sub_787A0();
      return -1;
    }
    v5 = sub_8CCB0(493672);
    if ( v5 )
    {
      sub_89984(2, "src/zlog.c", 85, "atexit fail, rc[%d]", v5);
      goto LABEL_14;
    }
    ++dword_5BA7A4;
  }
  dword_9C8B08 = sub_7D518(a1);
  if ( !dword_9C8B08 )
  {
    sub_89984(2, "src/zlog.c", 93, "zlog_conf_new[%s] fail", a1);
    goto LABEL_14;
  }
  dword_5BA790 = sub_7CC74();
  if ( !dword_5BA790 )
  {
    sub_89984(2, "src/zlog.c", 99, "zlog_category_table_new fail");
    goto LABEL_14;
  }
  dword_5BA794 = sub_80974();
  if ( !dword_5BA794 )
  {
    sub_89984(2, "src/zlog.c", 105, "zlog_record_table_new fail");
    goto LABEL_14;
  }
  return 0;
}
