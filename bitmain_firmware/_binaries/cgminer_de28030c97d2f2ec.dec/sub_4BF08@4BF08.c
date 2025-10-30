void __fastcall __noreturn sub_4BF08(int a1, char a2)
{
  pthread_t newthread; // [sp+Ch] [bp-8h] BYREF

  if ( pthread_create(&newthread, 0, (void *(*)(void *))sub_4BECC, 0) )
    exit(1);
  if ( a2 )
    sub_4BD7C(0);
  if ( dword_88144 > 0 )
  {
    kill(dword_88144, 15);
    dword_88144 = 0;
  }
  pthread_cancel(newthread);
  exit(a1);
}
