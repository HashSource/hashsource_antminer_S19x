int __fastcall sub_7336C(unsigned int a1, const char *a2)
{
  int v4; // r4
  int v5; // r7
  FILE *v6; // r0
  FILE *v7; // r5
  _BYTE *v8; // r4
  __int16 v9; // r0
  int v10; // r4
  int *v11; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  char *v16; // r0
  char *v17; // r2
  __int16 v18; // r3
  __int16 v19; // t1
  __int16 v21; // [sp+Ch] [bp-1BC8h] BYREF
  char v22[4]; // [sp+10h] [bp-1BC4h] BYREF
  char v23; // [sp+14h] [bp-1BC0h]
  char v24; // [sp+17h] [bp-1BBDh] BYREF
  int v25; // [sp+18h] [bp-1BBCh]
  int v26; // [sp+1Ch] [bp-1BB8h]
  int v27; // [sp+20h] [bp-1BB4h]
  int v28; // [sp+24h] [bp-1BB0h] BYREF
  _DWORD v29[8]; // [sp+28h] [bp-1BACh] BYREF
  char v30[2048]; // [sp+48h] [bp-1B8Ch] BYREF
  _BYTE s[5000]; // [sp+848h] [bp-138Ch] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "upgrade_pic", a1);
    nullsub_8();
    return -2147483135;
  }
  if ( !dword_71ED68[2 * a1 + 1] )
  {
    v4 = sub_71FBC(a1);
    if ( v4 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "upgrade_pic", a1);
      nullsub_8();
      return v4;
    }
  }
  memset(s, 0, sizeof(s));
  v5 = dword_71ED68[2 * a1];
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v25 = 0;
  *(_DWORD *)v22 = 0;
  v23 = 0;
  snprintf(v30, 0x800u, "%s\n", "_update_pic_app_program_1704");
  nullsub_8();
  v6 = fopen(a2, "r");
  v7 = v6;
  if ( !v6 )
  {
    snprintf(v30, 0x800u, "%s: open %s failed\n", "_update_pic_app_program_1704", a2);
    v10 = -2147483136;
    nullsub_8();
    return v10;
  }
  fseek(v6, 0, 0);
  v8 = s;
  memset(s, 0, sizeof(s));
  snprintf(v30, 0x800u, "%s: pic_flash_length = %d\n", "_update_pic_app_program_1704", 2432);
  nullsub_8();
  do
  {
    v8 += 2;
    fgets(v22, 1023, v7);
    v9 = strtoul(v22, 0, 16);
    *(v8 - 1) = v9;
    *(v8 - 2) = HIBYTE(v9);
  }
  while ( v8 != &s[4864] );
  fclose(v7);
  v10 = sub_72234(a1);
  if ( v10 )
    goto LABEL_34;
  v10 = sub_72A6C(v5);
  if ( v10 )
  {
    snprintf(v30, 0x800u, "%s set 1704 flash pointer err\n", "_erase_pic_app");
    nullsub_8();
    snprintf(v30, 0x800u, "%s: erase app flash error!\n\n", "_update_pic_app_program_1704");
    goto LABEL_33;
  }
  pthread_mutex_lock(&stru_65E42C);
  LOWORD(v29[1]) = 2048;
  v21 = 0;
  v29[0] = 67414613;
  if ( sub_76744(v5, v29, 6) != 6 )
  {
    snprintf(v30, 0x800u, "%s write iic err\n", "_bitmain_pic_erase_1704");
LABEL_40:
    nullsub_8();
    goto LABEL_14;
  }
  usleep(0x493E0u);
  if ( sub_766E8(v5, &v21, 2) != 2 )
  {
    snprintf(v30, 0x800u, "%s read iic err\n", "_bitmain_pic_erase_1704");
    goto LABEL_40;
  }
  usleep(0x493E0u);
  if ( (unsigned __int8)v21 != 4 || HIBYTE(v21) != 1 )
  {
    snprintf(
      v30,
      0x800u,
      "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
      "_bitmain_pic_erase_1704",
      (unsigned __int8)v21,
      HIBYTE(v21));
    nullsub_8();
  }
LABEL_14:
  pthread_mutex_unlock(&stru_65E42C);
  v10 = sub_72A6C(v5);
  if ( v10 )
  {
    snprintf(v30, 0x800u, "%s: set 1704 flash pointer err!\n\n", "_update_pic_app_program_1704");
    goto LABEL_33;
  }
  do
  {
    v11 = (int *)&s[16 * v10];
    v12 = *v11;
    v13 = v11[1];
    v14 = v11[2];
    v15 = v11[3];
    v25 = v12;
    v26 = v13;
    v27 = v14;
    v28 = v15;
    snprintf(v30, 0x800u, "send pic program time: %d", v10);
    nullsub_8();
    pthread_mutex_lock(&stru_65E42C);
    memset(v29, 0, sizeof(v29));
    v29[0] = 34908757;
    v16 = (char *)v29 + 3;
    v17 = &v24;
    v18 = 22;
    memset(&v29[1], 0, 16);
    v21 = 0;
    do
    {
      v19 = (unsigned __int8)*++v17;
      *++v16 = v19;
      v18 += v19;
    }
    while ( v17 != (char *)&v28 + 3 );
    LOBYTE(v29[5]) = HIBYTE(v18);
    BYTE1(v29[5]) = v18;
    if ( sub_76744(v5, v29, 22) == 22 )
    {
      usleep(0x493E0u);
      if ( sub_766E8(v5, &v21, 2) == 2 )
      {
        if ( (unsigned __int8)v21 == 2 && HIBYTE(v21) == 1 )
        {
          v29[0] = 84191829;
          LOWORD(v29[1]) = 2304;
          if ( sub_76744(v5, v29, 6) == 6 )
          {
            usleep(0x493E0u);
            if ( sub_766E8(v5, &v21, 2) == 2 )
            {
              if ( (unsigned __int8)v21 == 5 && HIBYTE(v21) == 1 )
              {
                snprintf(v30, 0x800u, "%s  success write to pic flash\n", "_bitmain_pic_write_1704");
                nullsub_8();
                goto LABEL_29;
              }
              snprintf(
                v30,
                0x800u,
                "%s failed 2! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
                "_bitmain_pic_write_1704",
                (unsigned __int8)v21,
                HIBYTE(v21));
            }
            else
            {
              snprintf(v30, 0x800u, "%s read iic 2 err\n", "_bitmain_pic_write_1704");
            }
          }
          else
          {
            snprintf(v30, 0x800u, "%s write iic 2 err\n", "_bitmain_pic_write_1704");
          }
        }
        else
        {
          snprintf(
            v30,
            0x800u,
            "%s failed 1! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
            "_bitmain_pic_write_1704",
            (unsigned __int8)v21,
            HIBYTE(v21));
        }
      }
      else
      {
        snprintf(v30, 0x800u, "%s read iic 1 err\n", "_bitmain_pic_write_1704");
      }
    }
    else
    {
      snprintf(v30, 0x800u, "%s write iic 1 err\n", "_bitmain_pic_write_1704");
    }
    nullsub_8();
LABEL_29:
    ++v10;
    pthread_mutex_unlock(&stru_65E42C);
  }
  while ( v10 != 304 );
  v10 = sub_72234(a1);
  if ( !v10 )
    return v10;
LABEL_34:
  snprintf(v30, 0x800u, "%s: reset pic error!\n\n", "_update_pic_app_program_1704");
LABEL_33:
  nullsub_8();
  return v10;
}
