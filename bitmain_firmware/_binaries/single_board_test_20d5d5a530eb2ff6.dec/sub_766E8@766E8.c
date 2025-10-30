int __fastcall sub_766E8(int a1, int a2, int a3)
{
  int v6; // r4

  if ( pthread_mutex_lock(&stru_65EA18) )
  {
    v6 = -4;
    nullsub_8();
  }
  else
  {
    v6 = sub_76A5C(a1, a2, a3);
    pthread_mutex_unlock(&stru_65EA18);
  }
  return v6;
}
