int __fastcall sub_72C54(unsigned int a1, int *a2, int a3)
{
  int v6; // r6
  const char *v7; // r2
  __int16 v8; // r2
  int v9; // r4
  int v11; // r9
  int v12; // r6
  __int16 v13; // r1
  unsigned int v14; // r3
  _DWORD *i; // r2
  __int16 v16; // t1
  int v17; // r0
  int v18; // r3
  int v19; // r2
  const char *v20; // r3
  char v21; // [sp+14h] [bp-818h] BYREF
  char v22; // [sp+15h] [bp-817h]
  char v23; // [sp+16h] [bp-816h]
  char v24; // [sp+17h] [bp-815h]
  __int16 v25; // [sp+18h] [bp-814h]
  _DWORD v26[3]; // [sp+1Ch] [bp-810h] BYREF
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "pic_get_voltage", a1);
    goto LABEL_38;
  }
  if ( !dword_71ED68[2 * a1 + 1] )
  {
    v11 = sub_71FBC(a1);
    if ( v11 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "pic_get_voltage", a1);
      nullsub_8();
      return v11;
    }
  }
  if ( a3 == 3 )
  {
    pthread_mutex_lock(&stru_65E42C);
    v12 = dword_71ED68[2 * a1];
    v21 = 85;
    v22 = -86;
    v23 = 4;
    v24 = 55;
    v25 = 15104;
    memset(v26, 0, 11);
    if ( sub_76744(v12, &v21, 6) == 6 )
    {
      usleep(0x2710u);
      if ( sub_766E8(v12, v26, 11) == 11 )
      {
        v13 = LOBYTE(v26[0]);
        if ( LOBYTE(v26[0]) != 11 || BYTE1(v26[0]) != 55 )
        {
          snprintf(
            s,
            0x800u,
            "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
            "_read_an_voltage",
            LOBYTE(v26[0]),
            BYTE1(v26[0]));
          nullsub_8();
          goto LABEL_21;
        }
        LOWORD(v14) = 0;
        for ( i = v26; ; i = (_DWORD *)((char *)i + 1) )
        {
          v14 = (unsigned __int16)(v14 + v13);
          if ( &v26[2] == i )
            break;
          v16 = *((unsigned __int8 *)i + 1);
          v13 = v16;
        }
        if ( BYTE1(v26[2]) == v14 >> 8 && BYTE2(v26[2]) == (unsigned __int8)v14 )
        {
          v9 = 11;
          v17 = HIBYTE(v26[1]);
          v18 = LOBYTE(v26[2]);
          v19 = BYTE2(v26[1]) | (BYTE1(v26[1]) << 8);
          *a2 = LOBYTE(v26[1]) | (HIBYTE(v26[0]) << 8);
          a2[1] = v19;
          a2[2] = v18 | (v17 << 8);
          goto LABEL_15;
        }
        snprintf(s, 0x800u, "%s failed 2!\n", "_read_an_voltage");
        goto LABEL_20;
      }
      v7 = "%s read iic err\n";
    }
    else
    {
      v7 = "%s write iic err\n";
    }
    v20 = "_read_an_voltage";
    goto LABEL_36;
  }
  if ( a3 != 1 )
  {
    snprintf(s, 0x800u, "%s failed: parameters error!\n", "pic_get_voltage");
LABEL_38:
    nullsub_8();
    return -2147483135;
  }
  pthread_mutex_lock(&stru_65E42C);
  v6 = dword_71ED68[2 * a1];
  v21 = 85;
  v22 = -86;
  v23 = 4;
  v24 = 58;
  v25 = 15872;
  v26[0] = 0;
  *(_DWORD *)((char *)v26 + 3) = 0;
  if ( sub_76744(v6, &v21, 6) != 6 )
  {
    v7 = "%s write iic err\n";
LABEL_35:
    v20 = "_read_an6_voltage";
LABEL_36:
    snprintf(s, 0x800u, v7, v20);
    nullsub_8();
    goto LABEL_21;
  }
  usleep(0x2710u);
  if ( sub_766E8(v6, v26, 7) != 7 )
  {
    v7 = "%s read iic err\n";
    goto LABEL_35;
  }
  if ( LOBYTE(v26[0]) != 7 || BYTE1(v26[0]) != 58 || BYTE2(v26[0]) != 1 )
  {
    snprintf(
      s,
      0x800u,
      "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x\n\n",
      "_read_an6_voltage",
      LOBYTE(v26[0]),
      BYTE1(v26[0]),
      BYTE2(v26[0]));
    nullsub_8();
    goto LABEL_21;
  }
  v8 = HIBYTE(v26[0]) + LOBYTE(v26[1]) + 66;
  if ( HIBYTE(v8) != BYTE1(v26[1]) || BYTE2(v26[1]) != (unsigned __int8)v8 )
  {
    snprintf(s, 0x800u, "%s failed 2!\n", "_read_an6_voltage");
LABEL_20:
    nullsub_8();
LABEL_21:
    v9 = -1;
    goto LABEL_15;
  }
  v9 = LOBYTE(v26[0]);
  *a2 = LOBYTE(v26[1]) | (HIBYTE(v26[0]) << 8);
LABEL_15:
  pthread_mutex_unlock(&stru_65E42C);
  return v9;
}
