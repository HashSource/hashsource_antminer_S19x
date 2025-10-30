int __fastcall sub_1F6F6C(const char *a1)
{
  int v1; // r4
  int v2; // r5
  int v3; // r6
  int v4; // r3
  int v5; // r0
  __time_t tv_sec; // r3
  int *v7; // r4
  int v8; // r0
  const char *v10; // [sp+4h] [bp-BCh] BYREF
  __int64 v11; // [sp+8h] [bp-B8h] BYREF
  struct timeval tv; // [sp+10h] [bp-B0h] BYREF
  _DWORD v13[16]; // [sp+18h] [bp-A8h] BYREF
  __int64 s[13]; // [sp+58h] [bp-68h] BYREF

  v10 = a1;
  if ( sub_1F5F94(&v10, s) )
    return sub_1F61A4(-1, 5);
  v1 = sub_1F63C0(s[0]);
  if ( v1 == -1 )
    return sub_1F61A4(-1, 9);
  v2 = sub_1F5F94(&v10, &v11);
  if ( v2 )
    return sub_1F61A4(-1, 5);
  v3 = v11;
  if ( (unsigned int)(v1 + 3) <= 1 )
  {
    v13[0] = 0x1000000;
    memset(s, 0, sizeof(s));
    if ( v1 == -2 )
      v4 = 8448;
    else
      v4 = 8320;
    s[2] = (unsigned int)v4 | 0x100000000LL;
    LODWORD(s[3]) = getuid();
    HIDWORD(s[3]) = getgid();
    s[8] = 0;
    LODWORD(s[7]) = 512;
    v5 = gettimeofday(&tv, 0);
    if ( v5 )
    {
      LODWORD(s[11]) = 0;
      LODWORD(s[10]) = 0;
    }
    else
    {
      tv_sec = tv.tv_sec;
    }
    if ( v5 )
    {
      LODWORD(s[9]) = 0;
    }
    else
    {
      LODWORD(s[11]) = tv_sec;
      LODWORD(s[10]) = tv_sec;
      LODWORD(s[9]) = tv_sec;
    }
LABEL_14:
    if ( !v3 )
      return sub_1F61A4(v2, 0);
    sub_96184((int *)s, v13);
    v7 = _errno_location();
    v8 = sub_230484(v3, v13, 64);
    *v7 = v8;
    if ( !v8 )
      return sub_1F61A4(v2, 0);
    return sub_1F6474();
  }
  v2 = _fxstat64(3, v1, s);
  if ( v2 != -1 )
    goto LABEL_14;
  return sub_1F6474();
}
