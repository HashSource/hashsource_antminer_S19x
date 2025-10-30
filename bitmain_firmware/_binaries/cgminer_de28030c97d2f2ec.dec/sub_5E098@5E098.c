void sub_5E098()
{
  char v0[2048]; // [sp+8h] [bp-804h] BYREF

  if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
  {
    strcpy(v0, "cgminer call shutdown");
    sub_1E4EC(5, v0, 0);
  }
  if ( sub_586A4((int)"shutdown", 8) && (byte_91F58 || byte_87769 || dword_8697C > 2) )
  {
    snprintf(v0, 0x800u, "%s: bitmain_shutdown failed.", "bitmain_c5_shutdown");
    sub_1E4EC(3, v0, 0);
  }
}
