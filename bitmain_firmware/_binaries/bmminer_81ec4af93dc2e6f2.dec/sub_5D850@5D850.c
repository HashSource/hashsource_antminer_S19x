int __fastcall sub_5D850(int a1)
{
  int v1; // r0
  char v4[4]; // [sp+10h] [bp-824h] BYREF
  __int16 v5; // [sp+810h] [bp-24h] BYREF
  _DWORD v6[4]; // [sp+814h] [bp-20h] BYREF
  char v7; // [sp+827h] [bp-Dh]
  unsigned __int16 v8; // [sp+828h] [bp-Ch]
  __int16 v9; // [sp+82Ah] [bp-Ah]
  int v10; // [sp+82Ch] [bp-8h]

  v10 = -2147483136;
  pthread_mutex_lock(&stru_531508);
  v7 = 4;
  v6[0] = 100969045;
  v6[2] = 0;
  v6[3] = 0;
  v5 = 0;
  v9 = 10;
  v6[1] = 2560;
  v8 = 6;
  v1 = sub_6A9E8(a1, v6, 6);
  if ( v1 == v8 )
  {
    usleep(0x493E0u);
    if ( sub_6A93C(a1, &v5, 2) == 2 )
    {
      usleep(0x493E0u);
      if ( (unsigned __int8)v5 == 6 && HIBYTE(v5) == 1 )
      {
        v10 = 0;
      }
      else
      {
        snprintf(
          v4,
          0x800u,
          "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
          "_bitmain_pic_start_app_common",
          (unsigned __int8)v5,
          HIBYTE(v5));
        sub_3AF5C(0, v4, 0, (int)v4);
      }
    }
    else
    {
      snprintf(v4, 0x800u, "%s read iic err\n", "_bitmain_pic_start_app_common");
      sub_3AF5C(0, v4, 0, (int)v4);
    }
  }
  else
  {
    snprintf(v4, 0x800u, "%s write iic err\n", "_bitmain_pic_start_app_common");
    sub_3AF5C(0, v4, 0, (int)v4);
  }
  pthread_mutex_unlock(&stru_531508);
  return v10;
}
