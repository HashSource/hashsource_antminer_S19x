char *__fastcall sub_1FAA8(const char *a1, int a2)
{
  unsigned int v3; // r0
  _BYTE v5[24]; // [sp+4h] [bp-1Ch] BYREF

  v3 = sub_6C054(v5, 24, "%ld", a2);
  if ( v3 > 0x17 )
    sub_6ECC0("ntp_control.c", 1769, 2, "rc >= 0 && (size_t)rc < sizeof(buffer)");
  return sub_1F0E4(a1, (int)v5, v3);
}
