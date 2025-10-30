void __fastcall sub_76698(int a1)
{
  if ( pthread_mutex_lock(&stru_65EA18) )
  {
    nullsub_8();
  }
  else
  {
    sub_7699C(a1);
    pthread_mutex_unlock(&stru_65EA18);
  }
}
