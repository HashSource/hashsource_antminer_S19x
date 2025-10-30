int __fastcall sub_6AA94(int a1, int a2, int a3, int a4, int a5, unsigned __int8 a6)
{
  char v12[2048]; // [sp+18h] [bp-804h] BYREF
  int v13; // [sp+820h] [bp+4h]

  if ( pthread_mutex_lock(&stru_531AEC) )
  {
    strcpy(v12, "failed to i2c lock\n");
    sub_3AF5C(0, v12, 0, (int)v12);
    return -4;
  }
  else
  {
    v13 = sub_6B614(a1, a2, a3, a4, a5, a6);
    pthread_mutex_unlock(&stru_531AEC);
    return v13;
  }
}
