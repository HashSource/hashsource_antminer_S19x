int __fastcall sub_47A74(int a1, int *a2)
{
  int v4; // r4
  int v5; // r0
  char v7[48]; // [sp+0h] [bp-130h] BYREF
  _BYTE s[256]; // [sp+30h] [bp-100h] BYREF

  memset(s, 255, sizeof(s));
  if ( sub_70B40(a1, 0, s, 256) )
  {
    sub_1E938(v7, 0x30u);
    v4 = -1;
    printf("%s ", v7);
    printf("%s : read eeprom_data failed,chain:%d\n", "read_eeprom", a1);
    snprintf(byte_646AE4, 0x100u, "read eeprom_data failed,chain:%d", a1);
    sub_3CC5C((int)byte_646AE4, v7);
  }
  else
  {
    v4 = 0;
    v5 = sub_385B0((int)s, 256);
    *a2 = v5;
    if ( v5 )
    {
      (*(void (**)(void))(v5 + 292))();
    }
    else
    {
      sub_1E938(v7, 0x30u);
      printf("%s ", v7);
      printf("%s : load eeprom failed\n", "read_eeprom");
      v4 = -1;
      strcpy(byte_646BE4, "load eeprom failed");
      sub_3CC5C((int)byte_646BE4, v7);
    }
  }
  return v4;
}
