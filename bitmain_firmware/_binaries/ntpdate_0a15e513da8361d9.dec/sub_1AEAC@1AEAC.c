int __fastcall sub_1AEAC(const char *a1, _DWORD *a2)
{
  bool v2; // zf
  int *v6; // r0
  struct timeval tvp; // [sp+4h] [bp-14h] BYREF
  __time_t v8; // [sp+Ch] [bp-Ch]
  __suseconds_t v9; // [sp+10h] [bp-8h]

  v2 = a1 == 0;
  if ( a1 )
    v2 = a2 == 0;
  if ( v2 )
    sub_10C38();
  v8 = sub_19DB8(a2);
  tvp.tv_sec = v8;
  if ( v8 < 0 )
    return 41;
  v9 = sub_19F20((int)a2) / 0x3E8;
  tvp.tv_usec = v9;
  if ( utimes(a1, &tvp) >= 0 )
    return 0;
  v6 = _errno_location();
  return sub_1AA10(*v6, "./../lib/isc/unix/file.c", 156);
}
