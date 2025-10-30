void __fastcall __noreturn sub_54CCC(int a1, int a2)
{
  pthread_t newthread[2]; // [sp+4h] [bp-8h] BYREF

  if ( !pthread_create(newthread, 0, (void *(*)(void *))sub_51E38, 0) )
  {
    if ( a2 )
      sub_57944();
    if ( dword_1AF0DC > 0 )
    {
      kill(dword_1AF0DC, 15);
      dword_1AF0DC = 0;
    }
    pthread_cancel(newthread[0]);
    exit(a1);
  }
  exit(1);
}
