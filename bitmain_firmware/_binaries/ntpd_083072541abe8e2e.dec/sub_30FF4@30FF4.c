int __fastcall sub_30FF4(int a1, int a2)
{
  int v4; // r7
  int v6; // r0
  unsigned int v7; // r11
  int v8; // r0
  int v9; // r4
  int *v10; // r9
  int v11; // r11
  __int16 v12; // r10
  int v13; // r0
  unsigned int v14; // r1
  int v15; // r7
  int v16; // lr
  int v17; // r3
  unsigned int v18; // r6
  int v19; // r9
  int v20; // r3
  int v21; // r9
  int v22; // lr
  int v23; // r3
  int v24; // r7
  int v25; // r0
  int v26; // r12
  _BOOL4 v27; // r2
  float v28; // r3
  int v29; // r4
  unsigned int v30; // r3
  int v31; // r0
  int v32; // r1
  unsigned int v33; // r2
  int v34; // r1
  int v35; // r2
  int v36; // r12
  int v37; // r0
  int v38; // r1
  _DWORD *v39; // r3
  int v40; // r2
  bool v41; // zf
  int v42; // r2
  char v43; // r3
  int v44; // r3
  _BOOL4 v45; // r2
  int v46; // r7
  _DWORD *v47; // r0
  int v48; // r3
  void *v49; // r0
  int v50; // r3
  char v51; // [sp+4h] [bp-28h]
  char v52; // [sp+4h] [bp-28h]
  int v53; // [sp+8h] [bp-24h]
  int v54; // [sp+10h] [bp-1Ch]
  _DWORD *v55; // [sp+18h] [bp-14h]

  if ( !a1 )
    sub_6ECC0("ntp_monitor.c", 328, 0, "rbufp != ((void *)0)");
  if ( !mon_enabled )
    return a2 & 0xF7BF;
  v6 = sub_6C568(a1 + 4);
  v7 = *(unsigned __int8 *)(a1 + 88);
  v51 = v7 & 7;
  v53 = (v7 >> 3) & 7;
  v8 = v6 & ~(-1 << mon_hash_bits);
  v9 = *(_DWORD *)(mon_hash + 4 * v8);
  v54 = 4 * v8;
  v10 = (int *)(mon_hash + 4 * v8);
  if ( v9 )
  {
    v11 = *(unsigned __int16 *)(a1 + 4);
    while ( 1 )
    {
      if ( *(unsigned __int16 *)(v9 + 44) != v11 )
        goto LABEL_7;
      if ( v11 == 2 )
      {
        if ( *(_DWORD *)(v9 + 48) == *(_DWORD *)(a1 + 8) )
          goto LABEL_12;
        v9 = *(_DWORD *)v9;
        if ( !v9 )
          break;
      }
      else
      {
        v8 = memcmp((const void *)(v9 + 52), (const void *)(a1 + 12), 0x10u);
        if ( !v8 && *(_DWORD *)(v9 + 68) == *(_DWORD *)(a1 + 28) )
        {
LABEL_12:
          v12 = *(_WORD *)(a1 + 6);
          v13 = *(_DWORD *)(a1 + 72);
          v14 = *(_DWORD *)(a1 + 76);
          v15 = *(_DWORD *)(v9 + 4);
          v16 = *(_DWORD *)(v9 + 36) + 1;
          v17 = v13 - *(_DWORD *)(v9 + 24);
          v18 = *(_DWORD *)(v9 + 28);
          v19 = *(_DWORD *)(v9 + 8);
          *(_DWORD *)(v9 + 24) = v13;
          *(_DWORD *)(v9 + 28) = v14;
          *(_DWORD *)(v9 + 36) = v16;
          *(_BYTE *)(v9 + 42) = v51 | (8 * v53);
          *(_WORD *)(v9 + 46) = v12;
          v20 = v17 + ((__PAIR64__((v14 - v18) >> 31, v14) - v18) >> 32);
          *(_DWORD *)(v15 + 8) = v19;
          v21 = v20 + 1;
          v22 = *(_DWORD *)(v9 + 32);
          *(_DWORD *)(*(_DWORD *)(v9 + 8) + 4) = v15;
          v23 = (v22 - v20) & ~((v22 - v20) >> 31);
          v24 = dword_108314;
          *(_DWORD *)(v9 + 4) = &mon_mru_list;
          *(_DWORD *)(v9 + 8) = v24;
          *(_DWORD *)(dword_108314 + 4) = v9;
          dword_108314 = v9;
          *(_DWORD *)(v9 + 32) = v23;
          v25 = 8 << ntp_minpoll;
          v26 = v23 + (1 << ntp_minpoll);
          v27 = v21 >= ntp_minpkt;
          if ( v26 >= 8 << ntp_minpoll )
            v27 = 0;
          if ( v27 )
          {
            *(_DWORD *)(v9 + 32) = v26 - 2;
            v4 = a2 & 0xF7BF;
          }
          else
          {
            if ( v23 < v25 )
              v4 = a2;
            else
              v4 = 63487;
            if ( v23 < v25 )
              *(_DWORD *)(v9 + 32) = (1 << ntp_minpoll) + v25;
            else
              v4 &= a2;
          }
          *(_WORD *)(v9 + 40) = v4;
          return v4;
        }
LABEL_7:
        v9 = *(_DWORD *)v9;
        if ( !v9 )
          break;
      }
    }
  }
  v28 = mru_entries;
  if ( LODWORD(mru_entries) >= (unsigned int)mru_mindepth )
  {
    v29 = dword_108310;
    v55 = (_DWORD *)dword_108310;
    v45 = dword_108310 != (_DWORD)&mon_mru_list;
    if ( !dword_108310 )
      v45 = 0;
    if ( v45 )
    {
      v8 = (int)&mru_maxage;
      v46 = *(_DWORD *)(a1 + 72)
          - *(_DWORD *)(dword_108310 + 24)
          + ((__PAIR64__(
                (unsigned int)(*(_DWORD *)(a1 + 76) - *(_DWORD *)(dword_108310 + 28)) >> 31,
                *(_DWORD *)(a1 + 76))
            - *(unsigned int *)(dword_108310 + 28)) >> 32);
      if ( (int)mru_maxage < v46 )
      {
        v47 = (_DWORD *)dword_108310;
        v48 = *(_DWORD *)(dword_108310 + 4);
        v4 = a2 & 0xF7BF;
        *(_DWORD *)(v48 + 8) = *(_DWORD *)(dword_108310 + 8);
        *(_DWORD *)(*(_DWORD *)(v29 + 8) + 4) = v48;
        sub_30B44(v47);
        v49 = (void *)v29;
        goto LABEL_46;
      }
    }
    else
    {
      v55 = 0;
      v46 = 0;
    }
    v29 = dword_BAE94;
    if ( dword_BAE94 )
    {
LABEL_42:
      v4 = a2 & 0xF7BF;
      dword_BAE94 = *(_DWORD *)v29;
      goto LABEL_27;
    }
    if ( mru_alloc < (unsigned int)mru_maxdepth )
    {
      sub_30A38();
      v29 = dword_BAE94;
      if ( !dword_BAE94 )
        goto LABEL_48;
      v10 = (int *)(mon_hash + v54);
      v28 = mru_entries;
      goto LABEL_42;
    }
    if ( (double)sub_68AE4(v8, mru_alloc) * 1.16415322e-10 > (double)v46 / (double)(int)mon_age )
      return a2 & 0xF7BF;
    v4 = a2 & 0xF7BF;
    v50 = v55[1];
    *(_DWORD *)(v50 + 8) = v55[2];
    *(_DWORD *)(v55[2] + 4) = v50;
    sub_30B44(v55);
    v49 = v55;
    v29 = (int)v55;
LABEL_46:
    memset(v49, 0, 0x48u);
    v10 = (int *)(mon_hash + v54);
    v28 = mru_entries;
    goto LABEL_27;
  }
  v29 = dword_BAE94;
  if ( !dword_BAE94 )
  {
    sub_30A38();
    v29 = dword_BAE94;
    if ( !dword_BAE94 )
LABEL_48:
      sub_6ECC0("ntp_monitor.c", 471, 2, "mon != ((void *)0)");
  }
  v4 = a2 & 0xF7BF;
  dword_BAE94 = *(_DWORD *)v29;
  v10 = (int *)(mon_hash + v54);
  v28 = mru_entries;
LABEL_27:
  v30 = LODWORD(v28) + 1;
  LODWORD(mru_entries) = v30;
  v52 = v51 | (8 * v53);
  v31 = *(_DWORD *)(a1 + 72);
  v32 = *(_DWORD *)(a1 + 76);
  v33 = mru_peakentries;
  *(_DWORD *)(v29 + 24) = v31;
  *(_DWORD *)(v29 + 28) = v32;
  *(_DWORD *)(v29 + 16) = v31;
  *(_DWORD *)(v29 + 20) = v32;
  *(_WORD *)(v29 + 40) = v4;
  if ( v33 >= v30 )
    v30 = v33;
  *(_DWORD *)(v29 + 36) = 1;
  *(_DWORD *)(v29 + 32) = 0;
  mru_peakentries = v30;
  v34 = *(_DWORD *)(a1 + 8);
  v35 = *(_DWORD *)(a1 + 12);
  v36 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(v29 + 44) = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(v29 + 48) = v34;
  *(_DWORD *)(v29 + 52) = v35;
  *(_DWORD *)(v29 + 56) = v36;
  v37 = *(_DWORD *)(a1 + 20);
  v38 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(v29 + 68) = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(v29 + 60) = v37;
  *(_DWORD *)(v29 + 64) = v38;
  *(_BYTE *)(v29 + 42) = v52;
  v39 = *(_DWORD **)(a1 + 60);
  v40 = v39[36];
  *(_DWORD *)(v29 + 12) = v39;
  v41 = (v40 & 0x40) == 0;
  v42 = *(_DWORD *)(a1 + 64);
  if ( v41 || v42 != v39[3] )
  {
    if ( v39[4] == v42 )
      v43 = 4;
    else
      v43 = 1;
  }
  else
  {
    v43 = 2;
  }
  *(_BYTE *)(v29 + 43) = v43;
  *(_DWORD *)v29 = *v10;
  *v10 = v29;
  v44 = dword_108314;
  *(_DWORD *)(v29 + 4) = &mon_mru_list;
  *(_DWORD *)(v29 + 8) = v44;
  *(_DWORD *)(dword_108314 + 4) = v29;
  dword_108314 = v29;
  return v4;
}
