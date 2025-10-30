int __fastcall sub_2B9B4(sem_t *a1, const char *a2, const char *a3, int a4)
{
  int result; // r0
  int *v5; // r0
  char v9[8]; // [sp+24h] [bp-808h] BYREF
  int v10; // [sp+824h] [bp-8h]

  result = sem_init(a1, 0, 0);
  v10 = result;
  if ( result )
  {
    v5 = _errno_location();
    snprintf(v9, 0x800u, "Failed to sem_init ret=%d errno=%d in %s %s():%d", v10, *v5, a2, a3, a4);
    sub_1E4EC(3, v9, 1);
    sub_4BFB0(1);
  }
  return result;
}
