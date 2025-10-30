int sub_15090()
{
  size_t v1; // r0
  char v3[16]; // [sp+Ch] [bp-810h] BYREF
  char s[8]; // [sp+80Ch] [bp-10h] BYREF
  int v5; // [sp+814h] [bp-8h]

  v5 = 0;
  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    snprintf(v3, 0x800u, "<<<<<<<<<<<<<<<<<<<<exec %s start>>>>>>>>>>>>>>>>", "enter_sleep");
    sub_1DB6C(7, v3, 0);
  }
  if ( strcmp(byte_865C0, off_852A8[0]) )
    return -2147483643;
  strcpy(s, "sleep");
  v1 = strlen(s);
  sub_57A3C(s, v1);
  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    snprintf(v3, 0x800u, "<<<<<<<<<<<<<<<<<<<<exec %s end>>>>>>>>>>>>>>>>>>", "enter_sleep");
    sub_1DB6C(7, v3, 0);
  }
  return v5;
}
