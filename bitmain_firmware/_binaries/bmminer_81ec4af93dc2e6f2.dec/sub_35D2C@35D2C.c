int __fastcall sub_35D2C(int a1, int a2)
{
  pthread_mutex_t *v2; // r9
  int v5; // lr
  int v6; // r3
  int v7; // r2
  int v8; // r3
  int v9; // r2
  int v10; // r6
  int v11; // r1
  int *v12; // r2
  char *v13; // r0
  unsigned int v14; // t1
  int v15; // r1
  int *v16; // r2
  unsigned int v17; // t1
  double v18; // d8
  unsigned __int64 v19; // r0
  int v20; // r6
  char *v21; // r6
  int v22; // r0
  double v23; // d7
  double v24; // d7
  double v25; // d7
  double v27; // d8
  double v28; // d8
  double v29; // d8
  double v30; // d7
  int v31; // r0
  int v32; // r0
  char *v33; // r10
  const char *v34; // r0
  char *v35; // r11
  int v36; // r3
  int v37; // r3
  int v38; // r3
  int v39; // r0
  int *v40; // r0
  int v41; // r3
  int *v42; // r0
  int v43; // r3
  int *v44; // r0
  int v45; // r3
  int *v46; // r0
  int v47; // r3
  int *v48; // r0
  int v49; // r3
  int *v50; // r0
  int v51; // r3
  int v52; // r0
  int v53; // [sp+8h] [bp-8BCh]
  int v54; // [sp+8h] [bp-8BCh]
  int v55; // [sp+8h] [bp-8BCh]
  int v56; // [sp+8h] [bp-8BCh]
  int v57; // [sp+8h] [bp-8BCh]
  int v58; // [sp+8h] [bp-8BCh]
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

  v2 = (pthread_mutex_t *)(a1 + 212);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 212)) )
  {
    v40 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v40, "bmminer.c", "gen_stratum_work", 1289);
    sub_3AF5C(3, s, 1, v41);
  }
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 236)) )
  {
    v42 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v42, "bmminer.c", "gen_stratum_work", 1289);
    sub_3AF5C(3, s, 1, v43);
  }
  v5 = *(_DWORD *)(a1 + 1568);
  v6 = *(_DWORD *)(a1 + 1576);
  v7 = *(_DWORD *)(a1 + 632);
  v59 = *(_QWORD *)(a1 + 624);
  sub_3E3A8(v5 + v6, &v59, v7, "bmminer.c", "gen_stratum_work", 1294, v53);
  v8 = *(_DWORD *)(a1 + 624);
  v9 = *(_DWORD *)(a1 + 628);
  *(_DWORD *)(a1 + 624) = v8 + 1;
  *(_DWORD *)(a1 + 628) = __CFADD__(v8, 1) + v9;
  *(_DWORD *)(a2 + 296) = v8;
  *(_DWORD *)(a2 + 300) = v9;
  *(_DWORD *)(a2 + 304) = *(_DWORD *)(a1 + 632);
  if ( !pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 236)) )
  {
    if ( !pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 236)) )
      goto LABEL_7;
LABEL_62:
    v46 = _errno_location();
    snprintf(s, 0x800u, "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v46, "bmminer.c", "gen_stratum_work", 1300);
    sub_3AF5C(3, s, 1, v47);
    if ( !pthread_mutex_unlock(v2) )
      goto LABEL_8;
    goto LABEL_63;
  }
  v44 = _errno_location();
  snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v44, "bmminer.c", "gen_stratum_work", 1300);
  sub_3AF5C(3, s, 1, v45);
  if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 236)) )
    goto LABEL_62;
LABEL_7:
  if ( !pthread_mutex_unlock(v2) )
    goto LABEL_8;
LABEL_63:
  v48 = _errno_location();
  snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v48, "bmminer.c", "gen_stratum_work", 1300);
  sub_3AF5C(3, s, 1, v49);
