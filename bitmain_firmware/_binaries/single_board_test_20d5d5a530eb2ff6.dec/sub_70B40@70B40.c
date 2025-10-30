int __fastcall sub_70B40(unsigned int a1, unsigned __int8 a2, int a3, int a4)
{
  int v8; // r5
  int v9; // r0
  int v11; // r9
  unsigned __int8 v12; // [sp+Fh] [bp-801h] BYREF
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_read", a1);
    nullsub_8();
    return -2147483391;
  }
  else if ( dword_65E368[2 * a1 + 1] || (v11 = sub_70990(a1), v11 >= 0) )
  {
    if ( a4 )
    {
      v8 = a3;
      while ( 1 )
      {
        v9 = dword_65E368[2 * a1];
        v12 = a2;
        ++v8;
        ++a2;
        if ( sub_767A0(v9, &v12) != 1 )
          break;
        if ( v8 == a3 + a4 )
          goto LABEL_11;
      }
      snprintf(s, 0x800u, "fail to read eeprom by iic, chain: %d, addr: %d\n", a1, v12);
      nullsub_8();
      return -2147483392;
    }
    else
    {
LABEL_11:
      usleep(0x7A120u);
      return 0;
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed\n", "eeprom_read", a1);
    nullsub_8();
    return v11;
  }
}
