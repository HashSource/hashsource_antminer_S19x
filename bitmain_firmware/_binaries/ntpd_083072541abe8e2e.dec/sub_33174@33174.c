int __fastcall sub_33174(int a1)
{
  int v2; // r4
  struct sockaddr *v3; // r6
  int result; // r0
  char *v5; // r4
  char v6; // r1
  char v7; // r3
  unsigned int v8; // r1
  unsigned int v9; // r12
  unsigned int v10; // r2
  char v11; // r12
  int v12; // r2
  const char *v13; // r0
  void *v14; // r0
  void *v15; // r0
  unsigned int v16; // r4
  int v17; // lr
  _BYTE v18[4]; // [sp+8h] [bp-874h] BYREF
  unsigned int s[8]; // [sp+Ch] [bp-870h] BYREF
  _DWORD v20[530]; // [sp+2Ch] [bp-850h] BYREF

  v2 = *(_DWORD *)(a1 + 52);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *(struct sockaddr **)(v2 + 20);
      *(_DWORD *)(a1 + 52) = *(_DWORD *)(v2 + 28);
      result = sub_31A44(&v3->sa_family, 0, 0, 3, 0, 0);
      if ( !result )
        break;
      v2 = *(_DWORD *)(a1 + 52);
      if ( !v2 )
        return result;
    }
    sub_40054(v3, v18);
    if ( (v18[0] & 0x7F) != 0 )
      sub_40824(v3, 0, current_time + 9);
    v5 = sub_178F8(v3);
    memset(v20, 0, sizeof(v20));
    v6 = *(_BYTE *)(a1 + 64);
    LOBYTE(v20[0]) = (8 * *(_BYTE *)(a1 + 62)) & 0x38 | (sys_leap << 6) | 3;
    BYTE2(v20[0]) = v6;
    v7 = sys_stratum;
    if ( sys_stratum == 16 )
      v7 = 0;
    BYTE1(v20[0]) = v7;
    HIBYTE(v20[0]) = sys_precision;
    v20[3] = sys_refid;
    v20[1] = bswap32((int)(sys_rootdelay * 65536.0));
    v20[2] = bswap32((unsigned int)(sys_rootdisp * 65536.0));
    v20[4] = bswap32(sys_reftime);
    v20[5] = bswap32(dword_108C0C);
    sub_5F724(s);
    v8 = s[1];
    v9 = bswap32(s[1]);
    v20[10] = bswap32(s[0]);
    *(_DWORD *)(a1 + 584) = s[0];
    *(_DWORD *)(a1 + 588) = v8;
    v20[11] = v9;
    v10 = *(_DWORD *)(a1 + 76);
    if ( v10 >= sys_ttlmax )
      v10 = sys_ttlmax;
    sub_16A68(v3, (int)v5, (unsigned __int8)sys_ttl[v10], (unsigned __int8 *)v20, 0x30u);
    v11 = *(_BYTE *)(a1 + 65);
    v12 = *(_DWORD *)(a1 + 712);
    ++*(_DWORD *)(a1 + 740);
    *(_DWORD *)(a1 + 712) = v12 + (1 << v11) - 2;
    v13 = (const char *)sub_6C2E8(v3);
    return sub_64E00(6, "Soliciting pool server %s", v13);
  }
  else
  {
    v14 = *(void **)(a1 + 48);
    if ( v14 )
    {
      free(v14);
      *(_DWORD *)(a1 + 48) = 0;
    }
    v15 = memset(s, 0, sizeof(s));
    v16 = *(unsigned __int16 *)(a1 + 16);
    v17 = *(unsigned __int16 *)(a1 + 60);
    s[3] = 17;
    s[1] = v16;
    s[2] = 2;
    result = sub_68520(*(_DWORD *)(a1 + 44), "ntp", v15, 0, pool_name_resolved, v17);
    if ( result )
      return sub_64E00(3, "unable to start pool DNS %s: %m", (const char *)*(_DWORD *)(a1 + 44));
  }
  return result;
}
