int __fastcall sub_727A0(unsigned int a1)
{
  int v2; // r5
  int v3; // r4
  int v5; // r4
  int v6; // [sp+8h] [bp-81Ch] BYREF
  __int16 v7; // [sp+Ch] [bp-818h]
  _BYTE v8[4]; // [sp+10h] [bp-814h] BYREF
  int v9; // [sp+14h] [bp-810h]
  int v10; // [sp+18h] [bp-80Ch]
  int v11; // [sp+1Ch] [bp-808h]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( a1 <= 0xF )
  {
    if ( !dword_71ED68[2 * a1 + 1] )
    {
      v5 = sub_71FBC(a1);
      if ( v5 < 0 )
      {
        snprintf(s, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "send_pic_heart_beat", a1);
        nullsub_8();
        return v5;
      }
    }
    v2 = dword_71ED68[2 * a1];
    v3 = 0;
    pthread_mutex_lock(&stru_65E42C);
    v8[0] = 85;
    v8[1] = -86;
    v8[3] = 22;
    v8[2] = 4;
    v9 = 6656;
    v10 = 0;
    v11 = 0;
    v6 = 0;
    v7 = 0;
    if ( sub_76744(v2, v8, 6) == 6 )
    {
      usleep(0x2710u);
      if ( sub_766E8(v2, &v6, 6) == 6 )
      {
        if ( BYTE1(v6) == 22 && BYTE2(v6) == 1 )
          goto LABEL_8;
        snprintf(s, 0x800u, "%s failed!\n", "_bitmain_pic_heart_beat_common");
        nullsub_8();
        sub_71EC4((unsigned __int8 *)&v6, 6);
LABEL_13:
        v3 = -2147483136;
LABEL_8:
        pthread_mutex_unlock(&stru_65E42C);
        return v3;
      }
      snprintf(s, 0x800u, "%s read iic err\n", "_bitmain_pic_heart_beat_common");
    }
    else
    {
      snprintf(s, 0x800u, "%s write iic err\n", "_bitmain_pic_heart_beat_common");
    }
    nullsub_8();
    goto LABEL_13;
  }
  snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "send_pic_heart_beat", a1);
  nullsub_8();
  return -2147483135;
}
