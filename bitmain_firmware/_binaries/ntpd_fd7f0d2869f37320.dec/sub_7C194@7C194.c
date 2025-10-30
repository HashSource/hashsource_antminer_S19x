int __fastcall sub_7C194(const char *a1, _DWORD *a2)
{
  bool v2; // zf
  int v3; // r2
  int *v7; // r0
  struct timeval tvp; // [sp+4h] [bp-14h] BYREF
  __time_t v9; // [sp+Ch] [bp-Ch]
  __suseconds_t v10; // [sp+10h] [bp-8h]

  v2 = a1 == 0;
  if ( a1 )
    v2 = a2 == 0;
  v3 = !v2;
  if ( v2 )
    sub_6FC54((int)"./../lib/isc/unix/file.c", 125, v3, "file != ((void *)0) && itime != ((void *)0)");
  v9 = sub_77850(a2);
  tvp.tv_sec = v9;
  if ( v9 < 0 )
    return 41;
  v10 = sub_779B8((int)a2) / 0x3E8;
  tvp.tv_usec = v10;
  if ( utimes(a1, &tvp) >= 0 )
    return 0;
  v7 = _errno_location();
  return sub_7BCF8(*v7, "./../lib/isc/unix/file.c", 156);
}
