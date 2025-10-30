int sub_14F10()
{
  int v0; // r1
  char v3[8]; // [sp+Ch] [bp-808h] BYREF
  int v4; // [sp+80Ch] [bp-8h]

  v4 = 0;
  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    snprintf(v3, 0x800u, "<<<<<<<<<<<<<<<<<<<<exec %s start>>>>>>>>>>>>>>>>", "reload_config");
    sub_1DB6C(7, v3, 0);
  }
  if ( strcmp(byte_865C0, off_852A8[0]) )
    return -2147483643;
  sub_4FA9C(0, v0);
  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    snprintf(v3, 0x800u, "<<<<<<<<<<<<<<<<<<<<exec %s end>>>>>>>>>>>>>>>>>>", "reload_config");
    sub_1DB6C(7, v3, 0);
  }
  return v4;
}
