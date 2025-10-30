int __fastcall sub_6E238(int a1, int a2)
{
  int v2; // r6
  int v4; // [sp+4h] [bp-804h] BYREF
  char v5[2048]; // [sp+8h] [bp-800h] BYREF

  v4 = a1;
  if ( a2 )
  {
    v2 = pthread_mutex_lock(&stru_65DF8C);
    if ( v2 )
    {
      v2 = -1;
      strcpy(v5, "fail to lock gpio ctrl mutex\n");
      nullsub_8();
    }
    else
    {
      if ( sub_700FC(dword_65DFA4, &v4) == 1 )
      {
        sub_70110(dword_65DFA4, &v4);
      }
      else
      {
        strcpy(v5, "callback function not registered before\n");
        nullsub_8();
      }
      pthread_mutex_unlock(&stru_65DF8C);
    }
  }
  else
  {
    v2 = -1;
    strcpy(v5, "bad param\n");
    nullsub_8();
  }
  return v2;
}
