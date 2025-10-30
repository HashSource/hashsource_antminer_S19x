int sub_22B14()
{
  unsigned int v0; // r2
  unsigned int v1; // r3
  char v2; // r6
  char v3; // r1
  char *v4; // r0
  int v5; // r6
  int v6; // r4
  char *v7; // r7
  int v8; // r1
  int v9; // r5
  bool v10; // zf
  __int16 v12; // [sp+10h] [bp-3Ch] BYREF
  _WORD v13[2]; // [sp+14h] [bp-38h] BYREF
  char v14[52]; // [sp+18h] [bp-34h] BYREF

  v12 = 0;
  v13[0] = 0;
  sub_1E938(v14, 0x30u);
  printf("%s ", v14);
  printf("%s : Start %s\n", "temp_sensor_check", "temp_sensor_check");
  snprintf(byte_6048C4, 0x100u, "Start %s", "temp_sensor_check");
  sub_3CC5C(byte_6048C4, v14);
  v0 = dword_227094;
  if ( dword_227094 )
  {
    v1 = 0;
    v2 = byte_6005B8;
    do
    {
      v3 = *((_BYTE *)&word_227298 + v1);
      v4 = &v14[v1 + 48];
      v1 = (unsigned __int8)(v1 + 1);
      *(v4 - 52) = v3 + v2;
    }
    while ( v1 < v0 );
  }
  if ( sub_7619C(dword_21B3A4, v13) < 0 )
  {
    sub_1E938(v14, 0x30u);
    printf("%s ", v14);
    printf("%s : %s: chain %d tsensor_open failed\n\n", "temp_sensor_check", "temp_sensor_check", dword_21B3A4);
    snprintf(byte_6049C4, 0x100u, "%s: chain %d tsensor_open failed\n", "temp_sensor_check", dword_21B3A4);
    sub_3CC5C(byte_6049C4, v14);
    return 0;
  }
  else
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = 0;
      if ( dword_227094 )
        break;
LABEL_16:
      v5 = (unsigned __int8)(v5 + 1);
      if ( v5 == 100 )
        return 1;
    }
    while ( 1 )
    {
      v7 = &v14[v6 + 48];
      v8 = *((unsigned __int8 *)v13 + v6);
      v12 = 0;
      if ( sub_76468(dword_21B3A4, v8, (unsigned __int8)byte_2333A2, &v12, 2) != 2 )
      {
        sub_1E938(v14, 0x30u);
        printf("%s ", v14);
        printf("%s : Read CtrlBoard sensor fail,addr: %d\n", "temp_sensor_check", (unsigned __int8)*(v7 - 52));
        snprintf(byte_604AC4, 0x100u, "Read CtrlBoard sensor fail,addr: %d", (unsigned __int8)*(v7 - 52));
        sub_3CC5C(byte_604AC4, v14);
        return 0;
      }
      v9 = (unsigned __int8)v12;
      if ( !(_BYTE)v12 )
        break;
      v10 = v5 == 0;
      if ( v5 )
        v10 = v5 == 99;
      if ( v10 )
      {
        sub_1E938(v14, 0x30u);
        printf("%s ", v14);
        printf("%s : sensor[%d],temp:[%d]\n", "temp_sensor_check", v6, (unsigned __int8)v12);
        snprintf(byte_604CC4, 0x100u, "sensor[%d],temp:[%d]", v6, (unsigned __int8)v12);
        sub_3CC5C(byte_604CC4, v14);
      }
      usleep(0x1388u);
      v6 = (unsigned __int8)(v6 + 1);
      if ( (unsigned __int8)v6 >= (unsigned int)dword_227094 )
        goto LABEL_16;
    }
    sub_1E938(v14, 0x30u);
    printf("%s ", v14);
    printf("%s : Read CtrlBoard sensor fail,temp is 0,pls makesure env temp.\n", "temp_sensor_check");
    strcpy(byte_604BC4, "Read CtrlBoard sensor fail,temp is 0,pls makesure env temp.");
    sub_3CC5C(byte_604BC4, v14);
    return v9;
  }
}
