void __fastcall sub_47820(pthread_rwlock_t *a1)
{
  char v2[2048]; // [sp+Ch] [bp-808h] BYREF
  unsigned int nr_readers; // [sp+80Ch] [bp-8h] BYREF

  nr_readers = 0;
  if ( a1 )
  {
    if ( !sub_2D51C(a1 + 10) )
    {
      nr_readers = a1[11].__nr_readers;
      a1[11].__nr_readers = 0;
      sub_2D714(a1 + 10, "cgminer.c", "flush_queue", 9717);
      if ( nr_readers )
      {
        sub_30E0C((void **)&nr_readers, "cgminer.c", "flush_queue", 9721);
        if ( byte_865D0 )
        {
          if ( byte_90DC0 || byte_865D1 || dword_857E4 > 6 )
          {
            strcpy(v2, "Discarded queued work item");
            sub_1DB6C(7, v2, 0);
          }
        }
      }
    }
  }
}
