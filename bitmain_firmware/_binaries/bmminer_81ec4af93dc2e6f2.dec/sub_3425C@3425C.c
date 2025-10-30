int sub_3425C()
{
  int v1; // r3
  pthread_attr_t attr; // [sp+4h] [bp-824h] BYREF
  char s[2048]; // [sp+28h] [bp-800h] BYREF

  if ( dword_B3928 )
    return 0;
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr, 0x200000u);
  dword_B3928 = (int)calloc(1u, 0x40u);
  if ( sub_3E010(dword_B3928, &attr, sub_2F840) )
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "create thread failed\n");
      sub_3AF5C(3, s, 0, *(_DWORD *)"d failed\n");
    }
    return -1;
  }
  else
  {
    pthread_detach(*(_DWORD *)(dword_B3928 + 12));
    if ( (unsigned int)off_AFC24 <= 3 )
      return 0;
    snprintf(s, 0x800u, "create thread %s\n", "apw17_power_monitor_thread");
    sub_3AF5C(3, s, 0, v1);
    return 0;
  }
}
