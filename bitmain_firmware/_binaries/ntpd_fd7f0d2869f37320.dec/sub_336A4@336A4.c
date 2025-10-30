int __fastcall sub_336A4(int a1)
{
  int v2; // r4
  struct sockaddr *v3; // r7
  int result; // r0
  int v5; // r4
  char v6; // r3
  unsigned int v7; // r1
  unsigned int v8; // r12
  int v9; // r2
  int v10; // r2
  const char *v11; // r0
  void *v12; // r0
  unsigned int v13; // lr
  int v14; // r0
  _BYTE v15[4]; // [sp+8h] [bp-870h] BYREF
  unsigned int v16; // [sp+Ch] [bp-86Ch] BYREF
  unsigned int v17; // [sp+10h] [bp-868h]
  int v18; // [sp+14h] [bp-864h]
  int v19; // [sp+18h] [bp-860h]
  int v20; // [sp+1Ch] [bp-85Ch]
  int v21; // [sp+20h] [bp-858h]
  int v22; // [sp+24h] [bp-854h]
  int v23; // [sp+28h] [bp-850h]
  _DWORD v24[530]; // [sp+2Ch] [bp-84Ch] BYREF

  v2 = *(_DWORD *)(a1 + 52);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = *(struct sockaddr **)(v2 + 20);
      *(_DWORD *)(a1 + 52) = *(_DWORD *)(v2 + 28);
      result = sub_31F34(&v3->sa_family, 0, 0, 3, 0, 0);
      if ( !result )
        break;
      v2 = *(_DWORD *)(a1 + 52);
      if ( !v2 )
        return result;
    }
    sub_40E20(v3, v15);
    if ( (v15[0] & 0x7F) != 0 )
      sub_41594(v3, 0, current_time + 9);
    v5 = sub_17B78(v3);
    memset(v24, 0, sizeof(v24));
    LOBYTE(v24[0]) = (sys_leap << 6) | 3 | (8 * (*(_BYTE *)(a1 + 62) & 7));
    v6 = sys_stratum;
    BYTE2(v24[0]) = *(_BYTE *)(a1 + 64);
    if ( sys_stratum == 16 )
      v6 = 0;
    BYTE1(v24[0]) = v6;
    HIBYTE(v24[0]) = sys_precision;
    v24[3] = sys_refid;
    v24[1] = bswap32((int)(sys_rootdelay * 65536.0));
    v24[2] = bswap32((unsigned int)(sys_rootdisp * 65536.0));
    v24[4] = bswap32(sys_reftime);
    v24[5] = bswap32(dword_109C2C);
    sub_6055C(&v16);
    v7 = v17;
    v8 = v16;
    *(_DWORD *)(a1 + 584) = v16;
    *(_DWORD *)(a1 + 588) = v7;
    v24[10] = bswap32(v8);
    v24[11] = bswap32(v17);
    v9 = sys_ttlmax;
    if ( (unsigned int)sys_ttlmax >= *(_DWORD *)(a1 + 76) )
      v9 = *(_DWORD *)(a1 + 76);
    sub_16CC0(v3, v5, (unsigned __int8)sys_ttl[v9], (unsigned __int8 *)v24, 0x30u);
    v10 = *(_DWORD *)(a1 + 740) + 1;
    *(_DWORD *)(a1 + 712) += (1 << *(_BYTE *)(a1 + 65)) - 2;
    *(_DWORD *)(a1 + 740) = v10;
    v11 = (const char *)sub_6D2C0(v3);
    return sub_65D40(6, "Soliciting pool server %s", v11);
  }
  else
  {
    v12 = *(void **)(a1 + 48);
    if ( v12 )
    {
      free(v12);
      *(_DWORD *)(a1 + 48) = 0;
    }
    v13 = *(unsigned __int16 *)(a1 + 16);
    v14 = *(unsigned __int16 *)(a1 + 60);
    v16 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v18 = 2;
    v19 = 17;
    v17 = v13;
    result = sub_69464(*(_DWORD *)(a1 + 44), "ntp", &v16, 0, pool_name_resolved, v14);
    if ( result )
      return sub_65D40(3, "unable to start pool DNS %s: %m", (const char *)*(_DWORD *)(a1 + 44));
  }
  return result;
}
