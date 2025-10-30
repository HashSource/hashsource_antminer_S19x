int __fastcall sub_72A6C(int a1)
{
  int v2; // r4
  __int16 v4; // [sp+Ch] [bp-814h] BYREF
  _BYTE v5[4]; // [sp+10h] [bp-810h] BYREF
  int v6; // [sp+14h] [bp-80Ch]
  int v7; // [sp+18h] [bp-808h]
  int v8; // [sp+1Ch] [bp-804h]
  char s[2048]; // [sp+20h] [bp-800h] BYREF

  v2 = 0;
  pthread_mutex_lock(&stru_65E42C);
  v5[0] = 85;
  v5[1] = -86;
  v5[3] = 1;
  v6 = 218103814;
  v7 = 0;
  v8 = 0;
  v4 = 0;
  v5[2] = 6;
  if ( sub_76744(a1, v5, 8) != 8 )
  {
    snprintf(s, 0x800u, "%s write iic err\n", "_bitmain_pic_seek_1704");
    goto LABEL_7;
  }
  usleep(0x493E0u);
  if ( sub_766E8(a1, &v4, 2) != 2 )
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
    nullsub_8();
  }
  pthread_mutex_unlock(&stru_65E42C);
  return v2;
}
