int __fastcall sub_60E30(int a1, __int16 a2)
{
  int v2; // r0
  char v6[4]; // [sp+10h] [bp-824h] BYREF
  __int16 v7; // [sp+810h] [bp-24h] BYREF
  int v8; // [sp+814h] [bp-20h] BYREF
  char v9; // [sp+818h] [bp-1Ch]
  char v10; // [sp+819h] [bp-1Bh]
  int v11; // [sp+81Ah] [bp-1Ah]
  __int16 v12; // [sp+81Eh] [bp-16h]
  int v13; // [sp+820h] [bp-14h]
  __int16 v14; // [sp+825h] [bp-Fh]
  char v15; // [sp+827h] [bp-Dh]
  unsigned __int16 v16; // [sp+828h] [bp-Ch]
  __int16 v17; // [sp+82Ah] [bp-Ah]
  int v18; // [sp+82Ch] [bp-8h]

  v18 = -2147483136;
  pthread_mutex_lock(&stru_531508);
  v15 = 6;
  v8 = 17214037;
  v12 = 0;
  v13 = 0;
  v7 = 0;
  v14 = a2;
  v17 = HIBYTE(a2) + 6 + (unsigned __int8)a2 + 1;
  v9 = HIBYTE(a2);
  v10 = a2;
  v11 = HIBYTE(v17);
  v16 = 8;
  *(_WORD *)((char *)&v11 + 1) = (unsigned __int8)(HIBYTE(a2) + 6 + a2 + 1);
  v2 = sub_6A9E8(a1, &v8, 8);
  if ( v2 == v16 )
  {
    usleep(0x493E0u);
    if ( sub_6A93C(a1, &v7, 2) == 2 )
    {
      if ( (unsigned __int8)v7 == 1 && HIBYTE(v7) == 1 )
      {
        v18 = 0;
      }
      else
      {
        snprintf(
          v6,
          0x800u,
          "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
          "_bitmain_pic_seek_1704",
          (unsigned __int8)v7,
          HIBYTE(v7));
        sub_3AF5C(0, v6, 0, (int)v6);
      }
    }
    else
    {
      snprintf(v6, 0x800u, "%s read iic err\n", "_bitmain_pic_seek_1704");
      sub_3AF5C(0, v6, 0, (int)v6);
    }
  }
  else
  {
    snprintf(v6, 0x800u, "%s write iic err\n", "_bitmain_pic_seek_1704");
    sub_3AF5C(0, v6, 0, (int)v6);
  }
  pthread_mutex_unlock(&stru_531508);
  return v18;
}
