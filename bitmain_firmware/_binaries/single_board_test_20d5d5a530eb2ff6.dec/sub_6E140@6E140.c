int __fastcall sub_6E140(int a1, unsigned int a2)
{
  int v3; // r5
  int v5; // [sp+Ch] [bp-808h] BYREF
  pthread_attr_t attr; // [sp+10h] [bp-804h] BYREF

  v5 = a1;
  if ( a2 )
  {
    if ( !dword_65DF88 )
    {
      pthread_mutex_init(&stru_65DF8C, 0);
      dword_65DFA4 = sub_700BC(sub_6E130, 0, 0);
      pthread_mutex_init(&stru_65DFA8, 0);
      dword_65DFC0 = 1;
      pthread_attr_init(&attr);
      pthread_attr_setstacksize(&attr, 0x200000u);
      pthread_create((pthread_t *)algn_65DFC4, &attr, (void *(*)(void *))sub_6E780, 0);
      dword_65DF88 = 1;
    }
    v3 = pthread_mutex_lock(&stru_65DF8C);
    if ( v3 )
    {
      v3 = -1;
      strcpy(attr.__size, "fail to lock gpio ctrl mutex\n");
      nullsub_8();
    }
    else
    {
      if ( !sub_700FC(dword_65DFA4, &v5) )
      {
        *(_QWORD *)attr.__size = a2 | 0xFFFFFFFF00000000LL;
        sub_700E4(dword_65DFA4, &v5, 4, &attr, 8);
      }
      pthread_mutex_unlock(&stru_65DF8C);
    }
  }
  else
  {
    v3 = -1;
    strcpy(attr.__size, "bad param\n");
    nullsub_8();
  }
  return v3;
}
