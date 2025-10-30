int __fastcall sub_314D4(int a1, int a2)
{
  int v5; // r0
  unsigned int v6; // lr
  int v7; // r0
  int v8; // r4
  int *v9; // r9
  int v10; // r7
  _BOOL4 v11; // r3
  unsigned int v12; // r1
  int v13; // r7
  int v14; // r10
  unsigned int v15; // r2
  unsigned int v16; // r1
  __int16 v17; // r9
  bool v18; // cc
  int v19; // r10
  int v20; // r2
  int v21; // r2
  int v22; // r1
  int v23; // r3
  int v24; // r2
  int v25; // r0
  int v26; // r1
  int v27; // r3
  int v28; // r7
  int v29; // r2
  int v30; // r1
  _BOOL4 v31; // lr
  float v32; // r2
  int v33; // r4
  unsigned int v34; // r2
  int v35; // r0
  int v36; // r1
  int v37; // r7
  bool v38; // cf
  int v39; // r0
  int v40; // r1
  int v41; // r6
  int v42; // r0
  int v43; // r1
  _DWORD *v44; // r2
  int v45; // r1
  char v46; // r2
  int v47; // r2
  _DWORD *v48; // r7
  unsigned int v49; // r1
  unsigned int v50; // lr
  int v51; // r1
  int v52; // r1
  int v53; // r1
  int v54; // r2
  _DWORD *v55; // r0
  int v56; // r2
  char v57; // [sp+8h] [bp-24h]
  int v58; // [sp+Ch] [bp-20h]
  int v59; // [sp+10h] [bp-1Ch]

  if ( !a1 )
    sub_6FC54("ntp_monitor.c", 328, 0, "rbufp != ((void *)0)");
  if ( !mon_enabled )
    return a2 & 0xF7BF;
  v5 = sub_6D544(a1 + 4);
  v6 = *(unsigned __int8 *)(a1 + 88);
  v57 = v6 & 7;
  v58 = (v6 >> 3) & 7;
  v7 = v5 & ~(-1 << mon_hash_bits);
  v8 = *(_DWORD *)(mon_hash + 4 * v7);
  v9 = (int *)(mon_hash + 4 * v7);
  v59 = 4 * v7;
  if ( v8 )
  {
    v10 = *(unsigned __int16 *)(a1 + 4);
    do
    {
      if ( *(unsigned __int16 *)(v8 + 44) == v10 )
      {
        if ( v10 == 2 )
        {
          v11 = *(_DWORD *)(v8 + 48) == *(_DWORD *)(a1 + 8);
        }
        else
        {
          if ( memcmp((const void *)(v8 + 52), (const void *)(a1 + 12), 0x10u) )
            goto LABEL_7;
          v11 = *(_DWORD *)(v8 + 68) == *(_DWORD *)(a1 + 28);
        }
        if ( v11 )
        {
          v12 = *(_DWORD *)(a1 + 76);
          v13 = *(_DWORD *)(a1 + 72) - *(_DWORD *)(v8 + 24);
          v14 = *(_DWORD *)(v8 + 28);
          v15 = v12;
          *(_DWORD *)(v8 + 24) = *(_DWORD *)(a1 + 72);
          *(_DWORD *)(v8 + 28) = v12;
          v16 = v12 - v14;
          v17 = *(_WORD *)(a1 + 6);
          v18 = v15 - v14 > v15;
          v19 = *(_DWORD *)(v8 + 4);
          *(_BYTE *)(v8 + 42) = v57 | (8 * v58);
          v20 = v18;
          if ( v16 >= 0x80000000 )
            v21 = 1 - v20;
          else
            v21 = -v20;
          v22 = *(_DWORD *)(v8 + 8);
          v23 = v21 + v13;
          v24 = *(_DWORD *)(v8 + 36);
          *(_WORD *)(v8 + 46) = v17;
          v25 = v23 + 1;
          *(_DWORD *)(v8 + 36) = v24 + 1;
          *(_DWORD *)(v19 + 8) = v22;
          v26 = *(_DWORD *)(v8 + 32);
          *(_DWORD *)(*(_DWORD *)(v8 + 8) + 4) = v19;
          v27 = (v26 - v23) & ~((v26 - v23) >> 31);
          v28 = dword_109334;
          *(_DWORD *)(v8 + 4) = &mon_mru_list;
          *(_DWORD *)(v8 + 8) = v28;
          *(_DWORD *)(dword_109334 + 4) = v8;
          dword_109334 = v8;
          *(_DWORD *)(v8 + 32) = v27;
          v29 = 1 << ntp_minpoll;
          v30 = 8 * (1 << ntp_minpoll);
          v31 = v27 + v29 < 8 * v29;
          if ( v25 < ntp_minpkt )
            v31 = 0;
          if ( v31 )
          {
            *(_DWORD *)(v8 + 32) = v27 + v29 - 2;
            a2 &= 0xF7BFu;
          }
          else
          {
            if ( v27 < v30 )
              *(_DWORD *)(v8 + 32) = 9 * v29;
            else
              a2 &= ~0x800u;
            if ( v27 >= v30 )
              a2 = (unsigned __int16)a2;
          }
          *(_WORD *)(v8 + 40) = a2;
          return a2;
        }
      }
LABEL_7:
      v8 = *(_DWORD *)v8;
    }
    while ( v8 );
  }
  v32 = mru_entries;
  if ( LODWORD(mru_entries) < (unsigned int)mru_mindepth )
  {
    v33 = dword_BBE9C;
    if ( dword_BBE9C )
    {
LABEL_33:
      dword_BBE9C = *(_DWORD *)v33;
      goto LABEL_34;
    }
    sub_3104C();
    v33 = dword_BBE9C;
    if ( dword_BBE9C )
    {
      v32 = mru_entries;
      v9 = (int *)(mon_hash + v59);
      goto LABEL_33;
    }
LABEL_44:
    sub_6FC54("ntp_monitor.c", 471, 2, "mon != ((void *)0)");
  }
  v48 = (_DWORD *)dword_109330;
  if ( (_UNKNOWN *)dword_109330 == &mon_mru_list )
  {
    v48 = 0;
    v53 = 0;
  }
  else if ( dword_109330 )
  {
    v49 = *(_DWORD *)(a1 + 76);
    v50 = v49 - *(_DWORD *)(dword_109330 + 28);
    v51 = v49 < *(_DWORD *)(dword_109330 + 28);
    if ( v50 >= 0x80000000 )
      v52 = 1 - v51;
    else
      v52 = -v51;
    v53 = v52 + *(_DWORD *)(a1 + 72) - *(_DWORD *)(dword_109330 + 24);
    if ( v53 > (int)mru_maxage )
    {
      v54 = *(_DWORD *)(dword_109330 + 4);
      v55 = (_DWORD *)dword_109330;
      v33 = dword_109330;
      *(_DWORD *)(v54 + 8) = *(_DWORD *)(dword_109330 + 8);
      *(_DWORD *)(v48[2] + 4) = v54;
      sub_30F28(v55);
      memset(v48, 0, 0x48u);
      v32 = mru_entries;
      v9 = (int *)(mon_hash + v59);
      goto LABEL_34;
    }
  }
  else
  {
    v53 = 0;
  }
  v33 = dword_BBE9C;
  if ( dword_BBE9C )
  {
LABEL_52:
    dword_BBE9C = *(_DWORD *)v33;
    goto LABEL_34;
  }
  if ( mru_alloc < (unsigned int)mru_maxdepth )
  {
    sub_3104C();
    v33 = dword_BBE9C;
    if ( !dword_BBE9C )
      goto LABEL_44;
    v32 = mru_entries;
    v9 = (int *)(mon_hash + v59);
    goto LABEL_52;
  }
  if ( (double)sub_69A2C(&dword_BBE98, v53) * 1.16415322e-10 > (double)v53 / (double)(int)mon_age )
    return a2 & 0xF7BF;
  v56 = v48[1];
  *(_DWORD *)(v56 + 8) = v48[2];
  *(_DWORD *)(v48[2] + 4) = v56;
  sub_30F28(v48);
  memset(v48, 0, 0x48u);
  v33 = (int)v48;
  v32 = mru_entries;
  v9 = (int *)(mon_hash + v59);
LABEL_34:
  v34 = LODWORD(v32) + 1;
  LODWORD(mru_entries) = v34;
  a2 &= 0xF7BFu;
  v35 = *(_DWORD *)(a1 + 72);
  v36 = *(_DWORD *)(a1 + 76);
  v37 = mru_peakentries;
  v38 = v34 >= mru_peakentries;
  *(_DWORD *)(v33 + 24) = v35;
  *(_DWORD *)(v33 + 28) = v36;
  if ( !v38 )
    v34 = v37;
  *(_DWORD *)(v33 + 16) = v35;
  *(_DWORD *)(v33 + 20) = v36;
  mru_peakentries = v34;
  *(_WORD *)(v33 + 40) = a2;
  *(_DWORD *)(v33 + 32) = 0;
  *(_DWORD *)(v33 + 36) = 1;
  v39 = *(_DWORD *)(a1 + 8);
  v40 = *(_DWORD *)(a1 + 12);
  v41 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(v33 + 44) = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(v33 + 48) = v39;
  *(_DWORD *)(v33 + 52) = v40;
  *(_DWORD *)(v33 + 56) = v41;
  v42 = *(_DWORD *)(a1 + 24);
  v43 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(v33 + 60) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(v33 + 64) = v42;
  *(_DWORD *)(v33 + 68) = v43;
  *(_BYTE *)(v33 + 42) = v57 | (8 * v58);
  v44 = *(_DWORD **)(a1 + 60);
  *(_DWORD *)(v33 + 12) = v44;
  v45 = *(_DWORD *)(a1 + 64);
  if ( (v44[36] & 0x40) != 0 && v45 == v44[3] )
  {
    v46 = 2;
  }
  else if ( v44[4] == v45 )
  {
    v46 = 4;
  }
  else
  {
    v46 = 1;
  }
  *(_BYTE *)(v33 + 43) = v46;
  *(_DWORD *)v33 = *v9;
  *v9 = v33;
  v47 = dword_109334;
  *(_DWORD *)(v33 + 4) = &mon_mru_list;
  *(_DWORD *)(v33 + 8) = v47;
  *(_DWORD *)(dword_109334 + 4) = v33;
  dword_109334 = v33;
  return a2;
}
