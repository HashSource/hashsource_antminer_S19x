int __fastcall sub_5EF88(int a1, int a2)
{
  int v2; // r3
  int v3; // r3
  int v4; // r0
  int v5; // r0
  char v9[8]; // [sp+14h] [bp-838h] BYREF
  __int16 v10; // [sp+814h] [bp-38h] BYREF
  _DWORD v11[8]; // [sp+818h] [bp-34h] BYREF
  char v12; // [sp+839h] [bp-13h]
  unsigned __int16 v13; // [sp+83Ah] [bp-12h]
  int i; // [sp+83Ch] [bp-10h]
  __int16 v15; // [sp+842h] [bp-Ah]
  int v16; // [sp+844h] [bp-8h]

  v16 = -2147483136;
  pthread_mutex_lock(&stru_536318);
  v11[0] = 34908757;
  v10 = 0;
  v12 = 20;
  v15 = 22;
  v13 = 4;
  memset(&v11[1], 0, 28);
  for ( i = 0; i <= 15; ++i )
  {
    *((_BYTE *)v11 + v13 + i) = *(_BYTE *)(a2 + i);
    v15 += *(unsigned __int8 *)(a2 + i);
  }
  v13 += 16;
  v2 = v13++;
  *((_BYTE *)v11 + v2) = HIBYTE(v15);
  v3 = v13++;
  *((_BYTE *)v11 + v3) = v15;
  v4 = sub_6F0DC(a1, v11, v13);
  if ( v4 == v13 )
  {
    usleep(0x493E0u);
    if ( sub_6F030(a1, &v10, 2) == 2 )
    {
      if ( (unsigned __int8)v10 == 2 && HIBYTE(v10) == 1 )
      {
        v12 = 4;
        v15 = 9;
        v11[0] = 84191829;
        LOWORD(v11[1]) = 2304;
        v13 = 6;
        v5 = sub_6F0DC(a1, v11, 6);
        if ( v5 == v13 )
        {
          usleep(0x493E0u);
          if ( sub_6F030(a1, &v10, 2) == 2 )
          {
            if ( (unsigned __int8)v10 == 5 && HIBYTE(v10) == 1 )
            {
              v16 = 0;
              snprintf(v9, 0x800u, "%s  success write to pic flash\n", "_bitmain_pic_write_1704");
              sub_3B6AC(2, v9, 0, (int)v9);
            }
            else
            {
              snprintf(
                v9,
                0x800u,
                "%s failed 2! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
                "_bitmain_pic_write_1704",
                (unsigned __int8)v10,
                HIBYTE(v10));
              sub_3B6AC(0, v9, 0, (int)v9);
            }
          }
          else
          {
            snprintf(v9, 0x800u, "%s read iic 2 err\n", "_bitmain_pic_write_1704");
            sub_3B6AC(0, v9, 0, (int)v9);
          }
        }
        else
        {
          snprintf(v9, 0x800u, "%s write iic 2 err\n", "_bitmain_pic_write_1704");
          sub_3B6AC(0, v9, 0, (int)v9);
        }
      }
      else
      {
        snprintf(
          v9,
          0x800u,
          "%s failed 1! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
          "_bitmain_pic_write_1704",
          (unsigned __int8)v10,
          HIBYTE(v10));
        sub_3B6AC(0, v9, 0, (int)v9);
      }
    }
    else
    {
      snprintf(v9, 0x800u, "%s read iic 1 err\n", "_bitmain_pic_write_1704");
      sub_3B6AC(0, v9, 0, (int)v9);
    }
  }
  else
  {
    snprintf(v9, 0x800u, "%s write iic 1 err\n", "_bitmain_pic_write_1704");
    sub_3B6AC(0, v9, 0, (int)v9);
  }
  pthread_mutex_unlock(&stru_536318);
  return v16;
}
