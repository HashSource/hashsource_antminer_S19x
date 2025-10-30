int __fastcall sub_5C078(int a1)
{
  int v1; // r0
  char v4[4]; // [sp+8h] [bp-824h] BYREF
  __int16 v5; // [sp+808h] [bp-24h] BYREF
  _DWORD v6[4]; // [sp+80Ch] [bp-20h] BYREF
  char v7; // [sp+81Fh] [bp-Dh]
  unsigned __int16 v8; // [sp+820h] [bp-Ch]
  __int16 v9; // [sp+822h] [bp-Ah]
  int v10; // [sp+824h] [bp-8h]

  v10 = -2147483136;
  pthread_mutex_lock(&stru_536318);
  v7 = 4;
  v6[0] = 117746261;
  v6[2] = 0;
  v6[3] = 0;
  v5 = 0;
  v9 = 11;
  v6[1] = 2816;
  v8 = 6;
  v1 = sub_6F0DC(a1, v6, 6);
  if ( v1 == v8 )
  {
    usleep(0x493E0u);
    if ( sub_6F030(a1, &v5, 2) == 2 )
    {
      if ( (unsigned __int8)v5 == 7 && HIBYTE(v5) == 1 )
        v10 = 0;
    }
    else
    {
      snprintf(v4, 0x800u, "%s read iic err\n", "_bitmain_pic_reset_common");
      sub_3B6AC(0, v4, 0, (int)v4);
    }
  }
  else
  {
    snprintf(v4, 0x800u, "%s write iic err\n", "_bitmain_pic_reset_common");
    sub_3B6AC(0, v4, 0, (int)v4);
  }
  pthread_mutex_unlock(&stru_536318);
  usleep(0x7A120u);
  return v10;
}
