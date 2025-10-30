bool __fastcall sub_3E2DC(int a1, int a2, int a3)
{
  sem_t *v6; // r4
  int v7; // r5
  pthread_t newthread[2]; // [sp+Ch] [bp-8h] BYREF

  v6 = (sem_t *)sub_3C908(0x18u, "util.c", "cg_completion_timeout", 3649);
  sub_3DF94(v6, "util.c", "cg_completion_timeout", 3650);
  v6[1].__align = a1;
  *(&v6[1].__align + 1) = a2;
  pthread_create(newthread, 0, (void *(*)(void *))sub_3E090, v6);
  v7 = sub_3E154(v6, a3, "util.c", "cg_completion_timeout", 3656);
  if ( v7 )
  {
    pthread_cancel(newthread[0]);
    return v7 == 0;
  }
  else
  {
    pthread_join(newthread[0], 0);
    free(v6);
    return 1;
  }
}
