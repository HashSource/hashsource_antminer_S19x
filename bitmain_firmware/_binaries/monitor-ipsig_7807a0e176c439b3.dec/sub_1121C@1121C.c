int __fastcall sub_1121C(void *buf)
{
  const char *v1; // r0

  if ( sendto(dword_220A4, buf, 0xAu, 0, (const struct sockaddr *)&dword_220E4, 0x10u) >= 0 )
    LOWORD(v1) = 5916;
  else
    LOWORD(v1) = 5884;
  HIWORD(v1) = 1;
  return printf(v1);
}
