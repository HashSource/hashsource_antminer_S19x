int __fastcall sub_321D4(
        int a1,
        const char *a2,
        char *a3,
        int a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int8 a7,
        unsigned __int8 a8,
        int a9,
        unsigned __int8 a10,
        int a11,
        unsigned int a12,
        int a13)
{
  int v16; // r10
  int v17; // r0
  int v18; // r2
  char *v19; // r3
  int v20; // r0
  char *v21; // r0
  int v23; // r0
  __int16 v24; // r3
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r1
  int v29; // r2
  char *v30; // r0
  unsigned int v31; // r3
  unsigned int v32; // r2
  int v33; // r0
  int v34; // r3
  int v35; // r0
  int v36; // r2
  int v37; // r3
  int v38; // r12
  int v39; // r3
  char *v40; // [sp+Ch] [bp-38h]
  int v41; // [sp+10h] [bp-34h]
  int v43; // [sp+38h] [bp-Ch] BYREF

  v43 = 0;
  v16 = crypto_flags;
  if ( !crypto_flags )
  {
    if ( a12 >= 0x10000 )
      return 0;
    if ( (a9 & 0x800) != 0 )
    {
      sub_64E00(3, "Autokey not configured");
      return v16;
    }
  }
  if ( a2 && (a10 & 8) == 0 )
    sub_6ECC0("ntp_peer.c", 801, 2, "((void *)0) == hostname || (0x08 & cast_flags)");
  if ( !a3 )
  {
    if ( !sub_31A44((unsigned __int16 *)a1, a2, 0, a5, a10, &v43) )
      goto LABEL_21;
    return 0;
  }
  v17 = sub_31A44((unsigned __int16 *)a1, a2, 0, a5, a10, &v43);
  v18 = v17;
  if ( v17 )
  {
    v19 = *(char **)(v17 + 56);
    if ( a3 != v19 )
    {
      while ( 1 )
      {
        if ( (a10 & 0x20) != 0 && (*(_BYTE *)(v18 + 72) & 0x20) != 0 )
          return 0;
        if ( *(_WORD *)a1 == 2 )
        {
          if ( (char *)any_interface == a3 )
          {
LABEL_17:
            v41 = v18;
            v40 = v19;
            v21 = sub_178F8((const struct sockaddr *)a1);
            v18 = v41;
            if ( v40 == v21 )
              return 0;
          }
        }
        else if ( (char *)any6_interface == a3 )
        {
          goto LABEL_17;
        }
        v20 = sub_31A44((unsigned __int16 *)a1, a2, (int *)v18, a5, a10, &v43);
        v18 = v20;
        if ( !v20 )
          goto LABEL_21;
        v19 = *(char **)(v20 + 56);
        if ( v19 == a3 )
          return 0;
      }
    }
    return 0;
  }
LABEL_21:
  if ( a4 >= 0 && v43 >= a4 )
    return 0;
  if ( peer_free_count )
  {
    v16 = dword_BAE98;
    if ( !dword_BAE98 )
      sub_6ECC0("ntp_peer.c", 878, 2, "peer != ((void *)0)");
  }
  else
  {
    v16 = sub_63C68(0, 4, 776);
    *(_DWORD *)(v16 + 2328) = dword_BAE98;
    *(_DWORD *)(v16 + 1552) = v16 + 2328;
    *(_DWORD *)(v16 + 776) = v16 + 1552;
    *(_DWORD *)v16 = v16 + 776;
    peer_free_count += 4;
    total_peer_structs += 4;
  }
  v23 = *(_DWORD *)v16;
  --peer_free_count;
  dword_BAE98 = v23;
  ++peer_associations;
  if ( (a9 & 2) != 0 )
    ++peer_preempt;
  v24 = word_BAE9C + 1;
  *(_WORD *)(v16 + 60) = word_BAE9C;
  if ( !v24 )
    v24 = 1;
  word_BAE9C = v24;
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
    *(_DWORD *)(v16 + 44) = sub_63D08(a2);
  *(_BYTE *)(v16 + 63) = a5;
  *(_BYTE *)(v16 + 72) = a10;
  *(_BYTE *)(v16 + 62) = a6;
  *(_DWORD *)(v16 + 68) = a9;
  v30 = sub_18C28(v16, a1, a3);
  sub_31E54(v16, (int)v30);
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
  v33 = *(_DWORD *)(v16 + 56);
  if ( v31 > v32 )
    *(_BYTE *)(v16 + 65) = v32;
  v34 = (a10 >> 2) & 1;
  if ( !v33 )
    v34 = 0;
  if ( v34 )
    sub_16020(v33, (unsigned __int16 *)a1);
  if ( (a10 & 2) != 0 )
  {
    v35 = *(_DWORD *)(v16 + 56);
    if ( v35 )
      sub_160C4(v35, (unsigned __int16 *)a1);
  }
  if ( a12 >= 0x10000 )
    *(_DWORD *)(v16 + 68) |= 0x800u;
  *(_DWORD *)(v16 + 76) = a11;
  *(_DWORD *)(v16 + 124) = a12;
  if ( a13 )
    *(_DWORD *)(v16 + 80) = sub_63D08(a13);
  *(_BYTE *)(v16 + 64) = *(_BYTE *)(v16 + 65);
  *(_BYTE *)(v16 + 95) = sys_precision;
  if ( (a10 & 0x10) != 0 )
  {
    sub_36214(v16, "ACST");
  }
  else if ( (a10 & 8) != 0 )
  {
    sub_36214(v16, "POOL");
  }
  else if ( (a10 & 2) != 0 )
  {
    sub_36214(v16, "MCST");
  }
  else if ( (a10 & 4) != 0 )
  {
    sub_36214(v16, "BCST");
  }
  else
  {
    sub_36214(v16, "INIT");
  }
  if ( mode_ntpdate )
    ++peer_ntpdate;
  v36 = *(unsigned __int16 *)(v16 + 16);
  v37 = current_time;
  *(_DWORD *)(v16 + 724) = current_time;
  *(_DWORD *)(v16 + 736) = v37;
  *(_DWORD *)(v16 + 732) = v37;
  if ( v36 != 2 || *(_WORD *)(v16 + 20) != 32639 )
    goto LABEL_65;
  if ( !a8 )
    *(_BYTE *)(v16 + 66) = *(_BYTE *)(v16 + 65);
  if ( !sub_396D4(v16) )
  {
    sub_31E54(v16, 0);
    sub_31634((int *)v16, 0);
    return 0;
  }
  else
  {
LABEL_65:
    v38 = sub_6C568(v16 + 16) & 0x7F;
    *(_DWORD *)(v16 + 4) = peer_hash[v38];
    peer_hash[v38] = v16;
    v39 = *(_WORD *)(v16 + 60) & 0x7F;
    ++peer_hash_count[v38];
    *(_DWORD *)(v16 + 8) = assoc_hash[v39];
    assoc_hash[v39] = v16;
    ++assoc_hash_count[v39];
    *(_DWORD *)v16 = peer_list;
    peer_list = v16;
    sub_40824(v16 + 16, 0, 0);
    sub_262E8((__int16 *)((char *)&dword_80 + 1), v16, (int)"assoc %d", *(unsigned __int16 *)(v16 + 60));
  }
  return v16;
}
