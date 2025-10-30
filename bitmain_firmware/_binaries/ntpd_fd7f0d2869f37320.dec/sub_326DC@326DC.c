int __fastcall sub_326DC(
        int a1,
        const char *a2,
        int a3,
        int a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        int a9,
        char a10,
        int a11,
        unsigned int a12,
        int a13)
{
  int v16; // r10
  int v17; // r0
  int v18; // r2
  int v19; // r3
  int v20; // r0
  int v21; // r0
  __int16 v23; // r1
  __int16 v24; // r2
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r1
  int v29; // r2
  _DWORD *v30; // r0
  unsigned int v31; // r3
  unsigned int v32; // r2
  int v33; // r0
  int v34; // r5
  int v35; // r0
  unsigned int v36; // r3
  int v37; // r2
  int v38; // r3
  char v39; // r0
  int v40; // r3
  int v41; // r12
  int *v42; // r0
  int v43; // [sp+Ch] [bp-38h]
  int v44; // [sp+10h] [bp-34h]
  int v46; // [sp+38h] [bp-Ch] BYREF

  v46 = 0;
  v16 = crypto_flags;
  if ( !crypto_flags )
  {
    if ( a12 >= 0x10000 )
      return 0;
    if ( (a9 & 0x800) != 0 )
    {
      sub_65D40(3, "Autokey not configured");
      return v16;
    }
  }
  if ( a2 && (a10 & 8) == 0 )
    sub_6FC54("ntp_peer.c", 801, 2, "((void *)0) == hostname || (0x08 & cast_flags)");
  if ( !a3 )
  {
    if ( !sub_31F34((unsigned __int16 *)a1, a2, 0, a5, a10, &v46) )
      goto LABEL_21;
    return 0;
  }
  v17 = sub_31F34((unsigned __int16 *)a1, a2, 0, a5, a10, &v46);
  v18 = v17;
  if ( v17 )
  {
    v19 = *(_DWORD *)(v17 + 56);
    if ( v19 != a3 )
    {
      while ( 1 )
      {
        if ( (a10 & 0x20) != 0 && (*(_BYTE *)(v18 + 72) & 0x20) != 0 )
          return 0;
        if ( *(_WORD *)a1 == 2 )
        {
          if ( any_interface == a3 )
          {
LABEL_17:
            v44 = v18;
            v43 = v19;
            v21 = sub_17B78((const struct sockaddr *)a1);
            v18 = v44;
            if ( v43 == v21 )
              return 0;
          }
        }
        else if ( any6_interface == a3 )
        {
          goto LABEL_17;
        }
        v20 = sub_31F34((unsigned __int16 *)a1, a2, (int *)v18, a5, a10, &v46);
        v18 = v20;
        if ( !v20 )
          goto LABEL_21;
        v19 = *(_DWORD *)(v20 + 56);
        if ( v19 == a3 )
          return 0;
      }
    }
    return 0;
  }
LABEL_21:
  if ( a4 >= 0 && a4 <= v46 )
    return 0;
  if ( peer_free_count )
  {
    v16 = dword_BBEA0;
    if ( !dword_BBEA0 )
      sub_6FC54("ntp_peer.c", 878, 2, "peer != ((void *)0)");
  }
  else
  {
    v16 = sub_64BCC(0, 4, 776);
    *(_DWORD *)(v16 + 2328) = dword_BBEA0;
    *(_DWORD *)(v16 + 1552) = v16 + 2328;
    *(_DWORD *)(v16 + 776) = v16 + 1552;
    *(_DWORD *)v16 = v16 + 776;
    peer_free_count += 4;
    total_peer_structs += 4;
  }
  dword_BBEA0 = *(_DWORD *)v16;
  --peer_free_count;
  ++peer_associations;
  if ( (a9 & 2) != 0 )
    ++peer_preempt;
  v23 = word_BD6E8;
  v24 = word_BD6E8 + 1;
  *(_WORD *)(v16 + 60) = word_BD6E8;
  if ( v24 )
    word_BD6E8 = v24;
  else
    word_BD6E8 = v23 + 2;
  v25 = *(_DWORD *)(a1 + 4);
  v26 = *(_DWORD *)(a1 + 8);
  v27 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(v16 + 16) = *(_DWORD *)a1;
  *(_DWORD *)(v16 + 20) = v25;
  *(_DWORD *)(v16 + 24) = v26;
  *(_DWORD *)(v16 + 28) = v27;
  v28 = *(_DWORD *)(a1 + 20);
  v29 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(v16 + 32) = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(v16 + 36) = v28;
  *(_DWORD *)(v16 + 40) = v29;
  if ( a2 )
    *(_DWORD *)(v16 + 44) = sub_64C8C(a2);
  *(_BYTE *)(v16 + 63) = a5;
  *(_BYTE *)(v16 + 72) = a10;
  *(_BYTE *)(v16 + 62) = a6;
  *(_DWORD *)(v16 + 68) = a9;
  v30 = (_DWORD *)sub_18EB8(v16, a1, a3);
  sub_32358(v16, v30);
  if ( a7 )
  {
    v31 = a7;
    if ( a7 >= 0x11u )
      v31 = 17;
    *(_BYTE *)(v16 + 65) = v31;
  }
  else
  {
    v31 = 6;
    *(_BYTE *)(v16 + 65) = 6;
  }
  if ( a8 )
  {
    v32 = a8;
    if ( a8 < 3u )
      v32 = 3;
    *(_BYTE *)(v16 + 66) = v32;
  }
  else
  {
    v32 = 10;
    *(_BYTE *)(v16 + 66) = 10;
  }
  if ( v32 < v31 )
    *(_BYTE *)(v16 + 65) = v32;
  if ( (a10 & 4) == 0 )
    goto LABEL_47;
  v33 = *(_DWORD *)(v16 + 56);
  if ( v33 )
  {
    sub_16274(v33, (unsigned __int16 *)a1);
LABEL_47:
    v34 = a10 & 2;
    if ( (a10 & 2) != 0 )
    {
      v35 = *(_DWORD *)(v16 + 56);
      if ( v35 )
        sub_16318(v35, (unsigned __int16 *)a1);
    }
    goto LABEL_50;
  }
  v34 = a10 & 2;
LABEL_50:
  v36 = a12;
  if ( a12 >= 0x10000 )
    v36 = *(_DWORD *)(v16 + 68);
  *(_DWORD *)(v16 + 76) = a11;
  if ( a12 >= 0x10000 )
    *(_DWORD *)(v16 + 68) = v36 | 0x800;
  *(_DWORD *)(v16 + 124) = a12;
  if ( a13 )
    *(_DWORD *)(v16 + 80) = sub_64C8C(a13);
  *(_BYTE *)(v16 + 64) = *(_BYTE *)(v16 + 65);
  *(_BYTE *)(v16 + 95) = sys_precision;
  if ( (a10 & 0x10) != 0 )
  {
    sub_367D8(v16, "ACST");
  }
  else if ( (a10 & 8) != 0 )
  {
    sub_367D8(v16, "POOL");
  }
  else if ( v34 )
  {
    sub_367D8(v16, "MCST");
  }
  else if ( (a10 & 4) != 0 )
  {
    sub_367D8(v16, "BCST");
  }
  else
  {
    sub_367D8(v16, "INIT");
  }
  if ( mode_ntpdate )
    ++peer_ntpdate;
  v37 = *(unsigned __int16 *)(v16 + 16);
  v38 = current_time;
  *(_DWORD *)(v16 + 724) = current_time;
  *(_DWORD *)(v16 + 736) = v38;
  *(_DWORD *)(v16 + 732) = v38;
  if ( v37 != 2 || *(_WORD *)(v16 + 20) != 32639 )
    goto LABEL_65;
  if ( !a8 )
    *(_BYTE *)(v16 + 66) = *(_BYTE *)(v16 + 65);
  if ( !sub_39EB8(v16) )
  {
    sub_32358(v16, 0);
    v42 = (int *)v16;
    v16 = 0;
    sub_31B38(v42, 0);
  }
  else
  {
LABEL_65:
    v39 = sub_6D544(v16 + 16);
    v40 = *(_WORD *)(v16 + 60) & 0x7F;
    v41 = v39 & 0x7F;
    *(_DWORD *)(v16 + 4) = peer_hash[v41];
    peer_hash[v41] = v16;
    ++peer_hash_count[v41];
    *(_DWORD *)(v16 + 8) = assoc_hash[v40];
    assoc_hash[v40] = v16;
    ++assoc_hash_count[v40];
    *(_DWORD *)v16 = peer_list;
    peer_list = v16;
    sub_41594(v16 + 16, 0, 0);
    sub_266AC(129, v16, (int)"assoc %d", *(unsigned __int16 *)(v16 + 60));
  }
  return v16;
}
