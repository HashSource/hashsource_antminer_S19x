int __fastcall sub_6F188(int a1, _BYTE *a2, size_t a3, int a4, unsigned int a5)
{
  char v11[2051]; // [sp+14h] [bp-810h] BYREF
  char v12; // [sp+817h] [bp-Dh] BYREF
  int v13; // [sp+818h] [bp-Ch]
  unsigned int i; // [sp+81Ch] [bp-8h]

  if ( pthread_mutex_lock(&stru_5369C8) )
  {
    strcpy(v11, "failed to i2c lock\n");
    sub_3B6AC(0, v11, 0, (int)v11);
    return -4;
  }
  else
  {
    v13 = 0;
    for ( i = 0; i < a5; ++i )
    {
      v12 = *a2 + i;
      v13 = sub_6D08C(a1, &v12, a3);
      if ( v13 == a3 )
      {
        v13 = sub_6CE2C(a1, a4 + i, 1u);
      }
      else
      {
        strcpy(v11, "failed to write i2c reg\n");
        sub_3B6AC(0, v11, 0, (int)v11);
      }
    }
    pthread_mutex_unlock(&stru_5369C8);
    return a5;
  }
}
