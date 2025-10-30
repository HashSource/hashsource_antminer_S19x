int __fastcall sub_73150(unsigned int a1, __int16 a2, __int16 a3, void *a4, int a5)
{
  int v9; // r10
  unsigned int v10; // r6
  int v11; // r9
  size_t v12; // r5
  unsigned __int8 *v13; // r7
  const char *v14; // r2
  int v16; // r5
  int v17; // r3
  int v18; // r4
  unsigned int v19; // r2
  int v20; // r3
  __int16 v21; // r2
  int v22; // [sp+14h] [bp-810h] BYREF
  int v23; // [sp+18h] [bp-80Ch]
  char v24; // [sp+1Ch] [bp-808h]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "app_read_data_from_flash", a1);
    nullsub_8();
    return -2147483135;
  }
  if ( !dword_71ED68[2 * a1 + 1] )
  {
    v16 = sub_71FBC(a1);
    if ( v16 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "app_read_data_from_flash", a1);
      nullsub_8();
      return v16;
    }
  }
  v9 = dword_71ED68[2 * a1];
  LOWORD(v10) = 0;
  v11 = a5 + 5;
  pthread_mutex_lock(&stru_65E42C);
  v12 = a5;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( a5 >= 16 )
    v12 = 16;
  LOBYTE(v23) = a2;
  v22 = 906472021;
  v13 = (unsigned __int8 *)malloc(a5 + 5);
  BYTE1(v23) = a3;
  BYTE2(v23) = v12;
  HIBYTE(v23) = (unsigned __int16)(a2 + v12 + 61 + a3) >> 8;
  v24 = a2 + v12 + 61 + a3;
  if ( sub_76744(v9, &v22, 9) == 9 )
  {
    usleep(0x493E0u);
    if ( v11 == sub_766E8(v9, v13, v11) )
    {
      v17 = v13[1];
      v18 = *v13;
      if ( v17 == 54 && v13[2] == 1 && v11 == v18 )
      {
        if ( a5 + 3 > 0 )
        {
          v20 = 0;
          do
          {
            v21 = v13[v20];
            v20 = (unsigned __int16)(v20 + 1);
            v10 = (unsigned __int16)(v10 + v21);
          }
          while ( v20 < a5 + 3 );
          v19 = v10 >> 8;
        }
        else
        {
          v19 = 0;
        }
        if ( v13[v11 - 2] == v19 && v13[v11 - 1] == (unsigned __int8)v10 )
        {
          memcpy(a4, v13 + 3, v12);
        }
        else
        {
          snprintf(s, 0x800u, "%s failed 2!\n", "_app_read_data_from_flash_1704_v8");
          v12 = 0;
          nullsub_8();
          sub_72B5C(v13, v11);
        }
      }
      else
      {
        v12 = 0;
        snprintf(
          s,
          0x800u,
          "%s failed !\n read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x\n",
          "_app_read_data_from_flash_1704_v8",
          v18,
          v17,
          v13[2]);
        nullsub_8();
        sub_72B5C(v13, v11);
      }
      goto LABEL_8;
    }
    v14 = "%s read iic 2 err\n";
  }
  else
  {
    v14 = "%s write iic 2 err\n";
  }
  v12 = 0;
  snprintf(s, 0x800u, v14, "_app_read_data_from_flash_1704_v8");
  nullsub_8();
LABEL_8:
  free(v13);
  pthread_mutex_unlock(&stru_65E42C);
  return v12;
}
