int __fastcall sub_C170(int a1, char a2, unsigned int a3, __int16 a4)
{
  int v8; // r2
  unsigned int v9; // r9
  unsigned int *v10; // r10
  char v11; // r11
  unsigned int v12; // r1
  unsigned int v13; // r0
  unsigned int v14; // r1
  unsigned int v15; // r10
  char v16; // r11
  unsigned int v17; // r3
  char v18; // r1
  unsigned int v19; // r0
  unsigned int v20; // r1
  unsigned int v21; // lr
  unsigned int v22; // r2
  int v24; // r10
  int v25; // r10
  int v26; // r0
  int v27; // r3
  size_t n; // r10
  int v29; // r3
  unsigned int v30; // [sp+14h] [bp-860h] BYREF
  unsigned int v31; // [sp+18h] [bp-85Ch]
  int v32; // [sp+1Ch] [bp-858h] BYREF
  unsigned int v33; // [sp+20h] [bp-854h]
  char buf; // [sp+24h] [bp-850h] BYREF
  char v35; // [sp+25h] [bp-84Fh]
  char v36; // [sp+26h] [bp-84Eh]
  char v37; // [sp+27h] [bp-84Dh]
  unsigned int v38; // [sp+28h] [bp-84Ch]
  unsigned int v39; // [sp+2Ch] [bp-848h]
  int v40; // [sp+30h] [bp-844h]
  unsigned int v41; // [sp+34h] [bp-840h]
  unsigned int v42; // [sp+38h] [bp-83Ch]
  unsigned int v43; // [sp+3Ch] [bp-838h]
  unsigned int v44; // [sp+40h] [bp-834h]
  unsigned int v45; // [sp+44h] [bp-830h]
  unsigned int v46; // [sp+48h] [bp-82Ch]
  unsigned int v47; // [sp+4Ch] [bp-828h]
  unsigned int v48; // [sp+50h] [bp-824h]

  if ( (*(_DWORD *)(*(_DWORD *)(a1 + 60) + 144) & 0x40) != 0 )
    *(_DWORD *)(a1 + 60) = sub_178F8(a1 + 4);
  v8 = a2;
  v9 = *(unsigned __int8 *)(a1 + 90);
  v10 = (unsigned int *)(a1 + 128);
  v11 = *(_BYTE *)(a1 + 88) & 0x38;
  if ( v9 < (unsigned __int8)ntp_minpoll )
    LOBYTE(v9) = ntp_minpoll;
  if ( (a4 & 0x800) != 0 )
  {
    v12 = *(_DWORD *)(a1 + 108);
    v41 = *(_DWORD *)(a1 + 104);
    v42 = v12;
    v13 = *v10;
    v14 = *(_DWORD *)(a1 + 132);
    buf = v11 | ~((unsigned int)~(v8 << 26) >> 26);
    v15 = *(_DWORD *)(a1 + 92);
    v16 = *(_BYTE *)(a1 + 91);
    v47 = v13;
    v48 = v14;
    v17 = *(_DWORD *)(a1 + 96);
    v36 = v9;
    v43 = v13;
    v44 = v14;
    v45 = v13;
    v46 = v14;
    ++sys_kodsent;
    v40 = 1163149650;
    v37 = v16;
    v38 = v15;
    v39 = v17;
    v35 = 0;
  }
  else
  {
    buf = v11 | v8 | (xmt_leap << 6);
    v36 = v9;
    v18 = sys_stratum;
    if ( sys_stratum == 16 )
      v18 = 0;
    v35 = v18;
    v19 = *v10;
    v20 = *(_DWORD *)(a1 + 132);
    v37 = sys_precision;
    v21 = bswap32(*(_DWORD *)(a1 + 72));
    v40 = sys_refid;
    v22 = bswap32(*(_DWORD *)(a1 + 76));
    v38 = bswap32((int)(sys_rootdelay * 65536.0));
    v39 = bswap32((unsigned int)(sys_rootdisp * 65536.0));
    v43 = v19;
    v44 = v20;
    v46 = v22;
    v45 = v21;
    v41 = bswap32(sys_reftime);
    v42 = bswap32(dword_108C0C);
    sub_5F724(&v30);
    v47 = bswap32(v30);
    v48 = bswap32(v31);
  }
  if ( *(_DWORD *)(a1 + 84) == 48 )
    return sub_16A68((struct sockaddr *)(a1 + 4), *(_DWORD *)(a1 + 60), 0, &buf, 0x30u);
  if ( a3 >= 0x10000 )
  {
    v25 = sub_272C8(a1 + 4, *(_DWORD *)(a1 + 60) + 24, 0, sys_private, 0);
    v26 = *(_DWORD *)(a1 + 60);
    if ( *(_DWORD *)(a1 + 84) <= 0x48u )
    {
      v27 = v25;
      v24 = 48;
      sub_272C8(v26 + 24, a1 + 4, a3, v27, 2);
    }
    else
    {
      sub_272C8(v26 + 24, a1 + 4, a3, 0, 2);
      *(_DWORD *)(a1 + 136) |= 0x80u;
      v24 = sub_29774(0, &buf, a1, 48, a1 + 136, v25) + 48;
    }
  }
  else
  {
    v24 = 48;
  }
  sub_5F724(&v30);
  n = v24 + sub_6278C(a3, &buf, v24);
  if ( a3 >= 0x10000 )
    sub_621BC(a3, 0);
  sub_16A68((struct sockaddr *)(a1 + 4), *(_DWORD *)(a1 + 60), 0, &buf, n);
  sub_5F724(&v32);
  v29 = v32 - v30;
  if ( v33 < v31 )
    --v29;
  sys_authdelay = v29;
  dword_108BF4 = v33 - v31;
  return v29;
}
