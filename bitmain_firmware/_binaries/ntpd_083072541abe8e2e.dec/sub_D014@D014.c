void __fastcall sub_D014(int a1, int a2, _DWORD *a3, const char *a4, int a5, int a6, int a7)
{
  int v10; // r5
  const char *v11; // r0
  const char *v12; // r5
  const char *v13; // r0
  unsigned __int16 v14[14]; // [sp+8h] [bp-20h] BYREF

  if ( a1 )
  {
    v11 = gai_strerror(a1);
    sub_64E00(3, "giving up resolving trap host %s: %s (%d)", a4, v11, a1);
  }
  else
  {
    if ( *(_DWORD *)(a7 + 16) > 0x1Cu )
      sub_6ECC0("ntp_config.c", 3582, 2, "sizeof(peeraddr) >= res->ai_addrlen");
    memset(v14, 0, sizeof(v14));
    _memcpy_chk(v14, *(_DWORD *)(a7 + 20));
    if ( !a3[7] || (v10 = sub_178F8(a3)) == 0 )
    {
      if ( v14[0] == 2 )
        v10 = any_interface;
      else
        v10 = any6_interface;
    }
    if ( !sub_23D98(v14, v10, 0, 4) )
    {
      v12 = (const char *)sub_18FB4(v10);
      v13 = (const char *)sub_6C2E8(v14);
      sub_64E00(3, "set trap %s -> %s failed.", v12, v13);
    }
  }
  free(a3);
}
