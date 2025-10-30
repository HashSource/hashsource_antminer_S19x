int __fastcall sub_721F8(unsigned int a1, __int16 a2, __int16 a3, int a4, int a5)
{
  int v9; // r10
  int v10; // r4
  int v11; // r7
  __int16 v12; // r5
  unsigned __int8 *v13; // r6
  char *v14; // r2
  unsigned int v15; // r3
  unsigned int v16; // t1
  __int16 v18; // [sp+Ch] [bp-828h] BYREF
  __int16 v19; // [sp+10h] [bp-824h] BYREF
  char v20; // [sp+12h] [bp-822h]
  char v21; // [sp+13h] [bp-821h]
  char v22; // [sp+14h] [bp-820h]
  char v23; // [sp+15h] [bp-81Fh]
  int v24; // [sp+16h] [bp-81Eh]
  int v25; // [sp+1Ah] [bp-81Ah]
  int v26; // [sp+1Eh] [bp-816h]
  int v27; // [sp+22h] [bp-812h]
  int v28; // [sp+26h] [bp-80Eh]
  int v29; // [sp+2Ah] [bp-80Ah]
  __int16 v30; // [sp+2Eh] [bp-806h]
  char s[2048]; // [sp+30h] [bp-804h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "app_write_data_into_flash", a1);
    v11 = -2147483135;
    sub_47AB4(0, s, 0);
    return v11;
  }
  if ( !dword_246410[2 * a1 + 1] )
  {
    v11 = sub_7104C(a1);
    if ( v11 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "app_write_data_into_flash", a1);
      sub_47AB4(0, s, 0);
      return v11;
    }
  }
  v9 = dword_246410[2 * a1];
  v10 = 0;
  pthread_mutex_lock(&stru_1B147C);
  if ( a5 >= 16 )
    v11 = 16;
  else
    v11 = a5;
  v23 = a3;
  v20 = a5 + 6;
  v22 = a2;
  v12 = (unsigned __int8)(a5 + 6) + a3 + 53 + a2;
  v19 = -21931;
  v18 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v21 = 53;
  if ( a5 > 0 )
  {
    v13 = (unsigned __int8 *)(a4 - 1);
    do
    {
      v16 = *++v13;
      v15 = v16;
      if ( (v10 & 1) == 0 && v15 > 0x3F )
      {
        snprintf(s, 0x800u, "%s: the data[%d] must less than 0x3f\n", "_app_write_data_into_flash_1704_v8", v10);
        sub_47AB4(v10 & 1, s, v10 & 1);
        LOWORD(v15) = *v13;
      }
      v14 = (char *)&v19 + v10++;
      v14[6] = v15;
      v12 += v15;
    }
    while ( v11 > v10 );
  }
  *((_BYTE *)&v19 + (unsigned __int16)(v11 + 6)) = HIBYTE(v12);
  *((_BYTE *)&v19 + (unsigned __int16)(v11 + 7)) = v12;
  if ( sub_738FC(v9, &v19, (unsigned __int16)(v11 + 8)) == (unsigned __int16)(v11 + 8) )
  {
    usleep(0x30D40u);
    if ( sub_73874(v9, &v18, 2) == 2 )
    {
      if ( (unsigned __int8)v18 != 53 || HIBYTE(v18) != 1 )
      {
        v11 = 0;
        snprintf(
          s,
          0x800u,
          "%s failed 2! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
          "_app_write_data_into_flash_1704_v8",
          (unsigned __int8)v18,
          HIBYTE(v18));
        sub_47AB4(0, s, 0);
      }
      goto LABEL_15;
    }
    snprintf(s, 0x800u, "%s read iic 2 err\n", "_app_write_data_into_flash_1704_v8");
  }
  else
  {
    snprintf(s, 0x800u, "%s write iic 2 err\n", "_app_write_data_into_flash_1704_v8");
  }
  v11 = 0;
  sub_47AB4(0, s, 0);
LABEL_15:
  pthread_mutex_unlock(&stru_1B147C);
  return v11;
}
