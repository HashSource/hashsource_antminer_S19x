int sub_345D0()
{
  int v0; // r5
  int v2; // r3
  pthread_attr_t attr; // [sp+4h] [bp-824h] BYREF
  char s[2048]; // [sp+28h] [bp-800h] BYREF

  if ( dword_B668C )
    return 0;
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr, 0x200000u);
  dword_B668C = (int)calloc(1u, 0x40u);
  v0 = sub_3E744(dword_B668C, &attr, sub_31E8C);
  if ( !v0 )
  {
    pthread_detach(*(_DWORD *)(dword_B668C + 12));
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(s, 0x800u, "create thread %s\n", "check_miner_status_thread");
      sub_3B6AC(3, s, 0, v2);
      return v0;
    }
    return 0;
  }
  v0 = -1;
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(s, "create thread failed\n");
    sub_3B6AC(3, s, 0, *(_DWORD *)"d failed\n");
  }
  return v0;
}
