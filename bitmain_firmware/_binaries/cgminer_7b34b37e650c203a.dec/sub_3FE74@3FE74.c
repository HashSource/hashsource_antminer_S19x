void sub_3FE74()
{
  char v0[2052]; // [sp+0h] [bp-804h] BYREF

  if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
  {
    snprintf(v0, 0x800u, "START %s", "load_default_config_new");
    sub_20F58(5, v0, 0);
    if ( newthread )
    {
      if ( byte_74500 || byte_68BD4 )
        goto LABEL_6;
      goto LABEL_10;
    }
  }
  else if ( newthread )
  {
LABEL_10:
    if ( dword_67DB4 <= 2 )
      return;
LABEL_6:
    strcpy(v0, "config too fast, pool is changing, please wait\n");
    sub_20F58(3, v0, 0);
    return;
  }
  if ( pthread_create(&newthread, 0, (void *(*)(void *))sub_3479C, 0) && (byte_74500 || byte_68BD4 || dword_67DB4 > 2) )
  {
    strcpy(v0, "Failed to create pool_change_thread");
    sub_20F58(3, v0, 0);
  }
}
