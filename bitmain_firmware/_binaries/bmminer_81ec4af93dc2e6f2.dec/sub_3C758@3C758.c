void __fastcall sub_3C758(const void *a1, const char *a2, const char *a3, int a4)
{
  int *v8; // r0
  int v9; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v8 = _errno_location();
  snprintf(s, 0x800u, "Failed to sem_post errno=%d cgsem=0x%p in %s %s():%d", *v8, a1, a2, a3, a4);
  sub_3AF5C(3, s, 1, v9);
  nullsub_1();
}
