int __fastcall sub_2582C(int a1, _DWORD *a2)
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
  int v33; // r0
  int *v34; // r12
  int v35; // r0
  int v36; // r1
  int v37; // r2
  int v38; // r3
  int *v39; // r12
  int v40; // r0
  int v41; // r1
  int v42; // r2
  int v43; // r3
  int v44; // r0
  int v45; // r1
  int v46; // r2
  int v47; // r3
  int v48; // r12
  const char *v49; // r0
  char *v50; // r7
  const char *v51; // lr
  int v52; // r0
  int v53; // r1
  int v54; // r2
  int v55; // r3
  int *v56; // lr
  int v57; // r0
  int v58; // r1
  int v59; // r2
  int v60; // r3
  int v61; // r0
  int v62; // r1
  int v63; // r2
  int v64; // r3
  int v65; // r1
  void *v66; // r0
  signed int v67; // r7
  unsigned __int8 *v68; // r4
  int v69; // r6
  void *v70; // r0
  char *v71; // r3
  _BYTE v72[4]; // [sp+18h] [bp-964h] BYREF
  char *v73; // [sp+1Ch] [bp-960h]
  const char *v74; // [sp+20h] [bp-95Ch]
  int v75; // [sp+24h] [bp-958h]
  pthread_rwlock_t *v76; // [sp+28h] [bp-954h]
  pthread_mutex_t *v77; // [sp+2Ch] [bp-950h]
  size_t v78; // [sp+30h] [bp-94Ch]
  const char *v79; // [sp+34h] [bp-948h]
  const char *v80; // [sp+38h] [bp-944h]
  const char *v81; // [sp+3Ch] [bp-940h]
  const char *v82; // [sp+40h] [bp-93Ch]
  char *v83; // [sp+44h] [bp-938h]
  char *v84; // [sp+48h] [bp-934h]
  size_t v85; // [sp+4Ch] [bp-930h]
  size_t v86; // [sp+50h] [bp-92Ch]
  _BOOL4 v87; // [sp+54h] [bp-928h]
  const char *v88; // [sp+58h] [bp-924h]
  const char *v89; // [sp+5Ch] [bp-920h]
  const char *v90; // [sp+60h] [bp-91Ch]
  const char *v91; // [sp+64h] [bp-918h]
  char *s; // [sp+68h] [bp-914h]
  void *ptr; // [sp+6Ch] [bp-910h]
  char v94[228]; // [sp+74h] [bp-908h] BYREF
  _DWORD v95[513]; // [sp+158h] [bp-824h] BYREF

  v4 = (_DWORD *)sub_48484(a2, 4);
  v5 = v4;
  if ( !v4 || *v4 != 1 )
    return 0;
  v8 = sub_48468();
  if ( v8 <= 0 )
  {
    v6 = 0;
LABEL_20:
    v11 = sub_22520(a2, 0);
    v91 = (const char *)sub_224BC(a2, 1u);
    ptr = sub_22520(a2, 2u);
    s = sub_22520(a2, 3u);
    v90 = (const char *)sub_224BC(a2, 5u);
    v89 = (const char *)sub_224BC(a2, 6u);
    v88 = (const char *)sub_224BC(a2, 7u);
    v12 = sub_48484(a2, 8);
    v13 = v12;
    if ( v12 )
    {
      v13 = *(_DWORD *)sub_48484(a2, 8) == 5;
      v87 = v13;
    }
    else
    {
      v87 = 0;
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
            if ( !sub_225A0(v91, "parse_notify", 1969)
              || !sub_225A0((const char *)ptr, "parse_notify", 1969)
              || !sub_225A0(s, "parse_notify", 1970)
              || !sub_225A0(v90, "parse_notify", 1970)
              || !sub_225A0(v89, "parse_notify", 1970)
              || !sub_225A0(v88, "parse_notify", 1971) )
            {
              goto LABEL_34;
            }
            v77 = (pthread_mutex_t *)(a1 + 212);
            if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 212)) )
              sub_22864("parse_notify", 1980);
            v76 = (pthread_rwlock_t *)(a1 + 236);
            sub_226F0((pthread_rwlock_t *)(a1 + 236), "parse_notify", 1980);
            v18 = *(void **)(a1 + 672);
            v82 = (const char *)(a1 + 1712);
            free(v18);
            v19 = v91;
            *(_DWORD *)(a1 + 672) = v11;
            snprintf((char *)(a1 + 1712), 0x41u, "%s", v19);
            v86 = strlen((const char *)ptr) >> 1;
            v81 = (const char *)(a1 + 1780);
            v85 = strlen(s) >> 1;
            snprintf((char *)(a1 + 1780), 9u, "%s", v90);
            v80 = (const char *)(a1 + 1792);
            snprintf((char *)(a1 + 1792), 9u, "%s", v89);
            v79 = (const char *)(a1 + 1804);
            v20 = 0;
            snprintf((char *)(a1 + 1804), 9u, "%s", v88);
            *(_BYTE *)(a1 + 680) = v13;
            v21 = *(double *)(a1 + 1816);
            v22 = v86;
            if ( v21 > 0.0 )
              *(double *)(a1 + 1824) = v21;
            v23 = *(_DWORD *)(a1 + 632);
            v24 = v22 + *(_DWORD *)(a1 + 1564);
            v25 = v85;
            *(_DWORD *)(a1 + 1576) = v24;
            v78 = v25 + v23 + v24;
            *(_DWORD *)(a1 + 1572) = v78;
            while ( *(_DWORD *)(a1 + 1708) > v20 )
            {
              v26 = *(void **)(*(_DWORD *)(a1 + 676) + 4 * v20++);
              free(v26);
            }
            if ( v8 )
            {
              v66 = sub_22AD4(*(void **)(a1 + 676), 4 * v8 + 1, "util.c", "parse_notify", 2001);
              v74 = "util.c";
              v67 = 0;
              *(_DWORD *)(a1 + 676) = v66;
              v84 = &byte_73398;
              v73 = &byte_68BD5;
              v83 = v11;
              do
              {
                v75 = 4 * v67;
                if ( v67 >= v8 )
                {
                  v11 = v83;
                  *(_DWORD *)(a1 + 1708) = v8;
                  if ( v8 > 1 )
                    goto LABEL_58;
                  goto LABEL_57;
                }
                v68 = (unsigned __int8 *)sub_22520(v5, v67);
                v69 = *(_DWORD *)(a1 + 676);
                v70 = sub_229BC(0x20u, v74, "parse_notify", 2006);
                v71 = v84;
                *(_DWORD *)(v69 + 4 * v67) = v70;
                if ( *v71 && *v73 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
                {
                  snprintf((char *)v95, 0x800u, "merkle %d: %s", v67, v68);
                  sub_20F58(7, (const char *)v95, 0);
                }
                ++v67;
                v6 = sub_22CD8(*(_BYTE **)(*(_DWORD *)(a1 + 676) + v75), v68, 32);
                free(v68);
              }
              while ( v6 );
              v11 = v83;
              if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
              {
                v51 = "Failed to convert merkle to merkle_bin in parse_notify";
                goto LABEL_129;
              }
              goto LABEL_120;
            }
            *(_DWORD *)(a1 + 1708) = 0;
            v84 = &byte_73398;
LABEL_57:
            ++*(_QWORD *)(a1 + 376);
LABEL_58:
            if ( v87 )
              *(_QWORD *)(a1 + 624) = 0;
            snprintf(
              v94,
              0xE1u,
              "%s%s%s%s%s%s%s",
              v81,
              v82,
              "0000000000000000000000000000000000000000000000000000000000000000",
              v79,
              v80,
              "00000000",
              off_687EC);
            v6 = sub_22CD8((_BYTE *)(a1 + 1580), (unsigned __int8 *)v94, 112);
            if ( v6 )
            {
              v6 = sub_22CD8(v72, (unsigned __int8 *)ptr, v86);
              if ( v6 )
              {
                v6 = sub_22CD8(v72, (unsigned __int8 *)s, v85);
                if ( v6 )
                {
                  free(*(void **)(a1 + 1568));
                  v27 = sub_22A44(v78, 1u, "util.c", "parse_notify", 2063);
                  *(_DWORD *)(a1 + 1568) = v27;
                  sub_254E8(v27, v72, v86, (int)"util.c", (int)"parse_notify", 2064);
                  v28 = *(_DWORD *)(a1 + 1564);
                  if ( v28 )
                  {
                    sub_254E8(
                      (void *)(*(_DWORD *)(a1 + 1568) + v86),
                      *(const void **)(a1 + 616),
                      v28,
                      (int)"util.c",
                      (int)"parse_notify",
                      2066);
                    v28 = *(_DWORD *)(a1 + 1564);
                  }
                  sub_254E8(
                    (void *)(*(_DWORD *)(a1 + 1568) + v28 + *(_DWORD *)(a1 + 632) + v86),
                    v72,
                    v85,
                    (int)"util.c",
                    (int)"parse_notify",
                    2067);
                  v29 = (unsigned __int8)byte_68BD5;
                  if ( byte_68BD5 )
                  {
                    v49 = sub_22C24(*(_DWORD *)(a1 + 1568), *(_DWORD *)(a1 + 1572));
                    v50 = (char *)v49;
                    if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
                    {
                      snprintf((char *)v95, 0x800u, "Pool %d coinbase %s", *(_DWORD *)a1, v49);
                      sub_20F58(7, (const char *)v95, 0);
                    }
                    v6 = v29;
                    free(v50);
                  }
                  goto LABEL_66;
                }
                if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
                {
                  v34 = (int *)&unk_4DD34;
LABEL_113:
                  v35 = *v34;
                  v36 = v34[1];
                  v37 = v34[2];
                  v38 = v34[3];
                  v39 = v34 + 4;
                  v95[0] = v35;
                  v95[1] = v36;
                  v95[2] = v37;
                  v95[3] = v38;
                  v40 = *v39;
                  v41 = v39[1];
                  v42 = v39[2];
                  v43 = v39[3];
                  v39 += 4;
                  v95[4] = v40;
                  v95[5] = v41;
                  v95[6] = v42;
                  v95[7] = v43;
                  v44 = *v39;
                  v45 = v39[1];
                  v46 = v39[2];
                  v47 = v39[3];
                  v48 = v39[4];
                  v95[8] = v44;
                  v95[9] = v45;
                  v95[10] = v46;
                  v95[11] = v47;
                  LOBYTE(v95[12]) = v48;
                  sub_20F58(3, (const char *)v95, 0);
                  goto LABEL_66;
                }
              }
              else if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
              {
                v34 = (int *)&unk_4DD00;
                goto LABEL_113;
              }
LABEL_120:
              v6 = 0;
              goto LABEL_66;
            }
            if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 2 )
              goto LABEL_120;
            v51 = "Failed to convert header to header_bin in parse_notify";
