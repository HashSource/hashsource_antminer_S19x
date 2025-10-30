int __fastcall sub_74988(int a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r4
  int v6; // r0
  const char *v7; // r0
  int v8; // r0
  socklen_t len; // [sp+Ch] [bp-A8h] BYREF
  struct sockaddr addr; // [sp+10h] [bp-A4h] BYREF
  char v11[128]; // [sp+2Ch] [bp-88h] BYREF

  v2 = socket(a1, 1, 0);
  v3 = v2;
  if ( v2 != -1 )
  {
    if ( a1 != 10 )
    {
LABEL_3:
      v4 = 0;
LABEL_4:
      close(v3);
      return v4;
    }
    len = 28;
    if ( getsockname(v2, &addr, &len) < 0 )
    {
      v4 = 23;
      sub_74350(
        isc_lctx,
        (int)&off_B8DC4,
        (int)&isc_modules,
        -4,
        "retrieving the address of an IPv6 socket from the kernel failed.");
      v8 = isc_lctx;
    }
    else
    {
      if ( len == 28 )
        goto LABEL_3;
      v4 = 23;
      sub_74350(
        isc_lctx,
        (int)&off_B8DC4,
        (int)&isc_modules,
        -4,
        "IPv6 structures in kernel and user space do not match.");
      v8 = isc_lctx;
    }
    sub_74350(v8, (int)&off_B8DC4, (int)&isc_modules, -4, "IPv6 is not supported.");
    goto LABEL_4;
  }
  v6 = *_errno_location();
  if ( v6 == 93 || v6 == 97 || v6 == 22 )
    return 23;
  sub_76B54(v6, v11, 128);
  v7 = (const char *)sub_7487C((_DWORD *)isc_msgcat, 1, 101, (int)"failed");
  sub_704E4("./../lib/isc/unix/net.c", 144, (int)"socket() %s: %s", v7, v11);
  return 34;
}
