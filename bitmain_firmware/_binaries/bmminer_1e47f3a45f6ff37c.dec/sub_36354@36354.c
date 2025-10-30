int __fastcall sub_36354(int a1, int a2)
{
  int v4; // r2
  int v5; // r0
  __int64 v6; // r2
  int v7; // r8
  int v8; // r1
  int *v9; // r1
  char *v10; // r0
  unsigned int v11; // t1
  int v12; // r1
  int *v13; // r2
  unsigned int v14; // t1
  time_t v15; // r0
  double v16; // d8
  unsigned __int64 v17; // r0
  int v18; // r7
  char *v19; // r7
  int v20; // r0
  double v21; // d16
  double v22; // d16
  double v23; // d16
  double v25; // d8
  double v26; // d8
  double v27; // d17
  double v28; // d16
  bool v29; // cc
  int v30; // r0
  int v31; // r0
  char *v32; // r10
  const char *v33; // r0
  char *v34; // r9
  int v35; // r3
  int v36; // r3
  int v37; // r3
  int v38; // r0
  int *v39; // r0
  int v40; // r3
  int *v41; // r0
  int v42; // r3
  int *v43; // r0
  int v44; // r3
  int *v45; // r0
  int v46; // r3
  int *v47; // r0
  int v48; // r3
  int *v49; // r0
  int v50; // r3
  int v51; // r0
  int v52; // [sp+8h] [bp-8BCh]
  int v53; // [sp+8h] [bp-8BCh]
  int v54; // [sp+8h] [bp-8BCh]
  int v55; // [sp+8h] [bp-8BCh]
  int v56; // [sp+8h] [bp-8BCh]
  int v57; // [sp+8h] [bp-8BCh]
  pthread_mutex_t *mutex; // [sp+10h] [bp-8B4h]
  __int64 v59; // [sp+18h] [bp-8ACh] BYREF
  _BYTE v60[28]; // [sp+20h] [bp-8A4h] BYREF
  char v61; // [sp+3Ch] [bp-888h] BYREF
  _BYTE v62[28]; // [sp+40h] [bp-884h] BYREF
  int v63; // [sp+5Ch] [bp-868h] BYREF
  _BYTE v64[28]; // [sp+60h] [bp-864h] BYREF
  char v65; // [sp+7Ch] [bp-848h] BYREF
  _BYTE v66[60]; // [sp+80h] [bp-844h] BYREF
  int v67; // [sp+BCh] [bp-808h] BYREF
  char s[136]; // [sp+C0h] [bp-804h] BYREF
  int v69; // [sp+148h] [bp-77Ch] BYREF

  mutex = (pthread_mutex_t *)(a1 + 212);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 212)) )
  {
    v39 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v39, "bmminer.c", "gen_stratum_work", 1289);
    sub_3B6AC(3, s, 1, v40);
  }
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 236)) )
  {
    v41 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v41, "bmminer.c", "gen_stratum_work", 1289);
    sub_3B6AC(3, s, 1, v42);
  }
  v4 = *(_DWORD *)(a1 + 648);
  v5 = *(_DWORD *)(a1 + 1584) + *(_DWORD *)(a1 + 1592);
  v59 = *(_QWORD *)(a1 + 640);
  sub_3EA8C(v5, &v59, v4, "bmminer.c", "gen_stratum_work", 1294, v52);
  v6 = *(_QWORD *)(a1 + 640);
  *(_QWORD *)(a1 + 640) = v6 + 1;
  *(_QWORD *)(a2 + 296) = v6;
  *(_DWORD *)(a2 + 304) = *(_DWORD *)(a1 + 648);
  if ( !pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 236)) )
  {
    if ( !pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 236)) )
      goto LABEL_7;
LABEL_65:
    v45 = _errno_location();
    snprintf(s, 0x800u, "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v45, "bmminer.c", "gen_stratum_work", 1300);
    sub_3B6AC(3, s, 1, v46);
    if ( !pthread_mutex_unlock(mutex) )
      goto LABEL_8;
    goto LABEL_66;
  }
  v43 = _errno_location();
  snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v43, "bmminer.c", "gen_stratum_work", 1300);
  sub_3B6AC(3, s, 1, v44);
  if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 236)) )
    goto LABEL_65;
LABEL_7:
  if ( !pthread_mutex_unlock(mutex) )
    goto LABEL_8;
LABEL_66:
  v47 = _errno_location();
  snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v47, "bmminer.c", "gen_stratum_work", 1300);
  sub_3B6AC(3, s, 1, v48);
