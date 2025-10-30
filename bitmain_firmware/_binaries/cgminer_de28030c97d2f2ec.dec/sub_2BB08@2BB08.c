int __fastcall sub_2BB08(sem_t *a1, const char *a2, const char *a3, int a4)
{
  int result; // r0
  int *v5; // r0
  char v10[4]; // [sp+20h] [bp-804h] BYREF

  while ( 1 )
  {
    result = sem_wait(a1);
    if ( !result )
      break;
    if ( !sub_1FB6C() )
    {
      v5 = _errno_location();
      snprintf(v10, 0x800u, "Failed to sem_wait errno=%d cgsem=0x%p in %s %s():%d", *v5, a1, a2, a3, a4);
      sub_1E4EC(3, v10, 1);
      sub_4BFB0(1);
    }
  }
  return result;
}
