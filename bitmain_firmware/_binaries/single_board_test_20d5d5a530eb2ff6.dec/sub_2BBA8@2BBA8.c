int sub_2BBA8()
{
  int v0; // r0
  const char *v1; // r4
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  unsigned __int8 v7; // [sp+7h] [bp-31h] BYREF
  char v8[48]; // [sp+8h] [bp-30h] BYREF

  v7 = 0;
  v0 = sub_75690();
  if ( v0 )
  {
    v1 = (const char *)v0;
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf("%s : power sn:%s\n", "enable_power_calibration", v1);
    snprintf(byte_6127D8, 0x100u, "power sn:%s", v1);
    sub_3CC5C(byte_6127D8, v8);
  }
  else
  {
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf("%s : can not get power sn:\n", "enable_power_calibration");
    strcpy(byte_6128D8, "can not get power sn:");
    sub_3CC5C(byte_6128D8, v8);
  }
  if ( !sub_75638(&v7) && v7 )
  {
    sub_7610C(1);
    sub_1E938(v8, 0x30u);
    v3 = printf("%s ", v8);
    v4 = sub_756CC(v3);
    v5 = printf("%s : enable_power_calibration,calibration date:%d.\n", "enable_power_calibration", v4);
    v6 = sub_756CC(v5);
    snprintf(byte_6129D8, 0x100u, "enable_power_calibration,calibration date:%d.", v6);
    sub_3CC5C(byte_6129D8, v8);
    return v7;
  }
  else
  {
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf("%s : warning:power is not calibration.\n", "enable_power_calibration");
    strcpy(byte_612AD8, "warning:power is not calibration.");
    sub_3CC5C(byte_612AD8, v8);
    return v7;
  }
}
