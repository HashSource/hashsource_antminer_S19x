int __fastcall sub_3C840(int a1, int a2, int a3)
{
  char v3; // r8
  char v4; // r7
  int v5; // r1
  __int16 v6; // r1
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r2

  v3 = *(_BYTE *)(a3 + 2);
  v4 = *(_BYTE *)(a3 + 3);
  dword_BDB3C = a1;
  dword_BDB38 = a2;
  if ( dword_BDB40 )
    v5 = 80;
  else
    v5 = 56;
  byte_BD93A = v3;
  dword_BD92C = v5;
  if ( dword_BDB40 )
    v6 = 20480;
  else
    v6 = 14336;
  byte_BD93B = v4;
  word_BD93E = v6;
  dword_BDB34 = 0;
  dword_BD930 = 0;
  dword_BD928 = 0;
  dword_BD924 = 0;
  if ( sys_peer )
  {
    if ( *(_WORD *)(sys_peer + 16) == 2 )
    {
      v12 = *(_DWORD *)(sys_peer + 20);
      if ( dword_BDB40 )
        dword_BD978 = 0;
      dword_BD940 = v12;
    }
    else if ( dword_BDB40 )
    {
      v8 = *(_DWORD *)(sys_peer + 24);
      v9 = *(_DWORD *)(sys_peer + 28);
      v10 = *(_DWORD *)(sys_peer + 32);
      v11 = *(_DWORD *)(sys_peer + 36);
      dword_BD978 = 1;
      unk_BD980 = v8;
      unk_BD984 = v9;
      unk_BD988 = v10;
      unk_BD98C = v11;
    }
    LOBYTE(dword_BD944) = *(_BYTE *)(sys_peer + 63);
  }
  else
  {
    dword_BD940 = 0;
    if ( dword_BDB40 )
      dword_BD978 = 0;
    LOBYTE(dword_BD944) = 0;
  }
  BYTE1(dword_BD944) = sys_leap;
  BYTE2(dword_BD944) = sys_stratum;
  HIBYTE(dword_BD944) = sys_precision;
  dword_BD948 = bswap32((int)(sys_rootdelay * 65536.0));
  dword_BD94C = bswap32((unsigned int)(sys_rootdisp * 65536.0));
  dword_BD968 = bswap32((int)(sys_jitter * 65536.0));
  dword_BD974 = bswap32((unsigned int)(clock_stability * 1000000.0 * 65536.0));
  dword_BD950 = sys_refid;
  dword_BD954 = bswap32(sys_reftime);
  dword_BD958 = bswap32(dword_109C2C);
  dword_BD95C = (unsigned __int8)sys_poll;
  LOBYTE(dword_BD960) = 0;
  if ( sys_authenticate )
    LOBYTE(dword_BD960) = 2;
  if ( sys_bclient )
    LOBYTE(dword_BD960) = dword_BD960 | 1;
  if ( cal_enable )
    LOBYTE(dword_BD960) = dword_BD960 | 0x10;
  if ( kern_enable )
    LOBYTE(dword_BD960) = dword_BD960 | 8;
  if ( mon_enabled )
    LOBYTE(dword_BD960) = dword_BD960 | 0x40;
  if ( ntp_enable )
    LOBYTE(dword_BD960) = dword_BD960 | 4;
  if ( hardpps_enable )
    LOBYTE(dword_BD960) = dword_BD960 | 0x20;
  if ( stats_control )
    LOBYTE(dword_BD960) = ~((unsigned int)~((unsigned __int8)dword_BD960 << 25) >> 25);
  dword_BD96C = 0;
  dword_BD964 = bswap32((int)(sys_bdelay * 65536.0));
  dword_BD970 = bswap32(dword_109C14);
  sub_3B168();
  return sub_3B8C4();
}
