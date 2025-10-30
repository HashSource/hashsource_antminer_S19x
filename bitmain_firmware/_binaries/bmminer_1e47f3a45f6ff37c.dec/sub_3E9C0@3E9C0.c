int __fastcall sub_3E9C0(int a1, int a2, int a3)
{
  sem_t *v6; // r4
  _BOOL4 v7; // r5
  pthread_t newthread[2]; // [sp+Ch] [bp-8h] BYREF

  v6 = (sem_t *)sub_3D10C(0x18u, "util.c", "cg_completion_timeout", 3649);
  sub_3E6CC(v6, "util.c", "cg_completion_timeout", 3650);
  v6[1].__align = a1;
  *(&v6[1].__align + 1) = a2;
  pthread_create(newthread, 0, (void *(*)(void *))sub_3E7C4, v6);
  v7 = sub_3E890(v6, a3, "util.c", "cg_completion_timeout", 3656) != 0;
  if ( v7 )
  {
    pthread_cancel(newthread[0]);
    return !v7;
  }
  else
  {
    pthread_join(newthread[0], 0);
    free(v6);
    return 1;
  }
}
