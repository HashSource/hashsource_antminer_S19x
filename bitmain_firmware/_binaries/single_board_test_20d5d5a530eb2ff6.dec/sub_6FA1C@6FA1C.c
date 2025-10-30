int __fastcall sub_6FA1C(int a1)
{
  int v2; // r0
  int *v3; // r2
  int v4; // r6
  int v5; // r3
  int v6; // t1

  v2 = pthread_mutex_lock(&stru_65E2CC);
  v3 = &dword_65E2E8;
  v4 = v2;
  v5 = v2;
  if ( v2 )
  {
    v4 = -1;
    nullsub_8();
  }
  else
  {
    while ( 1 )
    {
      v6 = *v3++;
      if ( v6 == a1 )
        break;
      if ( ++v5 == 5 )
      {
        nullsub_8();
        goto LABEL_5;
      }
    }
    dword_65E2C8[v5 + 8] = 0;
LABEL_5:
    pthread_mutex_unlock(&stru_65E2CC);
  }
  return v4;
}
