int __fastcall sub_71AF4(unsigned int a1)
{
  int v2; // r5
  int v3; // r4
  int v5; // [sp+8h] [bp-81Ch] BYREF
  __int16 v6; // [sp+Ch] [bp-818h]
  _DWORD v7[4]; // [sp+10h] [bp-814h] BYREF
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "send_pic_heart_beat", a1);
    v3 = -2147483135;
    sub_47AB4(0, s, 0);
    return v3;
  }
  if ( !dword_246410[2 * a1 + 1] )
  {
    v3 = sub_7104C(a1);
    if ( v3 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "send_pic_heart_beat", a1);
      sub_47AB4(0, s, 0);
      return v3;
    }
  }
  v2 = dword_246410[2 * a1];
  v3 = 0;
  pthread_mutex_lock(&stru_1B147C);
  v7[1] = 6656;
  v7[0] = 369404501;
  v7[2] = 0;
  v7[3] = 0;
  v5 = 0;
  v6 = 0;
  if ( sub_738FC(v2, v7, 6) != 6 )
  {
    snprintf(s, 0x800u, "%s write iic err\n", "_bitmain_pic_heart_beat_common");
LABEL_13:
    sub_47AB4(0, s, 0);
    goto LABEL_14;
  }
  usleep(0x30D40u);
  if ( sub_73874(v2, &v5, 6) != 6 )
  {
    snprintf(s, 0x800u, "%s read iic err\n", "_bitmain_pic_heart_beat_common");
    goto LABEL_13;
  }
  if ( BYTE1(v5) == 22 && BYTE2(v5) == 1 )
    goto LABEL_8;
  snprintf(s, 0x800u, "%s failed!\n", "_bitmain_pic_heart_beat_common");
  sub_47AB4(0, s, 0);
  sub_70EF8((unsigned __int8 *)&v5, 6u);
LABEL_14:
  v3 = -2147483136;
LABEL_8:
  pthread_mutex_unlock(&stru_1B147C);
  return v3;
}
