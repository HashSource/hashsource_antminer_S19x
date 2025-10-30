int __fastcall sub_233F8(const char *a1)
{
  char v3[2048]; // [sp+Ch] [bp-810h] BYREF
  struct timeval tv; // [sp+80Ch] [bp-10h] BYREF
  unsigned int v5; // [sp+814h] [bp-8h]

  v5 = strtol(a1, 0, 16);
  if ( byte_86910 == 1 || !v5 )
    return 0;
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  gettimeofday(&tv, 0);
  if ( v5 <= tv.tv_sec )
    return 0;
  tv.tv_sec = v5;
  settimeofday(&tv, 0);
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
  {
    strcpy(v3, "settime notify.ntime successfuly");
    sub_1DB6C(5, v3, 0);
  }
  byte_86910 = 1;
  return 1;
}
