char *__fastcall sub_4C2B4(__int16 a1)
{
  unsigned __int8 v1; // r3^1
  int v2; // r0
  const char *v3; // r0
  int v5; // r0
  const char *v6; // r0
  const char *v7; // r0

  v1 = HIBYTE(a1);
  if ( (unsigned __int8)a1 == 127 )
  {
    v5 = HIBYTE(a1);
    if ( v5 == 133 )
    {
      v7 = (const char *)strsignal(5);
      snprintf(byte_4736E0, 0x40u, "%s (stopped at syscall)", v7);
    }
    else
    {
      v6 = (const char *)strsignal(v5);
      snprintf(byte_4736E0, 0x40u, "%s (stopped)", v6);
    }
  }
  else
  {
    v2 = a1 & 0x7F;
    if ( (v2 + 1) << 24 >> 25 <= 0 )
    {
      snprintf(byte_4736E0, 0x40u, "%d (exited)", v1);
    }
    else
    {
      v3 = (const char *)strsignal(v2);
      snprintf(byte_4736E0, 0x40u, "%s (terminated)", v3);
    }
  }
  return byte_4736E0;
}
