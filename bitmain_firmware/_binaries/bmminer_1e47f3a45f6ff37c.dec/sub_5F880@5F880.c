int __fastcall sub_5F880(int a1, int a2)
{
  int v2; // r3
  int v3; // r3
  int v4; // r3
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r0
  int v11; // [sp+8h] [bp-824h]
  char v13[12]; // [sp+10h] [bp-81Ch] BYREF
  __int16 v14; // [sp+810h] [bp-1Ch] BYREF
  int v15; // [sp+814h] [bp-18h] BYREF
  __int16 v16; // [sp+818h] [bp-14h]
  unsigned __int8 v17; // [sp+81Dh] [bp-Fh]
  __int16 v18; // [sp+81Eh] [bp-Eh]
  int v19; // [sp+820h] [bp-Ch]
  unsigned __int16 v20; // [sp+826h] [bp-6h]

  v11 = a2;
  v19 = a2;
  pthread_mutex_lock(&stru_536318);
  v18 = 0;
  v20 = 0;
  v17 = 4;
  v15 = 0;
  v16 = 0;
  v14 = 0;
  while ( 1 )
  {
    v18 = v17 + 4;
    v2 = v20++;
    *((_BYTE *)&v15 + v2) = 85;
    v3 = v20++;
    *((_BYTE *)&v15 + v3) = -86;
    v4 = v20++;
    *((_BYTE *)&v15 + v4) = v17;
    v5 = v20++;
    *((_BYTE *)&v15 + v5) = 4;
    v6 = v20++;
    *((_BYTE *)&v15 + v6) = HIBYTE(v18);
    v7 = v20++;
    *((_BYTE *)&v15 + v7) = v18;
    v8 = sub_6F0DC(a1, &v15, v20);
    if ( v8 != v20 )
    {
      snprintf(v13, 0x800u, "%s write iic err\n", "_bitmain_pic_erase_1704");
      sub_3B6AC(0, v13, 0, (int)v13);
      goto LABEL_10;
    }
    usleep(0x493E0u);
    if ( sub_6F030(a1, &v14, 2) != 2 )
    {
      snprintf(v13, 0x800u, "%s read iic err\n", "_bitmain_pic_erase_1704");
      sub_3B6AC(0, v13, 0, (int)v13);
      goto LABEL_10;
    }
    usleep(0x493E0u);
    if ( (unsigned __int8)v14 != 4 || HIBYTE(v14) != 1 )
      break;
    v11 -= 32;
    if ( v11 <= 31 )
      goto LABEL_10;
  }
  snprintf(
    v13,
    0x800u,
    "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
    "_bitmain_pic_erase_1704",
    (unsigned __int8)v14,
    HIBYTE(v14));
  sub_3B6AC(0, v13, 0, (int)v13);
LABEL_10:
  pthread_mutex_unlock(&stru_536318);
  if ( v11 <= 0 )
    return 0;
  else
    return v19;
}
