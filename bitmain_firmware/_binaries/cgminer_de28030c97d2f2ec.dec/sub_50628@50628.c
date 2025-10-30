void sub_50628()
{
  char v0[2048]; // [sp+0h] [bp-804h] BYREF

  if ( dword_88128 )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
    {
      strcpy(v0, "config too fast, pool is changing, please wait\n");
      sub_1E4EC(3, v0, 0);
    }
  }
  else if ( pthread_create((pthread_t *)&dword_88128, 0, (void *(*)(void *))sub_4FB98, 0)
         && (byte_91F58 || byte_87769 || dword_8697C > 2) )
  {
    strcpy(v0, "Failed to create pool_change_thread");
    sub_1E4EC(3, v0, 0);
  }
}
