char *__fastcall sub_26D84(int a1, int a2)
{
  int v3; // r0
  char *result; // r0
  int v5; // [sp+Ch] [bp-804h] BYREF
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v5 = a1;
  sub_64C1C(&off_9E548, "Options for both config file and command line");
  sub_64C1C(&off_9EDA8, "Options for command line only");
  v3 = sub_64CF0(&v5, a2, sub_52B50);
  if ( v5 != 1 )
  {
    strcpy(s, "Unexpected extra commandline arguments");
    sub_47AB4(3, s, 1);
    sub_54CCC(1, 0);
  }
  result = (char *)sub_53DD0(v3);
  if ( dword_1AECD8 )
    result = (char *)sub_63E84(result);
  if ( dword_1AECC8 )
  {
    byte_1AEB9C = 1;
    result = strcpy(byte_1AEBC4, (const char *)dword_1AECC8);
    if ( dword_1AECD4 )
      result = strcpy((char *)&word_1AEBA4, (const char *)dword_1AECD4);
    else
      strcpy((char *)&word_1AEBA4, "a+");
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
    {
      snprintf(s, 0x800u, "Log file path: %s Open flag: %s", byte_1AEBC4, (const char *)&word_1AEBA4);
      return (char *)sub_47AB4(3, s, 0);
    }
  }
  return result;
}
