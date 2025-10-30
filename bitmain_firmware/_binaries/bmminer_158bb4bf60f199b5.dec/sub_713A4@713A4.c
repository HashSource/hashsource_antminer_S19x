int __fastcall sub_713A4(unsigned int a1)
{
  int v2; // r6
  int v3; // r4
  __int16 v5; // [sp+Ch] [bp-818h] BYREF
  _DWORD v6[4]; // [sp+10h] [bp-814h] BYREF
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "reset_pic", a1);
    v3 = -2147483135;
    sub_47AB4(0, s, 0);
    return v3;
  }
  if ( !dword_246410[2 * a1 + 1] )
  {
    v3 = sub_7104C(a1);
    if ( v3 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "reset_pic", a1);
      sub_47AB4(0, s, 0);
      return v3;
    }
  }
  v2 = dword_246410[2 * a1];
  v3 = 0;
  pthread_mutex_lock(&stru_1B147C);
  v6[1] = 2816;
  v6[0] = 117746261;
  v6[2] = 0;
  v6[3] = 0;
  v5 = 0;
  if ( sub_738FC(v2, v6, 6) != 6 )
  {
    snprintf(s, 0x800u, "%s write iic err\n", "_bitmain_pic_reset_common");
LABEL_13:
    sub_47AB4(0, s, 0);
    goto LABEL_14;
  }
  usleep(0x30D40u);
  if ( sub_73874(v2, &v5, 2) != 2 )
  {
    snprintf(s, 0x800u, "%s read iic err\n", "_bitmain_pic_reset_common");
    goto LABEL_13;
  }
  if ( (unsigned __int8)v5 == 7 && HIBYTE(v5) == 1 )
    goto LABEL_8;
  snprintf(
    s,
    0x800u,
    "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
    "_bitmain_pic_reset_common",
    (unsigned __int8)v5,
    HIBYTE(v5));
  sub_47AB4(0, s, 0);
LABEL_14:
  v3 = -2147483136;
LABEL_8:
  pthread_mutex_unlock(&stru_1B147C);
  usleep((__useconds_t)"d asic, will power off hash board %d\n");
  return v3;
}
