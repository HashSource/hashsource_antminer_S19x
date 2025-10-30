int sub_16470()
{
  int v0; // r4
  int v1; // r5
  int v2; // r2
  int v4; // r0
  const char *v5; // r0
  const char *v6; // r0
  int v7; // [sp+Ch] [bp-4h]

  sub_143D4(1);
  v0 = ep_list;
  if ( ep_list )
  {
    v1 = 0;
    do
    {
      v2 = *(_DWORD *)(v0 + 144);
      if ( (v2 & 0x84) == 0 && !*(_DWORD *)(v0 + 180) && (v2 & 8) != 0 )
      {
        if ( *(_WORD *)(v0 + 80) != 2 )
          sub_6FC54("ntp_io.c", 2630, *(_DWORD *)(v0 + 180), "(2 == ((&interf->bcast)->sa.sa_family))");
        if ( (v2 & 0x20) != 0 )
        {
          ++v1;
        }
        else
        {
          *(_WORD *)(v0 + 140) = 2;
          v4 = sub_15740((struct sockaddr *)(v0 + 80), 1, 0, v0);
          *(_DWORD *)(v0 + 16) = v4;
          if ( v4 == -1 )
          {
            if ( (unsigned int)(*_errno_location() - 98) > 1 )
            {
              v6 = (const char *)sub_6D2C0(v0 + 80);
              sub_65D40(
                6,
                "failed to listen for broadcasts to %s on interface #%d %s",
                v6,
                *(_DWORD *)(v0 + 20),
                (const char *)(v0 + 108));
            }
          }
          else
          {
            ++v1;
            *(_DWORD *)(v0 + 144) |= 0x20u;
            v5 = (const char *)sub_6D2C0(v0 + 80);
            sub_65D40(
              6,
              "Listen for broadcasts to %s on interface #%d %s",
              v5,
              *(_DWORD *)(v0 + 20),
              (const char *)(v0 + 108));
          }
        }
      }
      v0 = *(_DWORD *)v0;
    }
    while ( v0 );
    sub_143D4(0);
    if ( v1 )
    {
      broadcast_client_enabled = 1;
      return v7;
    }
  }
  else
  {
    sub_143D4(0);
  }
  broadcast_client_enabled = 0;
  return sub_65D40(3, "Unable to listen for broadcasts, no broadcast interfaces available");
}
