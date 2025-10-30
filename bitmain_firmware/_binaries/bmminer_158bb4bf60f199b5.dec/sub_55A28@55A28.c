int __fastcall sub_55A28(int a1, int a2)
{
  if ( pthread_mutex_lock(&stru_246244) )
    sub_550B8("inc_dev_status", 8777);
  dword_245100 = a1;
  dword_245104 = a2;
  if ( pthread_mutex_unlock(&stru_246244) )
    sub_55114("inc_dev_status", 8780);
  return off_9E444();
}
