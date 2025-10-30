int sub_675F4()
{
  char v1[2048]; // [sp+0h] [bp-804h] BYREF

  if ( dword_53153C )
  {
    pthread_mutex_lock(&stru_531520);
    strcpy(v1, "bitmain power close ===========\n");
    sub_3AF5C(3, v1, 0, (int)v1);
    sub_6A8A0(dword_531538);
    memset(&dword_531538, 0, 0x170u);
    pthread_mutex_unlock(&stru_531520);
  }
  return 0;
}
