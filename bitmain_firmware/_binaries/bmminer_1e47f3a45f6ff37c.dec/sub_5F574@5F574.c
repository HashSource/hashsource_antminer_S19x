int __fastcall sub_5F574(int a1, __int16 a2)
{
  int v2; // r0
  char v6[4]; // [sp+10h] [bp-824h] BYREF
  __int16 v7; // [sp+810h] [bp-24h] BYREF
  int v8; // [sp+814h] [bp-20h] BYREF
  _BYTE v9[8]; // [sp+818h] [bp-1Ch]
  int v10; // [sp+820h] [bp-14h]
  char v11; // [sp+825h] [bp-Fh]
  unsigned __int8 v12; // [sp+826h] [bp-Eh]
  char v13; // [sp+827h] [bp-Dh]
  unsigned __int16 v14; // [sp+828h] [bp-Ch]
  __int16 v15; // [sp+82Ah] [bp-Ah]
  int v16; // [sp+82Ch] [bp-8h]

  v16 = -2147483136;
  pthread_mutex_lock(&stru_536318);
  v13 = 6;
  v8 = 17214037;
  v9[7] = 0;
  v10 = 0;
  v7 = 0;
  v12 = (unsigned __int16)(a2 & 0xFF00) >> 8;
  v11 = a2;
  v15 = v12 + 6 + (unsigned __int8)a2 + 1;
  v9[0] = v12;
  v9[1] = a2;
  v9[2] = HIBYTE(v15);
  v14 = 8;
  *(_DWORD *)&v9[3] = (unsigned __int8)(v12 + 6 + a2 + 1);
  v2 = sub_6F0DC(a1, &v8, 8);
  if ( v2 == v14 )
  {
    usleep(0x493E0u);
    if ( sub_6F030(a1, &v7, 2) == 2 )
    {
      if ( (unsigned __int8)v7 == 1 && HIBYTE(v7) == 1 )
      {
        v16 = 0;
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
        sub_3B6AC(0, v6, 0, (int)v6);
      }
    }
    else
    {
      snprintf(v6, 0x800u, "%s read iic err\n", "_bitmain_pic_seek_1704");
      sub_3B6AC(0, v6, 0, (int)v6);
    }
  }
  else
  {
    snprintf(v6, 0x800u, "%s write iic err\n", "_bitmain_pic_seek_1704");
    sub_3B6AC(0, v6, 0, (int)v6);
  }
  pthread_mutex_unlock(&stru_536318);
  return v16;
}
