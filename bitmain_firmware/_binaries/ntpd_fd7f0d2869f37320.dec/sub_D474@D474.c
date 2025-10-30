void __fastcall sub_D474(int a1, int a2, _DWORD *a3, const char *a4, int a5, int a6, int a7)
{
  unsigned int v9; // r2
  int v10; // r1
  int v11; // r4
  const char *v12; // r4
  const char *v13; // r0
  const char *v15; // r0
  _DWORD v16[7]; // [sp+8h] [bp-20h] BYREF

  if ( a1 )
  {
    v15 = gai_strerror(a1);
    sub_65D40(3, "giving up resolving trap host %s: %s (%d)", a4, v15, a1);
  }
  else
  {
    v9 = *(_DWORD *)(a7 + 16);
    if ( v9 > 0x1C )
      sub_6FC54("ntp_config.c", 3582, 2, "sizeof(peeraddr) >= res->ai_addrlen");
    v10 = *(_DWORD *)(a7 + 20);
    memset(v16, 0, sizeof(v16));
    _memcpy_chk(v16, v10, v9, 28);
    if ( !a3[7] || (v11 = sub_17B78(a3)) == 0 )
    {
      if ( LOWORD(v16[0]) == 2 )
        v11 = any_interface;
      else
        v11 = any6_interface;
    }
    if ( !sub_240BC(v16, v11, 0, 4) )
    {
      v12 = (const char *)sub_1924C(v11);
      v13 = (const char *)sub_6D2C0(v16);
      sub_65D40(3, "set trap %s -> %s failed.", v12, v13);
    }
  }
  free(a3);
}
