void sub_2B41C()
{
  int v0; // r4
  int v1; // r3
  int v2; // r3
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( dword_733CC > 0 )
  {
    v0 = 0;
    do
    {
      v1 = *(_DWORD *)(dword_744C8 + 4 * v0);
      *(_BYTE *)(v1 + 284) = 1;
      pthread_create((pthread_t *)(v1 + 280), 0, (void *(*)(void *))sub_35D3C, (void *)v1);
      v2 = v0++;
      if ( byte_74500 || byte_68BD4 || dword_67DB4 > 4 )
      {
        snprintf(v3, 0x800u, "create test_pool_thread pool[%d]\n", v2);
        sub_20F58(5, v3, 0);
      }
    }
    while ( dword_733CC > v0 );
  }
}
