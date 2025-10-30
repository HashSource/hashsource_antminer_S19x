int __fastcall sub_7393C(int a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r4
  int v6; // r0
  const char *v7; // r0
  socklen_t len; // [sp+Ch] [bp-A8h] BYREF
  struct sockaddr addr; // [sp+10h] [bp-A4h] BYREF
  char v10[128]; // [sp+2Ch] [bp-88h] BYREF

  v2 = socket(a1, 1, 0);
  if ( v2 != -1 )
  {
    v3 = v2;
    if ( a1 != 10 )
      goto LABEL_3;
    len = 28;
    if ( getsockname(v2, &addr, &len) < 0 )
    {
      v4 = 23;
      sub_73300(
        isc_lctx,
        (int)&off_B7DC4,
        (int)&isc_modules,
        -4,
        "retrieving the address of an IPv6 socket from the kernel failed.");
      sub_73300(isc_lctx, (int)&off_B7DC4, (int)&isc_modules, -4, "IPv6 is not supported.");
      goto LABEL_4;
    }
    if ( len == 28 )
    {
LABEL_3:
      v4 = 0;
    }
    else
    {
      v4 = 23;
      sub_73300(
        isc_lctx,
        (int)&off_B7DC4,
        (int)&isc_modules,
        -4,
        "IPv6 structures in kernel and user space do not match.");
      sub_73300(isc_lctx, (int)&off_B7DC4, (int)&isc_modules, -4, "IPv6 is not supported.");
    }
LABEL_4:
    close(v3);
    return v4;
  }
  v6 = *_errno_location();
  if ( v6 == 93 || v6 == 97 || v6 == 22 )
    return 23;
  sub_75B10(v6, v10, 128);
  v4 = 34;
  v7 = (const char *)sub_73830((_DWORD *)isc_msgcat, 1, 101, (int)"failed");
  sub_6F554("./../lib/isc/unix/net.c", 144, (int)"socket() %s: %s", v7, v10);
  return v4;
}
