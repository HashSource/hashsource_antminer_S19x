int sub_24160()
{
  unsigned int v0; // r4
  int v1; // r3
  unsigned __int8 v2; // r1
  char v3; // r2
  char *v4; // r3
  int v5; // r4
  int v6; // r3
  char *v7; // lr
  unsigned int v8; // r4
  bool v9; // cf
  int v11; // [sp+14h] [bp-40h]
  __int16 v12; // [sp+1Ch] [bp-38h] BYREF
  char v13[52]; // [sp+20h] [bp-34h] BYREF

  v12 = 0;
  sub_1E938(v13, 0x30u);
  printf("%s ", v13);
  printf("%s : Start %s\n", "read_temperature_from_PIC", "read_temperature_from_PIC");
  snprintf(byte_6073C4, 0x100u, "Start %s", "read_temperature_from_PIC");
  sub_3CC5C(byte_6073C4, v13);
  v11 = (unsigned __int8)byte_5FE77A;
  do
  {
LABEL_2:
    if ( !v11 )
      goto LABEL_18;
    if ( !dword_226084 )
      continue;
    v0 = 0;
    do
    {
      while ( 1 )
      {
        v2 = byte_6004B4 + *((_BYTE *)&dword_226288 + v0);
        v12 = 0;
        if ( sub_73868((unsigned __int8)dword_21B3A4, v2, (unsigned __int8)byte_2333A2, &v12, 2) == 2 )
          break;
        sub_1E938(v13, 0x30u);
        printf("%s ", v13);
        printf("%s : Read PIC sensor %d fail\n", "read_temperature_from_PIC", v0);
        snprintf(byte_6074C4, 0x100u, "Read PIC sensor %d fail", v0);
        sub_3CC5C(byte_6074C4, v13);
LABEL_5:
        v1 = dword_226084;
        v0 = (unsigned __int8)(v0 + 1);
        if ( v0 >= dword_226084 )
          goto LABEL_10;
      }
      v3 = v12;
      if ( !(_BYTE)v12 )
        goto LABEL_5;
      v4 = &byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264192 + v0];
      v0 = (unsigned __int8)(v0 + 1);
      v4[1592] = 1;
      v4[1610] = v3;
      v1 = dword_226084;
    }
    while ( v0 < dword_226084 );
LABEL_10:
    if ( v1 )
    {
      v5 = 0;
      do
      {
        sub_1E938(v13, 0x30u);
        printf("%s ", v13);
        printf(
          "%s : Read from Pic ::    Sensor %d:      local: %d\n",
          "read_temperature_from_PIC",
          v5,
          byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265802 + v5]);
        v6 = v5;
        v7 = &byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + v5];
        v5 = (unsigned __int8)(v5 + 1);
        snprintf(byte_6075C4, 0x100u, "Read from Pic ::    Sensor %d:      local: %d", v6, v7[265802]);
        sub_3CC5C(byte_6075C4, v13);
      }
      while ( (unsigned __int8)v5 < (unsigned int)dword_226084 );
    }
    if ( !byte_5FE77A )
      goto LABEL_18;
  }
  while ( !dword_21B3AC );
  v8 = 1;
  while ( 1 )
  {
    sleep(1u);
    if ( !byte_5FE77A )
      break;
    v9 = v8 >= dword_21B3AC;
    v8 = (unsigned __int8)(v8 + 1);
    if ( v9 )
    {
      v11 = (unsigned __int8)byte_5FE77A;
      goto LABEL_2;
    }
  }
LABEL_18:
  sub_1E938(v13, 0x30u);
  printf("%s ", v13);
  printf("%s : %s stop\n", "read_temperature_from_PIC", "read_temperature_from_PIC");
  snprintf(byte_6076C4, 0x100u, "%s stop", "read_temperature_from_PIC");
  sub_3CC5C(byte_6076C4, v13);
  return 0;
}
