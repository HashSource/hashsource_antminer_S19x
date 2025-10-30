int __fastcall sub_43E5C(float *a1, int a2)
{
  int v4; // r5
  size_t n; // [sp+8h] [bp-23Ch] BYREF
  int v7; // [sp+Ch] [bp-238h] BYREF
  char v8[48]; // [sp+10h] [bp-234h] BYREF
  _BYTE s[256]; // [sp+40h] [bp-204h] BYREF
  _BYTE s2[260]; // [sp+140h] [bp-104h] BYREF

  memset(s, 0, sizeof(s));
  s[0] = -1;
  memset(s2, 0, 0x100u);
  s2[0] = -1;
  n = 256;
  if ( sub_43124(1, (int)s, &n, &v7, (int)&unk_6E3468, a1) )
  {
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf("%s : version %d,len=%d, offset=%d\n", "flush_eeprom_data", s[0], n, v7);
    snprintf(byte_6415D8, 0x100u, "version %d,len=%d, offset=%d", s[0], n, v7);
    sub_3CC5C((int)byte_6415D8, v8);
    if ( !sub_70A44(a2, (unsigned __int8)v7, s, n) )
    {
      sub_1E938(v8, 0x30u);
      printf("%s ", v8);
      printf("%s : Write EEPROM ok\n", "flush_eeprom_data");
      strcpy(byte_6416D8, "Write EEPROM ok");
      sub_3CC5C((int)byte_6416D8, v8);
    }
    if ( sub_70B40(a2, (unsigned __int8)v7, s2, n) )
    {
      sub_1E938(v8, 0x30u);
      printf("%s ", v8);
      printf("%s : Read EEPROM fail\n", "flush_eeprom_data");
      v4 = -1;
      strcpy(byte_6417D8, "Read EEPROM fail");
      sub_3CC5C((int)byte_6417D8, v8);
    }
    else
    {
      v4 = memcmp(s, s2, n);
      sub_1E938(v8, 0x30u);
      printf("%s ", v8);
      if ( v4 )
      {
        printf("%s : Check EEPROM data fail\n", "flush_eeprom_data");
        v4 = -1;
        strcpy(byte_6419D8, "Check EEPROM data fail");
        sub_3CC5C((int)byte_6419D8, v8);
      }
      else
      {
        printf("%s : Write EEPROM ok\n", "flush_eeprom_data");
        strcpy(byte_6418D8, "Write EEPROM ok");
        sub_3CC5C((int)byte_6418D8, v8);
      }
    }
  }
  else
  {
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf("%s : build eeprom data failed\n", "flush_eeprom_data");
    v4 = -1;
    strcpy(byte_6414D8, "build eeprom data failed");
    sub_3CC5C((int)byte_6414D8, v8);
  }
  return v4;
}
