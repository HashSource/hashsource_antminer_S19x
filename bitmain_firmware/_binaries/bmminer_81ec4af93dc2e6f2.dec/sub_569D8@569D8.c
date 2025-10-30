int sub_569D8()
{
  pthread_attr_t attr; // [sp+4h] [bp-30h] BYREF
  size_t stacksize; // [sp+28h] [bp-Ch]
  int i; // [sp+2Ch] [bp-8h]

  i = 0;
  if ( !dword_5313C4 )
  {
    pthread_mutex_init(&stru_5313A4, 0);
    for ( i = 0; i <= 4; ++i )
      dword_5313CC[i] = 0;
    dword_5313BC = sub_5840C(sub_5660C, 0, 0);
    pthread_attr_init(&attr);
    stacksize = 0x200000;
    pthread_attr_setstacksize(&attr, 0x200000u);
    pthread_create((pthread_t *)&dword_5313C8, &attr, (void *(*)(void *))sub_56424, 0);
    dword_5313C4 = 1;
  }
  return 0;
}
