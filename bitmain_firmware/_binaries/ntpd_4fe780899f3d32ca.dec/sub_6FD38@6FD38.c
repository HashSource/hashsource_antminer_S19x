int __fastcall sub_6FD38(int a1, _DWORD *a2)
{
  _DWORD *v4; // r0
  void *v5; // r4
  int v7; // r3
  int v8; // r5
  int v9; // r0
  const char *v10; // r0
  FILE *v11; // r0
  struct ifaddrs *v12; // r0
  int v13; // r0
  int *v14; // r0
  char v15[128]; // [sp+Ch] [bp-88h] BYREF

  if ( !a1 )
    sub_6ECC0((int)"./../lib/isc/unix/ifiter_getifaddrs.c", 60, 0, "mctx != ((void *)0)");
  if ( !a2 )
    sub_6ECC0((int)"./../lib/isc/unix/ifiter_getifaddrs.c", 61, 0, "iterp != ((void *)0)");
  if ( *a2 )
    sub_6ECC0((int)"./../lib/isc/unix/ifiter_getifaddrs.c", 62, 0, "*iterp == ((void *)0)");
  v4 = sub_63BA4(0, 0xF0u, 0, 0);
  v5 = v4;
  if ( !v4 )
    return 1;
  v4[1] = a1;
  v4[2] = 0;
  v4[3] = 0;
  v7 = dword_107240;
  v4[4] = 0;
  if ( v7 )
  {
    v4[42] = 0;
  }
  else
  {
    v13 = fopen64("/proc/net/if_inet6", "r");
    *((_DWORD *)v5 + 42) = v13;
    if ( !v13 )
    {
      v14 = _errno_location();
      sub_75B10(*v14, v15, 128);
      sub_73300(isc_lctx, &off_B7DC4, &isc_modules, -3, "failed to open /proc/net/if_inet6");
    }
  }
  v8 = 3;
  *((_DWORD *)v5 + 59) = 25;
  do
  {
    if ( getifaddrs((struct ifaddrs **)v5 + 4) >= 0 )
    {
      *((_DWORD *)v5 + 5) = 0;
      *(_DWORD *)v5 = 1229343047;
      *((_DWORD *)v5 + 41) = 25;
      *a2 = v5;
      return 0;
    }
    v9 = *_errno_location();
    if ( v9 != 4 )
      break;
    --v8;
  }
  while ( v8 );
  sub_75B10(v9, v15, 128);
  v10 = (const char *)sub_73830(isc_msgcat, 21, 1801, "getifaddrs");
  sub_6F554("./../lib/isc/unix/ifiter_getifaddrs.c", 99, (int)"getting interface addresses: %s: %s", v10, v15);
  v11 = (FILE *)*((_DWORD *)v5 + 42);
  if ( v11 )
    fclose(v11);
  v12 = (struct ifaddrs *)*((_DWORD *)v5 + 4);
  if ( v12 )
    freeifaddrs(v12);
  free(v5);
  return 34;
}
