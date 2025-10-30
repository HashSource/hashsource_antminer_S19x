int __fastcall sub_76814(int a1, int a2, int a3, int a4, int a5, unsigned __int8 a6)
{
  int v10; // r4

  if ( pthread_mutex_lock(&stru_65EA18) )
  {
    v10 = -4;
    nullsub_8();
  }
  else
  {
    v10 = sub_76EE8(a1, a2, a3, a4, a5, a6);
    pthread_mutex_unlock(&stru_65EA18);
  }
  return v10;
}
