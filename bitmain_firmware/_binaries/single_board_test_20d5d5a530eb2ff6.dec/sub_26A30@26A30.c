int __fastcall sub_26A30(int a1)
{
  const char *v1; // r4
  char v3[52]; // [sp+0h] [bp-34h] BYREF

  v1 = (const char *)(a1 + 104);
  if ( !strcmp((const char *)(a1 + 104), (const char *)&dword_18FCF0) )
  {
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : sensor type is TMP451\n", "get_sensor_type");
    strcpy(byte_60A2D0, "sensor type is TMP451");
    sub_3CC5C(byte_60A2D0, v3);
    return 1;
  }
  else if ( !strcmp(v1, (const char *)&dword_18FCF8) )
  {
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : sensor type is NCT218\n", "get_sensor_type");
    strcpy(byte_60A3D0, "sensor type is NCT218");
    sub_3CC5C(byte_60A3D0, v3);
    return 5;
  }
  else if ( !strcmp(v1, "LM75A") )
  {
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : sensor type is LM75A\n", "get_sensor_type");
    strcpy(byte_60A4D0, "sensor type is LM75A");
    sub_3CC5C(byte_60A4D0, v3);
    return 10;
  }
  else if ( !strcmp(v1, "TMP75A") )
  {
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : sensor type is TMP75A\n", "get_sensor_type");
    strcpy(byte_60A5D0, "sensor type is TMP75A");
    sub_3CC5C(byte_60A5D0, v3);
    return 11;
  }
  else if ( !strcmp(v1, "DS75S") )
  {
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : sensor type is DS75S\n", "get_sensor_type");
    strcpy(byte_60A6D0, "sensor type is DS75S");
    sub_3CC5C(byte_60A6D0, v3);
    return 12;
  }
  else if ( !strcmp(v1, "DS75S+") )
  {
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : sensor type is DS75S+\n", "get_sensor_type");
    strcpy(byte_60A7D0, "sensor type is DS75S+");
    sub_3CC5C(byte_60A7D0, v3);
    return 15;
  }
  else if ( !strcmp(v1, "GM452") )
  {
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : sensor type is GM452\n", "get_sensor_type");
    strcpy(byte_60A8D0, "sensor type is GM452");
    sub_3CC5C(byte_60A8D0, v3);
    return 13;
  }
  else if ( !strcmp(v1, "CT75") )
  {
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : sensor type is CT75\n", "get_sensor_type");
    strcpy(byte_60A9D0, "sensor type is CT75");
    sub_3CC5C(byte_60A9D0, v3);
    return 14;
  }
  else if ( !strcmp(v1, "TMP75") )
  {
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : sensor type is TMP75\n", "get_sensor_type");
    strcpy(byte_60AAD0, "sensor type is TMP75");
    sub_3CC5C(byte_60AAD0, v3);
    return 16;
  }
  else if ( !strcmp(v1, "SD177") )
  {
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : sensor type is SD177\n", "get_sensor_type");
    strcpy(byte_60ABD0, "sensor type is SD177");
    sub_3CC5C(byte_60ABD0, v3);
    return 17;
  }
  else if ( !strcmp(v1, "GX21M") )
  {
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : sensor type is GX21M\n", "get_sensor_type");
    strcpy(byte_60ACD0, "sensor type is GX21M");
    sub_3CC5C(byte_60ACD0, v3);
    return 18;
  }
  else if ( !strcmp(v1, "NT175") )
  {
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : sensor type is NST175\n", "get_sensor_type");
    strcpy(byte_60ADD0, "sensor type is NST175");
    sub_3CC5C(byte_60ADD0, v3);
    return 19;
  }
  else
  {
    sub_1E938(v3, 0x30u);
    printf("%s ", v3);
    printf("%s : Can't get sensor type. temp_sensor_type: %s\n", "get_sensor_type", v1);
    snprintf(byte_60AED0, 0x100u, "Can't get sensor type. temp_sensor_type: %s", v1);
    sub_3CC5C(byte_60AED0, v3);
    return 0;
  }
}
