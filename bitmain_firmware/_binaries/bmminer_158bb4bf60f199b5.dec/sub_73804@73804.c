void __fastcall sub_73804(int a1)
{
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( pthread_mutex_lock(&stru_1B14B4) )
  {
    strcpy(v2, "failed to i2c lock\n");
    sub_47AB4(0, v2, 0);
  }
  else
  {
    sub_73C78(a1);
    pthread_mutex_unlock(&stru_1B14B4);
  }
}
