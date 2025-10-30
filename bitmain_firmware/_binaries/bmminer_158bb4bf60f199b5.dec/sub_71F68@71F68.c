int __fastcall sub_71F68(unsigned int a1, _DWORD *a2, int a3)
{
  int v6; // r8
  int v8; // r5
  __int16 v9; // r1
  _DWORD *v10; // r3
  unsigned int v11; // r2
  __int16 v12; // t1
  int v13; // r8
  unsigned __int16 v14; // r2
  unsigned __int16 v15; // r3
  int v16; // r0
  int v17; // [sp+Ch] [bp-818h] BYREF
  char v18; // [sp+10h] [bp-814h]
  char v19; // [sp+11h] [bp-813h]
  _DWORD v20[3]; // [sp+14h] [bp-810h] BYREF
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "pic_get_voltage", a1);
    v6 = -2147483135;
    sub_47AB4(0, s, 0);
    return v6;
  }
  if ( dword_246410[2 * a1 + 1] )
  {
    v6 = 0;
  }
  else
  {
    v16 = sub_7104C(a1);
    v6 = v16;
    if ( v16 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "pic_get_voltage", a1);
      sub_47AB4(0, s, 0);
      return v6;
    }
  }
  if ( a3 != 3 )
  {
    snprintf(s, 0x800u, "%s failed: parameters error!\n", "pic_get_voltage");
    sub_47AB4(0, s, 0);
    return v6;
  }
  pthread_mutex_lock(&stru_1B147C);
  v8 = dword_246410[2 * a1];
  v18 = 0;
  v17 = 923052629;
  memset(v20, 0, 11);
  v19 = 59;
  if ( sub_738FC(v8, &v17, 6) != 6 )
  {
    snprintf(s, 0x800u, "%s write iic err\n", "_read_an_voltage");
LABEL_24:
    v13 = -1;
    sub_47AB4(0, s, 0);
    goto LABEL_20;
  }
  usleep(0x30D40u);
  if ( sub_73874(v8, v20, 11) != 11 )
  {
    snprintf(s, 0x800u, "%s read iic err\n", "_read_an_voltage");
    goto LABEL_24;
  }
  v9 = LOBYTE(v20[0]);
  if ( LOBYTE(v20[0]) != 11 || BYTE1(v20[0]) != 55 )
  {
    snprintf(
      s,
      0x800u,
      "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
      "_read_an_voltage",
      LOBYTE(v20[0]),
      BYTE1(v20[0]));
    v13 = -1;
    sub_47AB4(0, s, 0);
    goto LABEL_20;
  }
  v10 = v20;
  LOWORD(v11) = 0;
  while ( 1 )
  {
    v11 = (unsigned __int16)(v11 + v9);
    if ( v10 == &v20[2] )
      break;
    v12 = *((unsigned __int8 *)v10 + 1);
    v10 = (_DWORD *)((char *)v10 + 1);
    v9 = v12;
  }
  if ( BYTE1(v20[2]) != v11 >> 8 || BYTE2(v20[2]) != (unsigned __int8)v11 )
  {
    snprintf(s, 0x800u, "%s failed 2!\n", "_read_an_voltage");
    goto LABEL_24;
  }
  v13 = 0;
  v14 = __rev16(*(unsigned __int16 *)((char *)&v20[1] + 1));
  v15 = __rev16(*(unsigned __int16 *)((char *)&v20[1] + 3));
  *a2 = (unsigned __int16)__rev16(*(unsigned __int16 *)((char *)v20 + 3));
  a2[1] = v14;
  a2[2] = v15;
LABEL_20:
  pthread_mutex_unlock(&stru_1B147C);
  return v13;
}
