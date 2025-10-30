const char *sub_78740()
{
  struct tm *v0; // r7
  _BYTE *v1; // r5
  int v2; // r6
  int tm_mday; // r3
  int tm_min; // lr
  int tm_sec; // [sp+Ch] [bp-10h]
  time_t v7; // [sp+10h] [bp-Ch] BYREF

  v7 = time(0);
  v0 = localtime(&v7);
  if ( !v0 )
    return "-- --- --:--:--";
  v1 = &lib_stringbuf[128 * lib_nextbuf];
  v2 = ((_BYTE)lib_nextbuf + 1) & 0xF;
  memset(v1, 0, 0x80u);
  tm_mday = v0->tm_mday;
  tm_sec = v0->tm_sec;
  tm_min = v0->tm_min;
  lib_nextbuf = v2;
  sub_6C054((int)v1, 0x80u, "%2d %s %02d:%02d:%02d", tm_mday, months[v0->tm_mon], v0->tm_hour, tm_min, tm_sec);
  return v1;
}
