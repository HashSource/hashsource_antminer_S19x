int __fastcall sub_70D88(int a1, _DWORD *a2)
{
  _DWORD *v4; // r0
  void *v5; // r4
  int v6; // r3
  int v7; // r5
  int v8; // r0
  const char *v9; // r0
  FILE *v10; // r0
  struct ifaddrs *v11; // r0
  int v13; // r0
  int *v14; // r0
  char v15[128]; // [sp+Ch] [bp-88h] BYREF

  if ( !a1 )
    sub_6FC54((int)"./../lib/isc/unix/ifiter_getifaddrs.c", 60, 0, "mctx != ((void *)0)");
  if ( !a2 )
    sub_6FC54((int)"./../lib/isc/unix/ifiter_getifaddrs.c", 61, 0, "iterp != ((void *)0)");
  if ( *a2 )
    sub_6FC54((int)"./../lib/isc/unix/ifiter_getifaddrs.c", 62, 0, "*iterp == ((void *)0)");
  v4 = sub_64B04(0, 0xF0u, 0, 0);
  v5 = v4;
  if ( !v4 )
    return 1;
  v4[1] = a1;
  v4[2] = 0;
  v4[3] = 0;
  v6 = dword_108264;
  v4[4] = 0;
  if ( v6 )
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
      sub_76B54(*v14, v15, 128);
      sub_74350(isc_lctx, &off_B8DC4, &isc_modules, -3, "failed to open /proc/net/if_inet6");
    }
  }
  v7 = 3;
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
    v8 = *_errno_location();
    if ( v8 != 4 )
      break;
    --v7;
  }
  while ( v7 );
  sub_76B54(v8, v15, 128);
  v9 = (const char *)sub_7487C(isc_msgcat, 21, 1801, "getifaddrs");
  sub_704E4("./../lib/isc/unix/ifiter_getifaddrs.c", 99, (int)"getting interface addresses: %s: %s", v9, v15);
  v10 = (FILE *)*((_DWORD *)v5 + 42);
  if ( v10 )
    fclose(v10);
  v11 = (struct ifaddrs *)*((_DWORD *)v5 + 4);
  if ( v11 )
    freeifaddrs(v11);
  free(v5);
  return 34;
}
