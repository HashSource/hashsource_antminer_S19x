int sub_21578()
{
  pthread_attr_t attr; // [sp+4h] [bp-824h] BYREF
  char v2[2048]; // [sp+28h] [bp-800h] BYREF

  if ( dword_23A29C )
    return 0;
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr, 0x200000u);
  dword_23A29C = (int)calloc(1u, 0x40u);
  if ( sub_4BDCC(dword_23A29C, &attr, sub_20880) )
  {
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(v2, "create thread failed\n");
      sub_47AB4(3, v2, 0);
    }
    return -1;
  }
  else
  {
    pthread_detach(*(_DWORD *)(dword_23A29C + 12));
    if ( (unsigned int)dword_9E31C <= 3 )
      return 0;
    strcpy(v2, "create thread\n");
    sub_47AB4(3, v2, 0);
    return 0;
  }
}
