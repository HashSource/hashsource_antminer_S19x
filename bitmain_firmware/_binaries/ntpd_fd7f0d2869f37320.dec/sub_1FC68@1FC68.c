char *__fastcall sub_1FC68(const char *a1, int a2)
{
  unsigned int v3; // r0
  _BYTE v5[24]; // [sp+4h] [bp-1Ch] BYREF

  v3 = sub_6D00C(v5, 24, "0x%lx", a2);
  if ( v3 > 0x17 )
    sub_6FC54("ntp_control.c", 1751, 2, "rc >= 0 && (size_t)rc < sizeof(buffer)");
  return sub_1F350(a1, (int)v5, v3);
}
