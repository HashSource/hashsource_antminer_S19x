void __fastcall __noreturn sub_2E6B0(int a1, int a2)
{
  pthread_t newthread[2]; // [sp+4h] [bp-8h] BYREF

  if ( !pthread_create(newthread, 0, (void *(*)(void *))sub_2B63C, 0) )
  {
    if ( a2 )
      sub_3189C();
    if ( dword_68FFC > 0 )
    {
      kill(dword_68FFC, 15);
      dword_68FFC = 0;
    }
    pthread_cancel(newthread[0]);
    exit(a1);
  }
  exit(1);
}
