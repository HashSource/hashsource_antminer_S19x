int sub_218C8()
{
  pthread_attr_t attr; // [sp+4h] [bp-824h] BYREF
  char v2[2048]; // [sp+28h] [bp-800h] BYREF

  if ( dword_23A2A4 )
    return 0;
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr, 0x200000u);
  dword_23A2A4 = (int)calloc(1u, 0x40u);
  if ( sub_4BDCC(dword_23A2A4, &attr, sub_20F90) )
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
    pthread_detach(*(_DWORD *)(dword_23A2A4 + 12));
    if ( (unsigned int)dword_9E31C <= 3 )
      return 0;
    strcpy(v2, "create thread\n");
    sub_47AB4(3, v2, 0);
    return 0;
  }
}
