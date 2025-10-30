void sub_690A0()
{
  char v0[2052]; // [sp+0h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_1B11C0) )
  {
    strcpy(v0, "failed to api lock\n");
    sub_47AB4(0, v0, 0);
  }
  else
  {
    if ( dword_9F454 > 0 )
      sub_69348();
    pthread_mutex_unlock(&stru_1B11C0);
  }
}
