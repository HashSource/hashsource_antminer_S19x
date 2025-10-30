int __fastcall sub_6089C(int a1, int a2)
{
  int v2; // r3
  int v3; // r3
  int v4; // r0
  int v5; // r0
  char v9[8]; // [sp+14h] [bp-838h] BYREF
  __int16 v10; // [sp+814h] [bp-38h] BYREF
  _BYTE s[33]; // [sp+818h] [bp-34h] BYREF
  char v12; // [sp+839h] [bp-13h]
  unsigned __int16 v13; // [sp+83Ah] [bp-12h]
  int i; // [sp+83Ch] [bp-10h]
  __int16 v15; // [sp+842h] [bp-Ah]
  int v16; // [sp+844h] [bp-8h]

  v16 = -2147483136;
  pthread_mutex_lock(&stru_531508);
  memset(s, 0, 0x20u);
  v10 = 0;
  v12 = 20;
  v15 = 22;
  s[0] = 85;
  s[1] = -86;
  s[2] = 20;
  v13 = 4;
  s[3] = 2;
  memset(&s[4], 0, 0x10u);
  for ( i = 0; i <= 15; ++i )
  {
    s[v13 + i] = *(_BYTE *)(a2 + i);
    v15 += *(unsigned __int8 *)(a2 + i);
  }
  v13 += 16;
  v2 = v13++;
  s[v2] = HIBYTE(v15);
  v3 = v13++;
  s[v3] = v15;
  v4 = sub_6A9E8(a1, s, v13);
  if ( v4 == v13 )
  {
    usleep(0x493E0u);
    if ( sub_6A93C(a1, &v10, 2) == 2 )
    {
      if ( (unsigned __int8)v10 == 2 && HIBYTE(v10) == 1 )
      {
        v12 = 4;
        v15 = 9;
        s[0] = 85;
        s[1] = -86;
        s[2] = 4;
        s[3] = 5;
        s[4] = 0;
        v13 = 6;
        s[5] = 9;
        v5 = sub_6A9E8(a1, s, 6);
        if ( v5 == v13 )
        {
          usleep(0x493E0u);
          if ( sub_6A93C(a1, &v10, 2) == 2 )
          {
            if ( (unsigned __int8)v10 == 5 && HIBYTE(v10) == 1 )
            {
              v16 = 0;
              snprintf(v9, 0x800u, "%s  success write to pic flash\n", "_bitmain_pic_write_1704");
              sub_3AF5C(2, v9, 0, (int)v9);
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
              sub_3AF5C(0, v9, 0, (int)v9);
            }
          }
          else
          {
            snprintf(v9, 0x800u, "%s read iic 2 err\n", "_bitmain_pic_write_1704");
            sub_3AF5C(0, v9, 0, (int)v9);
          }
        }
        else
        {
          snprintf(v9, 0x800u, "%s write iic 2 err\n", "_bitmain_pic_write_1704");
          sub_3AF5C(0, v9, 0, (int)v9);
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
        sub_3AF5C(0, v9, 0, (int)v9);
      }
    }
    else
    {
      snprintf(v9, 0x800u, "%s read iic 1 err\n", "_bitmain_pic_write_1704");
      sub_3AF5C(0, v9, 0, (int)v9);
    }
  }
  else
  {
    snprintf(v9, 0x800u, "%s write iic 1 err\n", "_bitmain_pic_write_1704");
    sub_3AF5C(0, v9, 0, (int)v9);
  }
  pthread_mutex_unlock(&stru_531508);
  return v16;
}
