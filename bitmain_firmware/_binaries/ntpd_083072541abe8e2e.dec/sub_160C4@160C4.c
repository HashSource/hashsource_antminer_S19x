int __fastcall sub_160C4(int a1, unsigned __int16 *a2)
{
  int result; // r0
  int v5; // r12
  int v6; // r3
  int v7; // r7
  const char *v8; // r4
  const char *v9; // r0
  int v10; // r7
  const char *v11; // r4
  const char *v12; // r0
  int v13; // [sp+Ch] [bp-10h] BYREF
  int optval; // [sp+10h] [bp-Ch] BYREF

  result = 2092;
  v5 = *a2;
  v6 = *(unsigned __int16 *)(a1 + 24);
  v13 = 0;
  optval = 0;
  if ( v6 != v5 )
    sub_6ECC0("ntp_io.c", 2398, 0, "((maddr)->sa.sa_family) == ((&iface->sin)->sa.sa_family)");
  if ( v6 == 2 )
  {
    result = setsockopt(*(_DWORD *)(a1 + 12), 0, 34, &v13, 4u);
    if ( result )
    {
      v10 = *(_DWORD *)(a1 + 12);
      v11 = (const char *)sub_6C2E8(a1 + 24);
      v12 = (const char *)sub_6C2E8(a2);
      return sub_64E00(
               3,
               "setsockopt IP_MULTICAST_LOOP failed: %m on socket %d, addr %s for multicast address %s",
               v10,
               v11,
               v12);
    }
  }
  else if ( v6 == 10 )
  {
    result = setsockopt(*(_DWORD *)(a1 + 12), 41, 19, &optval, 4u);
    if ( result )
    {
      v7 = *(_DWORD *)(a1 + 12);
      v8 = (const char *)sub_6C2E8(a1 + 24);
      v9 = (const char *)sub_6C2E8(a2);
      return sub_64E00(
               3,
               "setsockopt IPV6_MULTICAST_LOOP failed: %m on socket %d, addr %s for multicast address %s",
               v7,
               v8,
               v9);
    }
  }
  return result;
}
