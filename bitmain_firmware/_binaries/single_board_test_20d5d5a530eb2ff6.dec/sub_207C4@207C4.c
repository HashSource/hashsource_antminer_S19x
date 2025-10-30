int __fastcall sub_207C4(const char *a1)
{
  int v2; // r0
  _DWORD v4[4]; // [sp+0h] [bp-44h] BYREF
  char v5[52]; // [sp+10h] [bp-34h] BYREF

  memset(v4, 0, sizeof(v4));
  if ( !strcmp(a1, "LM75A")
    || !strcmp(a1, "TMP75A")
    || !strcmp(a1, "DS75S")
    || !strcmp(a1, "DS75S+")
    || !strcmp(a1, "GM452")
    || !strcmp(a1, "GX21M")
    || !strcmp(a1, "NT175")
    || (v2 = strcmp(a1, "CT75")) == 0 )
  {
    byte_6005B8 = 72;
    byte_2333A0 = 0;
    return 1;
  }
  else
  {
    sub_6FBF4(v2);
    sub_1F650(0, (const char *)(dword_223680 + 32));
    sub_1F650(1, "Not support");
    sub_1F650(2, "CtrlBoard sensor");
    strcpy((char *)v4, a1);
    sub_1F650(3, (const char *)v4);
    sub_1E938(v5, 0x30u);
    printf("%s ", v5);
    printf("%s : Not support the type asic sensor: %s\n", "check_ctrlboard_sensor_type", a1);
    snprintf(byte_6005BC, 0x100u, "Not support the type asic sensor: %s", a1);
    sub_3CC5C(byte_6005BC, v5);
    return 0;
  }
}
