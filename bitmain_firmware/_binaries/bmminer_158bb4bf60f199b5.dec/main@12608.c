int __fastcall main(int a1, const char **a2, char **a3)
{
  const char *v4; // r8
  FILE *v5; // r6
  char *v6; // r11
  size_t v7; // r0
  FILE *v8; // r0
  size_t v9; // r5
  int v10; // r6
  size_t v11; // r4
  unsigned __int8 *v12; // r7
  const unsigned __int16 **v13; // r0
  int v14; // t1
  int v15; // r3
  void *v16; // r4
  _DWORD *v17; // r5
  _DWORD *v18; // r0
  int v19; // r0
  int v20; // r4
  int v21; // r0
  int v22; // r0
  int v23; // r4
  int v24; // r2
  int v25; // r9
  __int64 v26; // r10
  __int64 v27; // r6
  int v28; // r3
  int *v29; // r8
  int *v30; // r7
  int v31; // r1
  int v32; // r0
  int v33; // r9
  double v34; // r10
  __int64 v35; // r8
  int v36; // r1
  int v37; // r0
  unsigned __int64 v38; // r2
  double v39; // r10
  __int64 v40; // r8
  int v41; // r1
  int v42; // r0
  unsigned __int64 v43; // r2
  int v44; // r1
  __int64 v45; // r2
  __int64 v46; // r2
  int v47; // r1
  int v48; // r1
  char *v49; // r2
  int *v50; // r1
  unsigned int v51; // t1
  unsigned __int64 v52; // r2
  int *v53; // r3
  int v55; // r1
  int v56; // r9
  int v57; // r0
  __int64 v58; // r0
  int *v60; // r0
  int *v61; // r0
  int *v62; // r0
  int *v63; // r0
  char *v65; // [sp+1Ch] [bp-9C8h]
  int v66; // [sp+24h] [bp-9C0h]
  unsigned int v67; // [sp+28h] [bp-9BCh]
  int v68; // [sp+28h] [bp-9BCh]
  __int64 v69; // [sp+30h] [bp-9B4h]
  int v70; // [sp+38h] [bp-9ACh]
  __int64 v71; // [sp+48h] [bp-99Ch]
  int v72; // [sp+5Ch] [bp-988h] BYREF
  _DWORD v73[6]; // [sp+60h] [bp-984h] BYREF
  unsigned int v74; // [sp+78h] [bp-96Ch]
  int v75; // [sp+7Ch] [bp-968h] BYREF
  char dest[32]; // [sp+80h] [bp-964h] BYREF
  _BYTE command[64]; // [sp+A0h] [bp-944h] BYREF
  _QWORD s[32]; // [sp+E0h] [bp-904h] BYREF
  char v79[2048]; // [sp+1E0h] [bp-804h] BYREF

  v4 = *a2;
  memset(s, 0, sizeof(s));
  memset(command, 0, sizeof(command));
  snprintf(command, 0x40u, "pidof %s", v4);
  v5 = popen(command, "r");
  if ( !v5 )
  {
    if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
    {
      v6 = v79;
      snprintf(v79, 0x800u, " app-service:%s Not Found!!!", v4);
      sub_47AB4(7, v79, 0);
    }
    else
    {
      v6 = v79;
    }
    goto LABEL_31;
  }
  v6 = v79;
  while ( fgets((char *)s, 256, v5) )
  {
    if ( byte_1AECC5 )
    {
      if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
      {
        snprintf(v79, 0x800u, "pidof %s command result is: %s\n", v4, (const char *)s);
        sub_47AB4(7, v79, 0);
        if ( byte_1AECC5 )
        {
          if ( byte_244080 )
            goto LABEL_12;
          goto LABEL_10;
        }
      }
      else
      {
LABEL_10:
        if ( byte_1AECC4 || dword_9E320 > 6 )
        {
LABEL_12:
          v7 = strlen((const char *)s);
          snprintf(v79, 0x800u, "strlen is: %d\n", v7);
          sub_47AB4(7, v79, 0);
        }
      }
    }
  }
  v8 = v5;
  v9 = 0;
  v10 = 0;
  pclose(v8);
  v11 = 1;
  v12 = (unsigned __int8 *)s;
  while ( strlen((const char *)s) >= v11 )
  {
    memset(dest, 0, sizeof(dest));
    v13 = _ctype_b_loc();
    v14 = *v12++;
    if ( ((*v13)[v14] & 0x2000) != 0 )
    {
      strncpy(dest, (const char *)s + v9, v11 - v9 - 1);
      v15 = strtol(dest, 0, 10);
      if ( v15 > 0 && (++v10, byte_1AECC5) && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
      {
        v9 = v11;
        snprintf(v79, 0x800u, "Parsed proc id is: %d\n", v15);
        sub_47AB4(7, v79, 0);
      }
      else
      {
        v9 = v11;
      }
    }
    ++v11;
  }
  if ( v10 )
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
    {
      snprintf(v79, 0x800u, " %d instance of %s is  already Running on this machine", v10, v4);
      sub_47AB4(3, v79, 0);
    }
    if ( v10 != 1 )
    {
      snprintf(v79, 0x800u, "%s is forbidden to start twice, will exit immediately!", *a2);
      sub_47AB4(3, v79, 1);
      sub_62EC0(-1);
    }
  }
LABEL_31:
  v16 = calloc(1u, 0x1798u);
  dword_241D64 = (int)v16;
  v17 = calloc(1u, 0x188u);
  dword_241D5C = (int)v17;
  v18 = calloc(1u, 0x40u);
  v18[9] = v17;
  v17[5] = v16;
  dword_241D58 = (int)v18;
  v19 = sub_26D84(a1, a2);
  sub_25FA8(v19);
  v20 = *(_DWORD *)(*(_DWORD *)(dword_241D58 + 36) + 20);
  if ( pthread_mutex_init((pthread_mutex_t *)(v20 + 420), 0) )
    sub_25B64(309);
  sub_25BC4(v20, 310);
  sub_25BC4(v20 + 692, 311);
  sub_25BC4(v20 + 2540, 312);
  sub_25BC4(v20 + 4388, 313);
  memset(v79, 0, 0x20u);
  *(_WORD *)&v79[2] = 26;
  v79[4] = ~(~((v79[4] & 0xFD | (2 * (byte_1B0B1A & 1u))) << 30) >> 30);
  v79[0] = 81;
  v79[5] = v79[5] & 0xF0 | 7 | (8 * (byte_1B0B18 & 1));
  *(_WORD *)&v79[8] = 13833;
  v79[10] = dword_1B0B1C;
  *(_WORD *)&v79[12] = dword_9EE44;
  *(_WORD *)&v79[14] = dword_9EE40;
  v79[11] = 80;
  *(_WORD *)&v79[16] = 2570;
  *(_WORD *)&v79[26] = 400;
  v79[24] = 4;
  *(_WORD *)&v79[28] = 600;
  *(_WORD *)&v79[30] = sub_514F8(v79, 30);
  if ( !sub_25098(
          *(_DWORD *)v79,
          *(_DWORD *)&v79[4],
          *(_DWORD *)&v79[8],
          *(_DWORD *)&v79[12],
          *(_DWORD *)&v79[16],
          *(_DWORD *)&v79[20],
          *(_DWORD *)&v79[24],
          *(_DWORD *)&v79[28]) )
    sub_226C0(3, "soc init failed!");
  v21 = sub_226C0(0, 0);
  if ( sub_25A5C(v21) )
    sub_226C0(3, "socket init failed!");
  sub_226C0(1, 0);
  dword_241D60 = (int)calloc(1u, 0x40u);
  pthread_attr_init((pthread_attr_t *)command);
  pthread_attr_setstacksize((pthread_attr_t *)command, 0x200000u);
  if ( sub_4BDCC(dword_241D60, command, sub_26C30) && (byte_244080 || byte_1AECC4 || dword_9E320 > 2) )
  {
    snprintf(v79, 0x800u, "%s: create thread for get api status failed\n", "main");
    sub_47AB4(3, v79, 0);
  }
  v22 = pthread_detach(*(_DWORD *)(dword_241D60 + 12));
  sub_23D44(v22);
  while ( 2 )
  {
    v65 = v6;
LABEL_43:
    if ( !*(_BYTE *)(dword_241D5C + 364) )
    {
      v70 = dword_241D58;
      v23 = *(_DWORD *)(*(_DWORD *)(dword_241D58 + 36) + 20);
      pthread_mutex_lock(&stru_138564);
      if ( pthread_mutex_lock((pthread_mutex_t *)v23) )
      {
        v61 = _errno_location();
        snprintf(
          v65,
          0x800u,
          "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
          *v61,
          "bmminer.c",
          "bitmain_c5_scanhash",
          440);
        sub_47AB4(3, v65, 1);
        sub_62EC0(1);
      }
      if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(v23 + 24)) )
      {
        v63 = _errno_location();
        snprintf(
          v65,
          0x800u,
          "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
          *v63,
          "bmminer.c",
          "bitmain_c5_scanhash",
          440);
        sub_47AB4(3, v65, 1);
        sub_62EC0(1);
      }
      if ( pthread_mutex_unlock((pthread_mutex_t *)v23) )
      {
        v62 = _errno_location();
        snprintf(
          v65,
          0x800u,
          "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
          *v62,
          "bmminer.c",
          "bitmain_c5_scanhash",
          440);
        sub_47AB4(3, v65, 1);
        sub_62EC0(1);
      }
      v69 = 0;
LABEL_48:
      if ( !dword_23A2B8 )
      {
LABEL_77:
        qword_241D50 += v69;
        if ( pthread_rwlock_unlock((pthread_rwlock_t *)(v23 + 24)) )
        {
          v60 = _errno_location();
          snprintf(
            v65,
            0x800u,
            "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
            *v60,
            "bmminer.c",
            "bitmain_c5_scanhash",
            533);
          sub_47AB4(3, v65, 1);
          sub_62EC0(1);
        }
        off_9E444();
        pthread_mutex_unlock(&stru_138564);
        sub_4A804(1);
        if ( v69 )
        {
          v71 = 0xFFFFFFFFLL * v69;
          if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
          {
            snprintf(v65, 0x800u, "%s: hashes %llu ...\n", "bitmain_c5_scanhash", v71);
            sub_47AB4(7, v65, 0);
          }
          if ( v71 )
          {
            v6 = v65;
            qword_138600 += v71;
            continue;
          }
        }
        goto LABEL_43;
      }
      while ( 2 )
      {
        v24 = 0;
        LODWORD(v27) = dword_23A2B0[15 * dword_23A2B4 + 8];
        v25 = dword_23A2B0[15 * dword_23A2B4 + 3];
        v26 = *(_QWORD *)&dword_23A2B0[15 * dword_23A2B4 + 6];
        v66 = dword_23A2B0[15 * dword_23A2B4 + 9];
        HIDWORD(v27) = dword_23A2B0[15 * dword_23A2B4 + 4];
        v67 = (dword_23A2B0[15 * dword_23A2B4 + 5] << 24)
            | HIBYTE(dword_23A2B0[15 * dword_23A2B4 + 5])
            | ((unsigned int)dword_23A2B0[15 * dword_23A2B4 + 5] >> 8) & 0xFF00
            | (dword_23A2B0[15 * dword_23A2B4 + 5] << 8) & 0xFF0000;
        do
          ++v24;
        while ( v24 != 32 );
        if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
        {
          snprintf(
            v65,
            0x800u,
            "%s: job_id:0x%x   work_id:0x%x   nonce2:0x%llx nonce3:0x%x   version:0x%x\n",
            "bitmain_c5_scanhash",
            v25,
            HIDWORD(v27),
            v26,
            (_DWORD)v27,
            v67);
          sub_47AB4(7, v65, 0);
        }
        if ( (unsigned int)dword_23A2B4 > 0x1FD )
          v28 = 0;
        else
          v28 = dword_23A2B4;
        v29 = (int *)(v23 + 480);
        if ( (unsigned int)dword_23A2B4 <= 0x1FD )
          ++v28;
        dword_23A2B4 = v28;
        --dword_23A2B8;
        if ( v27 == qword_138608 )
        {
          if ( *(_DWORD *)(dword_A0D68 + 4 * v66 + 4) == 1 )
          {
            if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
            {
              strcpy(v65, "reepat nonce error");
              sub_47AB4(3, v65, 0);
            }
            sub_593C8(v70);
            ++*(_DWORD *)(dword_A0D68 + 4 * v66 + 1206);
          }
          goto LABEL_48;
        }
        qword_138608 = v27;
        if ( !byte_1AECC5 )
        {
          v30 = &dword_9C550;
          goto LABEL_87;
        }
        if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
        {
          snprintf(v65, 0x800u, "%s: Chain ID J%d ...\n", "bitmain_c5_scanhash", v66 + 1);
          LOWORD(v30) = (unsigned __int16)&dword_9C550;
          sub_47AB4(7, v65, 0);
          if ( byte_1AECC5 )
          {
            HIWORD(v30) = (unsigned int)&dword_9C550 >> 16;
            v31 = *v30;
            v32 = *v30 - v25;
            if ( !byte_244080 )
              goto LABEL_68;
            goto LABEL_86;
          }
          HIWORD(v30) = (unsigned int)&dword_9C550 >> 16;
        }
        else
        {
          v30 = &dword_9C550;
          v31 = dword_9C550;
          v32 = dword_9C550 - v25;
LABEL_68:
          if ( !byte_1AECC4 && dword_9E320 <= 6 )
          {
            switch ( v32 )
            {
              case 1:
                goto LABEL_146;
              case 0:
                goto LABEL_91;
              case 2:
LABEL_90:
                v29 = (int *)(v23 + 4176);
                goto LABEL_91;
            }
            goto LABEL_73;
          }
LABEL_86:
          snprintf(v65, 0x800u, "%s: given_id:%d job_id:%d switch:%d  ...\n", "bitmain_c5_scanhash", v31, v25, v32);
          sub_47AB4(7, v65, 0);
        }
LABEL_87:
        v33 = *v30 - v25;
        switch ( v33 )
        {
          case 1:
LABEL_146:
            v29 = (int *)(v23 + 2328);
LABEL_91:
            sub_5AFA8(v70, &v72, v29, v29, v26, HIDWORD(v26), v67);
            HIDWORD(v27) = v72;
            v34 = *(double *)(v72 + 312);
            v68 = *v29;
            v35 = sub_77970(*(_DWORD *)(v72 + 312), *(_DWORD *)(v72 + 316));
            if ( v35 != qword_138610 )
            {
              v36 = 0;
              qword_138610 = v35;
              v37 = 0;
              if ( v35 )
              {
                v38 = v35;
                while ( 1 )
                {
                  v38 >>= 1;
                  if ( !v38 )
                    break;
                  v37 = (__PAIR64__(v37, v36++) + 1) >> 32;
                }
              }
              else
              {
                v36 = -1;
                v37 = -1;
              }
              LODWORD(qword_138618) = v36;
              HIDWORD(qword_138618) = v37;
              if ( byte_1AECC5 )
              {
                if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
                {
                  snprintf(
                    v65,
                    0x800u,
                    "%s: pool_diff:%lld work_diff:%f pool_diff_bit:%lld ...\n",
                    "hashtest_submit",
                    v35,
                    v34,
                    __PAIR64__(v37, v36));
                  sub_47AB4(7, v65, 0);
                }
              }
            }
            v39 = dbl_9ED90;
            v40 = sub_77970(LODWORD(dbl_9ED90), HIDWORD(dbl_9ED90));
            if ( v40 != *(_QWORD *)&dword_138620 )
            {
              v41 = 0;
              *(_QWORD *)&dword_138620 = v40;
              v42 = 0;
              if ( v40 )
              {
                v43 = v40;
                while ( 1 )
                {
                  v43 >>= 1;
                  if ( !v43 )
                    break;
                  v42 = (__PAIR64__(v42, v41++) + 1) >> 32;
                }
              }
              else
              {
                v41 = -1;
                v42 = -1;
              }
              dword_138628 = v41;
              dword_13862C = v42;
              if ( byte_1AECC5 )
              {
                if ( byte_244080 || byte_1AECC4 || dword_9E320 > 6 )
                {
                  snprintf(
                    v65,
                    0x800u,
                    "%s:net_diff:%lld current_diff:%f net_diff_bit %lld ...\n",
                    "hashtest_submit",
                    v40,
                    v39,
                    __PAIR64__(v42, v41));
                  sub_47AB4(7, v65, 0);
                }
              }
            }
            v44 = *(_DWORD *)(HIDWORD(v27) + 132);
            v45 = *(_QWORD *)(HIDWORD(v27) + 136);
            LODWORD(s[1]) = *(_DWORD *)(HIDWORD(v27) + 128);
            HIDWORD(s[1]) = v44;
            s[2] = v45;
            v46 = *(_QWORD *)(HIDWORD(v27) + 152);
            v47 = *(_DWORD *)(HIDWORD(v27) + 148);
            LODWORD(s[3]) = *(_DWORD *)(HIDWORD(v27) + 144);
            HIDWORD(s[3]) = v47;
            s[4] = v46;
            s[0] = 80;
            v48 = *(_DWORD *)(HIDWORD(v27) + 68);
            LODWORD(v46) = *(_DWORD *)(HIDWORD(v27) + 72);
            v73[0] = *(_DWORD *)(HIDWORD(v27) + 64);
            v73[1] = v48;
            v73[2] = v46;
            sub_5162C(&s[5], v73, 12);
            v73[0] = v27;
            sub_5162C((char *)&s[6] + 4, v73, 4);
            sub_1E58C(s, v73);
            memset(s, 0, 0xE8u);
            sub_1E740(v73, 32, dest);
            v49 = (char *)&v75;
            v50 = &v72;
            do
            {
              v51 = *((_DWORD *)v49 + 1);
              v49 += 4;
              v50[1] = bswap32(v51);
              ++v50;
            }
            while ( &dest[28] != v49 );
            LODWORD(v52) = v75;
            if ( v75 )
            {
              if ( *(_DWORD *)(dword_A0D68 + 4 * v66 + 4) == 1 )
              {
                if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
                {
                  strcpy(v65, "hash2_32 error");
                  sub_47AB4(3, v65, 0);
                }
                sub_593C8(v70);
                ++*(_DWORD *)(dword_A0D68 + 4 * v66 + 1206);
              }
              if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
              {
                snprintf(v65, 0x800u, "%s: HASH2_32[7] != 0", "hashtest_submit");
                sub_47AB4(7, v65, 0);
              }
            }
            else
            {
              v53 = &v75;
              while ( !*--v53 )
              {
                LODWORD(v52) = v52 + 1;
                if ( (_DWORD)v52 == 7 )
                {
                  v52 = 7;
                  goto LABEL_129;
                }
              }
              v52 = (int)v52;
LABEL_129:
              if ( (unsigned __int64)qword_138618 >> 5 <= v52 )
              {
                v55 = *(unsigned __int8 *)(dword_A0D68 + 12954);
                if ( !*(_BYTE *)(dword_A0D68 + 12954) )
                  v55 = 3;
                v56 = sub_75CF4(v27, v55, v52);
                v57 = sub_75CEC(v27);
                if ( byte_1AECC5 && (byte_244080 || byte_1AECC4 || dword_9E320 > 6) )
                {
                  snprintf(
                    v65,
                    0x800u,
                    "%s: chain %d which_asic_nonce %d which_core_nonce %d",
                    "hashtest_submit",
                    v66,
                    v56,
                    v57);
                  sub_47AB4(7, v65, 0);
                }
                v58 = qword_138618;
                ++*(_QWORD *)(dword_A0D68 + 8 * (v56 + 78 * v66) + 1270);
                if ( bswap32(*(&v74 - (v58 >> 5))) < 0xFFFFFFFF >> (v58 & 0x1F) )
                {
                  qword_241A80[v66] += 256LL;
                  sub_25DA0(v70, HIDWORD(v27), v27, (unsigned __int8)v68);
                  v69 += 256;
                }
                else if ( bswap32(v74) <= 0xFFFFFE )
                {
                  qword_241A80[v66] += 256LL;
                  v69 += 256;
                }
              }
            }
            sub_53084(&v72, "bmminer.c", "bitmain_c5_scanhash", 530);
            goto LABEL_48;
          case 0:
            goto LABEL_91;
          case 2:
            goto LABEL_90;
        }
        if ( byte_244080 || byte_1AECC4 )
        {
LABEL_74:
          snprintf(v65, 0x800u, "%s: job_id non't found ...\n", "bitmain_c5_scanhash");
          sub_47AB4(3, v65, 0);
        }
        else
        {
LABEL_73:
          if ( dword_9E320 > 2 )
            goto LABEL_74;
        }
        if ( *(_DWORD *)(dword_A0D68 + 4 * v66 + 4) != 1 )
          goto LABEL_48;
        sub_593C8(v70);
        ++*(_DWORD *)(dword_A0D68 + 4 * v66 + 1206);
        if ( !dword_23A2B8 )
          goto LABEL_77;
        continue;
      }
    }
    return 0;
  }
}
