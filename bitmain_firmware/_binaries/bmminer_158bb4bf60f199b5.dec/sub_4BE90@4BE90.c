int __fastcall sub_4BE90(sem_t *sem, const char *a2, const char *a3, int a4)
{
  int result; // r0
  int v9; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  while ( 1 )
  {
    result = sem_wait(sem);
    if ( !result )
      break;
    v9 = *_errno_location();
    if ( v9 != 4 )
    {
      snprintf(s, 0x800u, "Failed to sem_wait errno=%d cgsem=0x%p in %s %s():%d", v9, sem, a2, a3, a4);
      sub_47AB4(3, s, 1);
      sub_62EC0(1);
    }
  }
  return result;
}
