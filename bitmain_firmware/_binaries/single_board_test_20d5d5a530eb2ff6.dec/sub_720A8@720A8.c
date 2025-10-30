int __fastcall sub_720A8(unsigned int a1)
{
  int v2; // r5
  int v3; // r4
  __int16 v4; // r3
  int v6; // r4
  int v7; // [sp+8h] [bp-81Ch] BYREF
  unsigned __int8 v8; // [sp+Ch] [bp-818h]
  _BYTE v9[4]; // [sp+10h] [bp-814h] BYREF
  int v10; // [sp+14h] [bp-810h]
  int v11; // [sp+18h] [bp-80Ch]
  int v12; // [sp+1Ch] [bp-808h]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "get_pic_version", a1);
    nullsub_8();
    return -2147483135;
  }
  if ( !dword_71ED68[2 * a1 + 1] )
  {
    v6 = sub_71FBC(a1);
    if ( v6 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "get_pic_version", a1);
      nullsub_8();
      return v6;
    }
  }
  v2 = dword_71ED68[2 * a1];
  pthread_mutex_lock(&stru_65E42C);
  v9[0] = 85;
  v9[1] = -86;
  v9[3] = 23;
  v10 = 6912;
  v9[2] = 4;
  v11 = 0;
  v12 = 0;
  v7 = 0;
  v8 = 0;
  if ( sub_76744(v2, v9, 6) != 6 )
  {
    snprintf(s, 0x800u, "%s write iic err\n", "_bitmain_pic_get_sw_ver_common");
LABEL_15:
    nullsub_8();
    goto LABEL_16;
  }
  usleep(0x493E0u);
  if ( sub_766E8(v2, &v7, 5) != 5 )
  {
    snprintf(s, 0x800u, "%s read iic err\n", "_bitmain_pic_get_sw_ver_common");
    goto LABEL_15;
  }
  if ( BYTE1(v7) == 23 && (unsigned __int8)v7 == 5 )
  {
    v3 = BYTE2(v7);
    v4 = BYTE2(v7) + 28;
    if ( HIBYTE(v4) == HIBYTE(v7) && v8 == (unsigned __int8)v4 )
      goto LABEL_10;
    snprintf(s, 0x800u, "%s failed 2!\n", "_bitmain_pic_get_sw_ver_common");
  }
  else
  {
    snprintf(s, 0x800u, "%s failed!\n", "_bitmain_pic_get_sw_ver_common");
  }
  nullsub_8();
  sub_71EC4((unsigned __int8 *)&v7, 5);
LABEL_16:
  v3 = -2147483136;
LABEL_10:
  pthread_mutex_unlock(&stru_65E42C);
  return v3;
}
