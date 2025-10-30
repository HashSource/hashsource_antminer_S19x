int __fastcall sub_C270(int a1, char a2, unsigned int a3, __int16 a4)
{
  bool v8; // zf
  int v9; // r10
  char v10; // r3
  unsigned int v11; // r8
  char v12; // lr
  unsigned int v13; // r1
  int v14; // r3
  unsigned int v15; // r1
  unsigned int v16; // r2
  char v17; // r8
  unsigned int v18; // r1
  char v19; // r2
  char v20; // r1
  unsigned int v21; // r0
  unsigned int v22; // r1
  unsigned int v23; // lr
  unsigned int v24; // r2
  int v26; // r8
  int v27; // r10
  int v28; // r0
  size_t n; // r8
  unsigned int v30; // r3
  unsigned int v31; // [sp+14h] [bp-860h] BYREF
  unsigned int v32; // [sp+18h] [bp-85Ch]
  int v33; // [sp+1Ch] [bp-858h] BYREF
  unsigned int v34; // [sp+20h] [bp-854h]
  char buf; // [sp+24h] [bp-850h] BYREF
  char v36; // [sp+25h] [bp-84Fh]
  char v37; // [sp+26h] [bp-84Eh]
  char v38; // [sp+27h] [bp-84Dh]
  unsigned int v39; // [sp+28h] [bp-84Ch]
  unsigned int v40; // [sp+2Ch] [bp-848h]
  int v41; // [sp+30h] [bp-844h]
  unsigned int v42; // [sp+34h] [bp-840h]
  unsigned int v43; // [sp+38h] [bp-83Ch]
  unsigned int v44; // [sp+3Ch] [bp-838h]
  unsigned int v45; // [sp+40h] [bp-834h]
  unsigned int v46; // [sp+44h] [bp-830h]
  unsigned int v47; // [sp+48h] [bp-82Ch]
  unsigned int v48; // [sp+4Ch] [bp-828h]
  unsigned int v49; // [sp+50h] [bp-824h]

  if ( (*(_DWORD *)(*(_DWORD *)(a1 + 60) + 144) & 0x40) != 0 )
    *(_DWORD *)(a1 + 60) = sub_17B78(a1 + 4);
  v8 = (a4 & 0x800) == 0;
  v9 = a2 & 7;
  v10 = *(_BYTE *)(a1 + 88);
  v11 = *(unsigned __int8 *)(a1 + 90);
  if ( v8 )
  {
    v19 = ntp_minpoll;
    buf = v10 & 0x38 | v9 | (xmt_leap << 6);
    v20 = sys_stratum;
    if ( sys_stratum == 16 )
      v20 = 0;
    v36 = v20;
    if ( (unsigned __int8)ntp_minpoll < v11 )
      v19 = v11;
    v37 = v19;
    v38 = sys_precision;
    v21 = *(_DWORD *)(a1 + 128);
    v22 = *(_DWORD *)(a1 + 132);
    v23 = *(_DWORD *)(a1 + 72);
    v41 = sys_refid;
    v24 = bswap32(*(_DWORD *)(a1 + 76));
    v39 = bswap32((int)(sys_rootdelay * 65536.0));
    v40 = bswap32((unsigned int)(sys_rootdisp * 65536.0));
    v44 = v21;
    v45 = v22;
    v46 = bswap32(v23);
    v43 = bswap32(dword_109C2C);
    v42 = bswap32(sys_reftime);
    v47 = v24;
    sub_6055C(&v31);
    v48 = bswap32(v31);
    v49 = bswap32(v32);
  }
  else
  {
    v12 = ntp_minpoll;
    v13 = *(_DWORD *)(a1 + 108);
    v14 = v10 & 0x38 | v9;
    v42 = *(_DWORD *)(a1 + 104);
    v43 = v13;
    if ( (unsigned __int8)ntp_minpoll < v11 )
      v12 = v11;
    v15 = *(_DWORD *)(a1 + 132);
    v16 = *(_DWORD *)(a1 + 92);
    v44 = *(_DWORD *)(a1 + 128);
    v45 = v15;
    buf = ~((unsigned int)~(v14 << 26) >> 26);
    v46 = v44;
    v47 = v15;
    v48 = v44;
    v49 = v15;
    v17 = *(_BYTE *)(a1 + 91);
    v18 = *(_DWORD *)(a1 + 96);
    v37 = v12;
    v41 = *(_DWORD *)"RATE";
    v38 = v17;
    ++sys_kodsent;
    v39 = v16;
    v40 = v18;
    v36 = 0;
  }
  if ( *(_DWORD *)(a1 + 84) == 48 )
    return sub_16CC0((struct sockaddr *)(a1 + 4), *(_DWORD *)(a1 + 60), 0, &buf, 0x30u);
  if ( a3 >= 0x10000 )
  {
    v27 = sub_27700(a1 + 4, *(_DWORD *)(a1 + 60) + 24, 0, sys_private, 0);
    v28 = *(_DWORD *)(a1 + 60);
    if ( *(_DWORD *)(a1 + 84) <= 0x48u )
    {
      v26 = 48;
      sub_27700(v28 + 24, a1 + 4, a3, v27, 2);
    }
    else
    {
      sub_27700(v28 + 24, a1 + 4, a3, 0, 2);
      *(_DWORD *)(a1 + 136) |= 0x80u;
      v26 = sub_29B24(0, &buf, a1, 48, a1 + 136, v27) + 48;
    }
  }
  else
  {
    v26 = 48;
  }
  sub_6055C(&v31);
  n = sub_636A4(a3, &buf, v26) + v26;
  if ( a3 >= 0x10000 )
    sub_630C4(a3, 0);
  sub_16CC0((struct sockaddr *)(a1 + 4), *(_DWORD *)(a1 + 60), 0, &buf, n);
  sub_6055C(&v33);
  if ( v34 < v32 )
    v30 = v33 - v31 - 1;
  else
    v30 = v33 - v31;
  sys_authdelay = v30;
  dword_109C14 = v34 - v32;
  return v30;
}
