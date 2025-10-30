int __fastcall sub_6EF80(int a1)
{
  char v3[2048]; // [sp+Ch] [bp-808h] BYREF
  int v4; // [sp+80Ch] [bp-8h]

  v4 = 0;
  if ( pthread_mutex_lock(&stru_5369C8) )
  {
    strcpy(v3, "failed to i2c lock\n");
    return sub_3B6AC(0, v3, 0, (int)v3);
  }
  else
  {
    if ( a1 == 255 )
      sub_6DEC4();
    else
      sub_6CBFC(a1);
    return pthread_mutex_unlock(&stru_5369C8);
  }
}
