char *__fastcall sub_200E4(const char *a1, int a2, int a3)
{
  double v3; // d0
  unsigned int v6; // r0
  _BYTE v7[40]; // [sp+Ch] [bp-2Ch] BYREF

  if ( a2 )
    v6 = sub_6C054(v7, 40, "%.*f", a3, v3);
  else
    v6 = sub_6C054(v7, 40, "%.*g", a3, v3);
  if ( v6 > 0x27 )
    sub_6ECC0("ntp_control.c", 1665, 2, "rc >= 0 && (size_t)rc < sizeof(buffer)");
  return sub_1F0E4(a1, (int)v7, v6);
}
