void __fastcall sub_485CC(pthread_rwlock_t *a1)
{
  char v2[2048]; // [sp+Ch] [bp-808h] BYREF
  unsigned int nr_readers; // [sp+80Ch] [bp-8h] BYREF

  nr_readers = 0;
  if ( a1 )
  {
    if ( !sub_2E564(a1 + 10) )
    {
      nr_readers = a1[11].__nr_readers;
      a1[11].__nr_readers = 0;
      sub_2E74C(a1 + 10, "cgminer.c", "flush_queue", 9717);
      if ( nr_readers )
      {
        sub_31F40((void **)&nr_readers, "cgminer.c", "flush_queue", 9721);
        if ( byte_87768 )
        {
          if ( byte_91F58 || byte_87769 || dword_8697C > 6 )
          {
            strcpy(v2, "Discarded queued work item");
            sub_1E4EC(7, v2, 0);
          }
        }
      }
    }
  }
}
