const char *__fastcall sub_79B0C(time_t a1)
{
  struct tm *v1; // r6
  _BYTE *v2; // r4
  int v3; // r5
  int tm_hour; // r3
  int tm_min; // r12
  int tm_sec; // [sp+4h] [bp-14h]
  time_t timer; // [sp+Ch] [bp-Ch] BYREF

  timer = a1;
  v1 = localtime(&timer);
  if ( !v1 )
    return "--:--:--";
  v2 = &lib_stringbuf[128 * lib_nextbuf];
  v3 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v2, 0, 0x80u);
  tm_hour = v1->tm_hour;
  tm_sec = v1->tm_sec;
  tm_min = v1->tm_min;
  lib_nextbuf = v3;
  sub_6D00C((int)v2, 0x80u, "%02d:%02d:%02d", tm_hour, tm_min, tm_sec);
  return v2;
}
