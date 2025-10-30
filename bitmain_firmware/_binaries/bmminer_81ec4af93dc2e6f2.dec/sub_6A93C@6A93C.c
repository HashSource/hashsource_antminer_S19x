int __fastcall sub_6A93C(int a1, int a2, int a3)
{
  int v6; // [sp+4h] [bp-810h]
  char v9[2048]; // [sp+10h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_531AEC) )
  {
    strcpy(v9, "failed to i2c lock\n");
    sub_3AF5C(0, v9, 0, (int)v9);
    return -4;
  }
  else
  {
    v6 = sub_6B060(a1, a2, a3);
    pthread_mutex_unlock(&stru_531AEC);
    return v6;
  }
}
