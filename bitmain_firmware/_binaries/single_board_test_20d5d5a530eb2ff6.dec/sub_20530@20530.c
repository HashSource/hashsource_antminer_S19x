int __fastcall sub_20530(const char *a1)
{
  int v2; // r0
  int result; // r0
  _DWORD v4[4]; // [sp+0h] [bp-44h] BYREF
  char v5[52]; // [sp+10h] [bp-34h] BYREF

  memset(v4, 0, sizeof(v4));
  if ( !strcmp(a1, (const char *)&dword_18FCF0) || !strcmp(a1, (const char *)&dword_18FCF8) )
  {
    result = 1;
    byte_6003B0 = -104;
  }
  else if ( !strcmp(a1, "TMP411B") )
  {
    byte_6003B0 = -102;
    return 1;
  }
  else
  {
    v2 = strcmp(a1, "TMP411C");
    if ( v2 )
    {
      sub_6FBF4(v2);
      sub_1F650(0, (const char *)(dword_223680 + 32));
      sub_1F650(1, "Not support");
      sub_1F650(2, "asic sensor");
      strcpy((char *)v4, a1);
      sub_1F650(3, (const char *)v4);
      sub_1E938(v5, 0x30u);
      printf("%s ", v5);
      printf("%s : Not support the type asic sensor: %s\n", "check_asic_sensor_type", a1);
      snprintf(byte_6003B4, 0x100u, "Not support the type asic sensor: %s", a1);
      sub_3CC5C(byte_6003B4, v5);
      return 0;
    }
    else
    {
      byte_6003B0 = -100;
      return 1;
    }
  }
  return result;
}
