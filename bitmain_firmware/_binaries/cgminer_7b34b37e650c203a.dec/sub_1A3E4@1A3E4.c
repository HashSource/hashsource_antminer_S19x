int __fastcall sub_1A3E4(unsigned int *a1, int a2, char *nptr, unsigned __int8 a4, int a5)
{
  unsigned int *v6; // r6
  int v7; // r2
  int v8; // r1
  int v9; // r7
  int v11; // r4
  unsigned __int8 v12; // [sp+18h] [bp+18h]

  if ( dword_733CC )
  {
    v6 = a1;
    if ( nptr && *nptr )
    {
      v9 = strtol(nptr, 0, 10);
      if ( pthread_mutex_lock(&stru_7453C) )
        sub_17604("switchpool", 2907);
      if ( pthread_rwlock_rdlock(&rwlock) )
        sub_175A0("switchpool", 2907);
      if ( pthread_mutex_unlock(&stru_7453C) )
        sub_17668("switchpool", 2907);
      if ( v9 >= 0 && v9 < dword_733CC )
      {
        v11 = *(_DWORD *)(dword_744C8 + 4 * v9);
        *(_DWORD *)(v11 + 100) = 1;
        if ( pthread_rwlock_unlock(&rwlock) )
          sub_176CC("switchpool", 2917);
        off_67ED8();
        sub_34178(v11);
        v12 = a4;
        v7 = v9;
        a1 = v6;
        v8 = 27;
      }
      else
      {
        if ( pthread_rwlock_unlock(&rwlock) )
          sub_176CC("switchpool", 2910);
        off_67ED8();
        v12 = a4;
        v7 = v9;
        a1 = v6;
        v8 = 26;
      }
    }
    else
    {
      v12 = a4;
      v7 = 0;
      v8 = 25;
    }
  }
  else
  {
    v12 = a4;
    v7 = 0;
    v8 = 8;
  }
  return sub_18AD4(a1, v8, v7, 0, v12);
}
