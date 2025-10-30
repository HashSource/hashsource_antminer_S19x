int __fastcall sub_6F0DC(int a1, const void *a2, size_t a3)
{
  int v6; // [sp+4h] [bp-810h]
  char v9[2048]; // [sp+10h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_5369C8) )
  {
    strcpy(v9, "failed to i2c lock\n");
    sub_3B6AC(0, v9, 0, (int)v9);
    return -4;
  }
  else
  {
    v6 = sub_6D08C(a1, a2, a3);
    pthread_mutex_unlock(&stru_5369C8);
    return v6;
  }
}
