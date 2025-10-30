void __fastcall sub_382E8(int a1, int a2)
{
  int v3; // r3
  int v4; // [sp+Ch] [bp-804h] BYREF
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v4 = a1;
  sub_4EC78(&off_AF668, "Options for both config file and command line");
  sub_4EC78(&off_AFB48, "Options for command line only");
  sub_4ED4C(&v4, a2, sub_3493C);
  if ( v4 != 1 )
  {
    strcpy(s, "Unexpected extra commandline arguments");
    sub_3AF5C(3, s, 1, *(unsigned __int16 *)"");
  }
  sub_35A38();
  if ( dword_B3B48 )
    sub_36C68();
  if ( dword_B3B40 )
  {
    byte_4B6310 = 1;
    strcpy(byte_4B6338, (const char *)dword_B3B40);
    if ( dword_B3B44 )
      strcpy(modes, (const char *)dword_B3B44);
    else
      strcpy(modes, "a+");
    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
    {
      snprintf(s, 0x800u, "Log file path: %s Open flag: %s", byte_4B6338, modes);
      sub_3AF5C(3, s, 0, v3);
    }
  }
}
