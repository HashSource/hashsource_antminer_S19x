int sub_669D4()
{
  char v1[2048]; // [sp+0h] [bp-804h] BYREF

  if ( dword_53634C )
  {
    pthread_mutex_lock(&stru_536330);
    strcpy(v1, "bitmain power close ===========\n");
    sub_3B6AC(3, v1, 0, (int)v1);
    sub_6EF80(dword_536348);
    memset(&dword_536348, 0, 0x170u);
    pthread_mutex_unlock(&stru_536330);
  }
  return 0;
}