LABEL_129:
            v52 = *(_DWORD *)v51;
            v53 = *((_DWORD *)v51 + 1);
            v54 = *((_DWORD *)v51 + 2);
            v55 = *((_DWORD *)v51 + 3);
            v56 = (int *)(v51 + 16);
            v95[0] = v52;
            v95[1] = v53;
            v95[2] = v54;
            v95[3] = v55;
            v57 = *v56;
            v58 = v56[1];
            v59 = v56[2];
            v60 = v56[3];
            v56 += 4;
            v95[4] = v57;
            v95[5] = v58;
            v95[6] = v59;
            v95[7] = v60;
            v61 = *v56;
            v62 = v56[1];
            v63 = v56[2];
            v64 = v56[3];
            v56 += 4;
            v95[8] = v61;
            v95[9] = v62;
            v95[10] = v63;
            v95[11] = v64;
            v65 = v56[1];
            v95[12] = *v56;
            LOWORD(v95[13]) = v65;
            BYTE2(v95[13]) = BYTE2(v65);
            sub_20F58(3, (const char *)v95, 0);
LABEL_66:
            sub_2276C(v76, "parse_notify", 2076);
            sub_227E8(v77, "parse_notify", 2076);
            off_67ED8();
            if ( !*v84 )
              goto LABEL_106;
            if ( !byte_68BD5 )
              goto LABEL_84;
            if ( byte_74500 || byte_68BD4 || dword_67DB4 > 6 )
            {
              snprintf((char *)v95, 0x800u, "job_id: %s", v11);
              sub_20F58(7, (const char *)v95, 0);
              if ( byte_68BD5 )
              {
                if ( !byte_74500 )
                  goto LABEL_73;
LABEL_75:
                snprintf((char *)v95, 0x800u, "prev_hash: %s", v91);
                sub_20F58(7, (const char *)v95, 0);
                if ( byte_68BD5 )
                {
                  if ( !byte_74500 )
                    goto LABEL_77;
                  goto LABEL_79;
                }
LABEL_94:
                if ( byte_68BD5 )
                {
                  if ( !byte_74500 )
                    goto LABEL_96;
LABEL_98:
                  snprintf((char *)v95, 0x800u, "ntime: %s", v88);
                  sub_20F58(7, (const char *)v95, 0);
LABEL_99:
                  if ( byte_68BD5 )
                  {
                    if ( !byte_74500 )
                      goto LABEL_101;
                    goto LABEL_103;
                  }
                }
                goto LABEL_106;
              }
LABEL_89:
              if ( !byte_68BD5 )
                goto LABEL_106;
              if ( !byte_74500 )
              {
LABEL_91:
                if ( !byte_68BD4 && dword_67DB4 <= 6 )
                {
LABEL_96:
                  if ( byte_68BD4 || dword_67DB4 > 6 )
                    goto LABEL_98;
LABEL_101:
                  if ( byte_68BD4 || dword_67DB4 > 6 )
                  {
LABEL_103:
                    v30 = (int *)"yes";
                    if ( !v87 )
                      v30 = &dword_4B184;
                    snprintf((char *)v95, 0x800u, "clean: %s", v30);
                    sub_20F58(7, (const char *)v95, 0);
                  }
LABEL_106:
                  free(ptr);
                  free(s);
                  v31 = dword_755E8;
                  v32 = dword_755EC;
                  v33 = *(_DWORD *)(a1 + 116) + 1;
                  *(_DWORD *)(a1 + 116) = v33;
                  *(_QWORD *)&dword_755E8 = __PAIR64__(v32, v31) + 1;
                  if ( a1 == sub_31FF4(v33) )
                    byte_767F0 = 1;
                  return v6;
                }
              }
              snprintf((char *)v95, 0x800u, "nbit: %s", v89);
              sub_20F58(7, (const char *)v95, 0);
              goto LABEL_94;
            }
