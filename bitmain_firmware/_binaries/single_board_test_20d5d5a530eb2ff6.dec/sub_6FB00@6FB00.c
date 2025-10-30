int sub_6FB00()
{
  int v0; // r0
  int v1; // r4
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_65E2CC) )
  {
    strcpy(v3, "failed to api lock\n");
    nullsub_8();
    return -1;
  }
  else
  {
    v0 = sub_6FEE8();
    sub_6E690(v0, v3);
    v1 = (unsigned __int8)v3[0];
    if ( v3[0] )
      v1 = 1;
    pthread_mutex_unlock(&stru_65E2CC);
    return v1;
  }
}
