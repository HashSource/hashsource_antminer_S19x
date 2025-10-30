void sub_4F93C()
{
  char v0[2048]; // [sp+0h] [bp-804h] BYREF

  if ( dword_86F90 )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      strcpy(v0, "config too fast, pool is changing, please wait\n");
      sub_1DB6C(3, v0, 0);
    }
  }
  else if ( pthread_create((pthread_t *)&dword_86F90, 0, (void *(*)(void *))sub_4EEA8, 0)
         && (byte_90DC0 || byte_865D1 || dword_857E4 > 2) )
  {
    strcpy(v0, "Failed to create pool_change_thread");
    sub_1DB6C(3, v0, 0);
  }
}
