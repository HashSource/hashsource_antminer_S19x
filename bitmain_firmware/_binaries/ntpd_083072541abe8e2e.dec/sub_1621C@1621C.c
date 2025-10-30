int sub_1621C()
{
  int v0; // r4
  int v1; // r5
  const char *v2; // r0
  int v3; // r2
  int v4; // r0
  const char *v5; // r0
  int v7; // [sp+Ch] [bp-4h]

  sub_141A4(1);
  v0 = ep_list;
  if ( !ep_list )
  {
    sub_141A4(0);
    goto LABEL_17;
  }
  v1 = 0;
  do
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(v0 + 144);
      if ( (v3 & 0x84) != 0 || *(_DWORD *)(v0 + 180) || (v3 & 8) == 0 )
        goto LABEL_4;
      if ( *(_WORD *)(v0 + 80) != 2 )
        sub_6ECC0("ntp_io.c", 2630, *(_DWORD *)(v0 + 180), "(2 == ((&interf->bcast)->sa.sa_family))");
      if ( (v3 & 0x20) != 0 )
      {
        ++v1;
        goto LABEL_4;
      }
      *(_WORD *)(v0 + 140) = 2;
      v4 = sub_154A8((struct sockaddr *)(v0 + 80), 1, 0, v0);
      *(_DWORD *)(v0 + 16) = v4;
      if ( v4 == -1 )
        break;
      ++v1;
      *(_DWORD *)(v0 + 144) |= 0x20u;
      v2 = (const char *)sub_6C2E8(v0 + 80);
      sub_64E00(
        6,
        "Listen for broadcasts to %s on interface #%d %s",
        v2,
        *(_DWORD *)(v0 + 20),
        (const char *)(v0 + 108));
LABEL_4:
      v0 = *(_DWORD *)v0;
      if ( !v0 )
        goto LABEL_14;
    }
    if ( (unsigned int)(*_errno_location() - 98) <= 1 )
      goto LABEL_4;
    v5 = (const char *)sub_6C2E8(v0 + 80);
    sub_64E00(
      6,
      "failed to listen for broadcasts to %s on interface #%d %s",
      v5,
      *(_DWORD *)(v0 + 20),
      (const char *)(v0 + 108));
    v0 = *(_DWORD *)v0;
  }
  while ( v0 );
LABEL_14:
  sub_141A4(v0);
  if ( v1 )
  {
    broadcast_client_enabled = 1;
    return v7;
  }
LABEL_17:
  broadcast_client_enabled = 0;
  return sub_64E00(3, "Unable to listen for broadcasts, no broadcast interfaces available");
}
