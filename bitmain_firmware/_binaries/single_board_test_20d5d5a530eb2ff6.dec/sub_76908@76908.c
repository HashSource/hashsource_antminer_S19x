int sub_76908()
{
  int v0; // r4
  int *v1; // r6

  if ( dword_65DF70 )
  {
    v0 = dword_65EA30;
    if ( dword_65EA30 )
    {
      v1 = (int *)dword_65EA34;
    }
    else
    {
      v1 = sub_700BC((int)sub_76888, 0, 0);
      dword_65EA34 = (int)v1;
      pthread_mutex_init(&stru_65EA38, 0);
      v0 = dword_65EA30;
    }
    dword_65EA30 = v0 + 1;
    sub_700E4(v1);
    return v0 + 1;
  }
  else
  {
    nullsub_8();
    return -2;
  }
}
