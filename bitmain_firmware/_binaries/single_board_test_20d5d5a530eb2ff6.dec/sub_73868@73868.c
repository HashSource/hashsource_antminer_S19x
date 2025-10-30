int __fastcall sub_73868(unsigned int a1, int a2, int a3, void *a4, int a5)
{
  signed int v9; // r4
  int v10; // r5
  size_t v11; // r5
  int v12; // r6
  const char *v13; // r2
  __int16 v15; // r1
  signed int v16; // r3
  unsigned int v17; // r2
  _BYTE v18[8]; // [sp+10h] [bp-820h] BYREF
  _DWORD src[5]; // [sp+18h] [bp-818h] BYREF
  __int16 v20; // [sp+2Ch] [bp-804h]
  char s[2048]; // [sp+30h] [bp-800h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "pic_read_iic", a1);
    nullsub_8();
    return -2147483135;
  }
  if ( !dword_71ED68[2 * a1 + 1] )
  {
    v10 = sub_71FBC(a1);
    if ( v10 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "pic_read_iic", a1);
LABEL_19:
      nullsub_8();
      return v10;
    }
  }
  v9 = 0;
  v10 = sub_72900(dword_71ED68[2 * a1], a2, a3, 0, 0);
  if ( v10 < 0 )
  {
    snprintf(s, 0x800u, "%s: select slave: 0x%02x, reg/command: 0x%02x is failed", "pic_read_iic", a2, a3);
    goto LABEL_19;
  }
  v11 = a5;
  if ( a5 >= 16 )
    v11 = 16;
  usleep(0x2710u);
  v12 = dword_71ED68[2 * a1];
  pthread_mutex_lock(&stru_65E42C);
  v18[0] = 85;
  v18[1] = -86;
  v18[7] = v11 + 66 + a2;
  v18[2] = 6;
  v18[6] = (unsigned __int16)(v11 + 66 + a2) >> 8;
  v18[4] = a2;
  v18[5] = v11;
  v18[3] = 60;
  memset(src, 0, sizeof(src));
  v20 = 0;
  if ( sub_76744(v12, v18, 8) == 8 )
  {
    usleep(0x2710u);
    if ( v11 + 5 == sub_766E8(v12, src, v11 + 5) )
    {
      v15 = LOBYTE(src[0]);
      if ( v11 + 5 == LOBYTE(src[0]) && BYTE1(src[0]) == 60 && BYTE2(src[0]) == 1 )
      {
        v16 = v11 + 3;
        LOWORD(v17) = 0;
        if ( (int)(v11 + 3) > 0 )
        {
          while ( 1 )
          {
            v9 = (unsigned __int16)(v9 + 1);
            v17 = (unsigned __int16)(v17 + v15);
            if ( v9 >= v16 )
              break;
            v15 = *((unsigned __int8 *)src + v9);
          }
          v9 = v17 >> 8;
        }
        if ( *((unsigned __int8 *)src + v16) == v9 && *((unsigned __int8 *)&src[1] + v11) == (unsigned __int8)v17 )
        {
          memcpy(a4, (char *)src + 3, v11);
        }
        else
        {
          snprintf(s, 0x800u, "%s failed 2!\n", "_pic_read_iic");
          v11 = 0;
          nullsub_8();
        }
      }
      else
      {
        v11 = 0;
        snprintf(
          s,
          0x800u,
          "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x\n\n",
          "_pic_read_iic",
          LOBYTE(src[0]),
          BYTE1(src[0]),
          BYTE2(src[0]));
        nullsub_8();
      }
      goto LABEL_9;
    }
    v13 = "%s read iic err\n";
  }
  else
  {
    v13 = "%s write iic err\n";
  }
  v11 = 0;
  snprintf(s, 0x800u, v13, "_pic_read_iic");
  nullsub_8();
LABEL_9:
  pthread_mutex_unlock(&stru_65E42C);
  return v11;
}
