int __fastcall sub_4C494(int a1, _DWORD *a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r5
  int v6; // r6
  int v8; // r10
  unsigned int v9; // r4
  unsigned __int8 *v10; // r7
  char *v11; // r4
  int v12; // r0
  bool v13; // r7
  signed int v14; // r0
  char *v15; // r2
  int v16; // r3
  int v17; // t1
  void *v18; // r0
  const char *v19; // r3
  int v20; // r6
  double v21; // d7
  size_t v22; // r1
  int v23; // r2
  size_t v24; // r3
  size_t v25; // r1
  void *v26; // r0
  void *v27; // r0
  size_t v28; // r12
  int v29; // r10
  int *v30; // r3
  int v31; // r2
  int v32; // r1
  int *v33; // r12
  int v34; // r0
  int v35; // r1
  int v36; // r2
  int v37; // r3
  int *v38; // r12
  int v39; // r0
  int v40; // r1
  int v41; // r2
  int v42; // r3
  int v43; // r0
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int v47; // r12
  const char *v48; // r0
  char *v49; // r7
  const char *v50; // lr
  int v51; // r0
  int v52; // r1
  int v53; // r2
  int v54; // r3
  int *v55; // lr
  int v56; // r0
  int v57; // r1
  int v58; // r2
  int v59; // r3
  int v60; // r0
  int v61; // r1
  int v62; // r2
  int v63; // r3
  int v64; // r1
  void *v65; // r0
  signed int v66; // r7
  unsigned __int8 *v67; // r4
  int v68; // r6
  void *v69; // r0
  char *v70; // r3
  _BYTE v71[4]; // [sp+18h] [bp-964h] BYREF
  char *v72; // [sp+1Ch] [bp-960h]
  const char *v73; // [sp+20h] [bp-95Ch]
  int v74; // [sp+24h] [bp-958h]
  pthread_rwlock_t *v75; // [sp+28h] [bp-954h]
  pthread_mutex_t *v76; // [sp+2Ch] [bp-950h]
  size_t v77; // [sp+30h] [bp-94Ch]
  const char *v78; // [sp+34h] [bp-948h]
  const char *v79; // [sp+38h] [bp-944h]
  const char *v80; // [sp+3Ch] [bp-940h]
  const char *v81; // [sp+40h] [bp-93Ch]
  char *v82; // [sp+44h] [bp-938h]
  char *v83; // [sp+48h] [bp-934h]
  size_t v84; // [sp+4Ch] [bp-930h]
  size_t v85; // [sp+50h] [bp-92Ch]
  _BOOL4 v86; // [sp+54h] [bp-928h]
  const char *v87; // [sp+58h] [bp-924h]
  const char *v88; // [sp+5Ch] [bp-920h]
  const char *v89; // [sp+60h] [bp-91Ch]
  const char *v90; // [sp+64h] [bp-918h]
  char *s; // [sp+68h] [bp-914h]
  void *ptr; // [sp+6Ch] [bp-910h]
  char v93[228]; // [sp+74h] [bp-908h] BYREF
  _DWORD v94[513]; // [sp+158h] [bp-824h] BYREF

  v4 = (_DWORD *)sub_6E1C4(a2, 4);
  v5 = v4;
  if ( !v4 || *v4 != 1 )
    return 0;
  v8 = sub_6E1A8();
  if ( v8 <= 0 )
  {
    v6 = 0;
LABEL_20:
    v11 = sub_49188(a2, 0);
    v90 = (const char *)sub_49124(a2, 1u);
    ptr = sub_49188(a2, 2u);
    s = sub_49188(a2, 3u);
    v89 = (const char *)sub_49124(a2, 5u);
    v88 = (const char *)sub_49124(a2, 6u);
    v87 = (const char *)sub_49124(a2, 7u);
    v12 = sub_6E1C4(a2, 8);
    v13 = v12;
    if ( v12 )
    {
      v13 = *(_DWORD *)sub_6E1C4(a2, 8) == 5;
      v86 = v13;
    }
    else
    {
      v86 = 0;
    }
    if ( v11 )
    {
      v14 = strlen(v11);
      if ( v14 )
      {
        v15 = v11;
        while ( 1 )
        {
          v17 = (unsigned __int8)*v15++;
          v16 = v17;
          if ( (unsigned int)(v17 - 32) > 0x5E )
            break;
          if ( v14 <= v15 - v11 )
          {
            if ( !sub_49208(v90, "parse_notify", 1969)
              || !sub_49208((const char *)ptr, "parse_notify", 1969)
              || !sub_49208(s, "parse_notify", 1970)
              || !sub_49208(v89, "parse_notify", 1970)
              || !sub_49208(v88, "parse_notify", 1970)
              || !sub_49208(v87, "parse_notify", 1971) )
            {
              goto LABEL_34;
            }
            v76 = (pthread_mutex_t *)(a1 + 212);
            if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 212)) )
              sub_494CC("parse_notify", 1980);
            v75 = (pthread_rwlock_t *)(a1 + 236);
            sub_49358((pthread_rwlock_t *)(a1 + 236), "parse_notify", 1980);
            v18 = *(void **)(a1 + 672);
            v81 = (const char *)(a1 + 1712);
            free(v18);
            v19 = v90;
            *(_DWORD *)(a1 + 672) = v11;
            snprintf((char *)(a1 + 1712), 0x41u, "%s", v19);
            v85 = strlen((const char *)ptr) >> 1;
            v80 = (const char *)(a1 + 1780);
            v84 = strlen(s) >> 1;
            snprintf((char *)(a1 + 1780), 9u, "%s", v89);
            v79 = (const char *)(a1 + 1792);
            snprintf((char *)(a1 + 1792), 9u, "%s", v88);
            v78 = (const char *)(a1 + 1804);
            v20 = 0;
            snprintf((char *)(a1 + 1804), 9u, "%s", v87);
            *(_BYTE *)(a1 + 680) = v13;
            v21 = *(double *)(a1 + 1816);
            v22 = v85;
            if ( v21 > 0.0 )
              *(double *)(a1 + 1824) = v21;
            v23 = *(_DWORD *)(a1 + 632);
            v24 = v22 + *(_DWORD *)(a1 + 1564);
            v25 = v84;
            *(_DWORD *)(a1 + 1576) = v24;
            v77 = v25 + v23 + v24;
            *(_DWORD *)(a1 + 1572) = v77;
            while ( *(_DWORD *)(a1 + 1708) > v20 )
            {
              v26 = *(void **)(*(_DWORD *)(a1 + 676) + 4 * v20++);
              free(v26);
            }
            if ( v8 )
            {
              v65 = sub_4973C(*(void **)(a1 + 676), 4 * v8 + 1, "util.c", "parse_notify", 2001);
              v73 = "util.c";
              v66 = 0;
              *(_DWORD *)(a1 + 676) = v65;
              v83 = &byte_242F18;
              v72 = &byte_1AECC5;
              v82 = v11;
              do
              {
                v74 = 4 * v66;
                if ( v66 >= v8 )
                {
                  v11 = v82;
                  *(_DWORD *)(a1 + 1708) = v8;
                  if ( v8 > 1 )
                    goto LABEL_58;
                  goto LABEL_57;
                }
                v67 = (unsigned __int8 *)sub_49188(v5, v66);
                v68 = *(_DWORD *)(a1 + 676);
                v69 = sub_49624(0x20u, v73, "parse_notify", 2006);
                v70 = v83;
                *(_DWORD *)(v68 + 4 * v66) = v69;
                if ( *v70 && *v72 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
                {
                  snprintf((char *)v94, 0x800u, "merkle %d: %s", v66, v67);
                  sub_47AB4(7, (const char *)v94, 0);
                }
                ++v66;
                v6 = sub_49940(*(_BYTE **)(*(_DWORD *)(a1 + 676) + v74), v67, 32);
                free(v67);
              }
              while ( v6 );
              v11 = v82;
              if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
              {
                v50 = "Failed to convert merkle to merkle_bin in parse_notify";
                goto LABEL_129;
              }
              goto LABEL_120;
            }
            *(_DWORD *)(a1 + 1708) = 0;
            v83 = &byte_242F18;
LABEL_57:
            ++*(_QWORD *)(a1 + 376);
LABEL_58:
            if ( v86 )
              *(_QWORD *)(a1 + 624) = 0;
            snprintf(
              v93,
              0xE1u,
              "%s%s%s%s%s%s%s",
              v80,
              v81,
              "0000000000000000000000000000000000000000000000000000000000000000",
              v78,
              v79,
              "00000000",
              off_9EDA4[0]);
            v6 = sub_49940((_BYTE *)(a1 + 1580), (unsigned __int8 *)v93, 112);
            if ( v6 )
            {
              v6 = sub_49940(v71, (unsigned __int8 *)ptr, v85);
              if ( v6 )
              {
                v6 = sub_49940(v71, (unsigned __int8 *)s, v84);
                if ( v6 )
                {
                  free(*(void **)(a1 + 1568));
                  v27 = sub_496AC(v77, 1u, "util.c", "parse_notify", 2063);
                  *(_DWORD *)(a1 + 1568) = v27;
                  sub_4C150(v27, v71, v85, (int)"util.c", (int)"parse_notify", 2064);
                  v28 = *(_DWORD *)(a1 + 1564);
                  if ( v28 )
                  {
                    sub_4C150(
                      (void *)(*(_DWORD *)(a1 + 1568) + v85),
                      *(const void **)(a1 + 616),
                      v28,
                      (int)"util.c",
                      (int)"parse_notify",
                      2066);
                    v28 = *(_DWORD *)(a1 + 1564);
                  }
                  sub_4C150(
                    (void *)(*(_DWORD *)(a1 + 1568) + v28 + *(_DWORD *)(a1 + 632) + v85),
                    v71,
                    v84,
                    (int)"util.c",
                    (int)"parse_notify",
                    2067);
                  v29 = (unsigned __int8)byte_1AECC5;
                  if ( byte_1AECC5 )
                  {
                    v48 = sub_4988C(*(_DWORD *)(a1 + 1568), *(_DWORD *)(a1 + 1572));
                    v49 = (char *)v48;
                    if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
                    {
                      snprintf((char *)v94, 0x800u, "Pool %d coinbase %s", *(_DWORD *)a1, v48);
                      sub_47AB4(7, (const char *)v94, 0);
                    }
                    v6 = v29;
                    free(v49);
                  }
                  goto LABEL_66;
                }
                if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
                {
                  v33 = (int *)&unk_82D9C;
LABEL_113:
                  v34 = *v33;
                  v35 = v33[1];
                  v36 = v33[2];
                  v37 = v33[3];
                  v38 = v33 + 4;
                  v94[0] = v34;
                  v94[1] = v35;
                  v94[2] = v36;
                  v94[3] = v37;
                  v39 = *v38;
                  v40 = v38[1];
                  v41 = v38[2];
                  v42 = v38[3];
                  v38 += 4;
                  v94[4] = v39;
                  v94[5] = v40;
                  v94[6] = v41;
                  v94[7] = v42;
                  v43 = *v38;
                  v44 = v38[1];
                  v45 = v38[2];
                  v46 = v38[3];
                  v47 = v38[4];
                  v94[8] = v43;
                  v94[9] = v44;
                  v94[10] = v45;
                  v94[11] = v46;
                  LOBYTE(v94[12]) = v47;
                  sub_47AB4(3, (const char *)v94, 0);
                  goto LABEL_66;
                }
              }
              else if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
              {
                v33 = (int *)&unk_82D68;
                goto LABEL_113;
              }
LABEL_120:
              v6 = 0;
              goto LABEL_66;
            }
            if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 2 )
              goto LABEL_120;
            v50 = "Failed to convert header to header_bin in parse_notify";
LABEL_129:
            v51 = *(_DWORD *)v50;
            v52 = *((_DWORD *)v50 + 1);
            v53 = *((_DWORD *)v50 + 2);
            v54 = *((_DWORD *)v50 + 3);
            v55 = (int *)(v50 + 16);
            v94[0] = v51;
            v94[1] = v52;
            v94[2] = v53;
            v94[3] = v54;
            v56 = *v55;
            v57 = v55[1];
            v58 = v55[2];
            v59 = v55[3];
            v55 += 4;
            v94[4] = v56;
            v94[5] = v57;
            v94[6] = v58;
            v94[7] = v59;
            v60 = *v55;
            v61 = v55[1];
            v62 = v55[2];
            v63 = v55[3];
            v55 += 4;
            v94[8] = v60;
            v94[9] = v61;
            v94[10] = v62;
            v94[11] = v63;
            v64 = v55[1];
            v94[12] = *v55;
            LOWORD(v94[13]) = v64;
            BYTE2(v94[13]) = BYTE2(v64);
            sub_47AB4(3, (const char *)v94, 0);
LABEL_66:
            sub_493D4(v75, "parse_notify", 2076);
            sub_49450(v76, "parse_notify", 2076);
            off_9E444();
            if ( !*v83 )
              goto LABEL_106;
            if ( !byte_1AECC5 )
              goto LABEL_84;
            if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
            {
              snprintf((char *)v94, 0x800u, "job_id: %s", v11);
              sub_47AB4(7, (const char *)v94, 0);
              if ( byte_1AECC5 )
              {
                if ( !byte_244080 )
                  goto LABEL_73;
LABEL_75:
                snprintf((char *)v94, 0x800u, "prev_hash: %s", v90);
                sub_47AB4(7, (const char *)v94, 0);
                if ( byte_1AECC5 )
                {
                  if ( !byte_244080 )
                    goto LABEL_77;
                  goto LABEL_79;
                }
LABEL_94:
                if ( byte_1AECC5 )
                {
                  if ( !byte_244080 )
                    goto LABEL_96;
LABEL_98:
                  snprintf((char *)v94, 0x800u, "ntime: %s", v87);
                  sub_47AB4(7, (const char *)v94, 0);
LABEL_99:
                  if ( byte_1AECC5 )
                  {
                    if ( !byte_244080 )
                      goto LABEL_101;
                    goto LABEL_103;
                  }
                }
                goto LABEL_106;
              }
LABEL_89:
              if ( !byte_1AECC5 )
                goto LABEL_106;
              if ( !byte_244080 )
              {
LABEL_91:
                if ( !byte_1AECC4 && dword_9E320 <= 6 )
                {
LABEL_96:
                  if ( byte_1AECC4 || dword_9E320 > 6 )
                    goto LABEL_98;
LABEL_101:
                  if ( byte_1AECC4 || dword_9E320 > 6 )
                  {
LABEL_103:
                    v30 = (int *)"yes";
                    if ( !v86 )
                      v30 = &dword_80288;
                    snprintf((char *)v94, 0x800u, "clean: %s", v30);
                    sub_47AB4(7, (const char *)v94, 0);
                  }
LABEL_106:
                  free(ptr);
                  free(s);
                  v31 = dword_245168;
                  v32 = dword_24516C;
                  ++*(_DWORD *)(a1 + 116);
                  *(_QWORD *)&dword_245168 = __PAIR64__(v32, v31) + 1;
                  if ( a1 == sub_58084() )
                    byte_246370 = 1;
                  return v6;
                }
              }
              snprintf((char *)v94, 0x800u, "nbit: %s", v88);
              sub_47AB4(7, (const char *)v94, 0);
              goto LABEL_94;
            }
LABEL_73:
            if ( byte_1AECC4 || dword_9E320 > 6 )
              goto LABEL_75;
LABEL_77:
            if ( byte_1AECC4 || dword_9E320 > 6 )
            {
LABEL_79:
              snprintf((char *)v94, 0x800u, "coinbase1: %s", (const char *)ptr);
              sub_47AB4(7, (const char *)v94, 0);
              if ( !byte_1AECC5 )
                goto LABEL_99;
              if ( !byte_244080 )
                goto LABEL_81;
LABEL_83:
              snprintf((char *)v94, 0x800u, "coinbase2: %s", s);
              sub_47AB4(7, (const char *)v94, 0);
LABEL_84:
              if ( !byte_1AECC5 )
                goto LABEL_106;
              if ( !byte_244080 )
              {
LABEL_86:
                if ( !byte_1AECC4 && dword_9E320 <= 6 )
                  goto LABEL_91;
              }
              snprintf((char *)v94, 0x800u, "bbversion: %s", v89);
              sub_47AB4(7, (const char *)v94, 0);
              goto LABEL_89;
            }
LABEL_81:
            if ( byte_1AECC4 || dword_9E320 > 6 )
              goto LABEL_83;
            goto LABEL_86;
          }
        }
        if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
        {
          snprintf(
            (char *)v94,
            0x800u,
            "Invalid char 0x%x passed to valid_ascii from in %s %s():%d",
            v16,
            "util.c",
            "parse_notify",
            1969);
          goto LABEL_33;
        }
        goto LABEL_34;
      }
      if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 2 )
      {
LABEL_34:
        free(v11);
        free(ptr);
        free(s);
        return v6;
      }
      snprintf(
        (char *)v94,
        0x800u,
        "Zero length string passed to valid_ascii from in %s %s():%d",
        "util.c",
        "parse_notify",
        1969);
    }
    else
    {
      if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 2 )
        goto LABEL_34;
      snprintf(
        (char *)v94,
        0x800u,
        "Null string passed to valid_ascii from in %s %s():%d",
        "util.c",
        "parse_notify",
        1969);
    }
LABEL_33:
    sub_47AB4(3, (const char *)v94, 0);
    goto LABEL_34;
  }
  v9 = 0;
  v6 = 0;
  while ( 1 )
  {
    memset(v93, 0, 0x20u);
    v10 = (unsigned __int8 *)sub_49188(v5, v9);
    if ( !v10 )
      return v6;
    v6 = sub_49940(v93, v10, 32);
    if ( !v6 )
    {
      if ( (byte_244080 || byte_1AECC4 || dword_9E320 > 2)
        && ((snprintf((char *)v94, 0x800u, "merkle %d: %s", v9, (const char *)v10),
             sub_47AB4(3, (const char *)v94, 0),
             byte_244080)
         || byte_1AECC4)
        || dword_9E320 > 2 )
      {
        strcpy((char *)v94, "Failed to convert merkle to merkle_bin in parse_notify");
        sub_47AB4(3, (const char *)v94, 0);
      }
      free(v10);
      return v6;
    }
    ++v9;
    free(v10);
    if ( v8 == v9 )
      goto LABEL_20;
  }
}
