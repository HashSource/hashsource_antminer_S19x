int __fastcall sub_6A8A0(int a1)
{
  char v3[2048]; // [sp+Ch] [bp-808h] BYREF
  int v4; // [sp+80Ch] [bp-8h]

  v4 = 0;
  if ( pthread_mutex_lock(&stru_531AEC) )
  {
    strcpy(v3, "failed to i2c lock\n");
    return sub_3AF5C(0, v3, 0, (int)v3);
  }
  else
  {
    sub_6AD98(a1);
    return pthread_mutex_unlock(&stru_531AEC);
  }
}