LABEL_8:
  sub_3C6F0(*(_DWORD *)(a1 + 1568), *(_DWORD *)(a1 + 1572));
  sub_3C6F0((int)s, 0x20u);
  sub_3E3A8(v62, v60, 32, "bmminer.c", "gen_stratum_work", 1304, v54);
  if ( *(int *)(a1 + 1708) > 0 )
  {
    v10 = 0;
    do
    {
      v11 = *(_DWORD *)(*(_DWORD *)(a1 + 676) + 4 * v10++);
      sub_3E3A8(v64, v11, 32, "bmminer.c", "gen_stratum_work", 1308, v55);
      sub_3C6F0((int)v62, 0x40u);
      sub_3C6F0((int)s, 0x20u);
      sub_3E3A8(v62, v60, 32, "bmminer.c", "gen_stratum_work", 1310, v56);
    }
    while ( *(_DWORD *)(a1 + 1708) > v10 );
  }
  v12 = (int *)&v61;
  v13 = (char *)&v59 + 4;
  do
  {
    v14 = v12[1];
    ++v12;
    *((_DWORD *)v13 + 1) = bswap32(v14);
    v13 += 4;
  }
  while ( &v63 != v12 );
  sub_3E3A8(a2, a1 + 1580, 112, "bmminer.c", "gen_stratum_work", 1319, v55);
  sub_3E3A8(a2 + 36, v60, 32, "bmminer.c", "gen_stratum_work", 1320, v57);
  *(_QWORD *)(a2 + 312) = *(_QWORD *)(a1 + 1824);
  *(_DWORD *)(a2 + 288) = _strdup(*(const char **)(a1 + 672));
  *(_DWORD *)(a2 + 320) = _strdup(*(const char **)(a1 + 612));
  *(_DWORD *)(a2 + 308) = _strdup((const char *)(a1 + 1804));
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 236)) )
  {
    v50 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v50,
      "bmminer.c",
      "gen_stratum_work",
      1331);
    sub_3AF5C(3, s, 1, v51);
  }
  off_AFD50();
  if ( byte_4B6CA6 )
  {
    v33 = (char *)sub_3CB70(a2, 112);
    v34 = (const char *)sub_3CB70(v60, 32);
    v35 = (char *)v34;
    if ( byte_4B6CA6 )
    {
      if ( !byte_5BC044 && !byte_4B6CA5 && dword_AFC2C <= 6 )
        goto LABEL_52;
      snprintf(s, 0x800u, "Generated stratum merkle %s", v34);
      sub_3AF5C(7, s, 0, v36);
      if ( !byte_4B6CA6 )
        goto LABEL_58;
      if ( !byte_5BC044 )
      {
LABEL_52:
        if ( !byte_4B6CA5 && dword_AFC2C <= 6 )
          goto LABEL_55;
      }
      snprintf(s, 0x800u, "Generated stratum header %s", v33);
      sub_3AF5C(7, s, 0, v37);
      if ( byte_4B6CA6 )
      {
        if ( byte_5BC044 )
        {
LABEL_57:
          snprintf(
            s,
            0x800u,
            "Work job_id %s nonce2 %llu ntime %s",
            *(const char **)(a2 + 288),
            *(_QWORD *)(a2 + 296),
            *(const char **)(a2 + 308));
          sub_3AF5C(7, s, 0, v38);
          goto LABEL_58;
        }
LABEL_55:
        if ( !byte_4B6CA5 && dword_AFC2C <= 6 )
          goto LABEL_58;
        goto LABEL_57;
      }
    }
LABEL_58:
    free(v33);
    free(v35);
  }
  v15 = a2 - 4;
  v16 = (int *)&v65;
  do
  {
    v17 = *(_DWORD *)(v15 + 4);
    v15 += 4;
    v16[1] = bswap32(v17);
    ++v16;
  }
  while ( &v67 != v16 );
  sub_3C528(s, v15);
  sub_3C558((int)s, (int)v66, 0x40u);
  sub_3E3A8(a2 + 128, &v69, 32, "bmminer.c", "calc_midstate", 1050, v58);
  sub_35A98(a2 + 160);
  ++dword_5BE1F4;
  if ( time(0) - dword_B3D70 > 5 )
  {
    dword_B3D70 = time(0);
    dword_B3D74 = dword_5BE1F4;
  }
  v18 = *(double *)(a2 + 312);
  *(_BYTE *)(a2 + 284) = 1;
  *(_DWORD *)(a2 + 260) = a1;
  *(_DWORD *)(a2 + 248) = 0;
  *(_BYTE *)(a2 + 280) = 0;
  *(_DWORD *)(a2 + 336) = 0;
  *(_BYTE *)(a2 + 440) = 83;
  *(_DWORD *)(a2 + 244) = 60;
  if ( v18 == 0.0 )
  {
    v27 = sub_8CA4C(*(_DWORD *)(a2 + 184), *(_DWORD *)(a2 + 188)) * 6.27710174e57;
    v28 = v27 + sub_8CA4C(*(_DWORD *)(a2 + 176), *(_DWORD *)(a2 + 180)) * 3.40282367e38;
    v29 = v28 + sub_8CA4C(*(_DWORD *)(a2 + 168), *(_DWORD *)(a2 + 172)) * 1.84467441e19;
    v30 = sub_8CA4C(*(_DWORD *)(a2 + 160), *(_DWORD *)(a2 + 164)) + v29;
    if ( v30 == 0.0 )
    {
      v18 = 2.69595353e67;
      v19 = -1;
    }
    else
    {
      v18 = 2.69595353e67 / v30;
      round();
      v19 = sub_8CB18(COERCE_UNSIGNED_INT64(2.69595353e67 / v30), HIDWORD(COERCE_UNSIGNED_INT64(2.69595353e67 / v30)));
    }
    *(double *)(a2 + 376) = v18;
  }
  else
  {
    *(double *)(a2 + 376) = v18;
    round();
    v19 = sub_8CB18(LODWORD(v18), HIDWORD(v18));
  }
  *(double *)(a1 + 480) = v18;
  v20 = *(_DWORD *)(a2 + 260);
  *(_WORD *)s = 0;
  v21 = (char *)(v20 + 48);
  if ( v19 > 0xDE0B6B3A763FFFFLL )
  {
    v22 = sub_8CAB8(v19, HIDWORD(v19), -1530494976, 232830);
    strcpy(s, "E");
    v23 = (double)v22 / 1000.0;
LABEL_24:
    snprintf(v21, 8u, "%.3g%s", v23, s);
    goto LABEL_25;
  }
  if ( v19 > 0x38D7EA4C67FFFLL )
  {
    v31 = sub_8CAB8(v19, HIDWORD(v19), -727379968, 232);
    strcpy(s, "P");
    v23 = (double)v31 / 1000.0;
    goto LABEL_24;
  }
  if ( v19 > 0xE8D4A50FFFLL )
  {
    v39 = sub_8CAB8(v19, HIDWORD(v19), 1000000000, 0);
    strcpy(s, "T");
    v23 = (double)v39 / 1000.0;
    goto LABEL_24;
  }
  if ( v19 > 0x3B9AC9FF )
  {
    v32 = sub_8CAB8(v19, HIDWORD(v19), &unk_F4240, 0);
    strcpy(s, "G");
    v23 = (double)v32 / 1000.0;
    goto LABEL_24;
  }
  if ( v19 > 0xF423F )
  {
    v52 = sub_8CAB8(v19, HIDWORD(v19), 1000, 0);
    strcpy(s, "M");
    v23 = (double)v52 / 1000.0;
    goto LABEL_24;
  }
  if ( v19 > 0x3E7 )
  {
    strcpy(s, "K");
    v23 = (double)(int)v19 / 1000.0;
    goto LABEL_24;
  }
  snprintf(v21, 8u, "%d%s", (_DWORD)v19, s);
LABEL_25:
  v24 = *(double *)(a1 + 464);
  if ( v24 == v18 )
  {
    ++*(_DWORD *)(a1 + 488);
    goto LABEL_27;
  }
  if ( v24 <= v18 )
  {
    if ( v24 != 0.0 )
    {
LABEL_27:
      v25 = *(double *)(a1 + 472);
      if ( v25 != v18 )
        goto LABEL_28;
LABEL_37:
      ++*(_DWORD *)(a1 + 492);
      return sub_3D7A0(a2 + 264);
    }
    *(double *)(a1 + 464) = v18;
    *(_DWORD *)(a1 + 488) = 1;
  }
  else
  {
    *(double *)(a1 + 464) = v18;
    *(_DWORD *)(a1 + 488) = 1;
  }
  v25 = *(double *)(a1 + 472);
  if ( v25 == v18 )
    goto LABEL_37;
LABEL_28:
  if ( v25 < v18 )
  {
    *(double *)(a1 + 472) = v18;
    *(_DWORD *)(a1 + 492) = 1;
  }
  return sub_3D7A0(a2 + 264);
}
