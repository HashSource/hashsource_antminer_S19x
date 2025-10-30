int sub_15948()
{
  size_t v1; // r0
  char v3[16]; // [sp+Ch] [bp-810h] BYREF
  char s[8]; // [sp+80Ch] [bp-10h] BYREF
  int v5; // [sp+814h] [bp-8h]

  v5 = 0;
  if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    snprintf(v3, 0x800u, "<<<<<<<<<<<<<<<<<<<<exec %s start>>>>>>>>>>>>>>>>", "enter_sleep");
    sub_1E4EC(7, v3, 0);
  }
  if ( strcmp(byte_87758, off_86440[0]) )
    return -2147483643;
  strcpy(s, "sleep");
  v1 = strlen(s);
  sub_585B0(s, v1);
  if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    snprintf(v3, 0x800u, "<<<<<<<<<<<<<<<<<<<<exec %s end>>>>>>>>>>>>>>>>>>", "enter_sleep");
    sub_1E4EC(7, v3, 0);
  }
  return v5;
}
