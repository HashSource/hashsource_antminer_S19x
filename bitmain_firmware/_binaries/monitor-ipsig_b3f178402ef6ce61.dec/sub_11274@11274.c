int __fastcall sub_11274(void *buf)
{
  const char *v1; // r0

  if ( sendto(dword_219E0, buf, 0xAu, 0, (const struct sockaddr *)&word_21A20, 0x10u) >= 0 )
    LOWORD(v1) = 6032;
  else
    LOWORD(v1) = 6000;
  HIWORD(v1) = 1;
  return printf(v1);
}