LABEL_73:
            if ( byte_68BD4 || dword_67DB4 > 6 )
              goto LABEL_75;
LABEL_77:
            if ( byte_68BD4 || dword_67DB4 > 6 )
            {
LABEL_79:
              snprintf((char *)v95, 0x800u, "coinbase1: %s", (const char *)ptr);
              sub_20F58(7, (const char *)v95, 0);
              if ( !byte_68BD5 )
                goto LABEL_99;
              if ( !byte_74500 )
                goto LABEL_81;
LABEL_83:
              snprintf((char *)v95, 0x800u, "coinbase2: %s", s);
              sub_20F58(7, (const char *)v95, 0);
LABEL_84:
              if ( !byte_68BD5 )
                goto LABEL_106;
              if ( !byte_74500 )
              {
LABEL_86:
                if ( !byte_68BD4 && dword_67DB4 <= 6 )
                  goto LABEL_91;
              }
              snprintf((char *)v95, 0x800u, "bbversion: %s", v90);
              sub_20F58(7, (const char *)v95, 0);
              goto LABEL_89;
            }
LABEL_81:
            if ( byte_68BD4 || dword_67DB4 > 6 )
              goto LABEL_83;
            goto LABEL_86;
          }
        }
        if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
        {
          snprintf(
            (char *)v95,
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
      if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 2 )
      {
LABEL_34:
        free(v11);
        free(ptr);
        free(s);
        return v6;
      }
      snprintf(
        (char *)v95,
        0x800u,
        "Zero length string passed to valid_ascii from in %s %s():%d",
        "util.c",
        "parse_notify",
        1969);
    }
    else
    {
      if ( !byte_74500 && !byte_68BD4 && dword_67DB4 <= 2 )
        goto LABEL_34;
      snprintf(
        (char *)v95,
        0x800u,
        "Null string passed to valid_ascii from in %s %s():%d",
        "util.c",
        "parse_notify",
        1969);
    }
LABEL_33:
    sub_20F58(3, (const char *)v95, 0);
    goto LABEL_34;
  }
  v9 = 0;
  v6 = 0;
  while ( 1 )
  {
    memset(v94, 0, 0x20u);
    v10 = (unsigned __int8 *)sub_22520(v5, v9);
    if ( !v10 )
      return v6;
    v6 = sub_22CD8(v94, v10, 32);
    if ( !v6 )
    {
      if ( (byte_74500 || byte_68BD4 || dword_67DB4 > 2)
        && ((snprintf((char *)v95, 0x800u, "merkle %d: %s", v9, (const char *)v10),
             sub_20F58(3, (const char *)v95, 0),
             byte_74500)
         || byte_68BD4)
        || dword_67DB4 > 2 )
      {
        strcpy((char *)v95, "Failed to convert merkle to merkle_bin in parse_notify");
        sub_20F58(3, (const char *)v95, 0);
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
