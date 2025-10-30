_BYTE *__fastcall sub_5FF4C(_BYTE *result)
{
  _BYTE *v1; // r4
  _BYTE *v2; // r3
  _BYTE *v3; // r2
  int v4; // r6
  int v5; // r4
  int v6; // r11
  int v7; // r0
  int v8; // r11
  int v9; // r0
  int v10; // r11
  int *v11; // r2
  int v12; // r0
  _DWORD *v13; // r3
  _DWORD *v14; // r3
  unsigned int v15; // r1
  int v16; // [sp+4h] [bp-40h]
  char v17[52]; // [sp+10h] [bp-34h] BYREF

  if ( *(_DWORD *)(dword_5FE790 + 8) > 0x1FEu )
  {
    if ( !byte_5FE78C )
    {
      sub_1E938(v17, 0x30u);
      printf("%s ", v17);
      printf("%s : %s: reg_value_buf buffer is full!\n", "BTC_check_register", "BTC_check_register");
      snprintf(byte_64D53C, 0x100u, "%s: reg_value_buf buffer is full!", "BTC_check_register");
      sub_3CC5C((int)byte_64D53C, v17);
      byte_5FE78C = 1;
      sub_1E938(v17, 0x30u);
      printf("%s ", v17);
      printf("%s : Find dummy data\n", "BTC_check_register");
      strcpy(byte_64D63C, "Find dummy data");
      sub_3CC5C((int)byte_64D63C, v17);
      v2 = &byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264495];
      v3 = &byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264751];
      do
        *++v2 = 1;
      while ( v2 != v3 );
      v4 = 500;
      do
      {
        sub_1E938(v17, 0x30u);
        v5 = 5 * v4++;
        printf("%s ", v17);
        v5 *= 4;
        v6 = dword_5FE790 + v5;
        v7 = sub_189090(*(_DWORD *)(dword_5FE790 + v5 + 20), dword_6084C8);
        printf(
          "%s : reg_value = 0x%08x, which_asic = %d, reg_address = 0x%08x\n",
          "BTC_check_register",
          *(_DWORD *)(v6 + 16),
          v7,
          *(_DWORD *)(v6 + 24));
        v8 = *(_DWORD *)(dword_5FE790 + v5 + 16);
        v16 = *(_DWORD *)(dword_5FE790 + v5 + 24);
        v9 = sub_189090(*(_DWORD *)(dword_5FE790 + v5 + 20), dword_6084C8);
        snprintf(byte_64D73C, 0x100u, "reg_value = 0x%08x, which_asic = %d, reg_address = 0x%08x", v8, v9, v16);
        sub_3CC5C((int)byte_64D73C, v17);
        v10 = (unsigned __int8)byte_5FE894;
        result = &byte_2337B0[(_DWORD)&loc_40A50 * v10 + sub_189090(*(_DWORD *)(v5 + dword_5FE790 + 20), dword_6084C8)];
        result[264496] = 0;
      }
      while ( v4 != 510 );
    }
  }
  else
  {
    v1 = result;
    if ( (result[3] & 0x60) != 0 )
    {
      ++dword_6144F0;
      sub_1E938(v17, 0x30u);
      printf("%s ", v17);
      printf("%s : gHashboard_received_crc_error_work = %d\n", "BTC_check_register", dword_6144F0);
      snprintf(byte_64D33C, 0x100u, "gHashboard_received_crc_error_work = %d", dword_6144F0);
      return (_BYTE *)sub_3CC5C((int)byte_64D33C, v17);
    }
    else if ( (*result & 0xF) == dword_21B3A4 )
    {
      pthread_mutex_lock(&stru_5FE898);
      v11 = (int *)dword_5FE790;
      v12 = *(_DWORD *)dword_5FE790 + 1;
      v13 = (_DWORD *)(dword_5FE790 + 20 * *(_DWORD *)dword_5FE790);
      v13[4] = *((_DWORD *)v1 + 1);
      v13[5] = (unsigned __int8)v1[2];
      v13[6] = (unsigned __int8)v1[1];
      *v11 = v12;
      v14 = (_DWORD *)dword_5FE790;
      v15 = *(_DWORD *)dword_5FE790;
      ++*(_DWORD *)(dword_5FE790 + 8);
      if ( v15 > 0x1FE )
        *v14 = 0;
      return (_BYTE *)pthread_mutex_unlock(&stru_5FE898);
    }
    else
    {
      sub_1E938(v17, 0x30u);
      printf("%s ", v17);
      printf(
        "%s : receive register value from chain: %d, but not gChain: %d\n",
        "BTC_check_register",
        *v1 & 0xF,
        dword_21B3A4);
      snprintf(
        byte_64D43C,
        0x100u,
        "receive register value from chain: %d, but not gChain: %d",
        *v1 & 0xF,
        dword_21B3A4);
      return (_BYTE *)sub_3CC5C((int)byte_64D43C, v17);
    }
  }
  return result;
}
