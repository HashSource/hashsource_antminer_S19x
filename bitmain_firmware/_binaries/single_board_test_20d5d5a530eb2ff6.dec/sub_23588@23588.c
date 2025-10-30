int sub_23588()
{
  _DWORD *v0; // r6
  int *v1; // r3
  int v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  _BYTE *v6; // r6
  int *v7; // r7
  _DWORD *v8; // r6
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  _DWORD *v13; // r7
  _DWORD *v14; // r6
  int v15; // r1
  int v16; // r2
  int v17; // r8
  int v19; // r0
  char v20[48]; // [sp+0h] [bp-30h] BYREF

  if ( sub_71FBC((unsigned __int8)dword_21B3A4) < 0 )
  {
    byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1039] = 0;
    sub_6FBF4(&loc_40A50);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "open pic");
    sub_1F650(2, "fail");
    sub_1E938(v20, 0x30u);
    printf("%s ", v20);
    printf("%s : open pic fail!!!\n", "init_pic");
    strcpy(byte_605EC4, "open pic fail!!!");
    sub_3CC5C(byte_605EC4, v20);
    return 0;
  }
  if ( sub_72234((unsigned __int8)dword_21B3A4) )
  {
    if ( sub_72234((unsigned __int8)dword_21B3A4) )
    {
      byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1039] = 0;
      sub_6FBF4(&loc_40A50);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "reset pic");
      sub_1F650(2, "fail");
      sub_1E938(v20, 0x30u);
      printf("%s ", v20);
      printf("%s : reset pic fail\n", "init_pic");
      strcpy(byte_605FC4, "reset pic fail");
      sub_3CC5C(byte_605FC4, v20);
      return 0;
    }
    sub_1E938(v20, 0x30u);
    printf("%s ", v20);
    v0 = &unk_6060C4;
    printf("%s : reset pic ok\n", "init_pic");
    LOWORD(v1) = 5116;
  }
  else
  {
    sub_1E938(v20, 0x30u);
    v0 = &unk_6061C4;
    printf("%s ", v20);
    printf("%s : reset pic ok\n", "init_pic");
    LOWORD(v1) = (unsigned __int16)"reset pic ok";
  }
  HIWORD(v1) = (unsigned int)"reset pic ok" >> 16;
  v2 = *v1;
  v3 = v1[1];
  v4 = v1[2];
  v5 = v1[3];
  *v0 = v2;
  v0[1] = v3;
  v0[2] = v4;
  v6 = v0 + 3;
  *v6 = v5;
  sub_3CC5C(v6 - 12, v20);
  if ( sub_72378((unsigned __int8)dword_21B3A4) )
  {
    if ( sub_72378((unsigned __int8)dword_21B3A4) )
    {
      byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 1039] = 0;
      sub_6FBF4(&loc_40A50);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "Pic jump to");
      sub_1F650(2, "App mode");
      sub_1F650(3, "fail");
      sub_1E938(v20, 0x30u);
      printf("%s ", v20);
      printf("%s : pic jump from loader to app fail\n", "init_pic");
      strcpy(byte_6062C4, "pic jump from loader to app fail");
      sub_3CC5C(byte_6062C4, v20);
      return 0;
    }
    sub_1E938(v20, 0x30u);
    LOWORD(v7) = (unsigned __int16)"jump from loader to app ok";
    printf("%s ", v20);
    v8 = &unk_6063C4;
    printf("%s : jump from loader to app ok\n", "init_pic");
  }
  else
  {
    sub_1E938(v20, 0x30u);
    v8 = &unk_6064C4;
    printf("%s ", v20);
    LOWORD(v7) = 5268;
    printf("%s : jump from loader to app ok\n", "init_pic");
  }
  HIWORD(v7) = (unsigned int)"jump from loader to app ok" >> 16;
  v9 = *v7;
  v10 = v7[1];
  v11 = v7[2];
  v12 = v7[3];
  v13 = v7 + 4;
  *v8 = v9;
  v8[1] = v10;
  v8[2] = v11;
  v8[3] = v12;
  v14 = v8 + 4;
  v15 = v13[1];
  v16 = v13[2];
  *v14 = *v13;
  v14[1] = v15;
  v14 += 2;
  *(_WORD *)v14 = v16;
  *((_BYTE *)v14 + 2) = BYTE2(v16);
  sub_3CC5C(v14 - 6, v20);
  usleep((__useconds_t)&loc_493E0);
  v17 = sub_720A8((unsigned __int8)dword_21B3A4);
  sub_1E938(v20, 0x30u);
  printf("%s ", v20);
  printf("%s : PIC version: 0x%02x\n", "init_pic", v17);
  snprintf(byte_6065C4, 0x100u, "PIC version: 0x%02x", v17);
  sub_3CC5C(byte_6065C4, v20);
  usleep(0x30D40u);
  byte_2334AC = 1;
  if ( pthread_create((pthread_t *)&dword_5FE76C, 0, (void *(*)(void *))sub_1E9A0, 0) )
  {
    byte_2334AC = 0;
    v19 = pthread_join(dword_5FE76C, 0);
    sub_6FBF4(v19);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "Pic heart beat");
    sub_1F650(2, "Creat  fail");
    sub_1F650(3, aStartAg);
    sub_1E938(v20, 0x30u);
    printf("%s ", v20);
    printf("%s : Pic heart beat thread creat fail\n", "init_pic");
    strcpy(byte_6066C4, "Pic heart beat thread creat fail");
    sub_3CC5C(byte_6066C4, v20);
    return 0;
  }
  else
  {
    sub_1E938(v20, 0x30u);
    printf("%s ", v20);
    printf("%s : Creat pic heart beat function ok\n", "init_pic");
    strcpy(byte_6067C4, "Creat pic heart beat function ok");
    sub_3CC5C(byte_6067C4, v20);
    usleep(0x7A120u);
    return 1;
  }
}
