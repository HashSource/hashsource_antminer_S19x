int sub_632A0()
{
  int result; // r0
  int v1; // r0
  _DWORD *v2; // r5
  const char *v3; // r4
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int *v8; // r4
  _DWORD *v9; // r5
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r4
  int v15; // r0
  int v16; // r3
  int v17; // r0
  _DWORD *v18; // r5
  int *v19; // r4
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  _DWORD *v24; // r4
  _DWORD *v25; // r5
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r0
  int v30; // r10
  pthread_t *v31; // r3
  int v32; // r0
  int v33; // r0
  int v34; // r2
  int v35; // r6
  int v36; // [sp+Ch] [bp-48h]
  char s[4]; // [sp+10h] [bp-44h] BYREF
  int v38; // [sp+14h] [bp-40h]
  int v39; // [sp+18h] [bp-3Ch]
  int v40; // [sp+1Ch] [bp-38h]
  char v41[52]; // [sp+20h] [bp-34h] BYREF

  sub_6DDF4(2);
  sub_6E9D8(dword_21B3B0, *(_DWORD *)(dword_223680 + 632));
  sub_1E938(v41, 0x30u);
  printf("%s ", v41);
  printf("%s : Set fan speed as %d\n", "Single_Board_PT1_Plus_Software_Pattern_Test", *(_DWORD *)(dword_223680 + 632));
  snprintf(byte_651840, 0x100u, "Set fan speed as %d", *(_DWORD *)(dword_223680 + 632));
  sub_3CC5C((int)byte_651840, v41);
  sub_1F408();
  if ( !sub_20CBC() )
  {
    sub_6E9D8(dword_21B3B0, 0);
    return 12;
  }
  sub_1E938(v41, 0x30u);
  printf("%s ", v41);
  printf("%s : Set Chain %d baud: %d\n", "Single_Board_PT1_Plus_Software_Pattern_Test", dword_21B3A4, 26);
  snprintf(byte_651940, 0x100u, "Set Chain %d baud: %d", dword_21B3A4, 26);
  sub_3CC5C((int)byte_651940, v41);
  sub_71D60(dword_21B3A4, 26);
  sub_787F0((unsigned __int8)dword_21B3A4);
  byte_5FE775 = 1;
  if ( pthread_create((pthread_t *)&dword_5FE768, 0, (void *(*)(void *))sub_21CAC, 0) )
  {
    byte_5FE775 = 0;
    pthread_join(dword_5FE768, 0);
    v1 = sub_6E9D8(dword_21B3B0, 0);
    sub_6FBF4(v1);
    v2 = &unk_651A40;
    v3 = "Show thread creat fail, Start again";
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "Show thread");
    sub_1F650(2, "Creat  fail");
    sub_1F650(3, aStartAg);
    sub_1E938(v41, 0x30u);
    printf("%s ", v41);
    printf("%s : Show thread creat fail, Start again\n", "Single_Board_PT1_Plus_Software_Pattern_Test");
LABEL_6:
    v4 = *(_DWORD *)v3;
    v5 = *((_DWORD *)v3 + 1);
    v6 = *((_DWORD *)v3 + 2);
    v7 = *((_DWORD *)v3 + 3);
    v8 = (int *)(v3 + 16);
    *v2 = v4;
    v2[1] = v5;
    v2[2] = v6;
    v2[3] = v7;
    v9 = v2 + 4;
    v10 = *v8;
    v11 = v8[1];
    v12 = v8[2];
    v13 = v8[3];
    v14 = v8[4];
    *v9 = v10;
    v9[1] = v11;
    v9[2] = v12;
    v9[3] = v13;
    v9 += 4;
    *v9 = v14;
    sub_3CC5C((int)(v9 - 8), v41);
    return 12;
  }
  byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 2] = 1;
  sub_2146C("power on", 0, 0);
  sub_71AF4(dword_21B3A4);
  usleep(0x493E0u);
  if ( !sub_22D88(0x514u) )
    sub_2B420("power err");
  sub_71B24(dword_21B3A4);
  usleep(0x186A0u);
  sub_71AF4(dword_21B3A4);
  usleep(0x2710u);
  sub_71B24(dword_21B3A4);
  usleep(0x186A0u);
  sub_71AF4(dword_21B3A4);
  usleep(0x2710u);
  sub_71B24(dword_21B3A4);
  usleep(0x1388u);
  if ( !sub_231D4(1300, *(_DWORD *)&byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 32], 5) )
    sub_2B420("power err");
  usleep((__useconds_t)&loc_30D40);
  sub_2146C("find asics", 0, 0);
  sub_5F7C8();
  byte_5FE774 = 1;
  v36 = pthread_create((pthread_t *)&dword_5FE764, 0, (void *(*)(void *))sub_60228, 0);
  if ( v36 )
  {
    byte_5FE774 = 0;
    if ( *(_BYTE *)(dword_223680 + 89) )
      byte_5FE77A = 0;
    byte_2334AC = 0;
    sub_5C888(dword_21B3A4);
    v15 = sub_631A0();
    sub_6FBF4(v15);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "Receive thread");
    sub_1F650(2, "Creat  fail");
    sub_1F650(3, aStartAg);
    sub_1E938(v41, 0x30u);
    printf("%s ", v41);
    printf("%s :  Receive thread  creat fail, Start again\n", "Single_Board_PT1_Plus_Software_Pattern_Test");
    strcpy(byte_651B40, " Receive thread  creat fail, Start again");
    sub_3CC5C((int)byte_651B40, v41);
    return 12;
  }
  sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
  if ( *(_DWORD *)(dword_223680 + 64) != dword_5FE780 )
  {
    sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
    if ( *(_DWORD *)(dword_223680 + 64) != dword_5FE780 )
    {
      v16 = *(unsigned __int8 *)(dword_223680 + 89);
      byte_5FE774 = v36;
      if ( v16 )
        byte_5FE77A = v36;
      byte_2334AC = 0;
      sub_5C888(dword_21B3A4);
      v17 = sub_631A0();
      sub_6FBF4(v17);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      if ( *(_DWORD *)(dword_223680 + 64) < (unsigned int)dword_5FE780 )
      {
        v18 = &unk_651C40;
        sub_1F650(1, "get too much");
        LOWORD(v19) = (unsigned __int16)"get too much error asic address";
        sub_1F650(2, "error asic");
        sub_1F650(3, "address");
        sub_1E938(v41, 0x30u);
        printf("%s ", v41);
        printf("%s : get too much error asic address\n", "Single_Board_PT1_Plus_Software_Pattern_Test");
LABEL_21:
        HIWORD(v19) = (unsigned int)"get too much error asic address" >> 16;
        v20 = *v19;
        v21 = v19[1];
        v22 = v19[2];
        v23 = v19[3];
        v24 = v19 + 4;
        *v18 = v20;
        v18[1] = v21;
        v18[2] = v22;
        v18[3] = v23;
        v25 = v18 + 4;
        v26 = v24[1];
        v27 = v24[2];
        v28 = v24[3];
        *v25 = *v24;
        v25[1] = v26;
        v25[2] = v27;
        v25[3] = v28;
        sub_3CC5C((int)(v25 - 4), v41);
        goto LABEL_22;
      }
      *(_DWORD *)s = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      sprintf(s, "%2d", dword_5FE780);
      sub_1F650(1, "Only find");
      sub_1F650(2, s);
      sub_1F650(3, "ASIC");
      sub_1E938(v41, 0x30u);
      printf("%s ", v41);
      printf("%s : Only find %d ASIC\n", "Single_Board_PT1_Plus_Software_Pattern_Test", dword_5FE780);
      snprintf(byte_651D40, 0x100u, "Only find %d ASIC", dword_5FE780);
      sub_3CC5C((int)byte_651D40, v41);
      goto LABEL_22;
    }
  }
  sub_1E938(v41, 0x30u);
  printf("%s ", v41);
  printf("%s : First: find %d ASIC\n\n", "Single_Board_PT1_Plus_Software_Pattern_Test", dword_5FE780);
  snprintf(byte_651E40, 0x100u, "First: find %d ASIC\n", dword_5FE780);
  sub_3CC5C((int)byte_651E40, v41);
  sub_5F848();
  sub_5FAAC(0x32u, 0xC8u);
  sub_5FC1C();
  usleep(0xF4240u);
  sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
  if ( *(_DWORD *)(dword_223680 + 64) != dword_5FE780 )
  {
    sub_24C80(0, 0, 1, (const char *)(dword_223680 + 48));
    if ( *(_DWORD *)(dword_223680 + 64) != dword_5FE780 )
    {
      sub_1E938(v41, 0x30u);
      printf("%s ", v41);
      printf("%s : find %d ASIC\n", "Single_Board_PT1_Plus_Software_Pattern_Test", dword_5FE780);
      snprintf(byte_651F40, 0x100u, "find %d ASIC", dword_5FE780);
      sub_3CC5C((int)byte_651F40, v41);
      byte_5FE774 = 0;
      if ( *(_BYTE *)(dword_223680 + 89) )
        byte_5FE77A = 0;
      byte_2334AC = 0;
      sub_5C888(dword_21B3A4);
      v29 = sub_631A0();
      sub_6FBF4(v29);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      if ( *(_DWORD *)(dword_223680 + 64) < (unsigned int)dword_5FE780 )
      {
        LOWORD(v19) = 10024;
        sub_1F650(1, "get too much");
        v18 = &unk_652040;
        sub_1F650(2, "error asic");
        sub_1F650(3, "address");
        sub_1E938(v41, 0x30u);
        printf("%s ", v41);
        printf("%s : get too much error asic address\n", "Single_Board_PT1_Plus_Software_Pattern_Test");
        goto LABEL_21;
      }
      *(_DWORD *)s = 0;
      v38 = 0;
      v39 = 0;
      v40 = 0;
      sprintf(s, "%2d", dword_5FE780);
      sub_1F650(1, "Only find");
      sub_1F650(2, s);
      sub_1F650(3, "ASIC");
      sub_1E938(v41, 0x30u);
      printf("%s ", v41);
      printf("%s : Only find %d ASIC\n", "Single_Board_PT1_Plus_Software_Pattern_Test", dword_5FE780);
      snprintf(byte_652140, 0x100u, "Only find %d ASIC", dword_5FE780);
      sub_3CC5C((int)byte_652140, v41);
LABEL_22:
      result = 2;
      if ( dword_5FE780 )
        return (dword_5FE780 << 8) | 3;
      return result;
    }
  }
  sub_1E938(v41, 0x30u);
  printf("%s ", v41);
  printf("%s : Second: find %d ASIC\n\n", "Single_Board_PT1_Plus_Software_Pattern_Test", dword_5FE780);
  snprintf(byte_652240, 0x100u, "Second: find %d ASIC\n", dword_5FE780);
  sub_3CC5C((int)byte_652240, v41);
  sub_2146C("PT1+ test", 0, 0);
  if ( *(_DWORD *)(dword_223680 + 272) == 4 )
  {
    v30 = pthread_create((pthread_t *)&dword_5FE760, 0, (void *(*)(void *))sub_5BC70, 0);
  }
  else if ( *(_BYTE *)(dword_223680 + 276) )
  {
    v30 = pthread_create((pthread_t *)&dword_5FE760, 0, (void *(*)(void *))sub_67C08, 0);
  }
  else
  {
    v30 = pthread_create((pthread_t *)&dword_5FE760, 0, (void *(*)(void *))sub_5BFB8, 0);
  }
  LOWORD(v31) = (unsigned __int16)&dword_5FE760;
  if ( v30 )
  {
    HIWORD(v31) = (unsigned int)&dword_5FE760 >> 16;
    pthread_cancel(*v31);
    byte_5FE774 = 0;
    if ( *(_BYTE *)(dword_223680 + 89) )
      byte_5FE77A = 0;
    sub_5C888(dword_21B3A4);
    v32 = sub_631A0();
    sub_6FBF4(v32);
    v3 = (const char *)&unk_1A2848;
    v2 = &unk_652340;
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "Send  thread");
    sub_1F650(2, "Creat  fail");
    sub_1F650(3, aStartAg);
    sub_1E938(v41, 0x30u);
    printf("%s ", v41);
    printf("%s : Send thread creat fail, Start again\n", "Single_Board_PT1_Plus_Software_Pattern_Test");
    goto LABEL_6;
  }
  HIWORD(v31) = (unsigned int)&dword_5FE760 >> 16;
  pthread_join(*v31, 0);
  pthread_join(dword_5FE764, 0);
  byte_5FE775 = 0;
  byte_2334AC = 0;
  sub_631A0();
  v33 = 1;
  v34 = (unsigned __int8)byte_5FE78C;
  byte_2337B0[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 3] = 1;
  if ( !v34 )
    v33 = sub_26F24();
  v35 = sub_25E14(v33);
  sleep(*(_DWORD *)(dword_223680 + 668));
  sub_5C888(dword_21B3A4);
  sleep(*(_DWORD *)(dword_223680 + 624));
  puts("\n\n");
  return v35;
}
