int __fastcall sub_5D4D8(int a1)
{
  int v1; // r0
  char v4[8]; // [sp+Ch] [bp-828h] BYREF
  int v5; // [sp+80Ch] [bp-28h] BYREF
  unsigned __int8 v6; // [sp+810h] [bp-24h]
  _DWORD v7[4]; // [sp+814h] [bp-20h] BYREF
  char v8; // [sp+827h] [bp-Dh]
  unsigned __int16 v9; // [sp+828h] [bp-Ch]
  __int16 v10; // [sp+82Ah] [bp-Ah]
  int v11; // [sp+82Ch] [bp-8h]

  v11 = -2147483136;
  pthread_mutex_lock(&stru_531508);
  v8 = 4;
  v7[0] = 386181717;
  v7[2] = 0;
  v7[3] = 0;
  v5 = 0;
  v6 = 0;
  v10 = 27;
  v7[1] = 6912;
  v9 = 6;
  v1 = sub_6A9E8(a1, v7, 6);
  if ( v1 == v9 )
  {
    usleep(0x493E0u);
    if ( sub_6A93C(a1, &v5, 5) == 5 )
    {
      if ( BYTE1(v5) == 23 && (unsigned __int8)v5 == 5 )
      {
        v9 = 0;
        v10 = 0;
        while ( v9 <= 2u )
          v10 += *((unsigned __int8 *)&v5 + v9++);
        if ( HIBYTE(v10) == HIBYTE(v5) && (unsigned __int8)v10 == v6 )
        {
          v11 = BYTE2(v5);
        }
        else
        {
          snprintf(v4, 0x800u, "%s failed 2!\n", "_bitmain_pic_get_sw_ver_common");
          sub_3AF5C(0, v4, 0, (int)v4);
          sub_5D258("read return data", (unsigned __int8 *)&v5, 5);
        }
      }
      else
      {
        snprintf(v4, 0x800u, "%s failed!\n", "_bitmain_pic_get_sw_ver_common");
        sub_3AF5C(0, v4, 0, (int)v4);
        sub_5D258("read return data", (unsigned __int8 *)&v5, 5);
      }
    }
    else
    {
      snprintf(v4, 0x800u, "%s read iic err\n", "_bitmain_pic_get_sw_ver_common");
      sub_3AF5C(0, v4, 0, (int)v4);
    }
  }
  else
  {
    snprintf(v4, 0x800u, "%s write iic err\n", "_bitmain_pic_get_sw_ver_common");
    sub_3AF5C(0, v4, 0, (int)v4);
  }
  pthread_mutex_unlock(&stru_531508);
  return v11;
}
