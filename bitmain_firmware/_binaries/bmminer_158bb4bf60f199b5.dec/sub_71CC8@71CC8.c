int __fastcall sub_71CC8(int a1)
{
  int v2; // r4
  __int16 v4; // [sp+Ch] [bp-814h] BYREF
  _DWORD v5[4]; // [sp+10h] [bp-810h] BYREF
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  v2 = 0;
  pthread_mutex_lock(&stru_1B147C);
  v5[3] = 0;
  v5[2] = 0;
  v5[0] = 17214037;
  v5[1] = 218103814;
  v4 = 0;
  if ( sub_738FC(a1, v5, 8) != 8 )
  {
    snprintf(s, 0x800u, "%s write iic err\n", "_bitmain_pic_seek_1704");
    goto LABEL_7;
  }
  usleep(0x30D40u);
  if ( sub_73874(a1, &v4, 2) != 2 )
  {
    snprintf(s, 0x800u, "%s read iic err\n", "_bitmain_pic_seek_1704");
    goto LABEL_7;
  }
  if ( (unsigned __int8)v4 != 1 || HIBYTE(v4) != 1 )
  {
    snprintf(
      s,
      0x800u,
      "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
      "_bitmain_pic_seek_1704",
      (unsigned __int8)v4,
      HIBYTE(v4));
LABEL_7:
    v2 = -2147483136;
    sub_47AB4(0, s, 0);
  }
  pthread_mutex_unlock(&stru_1B147C);
  return v2;
}
