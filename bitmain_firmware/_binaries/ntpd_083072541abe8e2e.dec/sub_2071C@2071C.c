char *__fastcall sub_2071C(const char *a1, int a2)
{
  char *result; // r0
  unsigned int v4; // r2
  time_t v5; // [sp+10h] [bp-18h] BYREF
  _BYTE v6[16]; // [sp+14h] [bp-14h] BYREF

  v5 = a2 + 2085978496;
  result = (char *)gmtime(&v5);
  if ( result )
  {
    v4 = sub_6C054(
           v6,
           16,
           "%04d%02d%02d%02d%02d",
           *((_DWORD *)result + 5) + 1900,
           *((_DWORD *)result + 4) + 1,
           *((_DWORD *)result + 3),
           *((_DWORD *)result + 2),
           *((_DWORD *)result + 1));
    if ( v4 > 0xF )
      sub_6ECC0("ntp_control.c", 1732, 2, "rc >= 0 && (size_t)rc < sizeof(buffer)");
    return sub_1F0E4(a1, (int)v6, v4);
  }
  return result;
}
