int __fastcall sub_72644(unsigned int a1)
{
  int v2; // r5
  int v3; // r4
  int v5; // r4
  __int16 v6; // [sp+Ch] [bp-818h] BYREF
  _BYTE v7[4]; // [sp+10h] [bp-814h] BYREF
  int v8; // [sp+14h] [bp-810h]
  int v9; // [sp+18h] [bp-80Ch]
  int v10; // [sp+1Ch] [bp-808h]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( a1 <= 0xF )
  {
    if ( !dword_71ED68[2 * a1 + 1] )
    {
      v5 = sub_71FBC(a1);
      if ( v5 < 0 )
      {
        snprintf(s, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "disable_dc_dc", a1);
        nullsub_8();
        return v5;
      }
    }
    v2 = dword_71ED68[2 * a1];
    v3 = 0;
    pthread_mutex_lock(&stru_65E42C);
    v7[0] = 85;
    v7[1] = -86;
    v7[3] = 21;
    v8 = 1703936;
    v7[2] = 5;
    v9 = 0;
    v10 = 0;
    v6 = 0;
    if ( sub_76744(v2, v7, 7) == 7 )
    {
      usleep(0x493E0u);
      if ( sub_766E8(v2, &v6, 2) == 2 )
      {
        if ( (unsigned __int8)v6 == 21 && HIBYTE(v6) == 1 )
          goto LABEL_8;
        snprintf(
          s,
          0x800u,
          "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
          "_bitmain_pic_disable_dc_dc_common",
          (unsigned __int8)v6,
          HIBYTE(v6));
        nullsub_8();
LABEL_13:
        v3 = -2147483136;
LABEL_8:
        pthread_mutex_unlock(&stru_65E42C);
        return v3;
      }
      snprintf(s, 0x800u, "%s read iic err\n", "_bitmain_pic_disable_dc_dc_common");
    }
    else
    {
      snprintf(s, 0x800u, "%s write iic err\n", "_bitmain_pic_disable_dc_dc_common");
    }
    nullsub_8();
    goto LABEL_13;
  }
  snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "disable_dc_dc", a1);
  nullsub_8();
  return -2147483135;
}
