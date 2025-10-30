int __fastcall sub_40F6C(unsigned int *a1, int a2, char *nptr, unsigned __int8 a4, int a5)
{
  unsigned int *v6; // r6
  int v7; // r2
  int v8; // r1
  int v9; // r7
  int v11; // r4
  unsigned __int8 v12; // [sp+18h] [bp+18h]

  if ( dword_242F4C )
  {
    v6 = a1;
    if ( nptr && *nptr )
    {
      v9 = strtol(nptr, 0, 10);
      if ( pthread_mutex_lock(&stru_2440BC) )
        sub_3E190("switchpool", 2907);
      if ( pthread_rwlock_rdlock(&rwlock) )
        sub_3E12C("switchpool", 2907);
      if ( pthread_mutex_unlock(&stru_2440BC) )
        sub_3E1F4("switchpool", 2907);
      if ( v9 >= 0 && v9 < dword_242F4C )
      {
        v11 = *(_DWORD *)(dword_244048 + 4 * v9);
        *(_DWORD *)(v11 + 100) = 1;
        if ( pthread_rwlock_unlock(&rwlock) )
          sub_3E258("switchpool", 2917);
        off_9E444();
        sub_59E6C(v11);
        v12 = a4;
        v7 = v9;
        a1 = v6;
        v8 = 27;
      }
      else
      {
        if ( pthread_rwlock_unlock(&rwlock) )
          sub_3E258("switchpool", 2910);
        off_9E444();
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
  return sub_3F65C(a1, v8, v7, 0, v12);
}
