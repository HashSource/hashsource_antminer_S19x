void __fastcall sub_58CC0(pthread_rwlock_t *a1)
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
      snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v3, "cgminer.c", "flush_queue", 9635);
      sub_47AB4(3, s, 1);
      sub_54CCC(1, 1);
    }
    off_9E444();
    if ( v4 )
    {
      sub_53084(&v4, "cgminer.c", "flush_queue", 9639);
      if ( byte_1AECC5 )
      {
        if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
        {
          strcpy(s, "Discarded queued work item");
          sub_47AB4(7, s, 0);
        }
      }
    }
  }
}
