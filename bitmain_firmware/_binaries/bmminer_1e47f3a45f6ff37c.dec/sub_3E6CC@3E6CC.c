void __fastcall sub_3E6CC(sem_t *a1, const char *a2, const char *a3, int a4)
{
  int v7; // r4
  int *v8; // r0
  int v9; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v7 = sem_init(a1, 0, 0);
  if ( v7 )
  {
    v8 = _errno_location();
    snprintf(s, 0x800u, "Failed to sem_init ret=%d errno=%d in %s %s():%d", v7, *v8, a2, a3, a4);
    sub_3B6AC(3, s, 1, v9);
    nullsub_1();
  }
}
