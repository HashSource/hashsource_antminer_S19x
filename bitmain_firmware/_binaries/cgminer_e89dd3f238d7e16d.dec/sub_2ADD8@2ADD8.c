bool __fastcall sub_2ADD8(int a1, int a2, int a3)
{
  pthread_t newthread; // [sp+1Ch] [bp-10h] BYREF
  void *arg; // [sp+20h] [bp-Ch]
  bool v9; // [sp+27h] [bp-5h]

  v9 = 0;
  arg = sub_1F934(0x18u, "util.c", "cg_completion_timeout", 3908);
  sub_2A9AC((sem_t *)arg, "util.c", "cg_completion_timeout", 3909);
  *((_DWORD *)arg + 4) = a1;
  *((_DWORD *)arg + 5) = a2;
  pthread_create(&newthread, 0, (void *(*)(void *))sub_2AD70, arg);
  v9 = sub_2ABC0((sem_t *)arg, a3, "util.c", "cg_completion_timeout", 3915) != 0;
  if ( !v9 )
  {
    pthread_join(newthread, 0);
    free(arg);
  }
  else
  {
    pthread_cancel(newthread);
  }
  return !v9;
}
