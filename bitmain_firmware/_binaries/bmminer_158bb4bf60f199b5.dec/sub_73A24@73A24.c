int __fastcall sub_73A24(int a1, int a2, int a3, int a4, int a5)
{
  int v9; // r4
  char v11[2052]; // [sp+8h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_1B14B4) )
  {
    v9 = -4;
    strcpy(v11, "failed to i2c lock\n");
    sub_47AB4(0, v11, 0);
  }
  else
  {
    v9 = sub_7436C(a1, a2, a3, a4, a5);
    pthread_mutex_unlock(&stru_1B14B4);
  }
  return v9;
}
