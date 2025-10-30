int __fastcall sub_2064C(const char *a1)
{
  _DWORD v3[4]; // [sp+0h] [bp-40h] BYREF
  char v4[48]; // [sp+10h] [bp-30h] BYREF

  memset(v3, 0, sizeof(v3));
  if ( !strcmp(a1, "LM75A")
    || !strcmp(a1, "TMP75A")
    || !strcmp(a1, "DS75S")
    || !strcmp(a1, "DS75S+")
    || !strcmp(a1, "GM452")
    || !strcmp(a1, "CT75")
    || !strcmp(a1, "SD177")
    || !strcmp(a1, "GX21M")
    || !strcmp(a1, "NT175")
    || strcmp(a1, "TMP75") )
  {
    byte_6004B4 = 72;
    byte_2333A2 = 0;
    return 1;
  }
  else
  {
    sub_6FBF4(0);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "Not support");
    sub_1F650(2, "pic sensor");
    strcpy((char *)v3, a1);
    sub_1F650(3, (const char *)v3);
    sub_1E938(v4, 0x30u);
    printf("%s ", v4);
    printf("%s : Not support the type asic sensor: %s\n", "check_pic_sensor_type", a1);
    snprintf(byte_6004B8, 0x100u, "Not support the type asic sensor: %s", a1);
    sub_3CC5C(byte_6004B8, v4);
    return 0;
  }
}
