void __fastcall sub_38918(int a1, int a2)
{
  int v3; // r3
  int v4; // [sp+Ch] [bp-804h] BYREF
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  v4 = a1;
  sub_50DA8(&off_B2AD0, "Options for both config file and command line");
  sub_50DA8(&off_B2FB0, "Options for command line only");
  sub_50E8C(&v4, a2, sub_34FE4);
  if ( v4 != 1 )
  {
    strcpy(s, "Unexpected extra commandline arguments");
    sub_3B6AC(3, s, 1, *(unsigned __int16 *)"");
  }
  sub_36080();
  if ( dword_B68B8 )
    sub_37264();
  if ( dword_B68B0 )
  {
    byte_4B908C = 1;
    strcpy(byte_4B90B4, (const char *)dword_B68B0);
    if ( dword_B68B4 )
      strcpy(modes, (const char *)dword_B68B4);
    else
      strcpy(modes, "a+");
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
    {
      snprintf(s, 0x800u, "Log file path: %s Open flag: %s", byte_4B90B4, modes);
      sub_3B6AC(3, s, 0, v3);
    }
  }
}
