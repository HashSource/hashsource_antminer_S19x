int __fastcall sub_23CA0(const char *a1)
{
  char v3[2048]; // [sp+Ch] [bp-810h] BYREF
  struct timeval tv; // [sp+80Ch] [bp-10h] BYREF
  unsigned int v5; // [sp+814h] [bp-8h]

  v5 = strtol(a1, 0, 16);
  if ( byte_87AA8 == 1 || !v5 )
    return 0;
  tv.tv_sec = 0;
  tv.tv_usec = 0;
  gettimeofday(&tv, 0);
  if ( tv.tv_sec >= v5 )
    return 0;
  tv.tv_sec = v5;
  settimeofday(&tv, 0);
  if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
  {
    strcpy(v3, "settime notify.ntime successfuly");
    sub_1E4EC(5, v3, 0);
  }
  byte_87AA8 = 1;
  return 1;
}
