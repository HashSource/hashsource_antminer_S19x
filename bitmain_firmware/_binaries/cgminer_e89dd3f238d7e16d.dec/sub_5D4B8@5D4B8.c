void sub_5D4B8()
{
  char v0[2048]; // [sp+8h] [bp-804h] BYREF

  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
  {
    strcpy(v0, "cgminer call shutdown");
    sub_1DB6C(5, v0, 0);
  }
  if ( sub_57B30((int)"shutdown", 8) && (byte_90DC0 || byte_865D1 || dword_857E4 > 2) )
  {
    snprintf(v0, 0x800u, "%s: bitmain_shutdown failed.", "bitmain_c5_shutdown");
    sub_1DB6C(3, v0, 0);
  }
}
