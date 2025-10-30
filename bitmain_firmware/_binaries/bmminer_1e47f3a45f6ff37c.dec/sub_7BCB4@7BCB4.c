int __fastcall sub_7BCB4(const char *a1)
{
  int v4; // [sp+14h] [bp-8h]
  int v5; // [sp+14h] [bp-8h]

  if ( !dword_5BF660 )
  {
    v4 = pthread_key_create((pthread_key_t *)&dword_5BF648, (void (*)(void *))sub_8B204);
    if ( v4 )
    {
      sub_8CD10(2, "src/zlog.c", 76, "pthread_key_create fail, rc[%d]", v4);
LABEL_14:
      sub_7BBA4();
      return -1;
    }
    v5 = sub_90024(506988);
    if ( v5 )
    {
      sub_8CD10(2, "src/zlog.c", 85, "atexit fail, rc[%d]", v5);
      goto LABEL_14;
    }
    ++dword_5BF660;
  }
  dword_9CD9C0 = sub_808EC(a1);
  if ( !dword_9CD9C0 )
  {
    sub_8CD10(2, "src/zlog.c", 93, "zlog_conf_new[%s] fail", a1);
    goto LABEL_14;
  }
  dword_5BF64C = sub_80048();
  if ( !dword_5BF64C )
  {
    sub_8CD10(2, "src/zlog.c", 99, "zlog_category_table_new fail");
    goto LABEL_14;
  }
  dword_5BF650 = sub_83D2C();
  if ( !dword_5BF650 )
  {
    sub_8CD10(2, "src/zlog.c", 105, "zlog_record_table_new fail");
    goto LABEL_14;
  }
  return 0;
}
