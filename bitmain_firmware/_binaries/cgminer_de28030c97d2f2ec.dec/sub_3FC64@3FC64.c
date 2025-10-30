int __fastcall sub_3FC64(pthread_mutex_t *a1)
{
  pthread_t v1; // r0
  int v2; // r2
  const char *count; // r6
  const char *v4; // r4
  const char *v5; // r5
  unsigned int v6; // r7
  unsigned int v7; // r0
  size_t v8; // r0
  _DWORD *v9; // r4
  void **v10; // r4
  int v11; // r0
  int v12; // r3
  bool v13; // r3
  char v15[1024]; // [sp+24h] [bp-CB0h] BYREF
  char v16[2048]; // [sp+424h] [bp-8B0h] BYREF
  unsigned int v17; // [sp+C24h] [bp-B0h] BYREF
  char *v18; // [sp+C28h] [bp-ACh] BYREF
  __int64 v19; // [sp+C2Ch] [bp-A8h] BYREF
  int v20; // [sp+C34h] [bp-A0h] BYREF
  char v21[20]; // [sp+C38h] [bp-9Ch] BYREF
  char v22[12]; // [sp+C4Ch] [bp-88h] BYREF
  char s[16]; // [sp+C58h] [bp-7Ch] BYREF
  int v24; // [sp+C68h] [bp-6Ch]
  _DWORD *v25; // [sp+C6Ch] [bp-68h]
  int v26; // [sp+C70h] [bp-64h]
  _DWORD *v27; // [sp+C74h] [bp-60h]
  void *v28; // [sp+C78h] [bp-5Ch]
  int v29; // [sp+C7Ch] [bp-58h]
  bool v30; // [sp+C83h] [bp-51h]
  char *v31; // [sp+C84h] [bp-50h]
  void *ptr; // [sp+C88h] [bp-4Ch]
  double *v33; // [sp+C8Ch] [bp-48h]
  pthread_mutex_t *v34; // [sp+C90h] [bp-44h]
  _DWORD *j; // [sp+C94h] [bp-40h]
  unsigned int i; // [sp+C98h] [bp-3Ch]
  char *v37; // [sp+C9Ch] [bp-38h]
  int v38; // [sp+CA0h] [bp-34h]
  unsigned int v39; // [sp+CA4h] [bp-30h]
  int v40; // [sp+CA8h] [bp-2Ch]
  unsigned int v41; // [sp+CACh] [bp-28h]
  char v42; // [sp+CB3h] [bp-21h]
  int v43; // [sp+CB4h] [bp-20h]
  double v44; // [sp+CB8h] [bp-1Ch]

  v34 = a1;
  v44 = 0.0;
  v43 = 0;
  v1 = pthread_self();
  pthread_detach(v1);
  snprintf(s, 0x10u, "%d/SStratum", v34->__lock);
  sub_2B968(s);
  v34[31].__lock = (int)sub_2154C();
  if ( !v34[31].__lock )
  {
    strcpy(v16, "Failed to create stratum_q in stratum_sthread");
    sub_1E4EC(3, v16, 1);
    sub_4BFB0(1);
  }
  if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
  {
    snprintf(
      v16,
      0x800u,
      "in %s , pool: %d, pool_url: %s, miner_name: %s",
      "stratum_sthread",
      v34->__lock,
      (const char *)v34[6].__spins,
      (const char *)v34[7].__count);
    sub_1E4EC(5, v16, 0);
  }
  while ( !v34[4].__size[9] )
  {
    v18 = (char *)sub_21870(v34[31].__lock, 0);
    if ( !v18 )
    {
      strcpy(v16, "Stratum q returned empty work");
      sub_1E4EC(3, v16, 1);
      sub_4BFB0(1);
    }
    if ( *((_DWORD *)v18 + 76) <= 8u )
    {
      v20 = *((_DWORD *)v18 + 19);
      v33 = (double *)&v19;
      v19 = *((_QWORD *)v18 + 37);
      if ( v20 == v43 && *(_QWORD *)v33 == *(_QWORD *)&v44 )
      {
        if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
        {
          snprintf(v16, 0x800u, "Filtering duplicate share to pool %d", v34->__lock);
          sub_1E4EC(6, v16, 0);
        }
        sub_31F40((void **)&v18, "cgminer.c", "stratum_sthread", 7737);
      }
      else if ( *((double *)v18 + 39) >= *((double *)&v34[76].__align + 1) )
      {
        v43 = v20;
        v44 = *v33;
        sub_2067C(v22, (int)&v20, 4);
        sub_2067C(v21, (int)&v19, *((_DWORD *)v18 + 76));
        ptr = sub_202D4(0x34u, 1u, "cgminer.c", "stratum_sthread", 7754);
        v31 = v18 + 192;
        v42 = 0;
        *((_DWORD *)ptr + 11) = time(0);
        *((_DWORD *)ptr + 9) = v18;
        memset(v15, 0, sizeof(v15));
        sub_2E354(&stru_88008, "cgminer.c", "stratum_sthread", 7763);
        v2 = dword_91F84++;
        *((_DWORD *)ptr + 10) = v2;
        sub_2E484(&stru_88008, "cgminer.c", "stratum_sthread", 7766);
        v17 = 0;
        sub_207E8(&v17, (unsigned __int8 *)&v34[74].__size[20], 4);
        if ( v34[27].__size[12] )
        {
          count = (const char *)v34[7].__count;
          v4 = (const char *)*((_DWORD *)v18 + 72);
          v5 = (const char *)*((_DWORD *)v18 + 77);
          v6 = sub_2DF70(*((_DWORD *)v18 + 111));
          v7 = sub_2DF70(v17);
          snprintf(
            v15,
            0x400u,
            "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\", \"%08x\"], \"id\": %d, \"method\": \"mining.submit\"}",
            count,
            v4,
            v21,
            v5,
            v22,
            ~v7 & v6,
            *((_DWORD *)ptr + 10));
        }
        else
        {
          snprintf(
            v15,
            0x400u,
            "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": %d, \"method\": \"mining.submit\"}",
            (const char *)v34[7].__count,
            *((const char **)v18 + 72),
            v21,
            *((const char **)v18 + 77),
            v22,
            *((_DWORD *)ptr + 10));
        }
        if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
        {
          snprintf(v16, 0x800u, "Submitting share %08lx to pool %d", *((_DWORD *)v31 + 6), v34->__lock);
          sub_1E4EC(6, v16, 0);
        }
        while ( time(0) < *((_DWORD *)ptr + 11) + 120 )
        {
          v8 = strlen(v15);
          if ( sub_22CF8(v34, v15, v8) )
          {
            sub_2E354(&stru_88008, "cgminer.c", "stratum_sthread", 7810);
            v37 = (char *)ptr + 40;
            v39 = -1640531527;
            v40 = -1640531527;
            v38 = 4;
            v41 = -17973517;
            v40 = (*((unsigned __int8 *)ptr + 43) << 24) - 1640531527;
            v40 += *((unsigned __int8 *)ptr + 42) << 16;
            v40 += *((unsigned __int8 *)ptr + 41) << 8;
            v40 += *((unsigned __int8 *)ptr + 40);
            v40 += 1640531527;
            v40 += 17973517;
            v40 ^= 0x7F76Du;
            v39 = (v40 << 8) ^ (-1622558010 - v40);
            v41 = -17973517 - v40 - v39;
            v41 ^= v39 >> 13;
            v40 -= v39;
            v40 -= v41;
            v40 ^= v41 >> 12;
            v39 -= v41;
            v39 -= v40;
            v39 ^= v40 << 16;
            v41 -= v40;
            v41 -= v39;
            v41 ^= v39 >> 5;
            v40 -= v39;
            v40 -= v41;
            v40 ^= v41 >> 3;
            v39 -= v41;
            v39 -= v40;
            v39 ^= v40 << 10;
            v41 -= v40;
            v41 -= v39;
            v41 ^= v39 >> 15;
            *((_DWORD *)ptr + 7) = v41;
            *((_DWORD *)ptr + 5) = (char *)ptr + 40;
            *((_DWORD *)ptr + 6) = 4;
            if ( dword_88134 )
            {
              *(_DWORD *)ptr = *(_DWORD *)dword_88134;
              *((_DWORD *)ptr + 2) = 0;
              *((_DWORD *)ptr + 1) = *(_DWORD *)(*(_DWORD *)dword_88134 + 16) - *(_DWORD *)(*(_DWORD *)dword_88134 + 20);
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)dword_88134 + 16) + 8) = ptr;
              *(_DWORD *)(*(_DWORD *)dword_88134 + 16) = ptr;
            }
            else
            {
              *((_DWORD *)ptr + 2) = 0;
              *((_DWORD *)ptr + 1) = 0;
              dword_88134 = (int)ptr;
              v9 = ptr;
              *v9 = malloc(0x2Cu);
              if ( !*(_DWORD *)dword_88134 )
                exit(-1);
              memset(*(void **)dword_88134, 0, 0x2Cu);
              *(_DWORD *)(*(_DWORD *)dword_88134 + 16) = dword_88134;
              *(_DWORD *)(*(_DWORD *)dword_88134 + 4) = 32;
              *(_DWORD *)(*(_DWORD *)dword_88134 + 8) = 5;
              *(_DWORD *)(*(_DWORD *)dword_88134 + 20) = 0;
              v10 = *(void ***)dword_88134;
              *v10 = malloc(0x180u);
              if ( !**(_DWORD **)dword_88134 )
                exit(-1);
              memset(**(void ***)dword_88134, 0, 0x180u);
              *(_DWORD *)(*(_DWORD *)dword_88134 + 40) = -1609490463;
            }
            ++*(_DWORD *)(*(_DWORD *)dword_88134 + 12);
            v29 = v41 & (*(_DWORD *)(*(_DWORD *)dword_88134 + 4) - 1);
            ++*(_DWORD *)(**(_DWORD **)dword_88134 + 12 * v29 + 4);
            *((_DWORD *)ptr + 4) = *(_DWORD *)(**(_DWORD **)dword_88134 + 12 * v29);
            *((_DWORD *)ptr + 3) = 0;
            if ( *(_DWORD *)(**(_DWORD **)dword_88134 + 12 * v29) )
              *(_DWORD *)(*(_DWORD *)(**(_DWORD **)dword_88134 + 12 * v29) + 12) = ptr;
            *(_DWORD *)(**(_DWORD **)dword_88134 + 12 * v29) = ptr;
            if ( *(_DWORD *)(**(_DWORD **)dword_88134 + 12 * v29 + 4) >= (unsigned int)(10
                                                                                      * (*(_DWORD *)(**(_DWORD **)dword_88134 + 12 * v29 + 8)
                                                                                       + 1))
              && *(_DWORD *)(*(_DWORD *)ptr + 36) != 1 )
            {
              v28 = malloc(24 * *(_DWORD *)(*(_DWORD *)ptr + 4));
              if ( !v28 )
                exit(-1);
              memset(v28, 0, 24 * *(_DWORD *)(*(_DWORD *)ptr + 4));
              *(_DWORD *)(*(_DWORD *)ptr + 24) = (*(_DWORD *)(*(_DWORD *)ptr + 12) >> (*(_DWORD *)(*(_DWORD *)ptr + 8)
                                                                                     + 1))
                                               + (((2 * *(_DWORD *)(*(_DWORD *)ptr + 4) - 1)
                                                 & *(_DWORD *)(*(_DWORD *)ptr + 12)) != 0);
              *(_DWORD *)(*(_DWORD *)ptr + 28) = 0;
              for ( i = 0; *(_DWORD *)(*(_DWORD *)ptr + 4) > i; ++i )
              {
                for ( j = *(_DWORD **)(**(_DWORD **)ptr + 12 * i); j; j = v27 )
                {
                  v27 = (_DWORD *)j[4];
                  v26 = (2 * *(_DWORD *)(*(_DWORD *)ptr + 4) - 1) & j[7];
                  v25 = (char *)v28 + 12 * v26;
                  if ( ++v25[1] > *(_DWORD *)(*(_DWORD *)ptr + 24) )
                  {
                    ++*(_DWORD *)(*(_DWORD *)ptr + 28);
                    v11 = sub_68648(v25[1], *(_DWORD *)(*(_DWORD *)ptr + 24));
                    v25[2] = v11;
                  }
                  j[3] = 0;
                  j[4] = *v25;
                  if ( *v25 )
                    *(_DWORD *)(*v25 + 12) = j;
                  *v25 = j;
                }
              }
              free(**(void ***)ptr);
              *(_DWORD *)(*(_DWORD *)ptr + 4) *= 2;
              ++*(_DWORD *)(*(_DWORD *)ptr + 8);
              **(_DWORD **)ptr = v28;
              if ( *(_DWORD *)(*(_DWORD *)ptr + 28) <= *(_DWORD *)(*(_DWORD *)ptr + 12) >> 1 )
                v12 = 0;
              else
                v12 = *(_DWORD *)(*(_DWORD *)ptr + 32) + 1;
              *(_DWORD *)(*(_DWORD *)ptr + 32) = v12;
              if ( *(_DWORD *)(*(_DWORD *)ptr + 32) > 1u )
                *(_DWORD *)(*(_DWORD *)ptr + 36) = 1;
            }
            ++v34[31].__count;
            sub_2E484(&stru_88008, "cgminer.c", "stratum_sthread", 7813);
            if ( sub_2F908((int)v34, (unsigned __int8 *)&v34[4]) && (byte_91F58 || byte_87769 || dword_8697C > 3) )
            {
              snprintf(v16, 0x800u, "Pool %d communication resumed, submitting work", v34->__lock);
              sub_1E4EC(4, v16, 0);
            }
            if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
            {
              strcpy(v16, "Successfully submitted, adding to stratum_shares db");
              sub_1E4EC(7, v16, 0);
            }
            v42 = 1;
            break;
          }
          if ( (unsigned __int8)sub_2F88C((int)v34, (unsigned __int8 *)&v34[4]) != 1 && sub_3F494((int)v34) )
          {
            if ( byte_91F58 || byte_87769 || dword_8697C > 3 )
            {
              snprintf(v16, 0x800u, "Pool %d stratum share submission failure", v34->__lock);
              sub_1E4EC(4, v16, 0);
            }
            ++dword_91F74;
            ++v34[5].__kind;
          }
          if ( byte_9414C )
          {
            if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
            {
              strcpy(v16, "Lowmem option prevents resubmitting stratum share");
              sub_1E4EC(7, v16, 0);
            }
            break;
          }
          sub_2E91C((int)&v34[8].__spins, "cgminer.c", "stratum_sthread", 7835);
          v13 = v34[26].__count && !strcmp(*((const char **)v18 + 80), (const char *)v34[26].__count);
          v30 = v13;
          sub_2EA38((int)&v34[8].__spins, "cgminer.c", "stratum_sthread", 7837);
          if ( !v30 )
          {
            if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
            {
              strcpy(v16, "No matching session id for resubmitting stratum share");
              sub_1E4EC(7, v16, 0);
            }
            break;
          }
          sleep(2u);
        }
        if ( v42 != 1 )
        {
          if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
          {
            strcpy(v16, "Failed to submit stratum share, discarding");
            sub_1E4EC(7, v16, 0);
          }
          sub_31F40((void **)&v18, "cgminer.c", "stratum_sthread", 7852);
          free(ptr);
          ++v34[5].__lock;
          ++*(_QWORD *)&dbl_95490;
        }
        else
        {
          *((_DWORD *)ptr + 12) = time(0);
          v24 = *((_DWORD *)ptr + 12) - *((_DWORD *)ptr + 11);
          if ( (byte_87768 || v24 > 0) && (byte_91F58 || byte_87769 || dword_8697C > 5) )
          {
            snprintf(v16, 0x800u, "Pool %d stratum share submission lag time %d seconds", v34->__lock, v24);
            sub_1E4EC(6, v16, 0);
          }
        }
      }
      else
      {
        if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
        {
          snprintf(v16, 0x800u, "Filtering high hash share to pool %d", v34->__lock);
          sub_1E4EC(6, v16, 0);
        }
        sub_31F40((void **)&v18, "cgminer.c", "stratum_sthread", 7745);
      }
    }
    else
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
      {
        snprintf(
          v16,
          0x800u,
          "Pool %d asking for inappropriately long nonce2 length %d",
          v34->__lock,
          *((_DWORD *)v18 + 76));
        sub_1E4EC(3, v16, 0);
      }
      if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
      {
        strcpy(v16, "Not attempting to submit shares");
        sub_1E4EC(3, v16, 0);
      }
      sub_31F40((void **)&v18, "cgminer.c", "stratum_sthread", 7725);
    }
  }
  sub_21714(v34[31].__lock);
  return 0;
}
