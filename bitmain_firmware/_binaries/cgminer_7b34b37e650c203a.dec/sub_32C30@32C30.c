void __fastcall sub_32C30(pthread_rwlock_t *a1)
{
  void **nr_readers; // r2
  int *v3; // r0
  void **v4; // [sp+14h] [bp-808h] BYREF
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v4 = 0;
  if ( a1 && !pthread_rwlock_trywrlock(a1 + 10) )
  {
    nr_readers = (void **)a1[11].__nr_readers;
    a1[11].__nr_readers = 0;
    v4 = nr_readers;
    if ( pthread_rwlock_unlock(a1 + 10) )
    {
      v3 = _errno_location();
      snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v3, "cgminer.c", "flush_queue", 9641);
      sub_20F58(3, s, 1);
      sub_2E6B0(1, 1);
    }
    off_67ED8();
    if ( v4 )
    {
      sub_2CBA8(&v4, "cgminer.c", "flush_queue", 9645);
      if ( byte_68BD5 )
      {
        if ( byte_74500 || byte_68BD4 || dword_67DB4 > 6 )
        {
          strcpy(s, "Discarded queued work item");
          sub_20F58(7, s, 0);
        }
      }
    }
  }
}
