int __fastcall sub_3BF84(int a1, int a2, int a3)
{
  char v3; // r5
  char v4; // r1
  int v5; // r2
  __int16 v6; // r2
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v12; // r2

  v3 = *(_BYTE *)(a3 + 2);
  dword_BCB24 = a2;
  v4 = *(_BYTE *)(a3 + 3);
  if ( dword_BCB2C )
    v5 = 80;
  else
    v5 = 56;
  dword_BCB28 = a1;
  dword_BC91C = v5;
  if ( dword_BCB2C )
    v6 = 20480;
  else
    v6 = 14336;
  byte_BC927 = v4;
  word_BC92A = v6;
  byte_BC926 = v3;
  dword_BCB20 = 0;
  dword_BC910 = 0;
  dword_BC914 = 0;
  dword_BC918 = 0;
  if ( sys_peer )
  {
    if ( *(_WORD *)(sys_peer + 16) == 2 )
    {
      v12 = *(_DWORD *)(sys_peer + 20);
      if ( dword_BCB2C )
        dword_BC964 = 0;
      dword_BC92C = v12;
    }
    else if ( dword_BCB2C )
    {
      v7 = *(_DWORD *)(sys_peer + 24);
      v8 = *(_DWORD *)(sys_peer + 28);
      v9 = *(_DWORD *)(sys_peer + 32);
      v10 = *(_DWORD *)(sys_peer + 36);
      dword_BC964 = 1;
      unk_BC96C = v7;
      unk_BC970 = v8;
      unk_BC974 = v9;
      unk_BC978 = v10;
    }
    LOBYTE(dword_BC930) = *(_BYTE *)(sys_peer + 63);
  }
  else
  {
    dword_BC92C = 0;
    if ( dword_BCB2C )
      dword_BC964 = 0;
    LOBYTE(dword_BC930) = 0;
  }
  BYTE1(dword_BC930) = sys_leap;
  BYTE2(dword_BC930) = sys_stratum;
  HIBYTE(dword_BC930) = sys_precision;
  dword_BC934 = bswap32((int)(sys_rootdelay * 65536.0));
  dword_BC938 = bswap32((unsigned int)(sys_rootdisp * 65536.0));
  dword_BC954 = bswap32((int)(sys_jitter * 65536.0));
  dword_BC960 = bswap32((unsigned int)(clock_stability * 1000000.0 * 65536.0));
  dword_BC93C = sys_refid;
  dword_BC940 = bswap32(sys_reftime);
  dword_BC944 = bswap32(dword_108C0C);
  dword_BC948 = (unsigned __int8)sys_poll;
  LOBYTE(dword_BC94C) = 0;
  if ( sys_authenticate )
    LOBYTE(dword_BC94C) = 2;
  if ( sys_bclient )
    LOBYTE(dword_BC94C) = dword_BC94C | 1;
  if ( cal_enable )
    LOBYTE(dword_BC94C) = dword_BC94C | 0x10;
  if ( kern_enable )
    LOBYTE(dword_BC94C) = dword_BC94C | 8;
  if ( mon_enabled )
    LOBYTE(dword_BC94C) = dword_BC94C | 0x40;
  if ( ntp_enable )
    LOBYTE(dword_BC94C) = dword_BC94C | 4;
  if ( hardpps_enable )
    LOBYTE(dword_BC94C) = dword_BC94C | 0x20;
  if ( stats_control )
    LOBYTE(dword_BC94C) = ~((unsigned int)~((unsigned __int8)dword_BC94C << 25) >> 25);
  dword_BC958 = 0;
  dword_BC950 = bswap32((int)(sys_bdelay * 65536.0));
  dword_BC95C = bswap32(dword_108BF4);
  sub_3A918();
  return sub_3B02C();
}
