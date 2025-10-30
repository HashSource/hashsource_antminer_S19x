int sub_6FB58()
{
  int v0; // r0
  int v1; // r4
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_65E2CC) )
  {
    strcpy(v3, "failed to api lock\n");
    nullsub_8();
    return -4;
  }
  else
  {
    v0 = dword_21C730;
    if ( dword_21C730 < 0 )
    {
      dword_21C730 = sub_6FC48(off_21C734);
      sub_6FDD8();
      v0 = dword_21C730;
    }
    if ( v0 <= 0 )
    {
      v1 = -1;
      snprintf(v3, 0x800u, "failed to init %s\n", off_21C734);
      nullsub_8();
    }
    else
    {
      v1 = sub_6FCC8();
    }
    pthread_mutex_unlock(&stru_65E2CC);
    return v1;
  }
}
