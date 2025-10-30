int __fastcall sub_72F4C(unsigned int a1, __int16 a2, __int16 a3, unsigned __int8 *a4, int a5)
{
  int v6; // r8
  int v10; // r4
  __int16 v11; // r5
  _BYTE *v12; // r7
  unsigned int v13; // r3
  int v15; // r4
  int v16; // [sp+Ch] [bp-830h]
  __int16 v17; // [sp+14h] [bp-828h] BYREF
  _BYTE v18[32]; // [sp+18h] [bp-824h] BYREF
  char s[2052]; // [sp+38h] [bp-804h] BYREF

  v6 = a5;
  if ( a1 <= 0xF )
  {
    if ( !dword_71ED68[2 * a1 + 1] )
    {
      v15 = sub_71FBC(a1);
      if ( v15 < 0 )
      {
        snprintf(
          s,
          0x800u,
          "%s: auto exec open_pic, but chain %d open eeprom failed\n",
          "app_write_data_into_flash",
          a1);
        nullsub_8();
        return v15;
      }
    }
    v16 = dword_71ED68[2 * a1];
    pthread_mutex_lock(&stru_65E42C);
    memset(v18, 0, sizeof(v18));
    v18[2] = a5 + 6;
    if ( a5 >= 16 )
      v6 = 16;
    v10 = 0;
    v11 = (unsigned __int8)(a5 + 6) + a3 + 53 + a2;
    v18[4] = a2;
    v18[5] = a3;
    v18[0] = 85;
    v18[1] = -86;
    v18[3] = 53;
    v17 = 0;
    if ( v6 > 0 )
    {
      v12 = &v18[5];
      do
      {
        v13 = *a4;
        if ( (v10 & 1) == 0 && v13 > 0x3F )
        {
          snprintf(s, 0x800u, "%s: the data[%d] must less than 0x3f\n", "_app_write_data_into_flash_1704_v8", v10);
          nullsub_8();
          LOWORD(v13) = *a4;
        }
        ++v10;
        v11 += v13;
        *++v12 = v13;
        ++a4;
      }
      while ( v6 != v10 );
    }
    v18[(unsigned __int16)(v6 + 6)] = HIBYTE(v11);
    v18[(unsigned __int16)(v6 + 7)] = v11;
    if ( sub_76744(v16, v18, (unsigned __int16)(v6 + 8)) == (unsigned __int16)(v6 + 8) )
    {
      usleep(0x493E0u);
      if ( sub_766E8(v16, &v17, 2) == 2 )
      {
        if ( (unsigned __int8)v17 != 53 || HIBYTE(v17) != 1 )
        {
          v6 = 0;
          snprintf(
            s,
            0x800u,
            "%s failed 2! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
            "_app_write_data_into_flash_1704_v8",
            (unsigned __int8)v17,
            HIBYTE(v17));
          nullsub_8();
        }
        goto LABEL_14;
      }
      snprintf(s, 0x800u, "%s read iic 2 err\n", "_app_write_data_into_flash_1704_v8");
    }
    else
    {
      snprintf(s, 0x800u, "%s write iic 2 err\n", "_app_write_data_into_flash_1704_v8");
    }
    v6 = 0;
    nullsub_8();
LABEL_14:
    pthread_mutex_unlock(&stru_65E42C);
    return v6;
  }
  snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "app_write_data_into_flash", a1);
  nullsub_8();
  return -2147483135;
}
