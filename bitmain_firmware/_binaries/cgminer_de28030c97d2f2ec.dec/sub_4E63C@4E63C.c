void sub_4E63C()
{
  char v0[12]; // [sp+0h] [bp-80Ch] BYREF
  void *arg; // [sp+800h] [bp-Ch]
  int i; // [sp+804h] [bp-8h]

  for ( i = 0; i < dword_92028; ++i )
  {
    arg = *(void **)(dword_920CC + 4 * i);
    if ( *((_BYTE *)arg + 284) != 1 && byte_898C8 != 1 )
    {
      *((_BYTE *)arg + 284) = 1;
      pthread_create((pthread_t *)arg + 70, 0, (void *(*)(void *))sub_4BFD4, arg);
      if ( byte_87768 )
      {
        if ( byte_91F58 || byte_87769 || dword_8697C > 6 )
        {
          snprintf(v0, 0x800u, "create test_pool_thread pool[%d]\n", i);
          sub_1E4EC(7, v0, 0);
        }
      }
    }
  }
}
