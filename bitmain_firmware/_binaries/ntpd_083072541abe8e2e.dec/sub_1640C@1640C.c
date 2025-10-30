int sub_1640C()
{
  int i; // r4
  int v1; // r3
  const char *v2; // r0
  int v4; // [sp+Ch] [bp-4h]

  for ( i = ep_list; i; i = *(_DWORD *)i )
  {
    v1 = *(_DWORD *)(i + 144);
    if ( (v1 & 0x80) == 0 && (v1 & 0x20) != 0 )
    {
      if ( *(_DWORD *)(i + 16) != -1 )
      {
        v2 = (const char *)sub_6C2E8(i + 80);
        sub_64E00(
          6,
          "stop listening for broadcasts to %s on interface #%d %s",
          v2,
          *(_DWORD *)(i + 20),
          (const char *)(i + 108));
        sub_15954(*(__int16 **)(i + 16));
        v1 = *(_DWORD *)(i + 144);
        *(_DWORD *)(i + 16) = -1;
      }
      *(_DWORD *)(i + 144) = v1 & 0xFFFFFFDF;
    }
  }
  broadcast_client_enabled = 0;
  return v4;
}
