int sub_157C8()
{
  int v0; // r1
  char v3[8]; // [sp+Ch] [bp-808h] BYREF
  int v4; // [sp+80Ch] [bp-8h]

  v4 = 0;
  if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    snprintf(v3, 0x800u, "<<<<<<<<<<<<<<<<<<<<exec %s start>>>>>>>>>>>>>>>>", "reload_config");
    sub_1E4EC(7, v3, 0);
  }
  if ( strcmp(byte_87758, off_86440[0]) )
    return -2147483643;
  sub_50784(0, v0);
  if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    snprintf(v3, 0x800u, "<<<<<<<<<<<<<<<<<<<<exec %s end>>>>>>>>>>>>>>>>>>", "reload_config");
    sub_1E4EC(7, v3, 0);
  }
  return v4;
}
