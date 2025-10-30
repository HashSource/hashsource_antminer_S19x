int __fastcall sub_738FC(int a1, int a2, int a3)
{
  int v6; // r4
  char v8[2048]; // [sp+0h] [bp-800h] BYREF

  if ( pthread_mutex_lock(&stru_1B14B4) )
  {
    v6 = -4;
    strcpy(v8, "failed to i2c lock\n");
    sub_47AB4(0, v8, 0);
  }
  else
  {
    v6 = sub_73F8C(a1, a2, a3);
    pthread_mutex_unlock(&stru_1B14B4);
  }
  return v6;
}
