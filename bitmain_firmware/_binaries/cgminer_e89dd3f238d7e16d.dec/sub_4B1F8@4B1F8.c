void __fastcall __noreturn sub_4B1F8(int a1, char a2)
{
  pthread_t newthread; // [sp+Ch] [bp-8h] BYREF

  if ( pthread_create(&newthread, 0, (void *(*)(void *))sub_4B1BC, 0) )
    exit(1);
  if ( a2 )
    sub_4B068(0);
  if ( dword_86FAC > 0 )
  {
    kill(dword_86FAC, 15);
    dword_86FAC = 0;
  }
  pthread_cancel(newthread);
  exit(a1);
}
