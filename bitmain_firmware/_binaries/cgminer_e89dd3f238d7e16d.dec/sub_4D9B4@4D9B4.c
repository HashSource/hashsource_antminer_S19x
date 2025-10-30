void sub_4D9B4()
{
  char v0[12]; // [sp+0h] [bp-80Ch] BYREF
  void *arg; // [sp+800h] [bp-Ch]
  int i; // [sp+804h] [bp-8h]

  for ( i = 0; i < dword_90E90; ++i )
  {
    arg = *(void **)(dword_90F34 + 4 * i);
    if ( *((_BYTE *)arg + 284) != 1 && byte_88730 != 1 )
    {
      *((_BYTE *)arg + 284) = 1;
      pthread_create((pthread_t *)arg + 70, 0, (void *(*)(void *))sub_4B2C8, arg);
      if ( byte_865D0 )
      {
        if ( byte_90DC0 || byte_865D1 || dword_857E4 > 6 )
        {
          snprintf(v0, 0x800u, "create test_pool_thread pool[%d]\n", i);
          sub_1DB6C(7, v0, 0);
        }
      }
    }
  }
}