LABEL_8:
  sub_3CED0(*(_DWORD *)(a1 + 1584), *(_DWORD *)(a1 + 1588));
  sub_3CED0((int)s, 0x20u);
  sub_3EA8C(v62, v60, 32, "bmminer.c", "gen_stratum_work", 1304, v53);
  if ( *(int *)(a1 + 1724) > 0 )
  {
    v7 = 0;
    do
    {
      v8 = *(_DWORD *)(*(_DWORD *)(a1 + 692) + 4 * v7++);
      sub_3EA8C(v64, v8, 32, "bmminer.c", "gen_stratum_work", 1308, v54);
      sub_3CED0((int)v62, 0x40u);
      sub_3CED0((int)s, 0x20u);
      sub_3EA8C(v62, v60, 32, "bmminer.c", "gen_stratum_work", 1310, v55);
    }
    while ( *(_DWORD *)(a1 + 1724) > v7 );
  }
  v9 = (int *)&v61;
  v10 = (char *)&v59 + 4;
  do
  {
    v11 = v9[1];
    ++v9;
    *((_DWORD *)v10 + 1) = bswap32(v11);
    v10 += 4;
  }
  while ( v9 != &v63 );
  sub_3EA8C(a2, a1 + 1596, 112, "bmminer.c", "gen_stratum_work", 1319, v54);
  sub_3EA8C(a2 + 36, v60, 32, "bmminer.c", "gen_stratum_work", 1320, v56);
  *(_QWORD *)(a2 + 312) = *(_QWORD *)(a1 + 1840);
  *(_DWORD *)(a2 + 288) = _strdup(*(const char **)(a1 + 688));
  *(_DWORD *)(a2 + 320) = _strdup(*(const char **)(a1 + 628));
  *(_DWORD *)(a2 + 308) = _strdup((const char *)(a1 + 1820));
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 236)) )
  {
    v49 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v49,
      "bmminer.c",
      "gen_stratum_work",
      1331);
    sub_3B6AC(3, s, 1, v50);
  }
  off_B31B8();
  if ( byte_4B9A22 )
  {
    v32 = (char *)sub_3D370(a2, 112);
    v33 = (const char *)sub_3D370(v60, 32);
    v34 = (char *)v33;
    if ( byte_4B9A22 )
    {
      if ( !byte_5C0EFC && !byte_4B9A21 && dword_B3094 <= 6 )
        goto LABEL_55;
      snprintf(s, 0x800u, "Generated stratum merkle %s", v33);
      sub_3B6AC(7, s, 0, v35);
      if ( !byte_4B9A22 )
        goto LABEL_61;
      if ( !byte_5C0EFC )
      {
LABEL_55:
        if ( !byte_4B9A21 && dword_B3094 <= 6 )
          goto LABEL_58;
      }
      snprintf(s, 0x800u, "Generated stratum header %s", v32);
      sub_3B6AC(7, s, 0, v36);
      if ( byte_4B9A22 )
      {
        if ( byte_5C0EFC )
        {
LABEL_60:
          snprintf(
            s,
            0x800u,
            "Work job_id %s nonce2 %llu ntime %s",
            *(const char **)(a2 + 288),
            *(_QWORD *)(a2 + 296),
            *(const char **)(a2 + 308));
          sub_3B6AC(7, s, 0, v37);
          goto LABEL_61;
        }
LABEL_58:
        if ( !byte_4B9A21 && dword_B3094 <= 6 )
          goto LABEL_61;
        goto LABEL_60;
      }
    }
LABEL_61:
    free(v32);
    free(v34);
  }
  v12 = a2 - 4;
  v13 = (int *)&v65;
  do
  {
    v14 = *(_DWORD *)(v12 + 4);
    v12 += 4;
    v13[1] = bswap32(v14);
    ++v13;
  }
  while ( v13 != &v67 );
  sub_3CD04(s, v12);
  sub_3CD34((int)s, (int)v66, 0x40u);
  sub_3EA8C(a2 + 128, &v69, 32, "bmminer.c", "calc_midstate", 1050, v57);
  sub_360E0(a2 + 160);
  ++dword_5C30AC;
  if ( time(0) - dword_B6AE4 > 5 )
  {
    v15 = time(0);
    dword_B6AE8 = dword_5C30AC;
    dword_B6AE4 = v15;
  }
  v16 = *(double *)(a2 + 312);
  *(_BYTE *)(a2 + 284) = 1;
  *(_DWORD *)(a2 + 260) = a1;
  *(_DWORD *)(a2 + 248) = 0;
  *(_BYTE *)(a2 + 280) = 0;
  *(_DWORD *)(a2 + 336) = 0;
  *(_BYTE *)(a2 + 440) = 83;
  *(_DWORD *)(a2 + 244) = 60;
  if ( v16 == 0.0 )
  {
    v25 = sub_8FDB4(*(_DWORD *)(a2 + 184), *(_DWORD *)(a2 + 188)) * 6.27710174e57;
    v26 = v25 + sub_8FDB4(*(_DWORD *)(a2 + 176), *(_DWORD *)(a2 + 180)) * 3.40282367e38;
    v27 = sub_8FDB4(*(_DWORD *)(a2 + 168), *(_DWORD *)(a2 + 172));
    v28 = v26 + v27 * 1.84467441e19 + sub_8FDB4(*(_DWORD *)(a2 + 160), *(_DWORD *)(a2 + 164));
    v16 = 2.69595353e67;
    if ( v28 == 0.0 )
    {
      v17 = -1;
    }
    else
    {
      v16 = 2.69595353e67 / v28;
      round();
      v17 = sub_8FE80(COERCE_UNSIGNED_INT64(2.69595353e67 / v28), HIDWORD(COERCE_UNSIGNED_INT64(2.69595353e67 / v28)));
    }
    *(double *)(a2 + 376) = v16;
  }
  else
  {
    *(double *)(a2 + 376) = v16;
    round();
    v17 = sub_8FE80(LODWORD(v16), HIDWORD(v16));
  }
  *(double *)(a1 + 480) = v16;
  v18 = *(_DWORD *)(a2 + 260);
  *(_WORD *)s = 0;
  v19 = (char *)(v18 + 48);
  if ( v17 > 0xDE0B6B3A763FFFFLL )
  {
    v20 = sub_8FE20(v17, HIDWORD(v17), -1530494976, 232830);
    strcpy(s, "E");
    v21 = (double)v20 / 1000.0;
LABEL_24:
    snprintf(v19, 8u, "%.3g%s", v21, s);
    goto LABEL_25;
  }
  v29 = HIDWORD(v17) > (unsigned int)&loc_38D7C + 2;
  if ( (_UNKNOWN *)HIDWORD(v17) == (_UNKNOWN *)((char *)&loc_38D7C + 2) )
    v29 = (unsigned int)v17 > 0xA4C67FFF;
  if ( v29 )
  {
    v30 = sub_8FE20(v17, HIDWORD(v17), -727379968, 232);
    strcpy(s, "P");
    v21 = (double)v30 / 1000.0;
    goto LABEL_24;
  }
  if ( v17 > 0xE8D4A50FFFLL )
  {
    v38 = sub_8FE20(v17, HIDWORD(v17), 1000000000, 0);
    strcpy(s, "T");
    v21 = (double)v38 / 1000.0;
    goto LABEL_24;
  }
  if ( v17 > 0x3B9AC9FF )
  {
    v31 = sub_8FE20(v17, HIDWORD(v17), &unk_F4240, 0);
    strcpy(s, "G");
    v21 = (double)v31 / 1000.0;
    goto LABEL_24;
  }
  if ( v17 > (unsigned int)&unk_F423F )
  {
    v51 = sub_8FE20(v17, HIDWORD(v17), 1000, 0);
    strcpy(s, "M");
    v21 = (double)v51 / 1000.0;
    goto LABEL_24;
  }
  if ( v17 > 0x3E7 )
  {
    strcpy(s, "K");
    v21 = (double)(int)v17 / 1000.0;
    goto LABEL_24;
  }
  snprintf(v19, 8u, "%d%s", (_DWORD)v17, s);
LABEL_25:
  v22 = *(double *)(a1 + 464);
  if ( v22 == v16 )
  {
    ++*(_DWORD *)(a1 + 488);
    goto LABEL_27;
  }
  if ( v22 <= v16 )
  {
    if ( v22 != 0.0 )
    {
LABEL_27:
      v23 = *(double *)(a1 + 472);
      if ( v23 != v16 )
        goto LABEL_28;
LABEL_37:
      ++*(_DWORD *)(a1 + 492);
      return sub_3DFCC(a2 + 264);
    }
    *(double *)(a1 + 464) = v16;
    *(_DWORD *)(a1 + 488) = 1;
  }
  else
  {
    *(double *)(a1 + 464) = v16;
    *(_DWORD *)(a1 + 488) = 1;
  }
  v23 = *(double *)(a1 + 472);
  if ( v23 == v16 )
    goto LABEL_37;
LABEL_28:
  if ( v23 < v16 )
  {
    *(double *)(a1 + 472) = v16;
    *(_DWORD *)(a1 + 492) = 1;
  }
  return sub_3DFCC(a2 + 264);
}
